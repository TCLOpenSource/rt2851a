#include <linux/module.h>
#include <linux/platform_device.h>
#include <linux/io.h>
#include <linux/of_platform.h>
#include <linux/slab.h>
#include <rtk_kdriver/rtk_gpio.h>
#include <rtk_kdriver/pcbMgr.h>
#include <rtk_kdriver/usb/usb_platform.h>

#define DRIVER_DESC "RTK USB generic platform driver"

/* For thermal */
static int REG_DEGREE = 120;
static int REG_DEGREE_LV2 = 125;
static int REG_DEGREE_LV3 = 130;
#ifdef CONFIG_RTK_KDRV_THERMAL
extern int register_temperature_callback(int degree, void *fn, void* data, char *module_name);
#else
static int register_temperature_callback(int degree, void *fn, void* data, char *module_name) { return 0; }
#endif


/* from usb/storage/usb.c */
extern int get_usb_storage_mount_path_one(char *buf, size_t size);
extern void mount_umount_usb_storage(enum kobject_action action);

static void usb_thermal_callback(void *data, int cur_degree, int reg_degree, char *module_name);


static ssize_t show_storage_mounted_path(struct device *dev, struct device_attribute *attr, char *buf)
{
    char *path_buf;
    size_t size = 512;
    int ret = 0;

    path_buf = kzalloc(size, GFP_KERNEL);
    if (!path_buf)
        return -ENOMEM;

    ret = get_usb_storage_mount_path_one(path_buf, size);
    if (!ret)
        ret = snprintf(buf, size, "%s\n", path_buf);
    kfree(path_buf);

    return ret;
}
static DEVICE_ATTR(storage_mounted_path, S_IRUGO,
        show_storage_mounted_path, NULL);



static ssize_t show_mount_umount_storage_user(struct device *dev, struct device_attribute *attr, char *buf)
{
    const size_t size = 512;

    return snprintf(buf, size, "usage: \n"
            "     mount: echo mount > mount_umount_storage_user\n"
            "     umount: echo umount > mount_umount_storage_user\n");
}

