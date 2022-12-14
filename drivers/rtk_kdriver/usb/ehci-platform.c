/*
 * Generic platform ehci driver
 *
 * Copyright 2007 Steven Brown <sbrown@cortland.com>
 * Copyright 2010-2012 Hauke Mehrtens <hauke@hauke-m.de>
 * Copyright 2014 Hans de Goede <hdegoede@redhat.com>
 *
 * Derived from the ohci-ssb driver
 * Copyright 2007 Michael Buesch <m@bues.ch>
 *
 * Derived from the EHCI-PCI driver
 * Copyright (c) 2000-2004 by David Brownell
 *
 * Derived from the ohci-pci driver
 * Copyright 1999 Roman Weissgaerber
 * Copyright 2000-2002 David Brownell
 * Copyright 1999 Linus Torvalds
 * Copyright 1999 Gregory P. Smith
 *
 * Licensed under the GNU/GPL. See COPYING for details.
 */
#include <linux/acpi.h>
#include <linux/clk.h>
#include <linux/dma-mapping.h>
#include <linux/err.h>
#include <linux/kernel.h>
#include <linux/hrtimer.h>
#include <linux/io.h>
#include <linux/module.h>
#include <linux/of.h>
#include <linux/of_device.h>
#include <linux/phy/phy.h>
#include <linux/platform_device.h>
#include <linux/reset.h>
#include <linux/usb.h>
#include <linux/usb/hcd.h>
#include <linux/usb/ehci_pdriver.h>
#include <linux/completion.h>
#include <rbus/usb_top_reg.h>
#include <rbus/efuse_reg.h>
#include <rtk_kdriver/usb/ehci.h>
#include <rtk_kdriver/usb/dwc2.h>
#include <rtk_kdriver/usb/usb2_crt.h>
#include <rtk_kdriver/rtk_gpio.h>
#include "ehci-platform.h"

#ifdef CONFIG_REALTEK_OF
#include <linux/of_address.h>
#endif

#define DRIVER_DESC "EHCI generic platform driver"
#define EHCI_MAX_CLKS 3
#define hcd_to_ehci_priv(h) ((struct ehci_platform_priv *)hcd_to_ehci(h)->priv)

#define USB_PHY_DELAY                         100

LIST_HEAD(ehci_list_head);

/* Function delcaration */
static void hub_polling_check(unsigned long data);
static inline int keep_pll_alive(struct platform_device *pdev);
static int ehci_less_one_sram_read(struct platform_device *pdev, bool enable);
static int ehci_utmi_reset(struct platform_device *pdev, bool do_reset);


struct ehci_platform_priv {
    struct clk *clks[EHCI_MAX_CLKS];
    struct reset_control *rst;
    struct phy **phys;
    int num_phys;
    bool reset_on_resume;
    /********* RTK defined *********/
    struct ehci_synopsys_regs __iomem *synop_spec_regs;
    unsigned long *vstatus_regs;
    U2_PHY_CONFIG *u2_phy_config;
    struct timer_list polling_check_timer;
    bool is_timer_on;
    bool polling_check_running;
    struct completion *phy_mac_completion;
    struct list_head ehci_list;
    /********* RTK defined *********/
};

static inline struct ehci_hcd *ehci_priv_to_ehci(struct ehci_platform_priv *priv)
{
    return container_of((void *)priv, struct ehci_hcd, priv);
}

static const char hcd_name[] = "ehci-platform";

static int id_ehci_top = ID_EHCI_TOP;
static int id_ehci_ex_top = ID_EHCI_EX_TOP;
static const struct of_device_id rtk_ehci_ids[] = {
    { .compatible = "rtk,ehci-top", .data = &id_ehci_top },
    { .compatible = "rtk,ehci-ex-top", .data = &id_ehci_ex_top },
    {}
};
MODULE_DEVICE_TABLE(of, rtk_ehci_ids);


int is_invalid_port_num(int n_ports, int port1)
{
    return (port1 < 1 || (port1 > n_ports)) ? -EINVAL : 0;
}

/* We only pass E0~F7 phy_reg, although E0~F7 is just for writing.
 * For reading purpose, the _get_ehci_usb2_phy will do the mapping task.
 * E0 ~ F7 --> C0 ~ D7 */
static int is_invalid_phy_reg(int phy_reg)
{
    if (phy_reg < 0xE0 || phy_reg > 0xF7)
        return -EINVAL;
    return 0;
}
/*-----------------------------------------------------------------
 * U2 Phy Setting API
 * The USB2 Phy registers can be accessed by UTMI interface.
 *-----------------------------------------------------------------*/
/*-----------------------------------------------
 * Func : _get_ehci_usb2_phy
 *
 * Desc : read usb2 phy register with UTMI
 *
 * Parm : ehci      : ehci_hcd
 *        port1     : port number (start from 1)
 *        phy_reg   : phy register address
 *
 * Retn : others : phy register value
 *        -1 : failed
 *-----------------------------------------------*/
static int _get_ehci_usb2_phy(struct ehci_hcd *ehci, int port1, int phy_reg)
{
    struct ehci_platform_priv *priv = (struct ehci_platform_priv *)ehci->priv;
    int n_ports = HCS_N_PORTS(ehci_readl(ehci, &ehci->caps->hcs_params));
    int phy_value;

    if (is_invalid_port_num(n_ports, port1)) {
        ehci_plat_warn(ehci, "get_usb2_phy failed, invalid port - %d\n", port1);
        return -1;
    }
    if (is_invalid_phy_reg(phy_reg)) {
        ehci_plat_warn(ehci, "get_usb2_phy failed, invalid phy_reg 0x%x\n", phy_reg);
        return -1;
    }

    ehci_writel(ehci, 0x00020000 | (phy_reg & 0x0f) << 8 | (port1 << 13), &priv->synop_spec_regs->insnreg05);
    udelay(USB_PHY_DELAY);

    ehci_writel(ehci, 0x00020000 | (phy_reg & 0xd0) << 4 | (port1 << 13), &priv->synop_spec_regs->insnreg05);
    udelay(USB_PHY_DELAY);

    phy_value = ehci_readl(ehci, &priv->synop_spec_regs->insnreg05) & 0xff;

    return (phy_value & 0xff);
}


/*-----------------------------------------------
 * Func : _set_ehci_usb2_phy
 *
 * Desc : set usb2 phy register with UTMI
 *
 * Parm : ehci      : ehci_hcd
 *        port1     : port number (start from 1)
 *        phy_reg   : phy register address
 *        phy_value : phy register value
 *
 * Retn : 0 : successed,
 *       -1 : failed
 *-----------------------------------------------*/
