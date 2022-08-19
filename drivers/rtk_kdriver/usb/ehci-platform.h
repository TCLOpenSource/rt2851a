#ifndef __RTK_EHCI_PLAT_H__
#define __RTK_EHCI_PLAT_H__
#include <linux/io.h>
#include <linux/usb.h>
#include <linux/usb/hcd.h>
#include <rtk_kdriver/usb/ehci.h>


/* platform ID */
typedef enum {
    ID_EHCI_TOP,
    ID_EHCI_EX_TOP
} EHCI_PLAT_ID;


#define ehci_plat_dbg(ehci, fmt, args...)           pr_debug("%s: " fmt, dev_name(ehci_to_hcd(ehci)->self.controller), ## args)
#define ehci_plat_info(ehci, fmt, args...)          dev_info(ehci_to_hcd(ehci)->self.controller, fmt, ## args)
#define ehci_plat_warn(ehci, fmt, args...)          dev_warn(ehci_to_hcd(ehci)->self.controller, fmt, ## args)


/* debug control flag */
#define NO_EHCI_POLLING_CHECK  (0x1)


typedef struct {
    unsigned char page;
    unsigned char addr;
} U2_PHY_REG;


typedef struct {
    int port1;
    unsigned char addr;
    unsigned char val;
} U2_PHY_REGISTER;


typedef struct {
    int id;
    U2_PHY_REGISTER* p_reg_table;
    unsigned int     n_reg;
} U2_PHY_CONFIG;


struct vstatus_reg {
    int id;
    unsigned long regs[EHCI_MAX_ROOT_PORTS];
};


struct ehci_completion {
    int id;
    struct completion *phy_mac_completion;
};


#define EHCI_POLLING_CHECK_TIME     500
extern void start_ehci_polling_check_timer(struct ehci_hcd *ehci);
extern void stop_ehci_polling_check_timer(struct ehci_hcd *ehci);

extern ssize_t _get_ehci_portsc_str(struct ehci_hcd *ehci, char *buf, size_t size);

extern const U2_PHY_REG u2_phy_reg_table[];

extern U2_PHY_CONFIG *id_get_ehci_phy_config(int id);
extern unsigned long *id_get_ehci_vstatus_regs(int id);
extern struct completion *id_get_ehci_completion(int id);

extern int get_ehci_usb2_phy_reg(struct ehci_hcd *ehci, unsigned char port1, unsigned char page, unsigned char addr);
extern int set_ehci_usb2_phy_reg(struct ehci_hcd *ehci, unsigned char port1, unsigned char page, unsigned char addr, unsigned char val);

/* CRC related func */
extern int enble_usb2_wrap_crc(struct ehci_hcd *ehci, bool on);
extern int reset_usb2_wrap_crc(struct ehci_hcd *ehci);
extern int get_usb2_wrap_crc_err_cnt(struct ehci_hcd *ehci, int port1);

#endif
