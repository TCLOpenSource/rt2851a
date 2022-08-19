#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/fs.h>
#include <linux/err.h>
#include <linux/export.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/io.h>
#include <linux/irq.h>
#include <linux/init.h>
#include <linux/ioctl.h>
#include <linux/ioport.h>
#include <linux/kfifo.h>
#include <linux/kernel.h>
#include <linux/of.h>
#include <linux/platform_device.h>
#include <linux/types.h>
#include <linux/slab.h>
#include <linux/signal.h>
#include <linux/stat.h>
#include <linux/uaccess.h>
#include <linux/delay.h>

#include <mach/rtk_log.h>
#include <rbus/iso_misc_off_uart_reg.h>
#include <rbus/rbus_types.h>
#include <rbus/misc_uart_reg.h>

#include <rtk_kdriver/rtk_gpio.h>
#include "rtk_led_serial.h"

int ledserial_dev_major;
int ledserial_dev_minor;

static int m_disable_ledserial_ioctl=0;
static int m_enable_ledserial_print=0;
static int m_mode=0;

struct cdev *dev_cdevp_ledserial = NULL;
static struct device *ledserial_device_st;
static struct class *_gstledserial_class;
static struct platform_device *pst_rtk_ledserial_platform_dev;

static DEFINE_MUTEX(rtk_led_serial_mutex);

RTK_LEDSERIAL_ATTR _gLedSerialtInfo;
LED_UART_REG_BAKUP _gUartRegBakup;

static void ledserial_part_outl(unsigned int reg_addr, unsigned int endBit, unsigned int startBit, unsigned int value)
{
	unsigned int X,A,result;

	X=(1<<(endBit-startBit+1))-1;
	A=rtd_inl(reg_addr);

	result = (A & (~(X<<startBit))) | (value<<startBit);
	rtd_outl(reg_addr,result);
}

//uart led setting
static void _uart_led_setting(void)
{
	unsigned int clkmux_regvalue;
	iso_misc_off_uart_u0lcr_RBUS         	uart_lcr;
	iso_misc_off_uart_u0ier_dlh_RBUS      	uart_ier_dlh;
	iso_misc_off_uart_u0rbr_thr_dll_RBUS  	uart_rbr_thr_dll;
	iso_misc_off_uart_u0iir_fcr_RBUS    	uart_iir_fcr;


	uart_lcr.regValue = rtd_inl(UART_LCR) ;
	uart_lcr.dlab = 0x01;
	rtd_outl( UART_LCR , uart_lcr.regValue );
    
	uart_ier_dlh.regValue = rtd_inl(UART_IER_DLH) ;
	uart_rbr_thr_dll.regValue = rtd_inl(UART_RBR_THR_DLL);
	uart_iir_fcr.regValue = rtd_inl(UART_IIR_FCR);
	clkmux_regvalue = rtd_inl(UART_CLKMUX);

	//bakup the uart register when first call
	if(!_gUartRegBakup.inited)
	{		 
		_gUartRegBakup.uart_lcr_value = uart_lcr.regValue;
		_gUartRegBakup.uart_ier_dlh_value = uart_ier_dlh.regValue;
		_gUartRegBakup.uart_rbr_thr_dll_value = uart_rbr_thr_dll.regValue;
		_gUartRegBakup.uart_clkmux_value = clkmux_regvalue;
		_gUartRegBakup.uart_iir_fcr_value = uart_iir_fcr.regValue;
		_gUartRegBakup.inited = 1;
	}
	//clk setting
	rtd_outl(UART_CLKMUX, clkmux_regvalue & (~BIT0));

	uart_lcr.dlab = 0x01;
	uart_lcr.wls = 0x01;
	rtd_outl( UART_LCR , uart_lcr.regValue );

	uart_rbr_thr_dll.dll = 0x02;
	uart_ier_dlh.dlh = 0x00;

	rtd_outl( UART_RBR_THR_DLL , uart_rbr_thr_dll.regValue );
	rtd_outl( UART_IER_DLH , uart_ier_dlh.regValue );

	uart_iir_fcr.iid = uart_iir_fcr.iid |  UART2_ENABLE_FIFO()  | UART2_TX_FIFO_RESET();
	rtd_outl( UART_IIR_FCR , uart_iir_fcr.regValue );

	uart_lcr.regValue = rtd_inl(UART_LCR) ;
	uart_lcr.dlab = 0x00;
	rtd_outl( UART_LCR , uart_lcr.regValue );

	mdelay(10);
	//LEDSERIAL_WARN("rtd_inl(UART_IER_DLH):0x%x \n",rtd_inl(UART_IER_DLH));
	//LEDSERIAL_WARN("rtd_inl(UART_RBR_THR_DLL):0x%x\n",rtd_inl(UART_RBR_THR_DLL));
	//LEDSERIAL_WARN("rtd_inl(UART_IIR_FCR):0x%x \n",rtd_inl(UART_IIR_FCR));
	//LEDSERIAL_WARN("rtd_inl(UART_CLKMUX):0x%x\n",rtd_inl(UART_CLKMUX));
	LEDSERIAL_WARN("rtd_inl(UART_LCR):0x%x \n",rtd_inl(UART_LCR));
}