//USB2 PHY XTAL clock frequency selection.
#define MAC_CLK_40MHZ   (0x0<<8) //4??b0000: 40MHz
#define MAC_CLK_25MHZ   (0x1<<8) //4??b0001: 25MHz
#define MAC_CLK_13MHZ   (0x2<<8) //4??b0010: 13MHz
#define MAC_CLK_19MHZ   (0x3<<8) //4??b0011: 19.2MHz
#define MAC_CLK_20MHZ   (0x4<<8) //4??b0100: 20MHz
#define MAC_CLK_26MHZ   (0x5<<8) //4??b0101: 26MHz
#define MAC_CLK_38MHZ   (0x6<<8) //4??b0110: 38.4MHz
#define MAC_CLK_17MHZ   (0x7<<8) //4??b0111: 17.664MHz
#define MAC_CLK_16MHZ   (0x8<<8) //4??b1000: 16MHz
#define MAC_CLK_14MHZ   (0x9<<8) //4??b1001: 14.318MHz
#define MAC_CLK_12MHZ   (0xa<<8) //4??b1010: 12MHz
#define MAC_CLK_52MHZ   (0xb<<8) //4??b1011: 52MHz
#define MAC_CLK_48MHZ   (0xc<<8) //4??b1100: 48MHz
#define MAC_CLK_27MHZ   (0xd<<8) //4??b1101: 27MHz (default)
#define MAC_CLK_24MHZ   (0xe<<8) //4??b1110: 24MHz
static int _set_ehci_usb2_phy(struct ehci_hcd *ehci, int port1, int phy_reg, int phy_value)
{
    struct ehci_platform_priv *priv = (struct ehci_platform_priv *)ehci->priv;
    int n_ports = HCS_N_PORTS(ehci_readl(ehci, &ehci->caps->hcs_params));
    int value;

    if (is_invalid_port_num(n_ports, port1)) {
        ehci_plat_warn(ehci, "set_usb2_phy failed, invalid port - %d\n", port1);
        return -1;
    }

    if (is_invalid_phy_reg(phy_reg)) {
        ehci_plat_warn(ehci, "get_usb2_phy failed, invalid phy_reg 0x%x\n", phy_reg);
        return -1;
    }

    do {
        // write value
        rtd_outl(priv->vstatus_regs[port1 - 1], (phy_value|MAC_CLK_27MHZ));
        udelay(USB_PHY_DELAY);

        ehci_writel(ehci, 0x00020000 | (phy_reg & 0x0f) << 8 | (port1 << 13), &priv->synop_spec_regs->insnreg05);
        udelay(USB_PHY_DELAY);

        ehci_writel(ehci, 0x00020000 | (phy_reg & 0xf0) << 4 | (port1 << 13), &priv->synop_spec_regs->insnreg05);
        udelay(USB_PHY_DELAY);

        value = _get_ehci_usb2_phy(ehci, port1, phy_reg);

        if ((phy_value & 0xff) != value)
            ehci_plat_warn(ehci, "%s, port %d phy_reg 0x%.2x set 0x%x get 0x%x <--- not matched \n",
                        __func__, port1, phy_reg, phy_value & 0xff, value);
        else
            ehci_plat_dbg(ehci, "%s, port %d phy_reg 0x%.2x set 0x%x get 0x%x\n",
                        __func__, port1, phy_reg, phy_value & 0xff, value);

    } while(0); /* just write once */

    return 0;
}


/*-----------------------------------------------
 * Func : _usb2_load_phy_setting
 *
 * Desc : load usb2 phy setting
 *
 * Parm : p_reg : register list
 *        n_reg : register value
 *
 * Retn : N/A
 *-----------------------------------------------*/
static int _usb2_load_phy_setting(struct ehci_hcd *ehci, U2_PHY_REGISTER* p_reg, unsigned int n_reg)
{
    int err = 0;
    while(n_reg--)
    {
        err = _set_ehci_usb2_phy(ehci, p_reg->port1, p_reg->addr, p_reg->val);
        if (err)
            break;
        p_reg++;
    }
    return err;
}

/*-----------------------------------------------
 * Func : ehci_usb2_load_phy_params
 *
 * Desc : load usb2 phy setting
 *
 * Retn : N/A
 *-----------------------------------------------*/
static int ehci_usb2_load_phy_params(struct ehci_hcd *ehci)
{
    struct ehci_platform_priv *priv = (struct ehci_platform_priv *)ehci->priv;

    return _usb2_load_phy_setting(ehci, priv->u2_phy_config->p_reg_table, priv->u2_phy_config->n_reg);
}


int set_ehci_usb2_phy_reg(
    struct ehci_hcd     *ehci,
    unsigned char       port1,
    unsigned char       page,
    unsigned char       addr,
    unsigned char       val)
{
    int n_ports = HCS_N_PORTS(ehci_readl(ehci, &ehci->caps->hcs_params));

    if (is_invalid_port_num(n_ports, port1)) {
        pr_warn("set_u2_phy_reg failed, invalid port number - %d\n", port1);
        return -1;
    }

    if (page > 3) {
        pr_warn("set_u2_phy_reg failed, invalid page - %d\n", page);
        return -1;
    }

    _set_ehci_usb2_phy(ehci, port1, 0xF4, (page<<5) | 0x9b);  // bit [6:5] : page select = page
    _set_ehci_usb2_phy(ehci, port1, addr, val);
    _set_ehci_usb2_phy(ehci, port1, 0xF4, 0x9b);  // bit [6:5] : page select = 0
    return 0;
}


int get_ehci_usb2_phy_reg (
    struct ehci_hcd    *ehci,
    unsigned char       port1,
    unsigned char       page,
    unsigned char       addr
    )
{
    int n_ports = HCS_N_PORTS(ehci_readl(ehci, &ehci->caps->hcs_params));
    int ret;

    if (is_invalid_port_num(n_ports, port1)) {
        pr_warn("set_u2_phy_reg failed, invalid phy id - %d\n", port1);
        return -1;
    }

    if (page > 3) {
        pr_warn("set_u2_phy_reg failed, invalid page - %d\n", page);
        return -1;
    }

    _set_ehci_usb2_phy(ehci, port1, 0xF4, (page << 5) | 0x9b);  // bit [6:5] : page select = page
    ret = _get_ehci_usb2_phy(ehci, port1, addr);
    _set_ehci_usb2_phy(ehci, port1, 0xF4, 0x9b);  // bit [6:5] : page select = 0

    return ret;
}

