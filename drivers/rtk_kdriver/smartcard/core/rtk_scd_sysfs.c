#include <linux/sched.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include "rtk_scd.h"
#include "rtk_scd_debug.h"
#include "rtk_scd_sysfs.h"


static ssize_t rtk_scd_attr_show(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    scd_device *p_dev = to_scd_device(dev);
    scd_driver *p_drv = to_scd_driver(dev->driver);
    int  n;
    int  count = PAGE_SIZE;
    char *ptr = buf;
    unsigned long val;

    if (strcmp(attr->attr.name, "debug_ctrl") == 0)
    {
        n = scnprintf(ptr, count, "log_on=%d\n", smc_log_onoff);
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "print_rtx=%d\n", smc_print_rtx);
        ptr+=n; count-=n;
    }
    else if (strcmp(attr->attr.name, "config") == 0)
    {
        if (p_drv->get_param(p_dev, SC_PARAM_VCC_LVL, &val)==0)
        {
            n = scnprintf(ptr, count, "vcc_lvl=%lu (0: 3.3V, 1: 5V)\n", val);
            ptr+=n; count-=n;
        }
        if (p_drv->get_param(p_dev, SC_PARAM_CLOCK, &val)==0)
        {
            n = scnprintf(ptr, count, "clock=%lu Hz\n", val);
            ptr+=n; count-=n;
        }
        if (p_drv->get_param(p_dev, SC_PARAM_ETU, &val)==0)
        {
            n = scnprintf(ptr, count, "etu=%lu\n", val);
            ptr+=n; count-=n;
        }
        if (p_drv->get_param(p_dev, SC_PARAM_CONV, &val)==0)
        {
            n = scnprintf(ptr, count, "conv=%lu (0: auto, 1:direct, 2: inversed)\n", val);
            ptr+=n; count-=n;
        }
        if (p_drv->get_param(p_dev, SC_PARAM_PARITY, &val)==0)
        {
            n = scnprintf(ptr, count, "parity=%lu (0: none, 1:odd, 2: even)\n", val);
            ptr+=n; count-=n;
        }
    }

    return ptr - buf;
}


static ssize_t rtk_scd_attr_store(
    struct device*              dev,
    struct device_attribute*    attr,
    const char*                 buf,
    size_t                      count
    )
{
    scd_device *p_dev = to_scd_device(dev);
    scd_driver *p_drv = to_scd_driver(dev->driver);
    unsigned long val;

    if (strcmp(attr->attr.name, "debug_ctrl") == 0)
    {
        if (sscanf(buf, "print_rtx=%lu", &val)==1)
        {
            smc_print_rtx = (val) ? 1 : 0;
            SC_INFO("Smart Card I/O debug message output %s\n", (smc_print_rtx) ? "Enabled" : "Disabled");
        }
        else if (sscanf(buf, "log_on=%lu", &val)==1)
        {
            smc_log_onoff = (val) ? 1 : 0;
            SC_INFO("Smart Card debug message output %s\n", (smc_log_onoff) ? "Enabled" : "Disabled");
        }
    }
    else if (strcmp(attr->attr.name, "config") == 0)
    {
        if (sscanf(buf, "vcc_lvl=%lu", &val)==1)
        {
            if (val >=SC_VCC_3V && val <= SC_VCC_5V)
                p_drv->set_param(p_dev, SC_PARAM_VCC_LVL, (val) ? 1 : 0);
            else
                SC_WARNING("unknown vcc lvl - %lu\n", val);
        }
        else if (sscanf(buf, "clock=%lu", &val)==1)
        {
            if (val > 1000000)
                p_drv->set_param(p_dev, SC_PARAM_CLOCK, (unsigned long) val);
            else
                SC_WARNING("invalid clock - %lu (clock should more than or equal to 1000000)\n", val);
        }
        else if (sscanf(buf, "etu=%lu", &val)==1)
        {
            if (val>=16)
                p_drv->set_param(p_dev, SC_PARAM_ETU, (unsigned long) val);
            else
                SC_WARNING("invalid etu - %lu (etu should more than or equal to 16)\n", val);
        }
        else if (sscanf(buf, "conv=%lu", &val)==1)
        {
            if (val >=SC_AUTO_CONV && val <= SC_INVERSE_CONV)
                p_drv->set_param(p_dev, SC_PARAM_CONV, (unsigned long) val);
            else
                SC_WARNING("unknown convention - %lu\n", val);
        }
        else if (sscanf(buf, "parity=%lu", &val)==1)
        {
            if (val >=SC_PARITY_NONE && val <=SC_PARITY_EVEN)
                p_drv->set_param(p_dev, SC_PARAM_PARITY, (unsigned long) val);
            else
                SC_WARNING("unknown parity - %lu\n", val);
        }
    }

    return count;
}


static DEVICE_ATTR(debug_ctrl, S_IWUSR|S_IWGRP|S_IRUGO, rtk_scd_attr_show, rtk_scd_attr_store);
static DEVICE_ATTR(config, S_IWUSR|S_IWGRP|S_IRUGO, rtk_scd_attr_show, rtk_scd_attr_store);

void rtk_scd_sysfs_create(struct device *device)
{
    device_create_file(device,&dev_attr_config);
    device_create_file(device,&dev_attr_debug_ctrl);    
}

void rtk_scd_sysfs_destroy(struct device *device)
{
    device_remove_file(device, &dev_attr_config); 
    device_remove_file(device, &dev_attr_debug_ctrl);
}