//restore before uart setting
static void  _uart_restore_before_setting( void )
{

#if 1
	if(m_mode == 0)
	{
		iso_misc_off_uart_u0lcr_RBUS        uart_lcr;
		uart_lcr.regValue = _gUartRegBakup.uart_lcr_value;
		uart_lcr.dlab = 0x01;
		//LEDSERIAL_WARN("%s _gUartRegBakup.uart_lcr_value=0x%x, \n" , __func__,_gUartRegBakup.uart_lcr_value);
		rtd_outl( UART_CLKMUX ,_gUartRegBakup.uart_clkmux_value);
		LEDSERIAL_WARN("%s _gUartRegBakup.uart_clkmux_value=0x%x, \n" , __func__,_gUartRegBakup.uart_clkmux_value);
		rtd_outl( UART_LCR , uart_lcr.regValue);

		//LEDSERIAL_WARN("%s _gUartRegBakup.uart_ier_dlh_value=0x%x, \n" , __func__,_gUartRegBakup.uart_ier_dlh_value);
		//LEDSERIAL_WARN("%s _gUartRegBakup.uart_rbr_thr_dll_value=0x%x, \n" , __func__,_gUartRegBakup.uart_rbr_thr_dll_value);
		rtd_outl( UART_IER_DLH , _gUartRegBakup.uart_ier_dlh_value );
		rtd_outl( UART_RBR_THR_DLL , _gUartRegBakup.uart_rbr_thr_dll_value);

		uart_lcr.dlab = 0x01;
		rtd_outl( UART_LCR , uart_lcr.regValue);
		LEDSERIAL_WARN("%s _gUartRegBakup.uart_iir_fcr_value=0x%x, \n" , __func__,_gUartRegBakup.uart_iir_fcr_value);
		rtd_outl( UART_IIR_FCR , _gUartRegBakup.uart_iir_fcr_value);
		_gUartRegBakup.inited = 0;
		uart_lcr.dlab = 0x00;
		rtd_outl( UART_LCR , uart_lcr.regValue);
	}else
	{
	}
#else

#endif
}

//uart serial send 2bit
static int _uart_led_send_2bits(int dat)
{
	iso_misc_off_uart_u0rbr_thr_dll_RBUS uart_rbr_thr;

	uart_rbr_thr.regValue = rtd_inl(UART_RBR_THR_DLL);

	switch(dat&3)
	{
		case 0:
			uart_rbr_thr.dll = 0x37;//0x3B;//11 0111
			break;
		case 1:
			uart_rbr_thr.dll = 0x07;//000111;//10 0111
			break;
		case 2:
			uart_rbr_thr.dll = 0x34;// 110100 0x36;//11 0110
			break;
		case 3:
			uart_rbr_thr.dll = 0x04;// 00 0100 //0x26;//10 0110
			break;
		default:
			break;
	}
	rtd_outl( UART_RBR_THR_DLL , uart_rbr_thr.regValue );
	return 0 ;
}