#if 1
#define GET_PORT_OFFSET(port)              (4 + (port * 4))
#define GET_PORT_OTP_VAL(val, port)        ((val & (0xf << GET_PORT_OFFSET(port))) >> GET_PORT_OFFSET(port))
static int ehci_usb2_set_squelch_from_otp(struct ehci_hcd *ehci)
{
        int portnum = 0, ret = 0;
        unsigned int squelch_otp = rtd_inl(EFUSE_DATAO_53_reg);
        unsigned int val = 0, n_ports = HCS_N_PORTS(ehci_readl(ehci, &ehci->caps->hcs_params));

        ehci_plat_info(ehci, "squelch_otp=0x%x \n", squelch_otp);

        if (squelch_otp & 0x1) {
                for (portnum = 0; portnum < n_ports; portnum++) {
                        val = get_ehci_usb2_phy_reg(ehci, portnum + 1, 0, 0xe7);
                        val &= ~0xf0;
                        val |= (GET_PORT_OTP_VAL(squelch_otp, portnum) << 4);
                        ret = set_ehci_usb2_phy_reg(ehci, portnum + 1, 0, 0xe7, val);
                        if (ret)
                                goto out;
                        ehci_plat_info(ehci, "set port(%d) squelch level to 0x%x \n",
                                        portnum + 1,
                                        (get_ehci_usb2_phy_reg(ehci, portnum + 1, 0, 0xe7) & 0xf0) >> 4);
                }
        }
out:
        return ret;
}
#undef GET_PORT_OFFSET
#undef GET_PORT_OTP_VAL
#else
#define ehci_usb2_set_squelch_from_otp(ehci)    0
#endif

#if 1
#define GET_PORT_OFFSET(port)              (16 + (port * 4))
#define GET_PORT_OTP_VAL(val, port)        ((val & (0xf << GET_PORT_OFFSET(port))) >> GET_PORT_OFFSET(port))
static int ehci_usb2_set_disconnect_from_otp(struct ehci_hcd *ehci)
{
        int portnum = 0, ret = 0;
        unsigned int disconnect_otp = rtd_inl(EFUSE_DATAO_52_reg);
        unsigned int val = 0, n_ports = HCS_N_PORTS(ehci_readl(ehci, &ehci->caps->hcs_params));

        ehci_plat_info(ehci, "disconnect_otp=0x%x \n", disconnect_otp);

        if (disconnect_otp & 0x1) {
                for (portnum = 0; portnum < n_ports; portnum++) {
                        val = get_ehci_usb2_phy_reg(ehci, portnum + 1, 0, 0xe4);
                        val &= ~0xf0;
                        val |= (GET_PORT_OTP_VAL(disconnect_otp, portnum) << 4);
                        ret = set_ehci_usb2_phy_reg(ehci, portnum + 1, 0, 0xe4, val);
                        if (ret)
                                goto out;
                        ehci_plat_info(ehci, "set port(%d) disconect level to 0x%x \n",
                                        portnum + 1,
                                        (get_ehci_usb2_phy_reg(ehci, portnum + 1, 0, 0xe4) & 0xf0) >> 4);
                }
        }
out:
        return ret;
}
#undef GET_PORT_OFFSET
#undef GET_PORT_OTP_VAL
#else
#define ehci_usb2_set_disconnect_from_otp(ehci)    0
#endif

static int ehci_usb2_phy_init(struct platform_device *pdev)
{
    struct usb_hcd *hcd = platform_get_drvdata(pdev);
    struct ehci_hcd *ehci = hcd_to_ehci(hcd);
    int err = 0;

    err = ehci_usb2_load_phy_params(ehci);
    if (err)
        goto done;
    udelay(USB_PHY_DELAY);

    err = ehci_usb2_set_disconnect_from_otp(ehci)||
        ehci_usb2_set_squelch_from_otp(ehci);

    if (err)
        goto done;
    udelay(USB_PHY_DELAY);

    return 0;

done:
    return err;
}

/*-----------------------------------------------
 * Func : ehci_usb_mac_init
 *
 * Desc : init usb mac
 *
 * Parm : N/A
 *
 * Retn : N/A
 *-----------------------------------------------*/
static int ehci_usb_mac_init(struct platform_device *pdev)
{
    int ret = 0;

    // In past experience, we will encounter rbus timeout when access oHCI regs if we dont set this.
    ret = keep_pll_alive(pdev);
    if (ret)
        goto out;

out:
    return ret;
}


/*-----------------------------------------------
 * Func : ehci_usb_mac_post_init
 *
 * Desc : init usb mac
 *
 * Parm : N/A
 *
 * Retn : N/A
 *-----------------------------------------------*/
static int ehci_usb_mac_post_init(struct platform_device *pdev)
{
    struct usb_hcd *hcd = platform_get_drvdata(pdev);
    struct ehci_hcd *ehci = hcd_to_ehci(hcd);
    int portnum = 0, ret = 0;

    // Keep false to prevent data alignment issue that transfers size more than 258 bytes
    ret = ehci_less_one_sram_read(pdev, false);
    if (ret)
        goto out;

    ret = ehci_utmi_reset(pdev, false);
    if (ret)
        goto out;

    ehci_writel(ehci, 0x00080B01, &ehci->regs->command);    //bit 0 EHCI MAC RUN / set USBCMD
    udelay(USB_PHY_DELAY);

    ehci_writel(ehci, FLAG_CF, &ehci->regs->configured_flag);    //release owner
    udelay(USB_PHY_DELAY);

    for (portnum = 0; portnum < HCS_N_PORTS(ehci_readl(ehci, &ehci->caps->hcs_params)); portnum++) {
        ehci_writel(ehci, PORT_POWER, &ehci->regs->port_status[portnum]); // enable EHCI port power
    }

out:
    return ret;
}

/* ========================================================================================== */
/* TODO: Correct the address and usage of register if SoC changed.
 * Here are the functions that are SoC depended.
 * You will need to modify the register address and usage in different SoC but also use eHCI.
 * */
static inline int keep_pll_alive(struct platform_device *pdev)
{
    struct usb_ehci_pdata *pdata = dev_get_platdata(&pdev->dev);
    int ret = 0;

    switch (pdata->id) {
    case ID_EHCI_TOP:
        rtd_setbits(USB_TOP_USB_CTR0_reg, USB_TOP_USB_CTR0_pll_alive_enable_mask);
        break;
    default:
        ret = -ENODEV;
    }

    return ret;
}


static int ehci_less_one_sram_read(struct platform_device *pdev, bool enable)
{
    struct usb_ehci_pdata *pdata = dev_get_platdata(&pdev->dev);
    int ret = 0;

    switch (pdata->id) {
    case ID_EHCI_TOP:
        if (enable)
            rtd_setbits(USB_TOP_USB_CTR0_reg, USB_TOP_USB_CTR0_wrap_sram_rd_opt_mask);
        else
            rtd_clearbits(USB_TOP_USB_CTR0_reg, USB_TOP_USB_CTR0_wrap_sram_rd_opt_mask);
        break;
    default:
        ret = -ENODEV;
    }

    return ret;
}


