#include <linux/mutex.h>
#include <linux/kref.h>
#include <rbus/usb_top_reg.h>
#include <rtk_kdriver/io.h>
#include <rtk_kdriver/rtk_crt.h>
#include <rtk_kdriver/usb/usb2_crt.h>

static DEFINE_MUTEX(crt_mutex);
static bool usb2_crt_power_on_done = false;
static struct kref crt_kref;

bool is_usb2_on(void)
{
    bool is_mac_clk_on = false, is_mac_release = false, is_phy_release = false;
    unsigned int data;

    // clock: USB MAC
    data = rtd_inl(SYS_REG_SYS_CLKEN2_reg);
    is_mac_clk_on = SYS_REG_SYS_CLKEN2_get_clken_usb2_dwc(data) & SYS_REG_SYS_CLKEN2_get_clken_usb2_wrapper(data);

    // reset: USB MAC
    data = rtd_inl(SYS_REG_SYS_SRST2_reg);
    is_mac_release = SYS_REG_SYS_SRST2_get_rstn_usb2_dwc(data) & SYS_REG_SYS_SRST2_get_rstn_usb2_wrapper(data);

    // reset: USB PHY
    data = rtd_inl(SYS_REG_SYS_SRST3_reg);
    is_phy_release = (SYS_REG_SYS_SRST3_get_rstn_usb2_phy_p0(data) &
                      SYS_REG_SYS_SRST3_get_rstn_usb2_phy_p1(data) &
                      SYS_REG_SYS_SRST3_get_rstn_usb2_phy_p2(data));

    return (is_mac_clk_on && is_mac_release && is_phy_release);
}
EXPORT_SYMBOL(is_usb2_on);


void usb2_crt_power_on_sequence(void)
{
    mutex_lock(&crt_mutex);

    if (!usb2_crt_power_on_done || !is_usb2_on()) {
        CRT_CLK_OnOff(USB, CLK_OFF, (void *)2);
        CRT_CLK_OnOff(USB, CLK_ON, (void *)2);
        usb2_crt_power_on_done = true;
    }

    // unmask interrupt if it's masked.
    if (!USB_TOP_USB_CTR0_get_usb_top_int_en(rtd_inl(USB_TOP_USB_CTR0_reg)))
        rtd_setbits(USB_TOP_USB_CTR0_reg, USB_TOP_USB_CTR0_usb_top_int_en_mask);

    mutex_unlock(&crt_mutex);
}
EXPORT_SYMBOL(usb2_crt_power_on_sequence);


void usb2_crt_power_off_sequence(void)
{
    mutex_lock(&crt_mutex);
    if (is_usb2_on())
        CRT_CLK_OnOff(USB, CLK_OFF, (void *)2);
    mutex_unlock(&crt_mutex);
}
EXPORT_SYMBOL(usb2_crt_power_off_sequence);


static void usb2_crt_release(struct kref *kref)
{
    usb2_crt_power_off_sequence();
}


void usb2_crt_get(void)
{
    /* Cause kernel of android P enable CONFIG_REFCOUNT_FULL
     * which will check if refcount is 0 before increasing.
     * This is what we don't want, so we just impletment it via
     * atomic increse. */
    atomic_inc(&crt_kref.refcount.refs);
}
EXPORT_SYMBOL(usb2_crt_get);


void usb2_crt_put(void)
{
    kref_put(&crt_kref, usb2_crt_release);
}
EXPORT_SYMBOL(usb2_crt_put);