//uart send 24bit 
static int _uart_led_send_24bits( unsigned int data )
{
	int i = 0 ;

	for( i = 22 ; i >= 0 ; i=i-2 )
	{
		_uart_led_send_2bits(((data>>i) & 3));
	}
	return 0 ;
}

//serial output 24bit for one led
static int rtk_led_serial_send_24bits( unsigned int data )
{
#if 1 
	_uart_led_send_24bits(data); //uart serial
#else 
	//_spi_send_24bits(data); //spi serial
#endif
	return 0 ;
}

//serial output data 
static int rtk_ledserial_send_bytes( int count , unsigned int *data )
{
	int i = 0;
	
	if(m_mode)		//UART mode send data
	{
		if(data == NULL || count == 0 || count > LED_COUNT_MAX){
			LEDSERIAL_ERROR("send IO LED data NULL\n");
			return -1;
		}
		for( i = 0 ; i < count ; ++i ){
			rtk_led_serial_send_24bits(data[i]);
		}
		if(m_enable_ledserial_print){
			LEDSERIAL_WARN("%s data[0]=0x%x, data[1] = 0x%x , data[2] = 0x%x , data[3] = 0x%x \n" , __func__,data[0], data[1],data[2],data[3]);
		}
	}else			//GPIO not send data
	{
		LEDSERIAL_ERROR("GPIO mode can't send IO LED data\n");
		return -1;
	}
	return 0 ;
}

//serial led setting
static void  rtk_ledserial_set_logicalmode( void )
{
#if 1 
	_uart_led_setting(); //uart serial
#else
	//_spi_led_setting(); //spi serial
#endif
	LEDSERIAL_WARN("%s  \n" , __func__);
	ledserial_part_outl(LEDSERIAL_PINMUX, 7, 4, 0x4);
	m_mode = 1;
}

//serial restore before setting
static void  rtk_ledserial_restore_setting( void )
{
	LEDSERIAL_WARN("%s  \n" , __func__);
	ledserial_part_outl(LEDSERIAL_PINMUX, 7, 4, 0xF);
	mdelay(1);
	m_mode = 0;
#if 1 
	_uart_restore_before_setting(); //uart serial
#else
	//_spi_restore_before_setting(); //spi serial
#endif

}

static int rtk_ledserial_test_mode(bool led_on_off)
{
	int i = 0;

	if(m_mode == 0)
	{
		LEDSERIAL_WARN("rtk_ledserial_test_mode led_on_off ==%d\n",led_on_off);
		if(led_on_off)
		{
			for(i=0; i<50; i++)
			{
			rtk_gpio_output(rtk_gpio_id(LEDSERIAL_GPIO_TYPE, LEDSERIAL_GPIO_INDEX),0);
			rtk_gpio_output(rtk_gpio_id(LEDSERIAL_GPIO_TYPE, LEDSERIAL_GPIO_INDEX),1);
			}
		}
		else
		{
			for(i=0; i<50; i++)
			{
			rtk_gpio_output(rtk_gpio_id(LEDSERIAL_GPIO_TYPE, LEDSERIAL_GPIO_INDEX),1);
			rtk_gpio_output(rtk_gpio_id(LEDSERIAL_GPIO_TYPE, LEDSERIAL_GPIO_INDEX),0);
			}
		}
		
	}else{
		LEDSERIAL_ERROR("UART mode can't Apply Test Mode\n");
		return -1;
	}
	return 0;
}

#ifdef CONFIG_PM
/*static int rtk_pwm_suspend(struct platform_device *dev, pm_message_t state)*/
static int rtk_ledserial_suspend(struct device *dev)
{
	LEDSERIAL_WARN("rtk_ledserial_suspend\n");
	rtk_ledserial_restore_setting();
	return 0;
}

/*static int rtk_pwm_resume(struct platform_device *dev)*/
static int rtk_ledserial_resume(struct device *dev)
{
	LEDSERIAL_WARN("rtk_ledserial_resume\n");
	rtk_ledserial_set_logicalmode();
	return 0;
}