static int ehci_utmi_reset(struct platform_device *pdev, bool do_reset)
{
    struct usb_ehci_pdata *pdata = dev_get_platdata(&pdev->dev);

    switch (pdata->id) {
    case ID_EHCI_TOP:
        /* UTMI release/reset */
        rtd_outl(USB_TOP_RESET_UTMI_reg, USB_TOP_RESET_UTMI_reset_utmi(do_reset));
        rtd_outl(USB_TOP_RESET_UTMI_2port_reg, USB_TOP_RESET_UTMI_2port_reset_utmi(do_reset));
        rtd_outl(USB_TOP_RESET_UTMI_3port_reg, USB_TOP_RESET_UTMI_3port_reset_utmi(do_reset));
        udelay(USB_PHY_DELAY);
        break;
    default:
        return -ENODEV;
    }

    return 0;
}


int enble_usb2_wrap_crc(struct ehci_hcd *ehci, bool on)
{
    struct usb_ehci_pdata *pdata = dev_get_platdata(ehci_to_hcd(ehci)->self.controller);
    int ret = 0;

    switch (pdata->id) {
    case ID_EHCI_TOP:
        if (on)
            rtd_setbits(USB_TOP_USB_CRC_CNT_reg, USB_TOP_USB_CRC_CNT_rx_crc_cnt_en_mask);
        else
            rtd_clearbits(USB_TOP_USB_CRC_CNT_reg, USB_TOP_USB_CRC_CNT_rx_crc_cnt_en_mask);
        break;
    default:
        ret = -ENODEV;
    }

    return ret;
}


int reset_usb2_wrap_crc(struct ehci_hcd *ehci)
{
    struct usb_ehci_pdata *pdata = dev_get_platdata(ehci_to_hcd(ehci)->self.controller);
    int ret = 0;

    switch (pdata->id) {
    case ID_EHCI_TOP:
        rtd_setbits(USB_TOP_USB_CRC_CNT_reg, USB_TOP_USB_CRC_CNT_rx_crc_cnt_rst_mask);
        udelay(10);
        rtd_clearbits(USB_TOP_USB_CRC_CNT_reg, USB_TOP_USB_CRC_CNT_rx_crc_cnt_rst_mask);
        break;
    default:
        ret = -ENODEV;
    }

    return ret;
}


int get_usb2_wrap_crc_err_cnt(struct ehci_hcd *ehci, int port1) {
    struct usb_ehci_pdata *pdata = dev_get_platdata(ehci_to_hcd(ehci)->self.controller);
    int crc_cnt = -1;
    unsigned int data = 0;

    switch (pdata->id) {
    case ID_EHCI_TOP:
        if (!USB_TOP_USB_CRC_CNT_get_rx_crc_cnt_en(rtd_inl(USB_TOP_USB_CRC_CNT_reg)))
            return -1;

        data = rtd_inl(USB_TOP_USB_CRC_CNT_reg);

        switch (port1) {
        case 1: crc_cnt = USB_TOP_USB_CRC_CNT_get_rx_crc_cnt_port0(data); break;
        case 2: crc_cnt = USB_TOP_USB_CRC_CNT_get_rx_crc_cnt_port1(data); break;
        case 3: crc_cnt = USB_TOP_USB_CRC_CNT_get_rx_crc_cnt_port2(data); break;
        }

        break;
    }

    return crc_cnt;
}
/* ========================================================================================== */


/*  copy from hub.c and rename */
/*
 * USB 2.0 spec Section 11.24.2.2
 */
static int hub_clear_port_feature(struct usb_device *hdev, int port1, int feature)
{
    return usb_control_msg(hdev, usb_sndctrlpipe(hdev, 0),
            USB_REQ_CLEAR_FEATURE, USB_RT_PORT, feature, port1,
            NULL, 0, 1000);
}


/*
 * USB 2.0 spec Section 11.24.2.13
 */
static int hub_set_port_feature(struct usb_device *hdev, int port1, int feature)
{
    return usb_control_msg(hdev, usb_sndctrlpipe(hdev, 0),
            USB_REQ_SET_FEATURE, USB_RT_PORT, feature, port1,
            NULL, 0, 1000);
}

/* Port Test Modes.
 * Refs to section 4.14 in Enhanced Host Controller Interface Specification for Universal Serial Bus specification
 * */
