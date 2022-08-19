#ifndef __RTK_LED_SERIAL_H__
#define __RTK_LED_SERIAL_H__
#include <mach/rtk_log.h>
#ifdef CONFIG_REALTEK_PCBMGR
#include <mach/pcbMgr.h>
#endif
#include <rbus/stb_reg.h>
#include <rbus/pinmux_reg.h>
/* DEFINE */
#undef  TAG_NAME
#define TAG_NAME  "LEDSERIAL"
#ifndef BIT0
#define BIT0                 	0x00000001
#endif
#define UART_RBR_THR_DLL     	(ISO_MISC_OFF_UART_U0RBR_THR_DLL_reg)
#define UART_IER_DLH        	(ISO_MISC_OFF_UART_U0IER_DLH_reg)
#define UART_IIR_FCR        	(ISO_MISC_OFF_UART_U0IIR_FCR_reg)
#define UART_LCR             	(ISO_MISC_OFF_UART_U0LCR_reg)
#define UART_CLKMUX          	(STB_ST_CLKMUX_reg)
#define UART2_ENABLE_FIFO()   	(0x01 << 0 )
#define UART2_TX_FIFO_RESET()	(0x01 << 2 )
#define LEDSERIAL_PINMUX      	(PINMUX_ST_GPIO_ST_CFG_6_reg)
#define LEDSERIAL_GPIO_TYPE   	ISO_GPIO	
#define LEDSERIAL_GPIO_INDEX  	44
#define LED_COUNT_MAX           8
#define LED_COLOR_COUNT         4
#define LEDSERIAL_WARN(fmt, args...)	rtd_printk(KERN_WARNING , TAG_NAME , "[Warn]" fmt, ## args)
#define LEDSERIAL_ERROR(fmt, args...)	rtd_printk(KERN_ERR , TAG_NAME , "[Error]" fmt, ## args)
/* STRUCT */
typedef struct {
    unsigned char  inited;
    unsigned int uart_lcr_value;
    unsigned int uart_ier_dlh_value;
    unsigned int uart_rbr_thr_dll_value;
    unsigned int uart_iir_fcr_value;
    unsigned int uart_clkmux_value;
} LED_UART_REG_BAKUP;
typedef struct {
    int count;
    int colors[LED_COUNT_MAX];
} LED_COLOR_INPUT;
typedef struct _RTK_LEDSERIAL {
    bool mapped;
    char nodename[16];
    int index;
    int pinNumber;
    struct device *ledserial_device_st;
} RTK_LEDSERIAL_ATTR;
/* IOCTL */
#define RTK_LED_IOC_MAGIC        	'l'
#define RTK_LED_IOC_SET_COLOR    	_IOW(RTK_LED_IOC_MAGIC, 1, int)
#define RTK_LED_IOC_DEINIT      	_IOW(RTK_LED_IOC_MAGIC, 2, int)
#define RTK_LED_IOC_INIT         	_IOW(RTK_LED_IOC_MAGIC, 3, int)
#define RTK_LED_IOC_TEST        	_IOW(RTK_LED_IOC_MAGIC, 4, int)
#endif