#ifdef CONFIG_HIBERNATION
static int rtk_ledserial_suspend_std(struct device *dev)
{
	LEDSERIAL_WARN("%s \n" , __func__);

	return 0;
}
static int rtk_ledserial_resume_std(struct device *dev)
{
	LEDSERIAL_WARN("%s \n" , __func__);

	return 0;
}
#endif

static const struct dev_pm_ops rtk_ledserial_pm_ops = {

	.suspend 	= rtk_ledserial_suspend,
	.resume 	= rtk_ledserial_resume,
#ifdef CONFIG_HIBERNATION
	.freeze 	= rtk_ledserial_suspend_std,
	.thaw  		= rtk_ledserial_resume_std,
#endif
};
#endif

static int rtk_ledserial_probe(struct platform_device *pdev)
{
	LEDSERIAL_WARN("%s():\n", __FUNCTION__);
	return 0;
}

static int rtk_ledserial_remove(struct platform_device *pdev)
{
	LEDSERIAL_WARN("%s():\n", __FUNCTION__);

	return 0;
}

static ssize_t rtk_ledserial_read(struct file *filp, char __user *buf, size_t count, loff_t *f_pos)
{
	LEDSERIAL_WARN("%s():\n", __FUNCTION__);
	return -EFAULT;
}

static ssize_t rtk_ledserial_write(struct file *filp, const char __user *buf, size_t count, loff_t *f_pos)
{
	LEDSERIAL_WARN("%s():\n", __FUNCTION__);
	return -EFAULT;
}

static int rtk_ledserial_open(struct inode *inode, struct file *filp)
{
	return 0;
}

static int rtk_ledserial_release(struct inode *inode, struct file *filp)
{
	return 0;
}

static long rtk_ledserial_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
{
	int retval = 0;
	LED_COLOR_INPUT color_input;
	bool led_on_off = false;
	if(m_disable_ledserial_ioctl)
		return retval;
	mutex_lock(&rtk_led_serial_mutex);
	switch (cmd) {

		case RTK_LED_IOC_SET_COLOR:
			if (copy_from_user((void *)&color_input, (const void __user *)arg, sizeof(LED_COLOR_INPUT))) 
			{
				retval = -EFAULT;
				break;
			}
			retval = rtk_ledserial_send_bytes(color_input.count, color_input.colors);
			break;
		case RTK_LED_IOC_INIT:
			rtk_ledserial_set_logicalmode();
			break;

		case RTK_LED_IOC_DEINIT:
			rtk_ledserial_restore_setting();
			break;
		case RTK_LED_IOC_TEST:
		    if (copy_from_user((void *)&led_on_off, (const void __user *)arg, sizeof(bool))) 
			{
				retval = -EFAULT;
				break;
			}
			retval = rtk_ledserial_test_mode(led_on_off);
			break;
		default:
			LEDSERIAL_WARN("Unknow commnad \n");
			retval = -ENOTTY;
			break;
	}

	mutex_unlock(&rtk_led_serial_mutex);
	return retval;
}


static struct file_operations rtk_ledserial_fops = {
	.owner 			= THIS_MODULE,
	.read 			= rtk_ledserial_read,
	.write 			= rtk_ledserial_write,
	.unlocked_ioctl = rtk_ledserial_ioctl,
	.release 		= rtk_ledserial_release,
	.open 			= rtk_ledserial_open,

};


static const struct of_device_id rtk_ledserial_devices[] = {
	{.compatible = "rtk-ledserial",},
	{},
};

static struct platform_driver rtk_ledserial_driver = {
	.driver = {
		.name = "rtk-ledserial",
		.owner = THIS_MODULE,
		.of_match_table = of_match_ptr(rtk_ledserial_devices),
#ifdef CONFIG_PM
		.pm	= &rtk_ledserial_pm_ops,
#endif
	},
	.probe = rtk_ledserial_probe,
	.remove = rtk_ledserial_remove,
};