int rtk_ehci_port_test_mode(struct usb_device *udev, int port1, int mode) {
    struct usb_hcd *hcd = container_of(udev->bus, struct usb_hcd, self);
    struct ehci_hcd *ehci;
    int i;

    if (udev->maxchild < port1) {
        pr_err("port1 is out of range. 1~%d \n", udev->maxchild);
        return -1;
    }
    if (mode > 5) {
        pr_err("mode is out of range. 0~5 \n");
        return -1;
    }
    if (hcd->udev_in_test) {
        pr_err("dev: %s is currently in test \n", dev_name(&hcd->udev_in_test->dev));
        return -1;
    }
    if (mode != 0) {
        usb_lock_device(udev);
        hcd->udev_in_test = udev;
    }

    /* is root hub */
    if (!udev->parent) {
        ehci = hcd_to_ehci(hcd);

        if (mode == 0) {
            pr_debug("Leave test mode ...\n");

            pr_debug("set the Run/Stop(R/S) bit in the USBCMD register to a '0'\n");
            ehci_writel(ehci, (ehci->regs->command & ~(CMD_RUN)), &ehci->regs->command);

            pr_debug("wait for HCHalted(HCH) bit in the USBSTS register to transition to a '1'\n");
            do {
                msleep(100);
            } while (!(ehci->regs->status & STS_HALT));

            pr_debug("set the Host Controller Reset(HCRST) bit in the USBCMD register to a '1'\n");
            ehci_writel(ehci, (ehci->regs->command | CMD_RESET), &ehci->regs->command);

            pr_debug("Leave test mode , OK !!!\n");

        } else {
            /* Disable the periodic and asynchronous schedules */
            ehci_writel(ehci, (ehci->regs->command & ~(CMD_ASE | CMD_PSE)), &ehci->regs->command);

            /* Place all enabled root ports into the suspended state by setting the Suspend bit
            * in each appropriate PORTSC register to a one. */
            for (i = 0; i < udev->maxchild; i++) {
                if (ehci->regs->port_status[i] & PORT_PE) {
                    pr_info("port%d(%p) is enable. set to suspend \n", i, &ehci->regs->port_status[i]);
                    ehci_writel(ehci, (ehci->regs->port_status[i] | PORT_SUSPEND), &ehci->regs->port_status[i]);
                }
            }

            /* Set the Run/Stop bit in the USBCMD register to a zero and wait for the HCHalted bit in the USBSTS
            * register, to transition to a one. Note that an EHCI host controller implementation may optionally allow
            * port testing with the Run/Stop bit set to a one. However, all host controllers must support port testing
            * with Run/Stop set to a zero and HCHalted set to a one. */
            ehci_writel(ehci, (ehci->regs->command & ~(CMD_RUN)), &ehci->regs->command);
            do {
                msleep(100);
            } while (!(ehci->regs->status & STS_HALT));

            /* Set the Port Test Control field in the port under test PORTSC register to the value corresponding to the
            * desired test mode. If the selected test is Test_Force_Enable, then the Run/Stop bit in the USBCMD
            * register must then be transitioned back to one, in order to enable transmission of SOFs out of the port
            * under test. */
            ehci_writel(ehci, ((ehci->regs->port_status[port1 - 1] & ~PORT_TEST(0xf)) | PORT_TEST(mode)), &ehci->regs->port_status[port1 - 1]);
            if (PORT_TEST(mode) == PORT_TEST_FORCE) {
                pr_info("Is Test_Force_Enable. Need to set Run/Stop bit in USBCMD to 1 \n");
                ehci_writel(ehci, (ehci->regs->command | CMD_RUN), &ehci->regs->command);
            }
        }

    } else {
        /* Not root hub.
         * Please refers to section 11.24.2.12 (Set Port Feature) in USB 2.0 spec*/
        if (mode == 0) {
            pr_debug("Leave test mode ...\n");

            pr_debug("clear USB_PORT_FEAT_POWER to the parent of the hub\n");
            for (i = 1; i <= udev->parent->maxchild; i++) {
                pr_debug("processing port %d of %d...\n", i, udev->parent->maxchild);
                hub_clear_port_feature(udev->parent, i, USB_PORT_FEAT_POWER);
                msleep(1000);
            }

            pr_debug("set USB_PORT_FEAT_POWER to the parent of the hub\n");
            for (i = 1; i <= udev->parent->maxchild; i++) {
                pr_debug("processing port %d of %d...\n", i, udev->parent->maxchild);
                hub_set_port_feature(udev->parent, i, USB_PORT_FEAT_POWER);
                msleep(1000);
            }

            pr_debug("Leave test mode , OK !!!\n");
        } else {
            pr_debug("Enter test mode ...\n");

            pr_debug("set USB_PORT_FEAT_SUSPEND to all ports of the hub\n");
            for (i = 1; i <= udev->maxchild; i++) {
                pr_debug("processing port %d of %d...\n", i, udev->maxchild);
                hub_set_port_feature(udev, i, USB_PORT_FEAT_SUSPEND);
                msleep(1000);
            }

            /* When the feature selector is PORT_TEST, the most significant byte(bit 15..8) of the wIndex field
             * is the selector identifying the specific test mode. */
            pr_debug("set USB_PORT_FEAT_TEST mode %d to port %d ...\n", mode, port1);
            hub_set_port_feature(udev, (mode << 8) | port1, USB_PORT_FEAT_TEST);
            msleep(1000);

            pr_debug("Enter test mode , OK !!!\n");
        }
    }

    if (mode == 0) {
        usb_unlock_device(udev);
        hcd->udev_in_test = NULL;
    }

    return 0;
}



static ssize_t _get_crc_str(struct ehci_hcd *ehci, char *buf, size_t count) {
    ssize_t n = 0;
    unsigned ports = HCS_N_PORTS(ehci->hcs_params), port1 = 1;
    char *ptr = buf;

    if (ports < 1)
        return -ENODEV;

    n = scnprintf(buf, count, "CRC_ERR={");
    if ((count -= n) < 0)
        goto overflow;
    buf +=n;

    for (port1 = 1; port1 <= ports; port1++) {
        n = scnprintf(buf, count, "%d, ",
                get_usb2_wrap_crc_err_cnt(ehci, port1));
        if ((count -= n) < 0)
            goto overflow;
        buf +=n;
    }

    /* Truncate last two char: comma and space */
    count -= 2;
    buf -= 2;

    n = scnprintf(buf, count, "} ");
    if ((count -= n) < 0)
        goto overflow;
    buf +=n;

    return buf - ptr;

overflow:
    return -EOVERFLOW;
}


/* Dump ehci portsc of each port */
ssize_t _get_ehci_portsc_str(struct ehci_hcd *ehci, char *buf, size_t size) {
    char *ptr = buf, *crc_buf;
    ssize_t n = 0;
    unsigned ports = HCS_N_PORTS(ehci->hcs_params), portnum = 0;

    n = scnprintf(buf, size, "U2 PORTSC={");
    if ((size -= n) < 0)
        return -EOVERFLOW;
    buf += n;

    for (portnum = 0; portnum < ports; portnum++) {
        n = scnprintf(buf, size, "0x%x, ",
                ehci_readl(ehci, &ehci->regs->port_status[portnum]));
        buf += n;
        if ((size -= n) < 0)
            return -EOVERFLOW;
    }
    buf -= 2; /* truncate last comma and space. */

    n = scnprintf(buf, size, "}");
    if ((size -= n) < 0)
        return -EOVERFLOW;
    buf += n;

    // May be called in timer ISR, can't sleep
    crc_buf = kzalloc(size, GFP_ATOMIC);
    if (crc_buf) {
        if (_get_crc_str(ehci, crc_buf, size) > 0) {
            n = scnprintf(buf, size, " %s \n", crc_buf);
            if ((size -= n) < 0)
                return -EOVERFLOW;
            buf += n;
        }
        kfree(crc_buf);
    } else {
        n = scnprintf(buf, size, "\n");
        if ((size -= n) < 0)
            return -EOVERFLOW;
        buf += n;
    }

    return buf - ptr;
}

static void dump_portsc_ex(struct ehci_hcd *ehci, unsigned char warn) {
    char *buf;
    ssize_t n = 0;

    // May be called in timer IRQ, can't schedule
    buf = kzalloc(PAGE_SIZE, GFP_ATOMIC);
    if (!buf)
        return;

    n = _get_ehci_portsc_str(ehci, buf, PAGE_SIZE);
    if (n) {
        if (warn)
            ehci_plat_warn(ehci, "%s", buf);
        else
            ehci_plat_dbg(ehci, "%s", buf);
    }
    kfree(buf);
}

#define dump_portsc(ehci)   dump_portsc_ex(ehci, 0);

static void hub_polling_check(unsigned long data)
{
    struct ehci_hcd *ehci = (struct ehci_hcd *)data;
    struct ehci_platform_priv *priv = (struct ehci_platform_priv *)ehci->priv;
    struct usb_ehci_pdata *pdata = dev_get_platdata(ehci_to_hcd(ehci)->self.controller);

    if (!priv->is_timer_on ||
        priv->polling_check_running ||
        (pdata->debug_ctrl_flag & NO_EHCI_POLLING_CHECK))
        return;

    priv->polling_check_running = true;
    dump_portsc(ehci);
    priv->polling_check_running = false;

    if (priv->is_timer_on && !(pdata->debug_ctrl_flag & NO_EHCI_POLLING_CHECK))
        mod_timer(&priv->polling_check_timer, jiffies + msecs_to_jiffies(EHCI_POLLING_CHECK_TIME));
}


