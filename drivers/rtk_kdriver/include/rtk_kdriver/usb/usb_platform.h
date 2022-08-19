#ifndef _USB_PLATFORM_H_
#define _USB_PLATFORM_H_
#include <linux/usb.h>


extern int usb_set_MTK_wifi_off_on(bool on);
extern bool is_MTK_usb_wifi_bt_dev(struct usb_device *udev);


#endif