ssize_t rtk_ledserial_show_param(struct device *dev,struct device_attribute *attr, char *buf)
{
	int ret = 0;
	RTK_LEDSERIAL_ATTR *ledserial = NULL;

	if (dev->platform_data != NULL) {
		ledserial = (RTK_LEDSERIAL_ATTR *) dev->platform_data;
		if (ledserial->mapped == false) {
			LEDSERIAL_WARN("This ledserial isn't initialize.\n");
			return 0;
		}
	}
	if( ledserial == NULL){
		LEDSERIAL_WARN("ledserial is null.\n");
		return 0;
	}
	if (strncmp(attr->attr.name, "ledserial", strlen("ledserial")  ) == 0) {

		LEDSERIAL_WARN("not support read ledserial .\n");
	} else if (strncmp(attr->attr.name, "disable_ioctl", strlen("disable_ioctl")) == 0) {

		ret = sprintf(buf, "%d\n", m_disable_ledserial_ioctl);
	}else if (strncmp(attr->attr.name, "mode", strlen("mode")) == 0) {

		ret = sprintf(buf, "%s\n", ((m_mode)?"UART":"GPIO"));
	}else if (strncmp(attr->attr.name, "enable_print", strlen("enable_print")) == 0) {
		ret = sprintf(buf, "%d\n", m_enable_ledserial_print);
	}
	return ret;
}

ssize_t rtk_ledserial_set_param(struct device *dev,
			     struct device_attribute *attr,
			     const char *buf, size_t count)
{
	int i=0;
	RTK_LEDSERIAL_ATTR *ledserial = NULL;
	unsigned int led_data[LED_COLOR_COUNT] = {0};

	if (dev->platform_data != NULL) {
		ledserial = (RTK_LEDSERIAL_ATTR *) dev->platform_data;
		if (ledserial->mapped == false) {
			LEDSERIAL_WARN("This LEDSERIAL isn't initialize.\n");
			return 0;
		}
	}

	if( ledserial == NULL){
		LEDSERIAL_WARN("ledserial is null.\n");
		return 0;
	}

	if (strncmp(attr->attr.name, "ledserial", strlen("ledserial")) == 0) {

		sscanf(buf,"0x%x 0x%x 0x%x 0x%x ",&led_data[0],&led_data[1],
						&led_data[2],&led_data[3]);
		rtk_ledserial_send_bytes(LED_COLOR_COUNT, led_data);
		if(m_enable_ledserial_print){
			LEDSERIAL_WARN("ledserial led_data[%d]:%d\n",i,led_data[i]);
		}
	}else if (strncmp(attr->attr.name, "disable_ioctl", strlen("disable_ioctl")) == 0) {
		unsigned int  disable_ioctl;
		sscanf(buf,"%d",&disable_ioctl);
		if (disable_ioctl== 0 ){
			m_disable_ledserial_ioctl = disable_ioctl;
			if(m_enable_ledserial_print)
				LEDSERIAL_WARN("all ledserial ioctl disactive \n");
		}else if( disable_ioctl== 1){
			m_disable_ledserial_ioctl = disable_ioctl;
			if(m_enable_ledserial_print)
				LEDSERIAL_WARN("all ledserial ioctl active \n");
		}else{
			if(m_enable_ledserial_print)
				LEDSERIAL_WARN("access disable_ioctl Fail!\n");
		}
	}else if (strncmp(attr->attr.name, "mode", strlen("mode")) == 0) {
		unsigned int  mode;
		sscanf(buf,"%d",&mode);
		if (mode == 0 ){
			m_mode = mode;
			rtk_ledserial_restore_setting();
			if(m_enable_ledserial_print)
				LEDSERIAL_WARN("mode is gpio \n");
		}else if(mode == 1){
			m_mode = mode;
			rtk_ledserial_set_logicalmode();
			if(m_enable_ledserial_print)
				LEDSERIAL_WARN("Mode is Uart \n");
		}else{
			if(m_enable_ledserial_print)
				LEDSERIAL_WARN("access mode Fail!\n");
		}
	}else if (strncmp(attr->attr.name, "enable_print", strlen("enable_print")) == 0) {
		unsigned int  enable_print;
		sscanf(buf,"%d",&enable_print);
		if (enable_print == 0 ){
			m_enable_ledserial_print = enable_print;

		}else if( enable_print == 1){
			m_enable_ledserial_print = enable_print;

		}else{
			if(m_enable_ledserial_print)
				LEDSERIAL_WARN("access disable_print Fail!\n");
		}
	}
	return count;
}