void start_ehci_polling_check_timer(struct ehci_hcd *ehci)
{
    struct ehci_platform_priv *priv = (struct ehci_platform_priv *)ehci->priv;

    if (!priv->is_timer_on) {
        priv->is_timer_on = true;
        setup_timer(&priv->polling_check_timer, hub_polling_check, (unsigned long)ehci);
        mod_timer(&priv->polling_check_timer, jiffies + msecs_to_jiffies(EHCI_POLLING_CHECK_TIME));
    }
}

void stop_ehci_polling_check_timer(struct ehci_hcd *ehci)
{
    struct ehci_platform_priv *priv = (struct ehci_platform_priv *)ehci->priv;

    if (priv->is_timer_on) {
        priv->is_timer_on = false;
        del_timer_sync(&priv->polling_check_timer);
    }
}

struct completion *id_get_companion_ehci_completion(int id)
{
    struct ehci_hcd *ehci = NULL;
    struct platform_device *pdev = NULL;
    struct usb_ehci_pdata *pdata = NULL ;
    struct ehci_platform_priv *priv, *next;

    list_for_each_entry_safe(priv, next, &ehci_list_head, ehci_list) {
        ehci = ehci_priv_to_ehci(priv);
        pdev = to_platform_device(ehci_to_hcd(ehci)->self.controller);
        pdata = dev_get_platdata(&pdev->dev);
        if (pdata->id == id)
            return priv->phy_mac_completion;
    }

    return NULL;
}
EXPORT_SYMBOL(id_get_companion_ehci_completion);


static int ehci_platform_reset(struct usb_hcd *hcd)
{
    struct platform_device *pdev = to_platform_device(hcd->self.controller);
    struct usb_ehci_pdata *pdata = dev_get_platdata(&pdev->dev);
    struct ehci_hcd *ehci = hcd_to_ehci(hcd);
    int retval;

    ehci->has_synopsys_hc_bug = pdata->has_synopsys_hc_bug;

    if (pdata->pre_setup) {
        retval = pdata->pre_setup(hcd);
        if (retval < 0)
            return retval;
    }

    ehci->caps = hcd->regs + pdata->caps_offset;
    retval = ehci_setup(hcd);
    if (retval)
        return retval;

    if (pdata->no_io_watchdog)
        ehci->need_io_watchdog = 0;
    return 0;
}

#if 0
static int ehci_platform_power_on(struct platform_device *dev)
{
    struct usb_hcd *hcd = platform_get_drvdata(dev);
    struct ehci_platform_priv *priv = hcd_to_ehci_priv(hcd);
    int clk, ret, phy_num;

    for (clk = 0; clk < EHCI_MAX_CLKS && priv->clks[clk]; clk++) {
        ret = clk_prepare_enable(priv->clks[clk]);
        if (ret)
            goto err_disable_clks;
    }

    for (phy_num = 0; phy_num < priv->num_phys; phy_num++) {
        ret = phy_init(priv->phys[phy_num]);
        if (ret)
            goto err_exit_phy;
        ret = phy_power_on(priv->phys[phy_num]);
        if (ret) {
            phy_exit(priv->phys[phy_num]);
            goto err_exit_phy;
        }
    }

    return 0;

err_exit_phy:
    while (--phy_num >= 0) {
        phy_power_off(priv->phys[phy_num]);
        phy_exit(priv->phys[phy_num]);
    }
err_disable_clks:
    while (--clk >= 0)
        clk_disable_unprepare(priv->clks[clk]);

    return ret;
}
#endif


static int vbus_on(bool on)
{
#if 1   //fixme
    pr_alert("%s(%d)=== Waiting for GPIO API ===\n",__func__,__LINE__);
    return 0;
#else
    u64 pin;
    RTK_GPIO_ID gid;
    char *pin_name = "PIN_USB_5V_EN1";
    int ret = 0;

    ret = pcb_mgr_get_enum_info_byname(pin_name, &pin);
    if (ret) {
        pr_err("fail: get PCB parameter (%s) \n", pin_name);
        return -ENODEV;
    }

    gid = rtk_gpio_id(GET_GPIO_TYPE(pin), GET_PIN_INDEX(pin));
    ret = rtk_gpio_output(gid, on);
    if (ret)
        return ret;

    ret = rtk_gpio_set_dir(gid, 1);  // set gpio to output mode

    return ret;
#endif
}

static int rtk_ehci_platform_power_on(struct platform_device *dev)
{
    usb2_crt_power_on_sequence();
    usb2_crt_get();
    return 0;
}

#if 0
static void ehci_platform_power_off(struct platform_device *dev)
{
    struct usb_hcd *hcd = platform_get_drvdata(dev);
    struct ehci_platform_priv *priv = hcd_to_ehci_priv(hcd);
    int clk, phy_num;

    for (phy_num = 0; phy_num < priv->num_phys; phy_num++) {
        phy_power_off(priv->phys[phy_num]);
        phy_exit(priv->phys[phy_num]);
    }

    for (clk = EHCI_MAX_CLKS - 1; clk >= 0; clk--)
        if (priv->clks[clk])
            clk_disable_unprepare(priv->clks[clk]);
}
#endif

static void rtk_ehci_platform_power_off(struct platform_device *dev)
{
    usb2_crt_put();
}

static struct hc_driver __read_mostly ehci_platform_hc_driver;