static ssize_t set_mount_umount_storage_user(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
{
    enum kobject_action action;

    if (!strncmp(buf, "mount", 5))
        action = KOBJ_ADD;
    else if (!strncmp(buf, "umount", 6))
        action = KOBJ_REMOVE;
    else {
        pr_err("Unknown action! \n");
        return count;
    }

    mount_umount_usb_storage(action);
    return count;
}
static DEVICE_ATTR(mount_umount_storage_user, S_IRUGO | S_IWUSR,
        show_mount_umount_storage_user, set_mount_umount_storage_user);


static struct attribute *dev_attrs[] = {
    &dev_attr_storage_mounted_path.attr,
    &dev_attr_mount_umount_storage_user.attr,
    NULL,
};


static struct attribute_group dev_attr_grp = {
    .attrs = dev_attrs,
};


static int rtk_usb_platform_probe(struct platform_device *pdev)
{
    struct device *dev = &pdev->dev;
    struct device_node *node = pdev->dev.of_node;
    int error = 0;

    error = of_platform_populate(node, NULL, NULL, dev); /* populate all children nodes of this device */
    if (error)
        dev_err(&pdev->dev, "failed to create rtk usb platform\n");

    if (sysfs_create_group(&dev->kobj, &dev_attr_grp)) {
        pr_warn("Create self-defined sysfs attributes fail \n");
    }

    /* Don't care if fail */
    error = register_temperature_callback(REG_DEGREE, usb_thermal_callback,
            dev, (char *)dev_name(dev));
    if (error) {
        dev_warn(dev, "fail to register thermal callback. error=%d \n", error);
        error = 0;
    }

    return error;
}


static int rtk_usb_platform_remove(struct platform_device *pdev)
{
    sysfs_remove_group(&pdev->dev.kobj, &dev_attr_grp);
    of_platform_depopulate(&pdev->dev);
    platform_set_drvdata(pdev, NULL);

    return 0;
}


static int usb_thermal_usb_off(struct device *dev, void *data)
{
    device_release_driver(dev);
    return 0;
}


static int usb_thermal_usb_on(struct device *dev, void *data)
{
    /* Returns 1 if the device was bound to a driver;
     * 0 if no matching driver was found;
     * -ENODEV if the device is not registered. */
    if (device_attach(dev) == 1)
        return 0;
    return -1;
}


static void usb_thermal_callback(void *data, int cur_degree,
        int reg_degree, char *module_name)
{
    struct device *dev = (struct device *)data;

    dev_info(dev, "[thermal] cur_deg: %d, reg_deg: %d, REG_DEG: %d, REG_DEG_LV2: %d, REG_DEG_LV3: %d\n",
            cur_degree, reg_degree, REG_DEGREE, REG_DEGREE_LV2, REG_DEGREE_LV3);

    if (cur_degree >= REG_DEGREE_LV3) {
        device_lock(dev);
        device_for_each_child(dev, NULL, usb_thermal_usb_off);
        device_unlock(dev);
    } else if (cur_degree <= REG_DEGREE) {
        device_lock(dev);
        device_for_each_child(dev, NULL, usb_thermal_usb_on);
        device_unlock(dev);
    }
}


/* For thermal driver to set the degree of throttle */
void usb_thermal_level_set(int t0, int t1, int t2)
{
    /* check temprature is valid */
    if ((t2 < 135) && (t2 > t1) && (t1 > t0)) {
        REG_DEGREE = t0;
        REG_DEGREE_LV2 = t1;
        REG_DEGREE_LV3 = t2;
    }
}
EXPORT_SYMBOL_GPL(usb_thermal_level_set);


#ifdef CONFIG_CUSTOMER_TV030
bool is_MTK_usb_wifi_bt_dev(struct usb_device *udev)
{
    if (udev->descriptor.idVendor == 0x0e8d &&
            udev->descriptor.idProduct == 0x7668)
        return true;

    /* In TCL2851, 1-3 is wifi/bt */
    if (udev->parent && !udev->parent->parent &&
            udev->bus->busnum == 1 &&
            udev->portnum == 3)
        return true;

    return false;
}
EXPORT_SYMBOL_GPL(is_MTK_usb_wifi_bt_dev);


int usb_set_MTK_wifi_off_on(bool on)
{
    RTK_GPIO_ID gid;
    u64 pin;
    int ret = 0;
    char *pin_name = "PIN_WIFI_ON";

    ret = pcb_mgr_get_enum_info_byname(pin_name, &pin);
    if (ret) {
        pr_warn("%s: fail to get PCB parameter (%s)\n", __func__, pin_name);
        return -ENODEV;
    }

    if (GET_PIN_TYPE(pin) != PCB_PIN_TYPE_ISO_GPIO) {
        pr_warn("%s: wrong pin type(0x%x)\n", __func__, GET_PIN_TYPE(pin));
        return -EINVAL;
    }

    gid = rtk_gpio_id(ISO_GPIO, GET_PIN_INDEX(pin));
    ret = rtk_gpio_output(gid, on);
    if (ret)
        return ret;

    return rtk_gpio_set_dir(gid, 1);  // set gpio to output mode
}
EXPORT_SYMBOL_GPL(usb_set_MTK_wifi_off_on);
#else
bool is_MTK_usb_wifi_bt_dev(struct usb_device *udev) { return false; }
int usb_set_MTK_wifi_off_on(bool on) { return false; }
#endif


static const struct of_device_id rtk_usb_of_match[] = {
    { .compatible = "rtk,usb-platform", },
    {},
};
MODULE_DEVICE_TABLE(of, rtk_usb_of_match);


static struct platform_driver rtk_usb_platform_driver = {
    .probe      = rtk_usb_platform_probe,
    .remove     = rtk_usb_platform_remove,
    .driver     = {
        .name = "usb-platform",
        .of_match_table = rtk_usb_of_match,
    }
};


static int __init rtk_usb_platform_init(void)
{
    return platform_driver_register(&rtk_usb_platform_driver);
}
module_init(rtk_usb_platform_init);


static void __exit rtk_usb_platform_cleanup(void)
{
    platform_driver_unregister(&rtk_usb_platform_driver);
}
module_exit(rtk_usb_platform_cleanup);


MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR("Jason Chiu");
MODULE_LICENSE("GPL");