DEVICE_ATTR( ledserial     , S_IRUSR | S_IRGRP | S_IROTH | S_IWUSR | S_IWGRP,rtk_ledserial_show_param, rtk_ledserial_set_param);
DEVICE_ATTR( disable_ioctl, S_IRUSR | S_IRGRP | S_IROTH | S_IWUSR | S_IWGRP,rtk_ledserial_show_param, rtk_ledserial_set_param);
DEVICE_ATTR( mode, S_IRUSR | S_IRGRP | S_IROTH | S_IWUSR | S_IWGRP,rtk_ledserial_show_param, rtk_ledserial_set_param);
DEVICE_ATTR( enable_print, S_IRUSR | S_IRGRP | S_IROTH | S_IWUSR | S_IWGRP,rtk_ledserial_show_param, rtk_ledserial_set_param);

static int led_serial_device_attr_init(void)
{
	int ret = 0;

	snprintf( _gLedSerialtInfo.nodename, 16, "ledserial"  );

	_gLedSerialtInfo.mapped = true;

	_gLedSerialtInfo.ledserial_device_st = device_create(_gstledserial_class, NULL, MKDEV(0, 0), NULL, _gLedSerialtInfo.nodename);

	ret = device_create_file(_gLedSerialtInfo.ledserial_device_st, &dev_attr_ledserial);
	ret = device_create_file(_gLedSerialtInfo.ledserial_device_st, &dev_attr_disable_ioctl);
	ret = device_create_file(_gLedSerialtInfo.ledserial_device_st, &dev_attr_mode);
	ret = device_create_file(_gLedSerialtInfo.ledserial_device_st, &dev_attr_enable_print);

	_gLedSerialtInfo.ledserial_device_st->platform_data =(void *)&_gLedSerialtInfo;

	LEDSERIAL_WARN("[%s]  ,Create Node  %s  device id = %d\n",__func__ ,  _gLedSerialtInfo.nodename,_gLedSerialtInfo.ledserial_device_st->id  );

	return 0;
}


static int register_ledserial_cdev(void) {
	dev_t dev;
	int ret;

	ret = alloc_chrdev_region(&dev, 0, 1, "ledserial");
	if (ret) {
		LEDSERIAL_ERROR("can't alloc chrdev\n");
		return ret;
	}

	ledserial_dev_major = MAJOR(dev);
	ledserial_dev_minor = MINOR(dev);

	dev_cdevp_ledserial = kzalloc(sizeof(struct cdev), GFP_KERNEL);
	if (dev_cdevp_ledserial == NULL) {
		LEDSERIAL_ERROR("kzalloc failed\n");
		goto KZALLOC_FAILED;
	}

	cdev_init(dev_cdevp_ledserial, &rtk_ledserial_fops);
	dev_cdevp_ledserial->owner = THIS_MODULE;
	dev_cdevp_ledserial->ops = &rtk_ledserial_fops;
	ret = cdev_add(dev_cdevp_ledserial, MKDEV(ledserial_dev_major, ledserial_dev_minor), 1);
	if (ret < 0) {
		LEDSERIAL_WARN(" add chr dev failed\n");
		goto CDEV_ADD_FAILED;
	}
	ledserial_device_st = device_create(_gstledserial_class, NULL, MKDEV(ledserial_dev_major, ledserial_dev_minor), NULL, "rtk_ledserial");
	LEDSERIAL_WARN("register chrdev(%d,%d) success.\n", ledserial_dev_major, ledserial_dev_minor);

	return 0;
CDEV_ADD_FAILED:
	cdev_del(dev_cdevp_ledserial);
KZALLOC_FAILED:
	if(dev_cdevp_ledserial) {
		kfree(dev_cdevp_ledserial);
		dev_cdevp_ledserial = NULL;
	}
	unregister_chrdev_region(MKDEV(ledserial_dev_major, ledserial_dev_minor),1);
	ledserial_dev_major = 0;
	ledserial_dev_minor = 0;
	return -1;

}