#ifdef CONFIG_USER_INITCALL_USB
static const struct ehci_driver_overrides platform_overrides = {
#else
static const struct ehci_driver_overrides platform_overrides __initconst = {
#endif
    .reset = ehci_platform_reset,
    .extra_priv_size = sizeof(struct ehci_platform_priv),
};

static struct usb_ehci_pdata ehci_platform_defaults = {
#if 1 /* We use rtk self-defined power on/off seuqeunce */
    .power_on      = rtk_ehci_platform_power_on,
    .power_off     = rtk_ehci_platform_power_off,
    .power_suspend = rtk_ehci_platform_power_off,
#else
    .power_on       = ehci_platform_power_on,
    .power_off      = ehci_platform_power_off,
    .power_suspend  = ehci_platform_power_off,
#endif
};


extern struct attribute *platform_dev_attrs[];
static const struct attribute_group platform_dev_attr_grp = {
    .attrs = platform_dev_attrs,
};


static int ehci_platform_probe(struct platform_device *dev)
{
    struct usb_hcd *hcd;
    struct resource *res_mem;
    struct usb_ehci_pdata *pdata = dev_get_platdata(&dev->dev);
    struct ehci_platform_priv *priv;
    struct ehci_hcd *ehci;
    int err, irq, phy_num, clk = 0;
    const struct of_device_id *of_id = of_match_device(rtk_ehci_ids, &dev->dev);
    int platform_index = 0;
    int n_ports = 0;

    if (usb_disabled())
        return -ENODEV;

    if (!of_id->data)
        return -ENODEV;

    platform_index = *((int *)of_id->data);

#ifdef CONFIG_USB_USER_RESUME
	pr_alert("%s(%d)[Alexkh]CONFIG_USB_USER_RESUME\n",__func__,__LINE__);
    dev->dev.power.is_userresume = true;
#endif

    /*
    * Use reasonable defaults so platforms don't have to provide these
    * with DT probing on ARM.
    */
    if (!pdata)
        pdata = &ehci_platform_defaults;

    err = dma_coerce_mask_and_coherent(&dev->dev,
        pdata->dma_mask_64 ? DMA_BIT_MASK(64) : DMA_BIT_MASK(32));
    if (err) {
        dev_err(&dev->dev, "Error: DMA mask configuration failed\n");
        return err;
    }

    irq = platform_get_irq(dev, 0);
    if (irq < 0) {
        dev_err(&dev->dev, "no irq provided");
        return irq;
    }

    hcd = usb_create_hcd(&ehci_platform_hc_driver, &dev->dev,
                dev_name(&dev->dev));
    if (!hcd)
        return -ENOMEM;

    platform_set_drvdata(dev, hcd);
    dev->dev.platform_data = pdata;
    pdata->id = platform_index;  /* set id to indenty USB MAC */
    priv = hcd_to_ehci_priv(hcd);
    ehci = hcd_to_ehci(hcd);

    if (pdata == &ehci_platform_defaults && dev->dev.of_node) {
        if (of_property_read_bool(dev->dev.of_node, "big-endian-regs"))
            ehci->big_endian_mmio = 1;

        if (of_property_read_bool(dev->dev.of_node, "big-endian-desc"))
            ehci->big_endian_desc = 1;

        if (of_property_read_bool(dev->dev.of_node, "big-endian"))
            ehci->big_endian_mmio = ehci->big_endian_desc = 1;

        if (of_property_read_bool(dev->dev.of_node,
                    "needs-reset-on-resume"))
            priv->reset_on_resume = true;

        if (of_property_read_bool(dev->dev.of_node,
                    "has-transaction-translator"))
            hcd->has_tt = 1;

        priv->num_phys = of_count_phandle_with_args(dev->dev.of_node,
                "phys", "#phy-cells");

        if (priv->num_phys > 0) {
            priv->phys = devm_kcalloc(&dev->dev, priv->num_phys,
                        sizeof(struct phy *), GFP_KERNEL);
            if (!priv->phys)
                return -ENOMEM;
        } else
            priv->num_phys = 0;

        for (phy_num = 0; phy_num < priv->num_phys; phy_num++) {
            priv->phys[phy_num] = devm_of_phy_get_by_index(
                    &dev->dev, dev->dev.of_node, phy_num);
            if (IS_ERR(priv->phys[phy_num])) {
                err = PTR_ERR(priv->phys[phy_num]);
                    goto err_put_hcd;
            }
        }

        for (clk = 0; clk < EHCI_MAX_CLKS; clk++) {
            priv->clks[clk] = of_clk_get(dev->dev.of_node, clk);
            if (IS_ERR(priv->clks[clk])) {
                err = PTR_ERR(priv->clks[clk]);
                if (err == -EPROBE_DEFER)
                    goto err_put_clks;
                priv->clks[clk] = NULL;
                break;
            }
        }
    }

    priv->rst = devm_reset_control_get_optional(&dev->dev, NULL);
    if (IS_ERR(priv->rst)) {
        err = PTR_ERR(priv->rst);
        if (err == -EPROBE_DEFER)
            goto err_put_clks;
        priv->rst = NULL;
    } else {
        err = reset_control_deassert(priv->rst);
        if (err)
            goto err_put_clks;
    }

    if (pdata->big_endian_desc)
        ehci->big_endian_desc = 1;
    if (pdata->big_endian_mmio)
        ehci->big_endian_mmio = 1;
    if (pdata->has_tt)
        hcd->has_tt = 1;
    if (pdata->reset_on_resume)
        priv->reset_on_resume = true;

#ifndef CONFIG_USB_EHCI_BIG_ENDIAN_MMIO
    if (ehci->big_endian_mmio) {
        dev_err(&dev->dev,
            "Error: CONFIG_USB_EHCI_BIG_ENDIAN_MMIO not set\n");
        err = -EINVAL;
        goto err_reset;
    }
#endif
#ifndef CONFIG_USB_EHCI_BIG_ENDIAN_DESC
    if (ehci->big_endian_desc) {
        dev_err(&dev->dev,
            "Error: CONFIG_USB_EHCI_BIG_ENDIAN_DESC not set\n");
        err = -EINVAL;
        goto err_reset;
    }
#endif

    if (pdata->power_on) {
        vbus_on(false);
        err = pdata->power_on(dev);
        if (err < 0)
            goto err_reset;
    }

    res_mem = platform_get_resource(dev, IORESOURCE_MEM, 0);
    hcd->regs = devm_ioremap_resource(&dev->dev, res_mem);
    if (IS_ERR(hcd->regs)) {
        err = PTR_ERR(hcd->regs);
        goto err_power;
    }
    hcd->rsrc_start = res_mem->start;
    hcd->rsrc_len = resource_size(res_mem);

    /* Map hcd regs to ehci regs,
     * also setup ehci op regs and synopsys specific regs */
    ehci->caps = hcd->regs;  /* FIXME: Need offset if ehci has PCI config regs? */
    ehci->regs = (void __iomem *)ehci->caps +
        HC_LENGTH(ehci, ehci_readl(ehci, &ehci->caps->hc_capbase));
    priv->synop_spec_regs = ((void __iomem *)ehci->regs) + EHCI_SYNOPSYS_REGS_OFFSET;

    n_ports = HCS_N_PORTS(ehci_readl(ehci, &ehci->caps->hcs_params));

    /* Map to right vstatus register(USB wrapper) */
    priv->vstatus_regs = id_get_ehci_vstatus_regs(pdata->id);
    if (IS_ERR(priv->vstatus_regs)) {
        err = PTR_ERR(priv->vstatus_regs);
        goto err_power;
    }

    /* Get MAC related phy config */
    priv->u2_phy_config = id_get_ehci_phy_config(pdata->id);
    if (IS_ERR(priv->u2_phy_config)) {
        err = PTR_ERR(priv->u2_phy_config);
        goto err_power;
    }

    /* PHY and MAC init part.
     * If we have done before (ex: re-modprobe this module), we won't do this again. */
    priv->phy_mac_completion = id_get_ehci_completion(pdata->id);
    if (IS_ERR(priv->phy_mac_completion)) {
        err = PTR_ERR(priv->phy_mac_completion);
        goto err_power;
    }

    if (!completion_done(priv->phy_mac_completion)) {
        if ((err = ehci_usb_mac_init(dev)) ||
            (err = ehci_usb2_phy_init(dev)) ||
            (err = ehci_usb_mac_post_init(dev)))
            goto err_power;

        complete_all(priv->phy_mac_completion);
    }

    err = usb_add_hcd(hcd, irq, IRQF_SHARED);
    if (err)
        goto err_power;

#ifdef CONFIG_USB_HCD_TEST_MODE
    hcd->port_test_mode = rtk_ehci_port_test_mode;
#endif

    device_wakeup_enable(hcd->self.controller);
    device_enable_async_suspend(hcd->self.controller);
    platform_set_drvdata(dev, hcd);

    if (sysfs_create_group(&dev->dev.kobj, &platform_dev_attr_grp)) {
        ehci_plat_warn(ehci, "Create self-defined sysfs attributes fail \n");
    }

    start_ehci_polling_check_timer(ehci);

    vbus_on(true);

    list_add_tail(&priv->ehci_list, &ehci_list_head); /* This is used to track how many ehci do we have */

    return err;

err_power:
    if (pdata->power_off)
        pdata->power_off(dev);
err_reset:
    if (priv->rst)
        reset_control_assert(priv->rst);
err_put_clks:
    while (--clk >= 0)
        clk_put(priv->clks[clk]);
err_put_hcd:
    if (pdata == &ehci_platform_defaults)
        dev->dev.platform_data = NULL;

    usb_put_hcd(hcd);

    return err;
}

static int ehci_platform_remove(struct platform_device *dev)
{
    struct usb_hcd *hcd = platform_get_drvdata(dev);
    struct usb_ehci_pdata *pdata = dev_get_platdata(&dev->dev);
    struct ehci_platform_priv *priv = hcd_to_ehci_priv(hcd);

    int clk;

    stop_ehci_polling_check_timer(hcd_to_ehci(hcd));

    sysfs_remove_group(&dev->dev.kobj, &platform_dev_attr_grp);

    usb_remove_hcd(hcd);

    if (pdata->power_off)
        pdata->power_off(dev);

    if (priv->rst)
        reset_control_assert(priv->rst);

    for (clk = 0; clk < EHCI_MAX_CLKS && priv->clks[clk]; clk++)
        clk_put(priv->clks[clk]);

    usb_put_hcd(hcd);

    if (pdata == &ehci_platform_defaults)
        dev->dev.platform_data = NULL;

    list_del(&priv->ehci_list);

    return 0;
}

#ifdef CONFIG_PM_SLEEP
static int ehci_platform_suspend(struct device *dev)
{
    struct usb_hcd *hcd = dev_get_drvdata(dev);
    struct usb_ehci_pdata *pdata = dev_get_platdata(dev);
    struct ehci_platform_priv *priv = hcd_to_ehci_priv(hcd);
    struct platform_device *pdev = to_platform_device(dev);
    bool do_wakeup = device_may_wakeup(dev);
    int ret;

    stop_ehci_polling_check_timer(hcd_to_ehci(hcd));

    ret = ehci_suspend(hcd, do_wakeup);
    if (ret)
        return ret;

    if (pdata->power_suspend)
        pdata->power_suspend(pdev);

    /* suspend will turn off the USB IC power,
     * the phy, mac value will be reset to default val,
     * we need to reinit it again in resume flow.*/
    reinit_completion(priv->phy_mac_completion);

    return ret;
}

static int ehci_platform_resume(struct device *dev)
{
    struct usb_hcd *hcd = dev_get_drvdata(dev);
    struct usb_ehci_pdata *pdata = dev_get_platdata(dev);
    struct platform_device *pdev = to_platform_device(dev);
    struct ehci_platform_priv *priv = hcd_to_ehci_priv(hcd);
    int err;
	pr_alert("%s(%d)[Alexkh]\n",__func__,__LINE__);
    if (pdata->power_on) {
        int err = pdata->power_on(pdev);
        if (err < 0)
            return err;
    }

    if (!completion_done(priv->phy_mac_completion)) {
        if ((err = ehci_usb_mac_init(pdev)) ||
            (err = ehci_usb2_phy_init(pdev)) ||
            (err = ehci_usb_mac_post_init(pdev)))
            goto err_power;

        complete_all(priv->phy_mac_completion);
    }

    ehci_resume(hcd, priv->reset_on_resume);

    start_ehci_polling_check_timer(hcd_to_ehci(hcd));

    return 0;

err_power:
    if (pdata->power_off)
        pdata->power_off(pdev);
    return err;
}
#endif /* CONFIG_PM_SLEEP */


static const struct acpi_device_id ehci_acpi_match[] __maybe_unused= {
    { "PNP0D20", 0 }, /* EHCI controller without debug */
    { }
};
MODULE_DEVICE_TABLE(acpi, ehci_acpi_match);

static const struct platform_device_id ehci_platform_table[] = {
    { "ehci-platform", 0 },
    { }
};
MODULE_DEVICE_TABLE(platform, ehci_platform_table);

static SIMPLE_DEV_PM_OPS(ehci_platform_pm_ops, ehci_platform_suspend,
    ehci_platform_resume);

static struct platform_driver ehci_platform_driver = {
    .id_table   = ehci_platform_table,
    .probe      = ehci_platform_probe,
    .remove     = ehci_platform_remove,
    .shutdown   = usb_hcd_platform_shutdown,
    .driver     = {
        .name = "ehci-platform",
        .pm = &ehci_platform_pm_ops,
        .of_match_table = rtk_ehci_ids,
        .acpi_match_table = ACPI_PTR(ehci_acpi_match),
    }
};

#ifdef CONFIG_USER_INITCALL_USB
static int ehci_platform_init(void)
#else
static int __init ehci_platform_init(void)
#endif
{
    if (usb_disabled())
        return -ENODEV;

    pr_info("%s: " DRIVER_DESC "\n", hcd_name);

    ehci_init_driver(&ehci_platform_hc_driver, &platform_overrides);
    return platform_driver_register(&ehci_platform_driver);
}
#if defined(CONFIG_USER_INITCALL_USB) && !defined(MODULE)
user_initcall_grp("USB", ehci_platform_init);
#else
module_init(ehci_platform_init);
#endif

static void __exit ehci_platform_cleanup(void)
{
    platform_driver_unregister(&ehci_platform_driver);
}
module_exit(ehci_platform_cleanup);

MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR("Hauke Mehrtens");
MODULE_AUTHOR("Alan Stern");
MODULE_LICENSE("GPL");