int __init rtk_led_serial_init(void)
{
	int ret = 0;

	ret = platform_driver_register(&rtk_ledserial_driver);
	if (ret != 0)
		goto FAILED_REGISTER_PLATFORM_DRIVER;

	_gstledserial_class = class_create(THIS_MODULE, "rtk-ledserial");

	if (_gstledserial_class == NULL)
		goto FAILED_CREATE_GSTLEDSERIAL_CLASS;
	_gUartRegBakup.inited = 0;
	led_serial_device_attr_init();
	rtk_ledserial_set_logicalmode();
	rtk_gpio_output(rtk_gpio_id(LEDSERIAL_GPIO_TYPE, LEDSERIAL_GPIO_INDEX),1);
	rtk_gpio_set_dir(rtk_gpio_id(LEDSERIAL_GPIO_TYPE, LEDSERIAL_GPIO_INDEX),1);

	pst_rtk_ledserial_platform_dev =platform_device_register_simple("rtk-ledserial", -1, NULL, 0);
	if (pst_rtk_ledserial_platform_dev == NULL) {
		goto FAILED_REGISTER_PLATFROM_DEVICE;
	}

	ret = register_ledserial_cdev();
	if (ret != 0)
		goto FAILED_REGISTER_LEDSERIAL_CDEV;

	return ret;

FAILED_REGISTER_LEDSERIAL_CDEV:
	platform_device_unregister(pst_rtk_ledserial_platform_dev);

FAILED_REGISTER_PLATFROM_DEVICE:
	device_remove_file(_gLedSerialtInfo.ledserial_device_st, &dev_attr_ledserial);
	device_remove_file(_gLedSerialtInfo.ledserial_device_st, &dev_attr_disable_ioctl);
	device_remove_file(_gLedSerialtInfo.ledserial_device_st, &dev_attr_mode);
	device_remove_file(_gLedSerialtInfo.ledserial_device_st, &dev_attr_enable_print);

	device_destroy(_gstledserial_class, MKDEV(0, 0));
	class_destroy(_gstledserial_class);

FAILED_CREATE_GSTLEDSERIAL_CLASS:
	platform_driver_unregister(&rtk_ledserial_driver);
FAILED_REGISTER_PLATFORM_DRIVER:
	LEDSERIAL_ERROR( "[%s] ======================================\n",__func__);
	LEDSERIAL_ERROR( "[%s] LEDSERIAL Register Error!\n", __func__);
	LEDSERIAL_ERROR( "[%s] ======================================\n",__func__);
	return -1;


}

static void __exit rtk_led_serial_uninit(void)
{
	cdev_del(dev_cdevp_ledserial);
	unregister_chrdev_region(MKDEV(ledserial_dev_major, ledserial_dev_minor),1);

	device_remove_file(_gLedSerialtInfo.ledserial_device_st, &dev_attr_ledserial);
	device_remove_file(_gLedSerialtInfo.ledserial_device_st, &dev_attr_disable_ioctl);
	device_remove_file(_gLedSerialtInfo.ledserial_device_st, &dev_attr_mode);
	device_remove_file(_gLedSerialtInfo.ledserial_device_st, &dev_attr_enable_print);

	device_destroy(_gstledserial_class, MKDEV(0, 0));

	class_destroy(_gstledserial_class);

	platform_driver_unregister(&rtk_ledserial_driver);

	platform_device_unregister(pst_rtk_ledserial_platform_dev);

}

late_initcall(rtk_led_serial_init);
module_exit(rtk_led_serial_uninit);
MODULE_AUTHOR("junrui.peng, Realtek Semiconductor");
MODULE_LICENSE("GPL");

