/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2010 by Chien-An Lin <colin@realtek.com.tw>
 *
 * Venus series board platform device registration
 */

#include <linux/dma-mapping.h>
#include <linux/platform_device.h>
#include <mach/platform.h>
#include <mach/irqs.h>
#ifdef CONFIG_RTC_DRV_RTK
#include <rbus/drtc_reg.h>
#endif
#include <rbus/sys_reg_reg.h>
#include <rbus/stb_reg.h>
#include <linux/syscalls.h>
#ifndef CONFIG_ARM64
#include <asm/mach-types.h>
#include <asm/mach/arch.h>
#include <asm/mach/map.h>
#else
#include <linux/of_reserved_mem.h>
#endif
#include <asm/mach/time.h>
#include <mach/common.h>
#include <mach/timex.h>
#ifdef CONFIG_CMA_RTK_ALLOCATOR
#ifdef CONFIG_REALTEK_MANAGE_OVERLAPPED_REGION
#include <linux/auth.h>
#endif
#endif
#ifdef CONFIG_HIBERNATION
#include <linux/suspend.h>
#endif
#include <mach/io.h>
#include <mach/iomap.h>
#include <linux/mm.h>
#include <mach/bootreason.h>
#include <rtk_kdriver/panelConfigParameter.h>

#ifndef CONFIG_ARM64
#ifdef CONFIG_RTC_DRV_RTK
static struct resource rtk_rtc_resources[] = {
	[0] = {
		.start	= GET_MAPPED_RBUS_ADDR(DRTC_RTCSEC_reg),
		.end 	= GET_MAPPED_RBUS_ADDR(DRTC_RTCCR_reg + 3),
		.flags	= IORESOURCE_MEM
	},
};

static struct platform_device rtk_rtc_device = {
	.name		= "rtc-rtk",
	.num_resources	= ARRAY_SIZE(rtk_rtc_resources),
	.resource	= rtk_rtc_resources
};
#endif	//CONFIG_RTC_DRV_RTK
#endif

// add by cfyeh
struct device usb_at_platform = {
	.init_name	= "usb",
	.parent		= &platform_bus,
};
EXPORT_SYMBOL_GPL(usb_at_platform);


#if 0
static void usb_device_release(struct device *dev) {
}
/* EHCI (USB high speed host controller) */
static struct resource rtk_usb_ehci_resources[] = {
	[0] = {
		.start		= GET_MAPPED_RBUS_ADDR(0xb8013000),
		.end		= GET_MAPPED_RBUS_ADDR(0xb8013000 + 0x3ff),
		.flags		= IORESOURCE_MEM,
	},
	[1] = {
		.start		= IRQ_USB,
		.end		= IRQ_USB,
		.flags		= IORESOURCE_IRQ,
	},
};

static u64 ehci_dmamask = DMA_BIT_MASK(32);

static struct platform_device rtk_usb_ehci_device = {
	.name = "ehci-platform",
	.dev = {
		.parent			= &usb_at_platform,
		.dma_mask		= &ehci_dmamask,
		.coherent_dma_mask	= DMA_BIT_MASK(32),
#ifdef CONFIG_USB_USER_RESUME
		.power.is_userresume = true,
#endif
        .release = usb_device_release,
	},
	.num_resources	= ARRAY_SIZE(rtk_usb_ehci_resources),
	.resource	= rtk_usb_ehci_resources,
};

/* OHCI (USB Full/Low speed host controller) */
static struct resource rtk_usb_ohci_resources[] = {
	[0] = {
		.start		= GET_MAPPED_RBUS_ADDR(0xb8013400),
		.end		= GET_MAPPED_RBUS_ADDR(0xb8013400 + 0x3ff),
		.flags		= IORESOURCE_MEM,
	},
	[1] = {
		.start		= IRQ_USB,
		.end		= IRQ_USB,
		.flags		= IORESOURCE_IRQ,
	},
};

static u64 ohci_dmamask = DMA_BIT_MASK(32);

static struct platform_device rtk_usb_ohci_device = {
	.name = "ohci-platform",
	.dev = {
		.parent			= &usb_at_platform,
		.dma_mask		= &ohci_dmamask,
		.coherent_dma_mask	= DMA_BIT_MASK(32),
#ifdef CONFIG_USB_USER_RESUME
		.power.is_userresume = true,
#endif
        .release = usb_device_release,
	},
	.num_resources	= ARRAY_SIZE(rtk_usb_ohci_resources),
	.resource	= rtk_usb_ohci_resources,
};
#endif


#if 0
static struct resource rtk_usb_dwc_otg_resources[] = {
	[0] = {
		.start		= GET_MAPPED_RBUS_ADDR(0xb8090000),
		.end		= GET_MAPPED_RBUS_ADDR(0xb8090000 + 0x8000),
		.flags		= IORESOURCE_MEM,
	},

	[1] = {
		.start		= IRQ_USB,
		.end		= IRQ_USB,
		.flags		= IORESOURCE_IRQ,
	},
};

static u64 dwc_otg_dmamask = DMA_BIT_MASK(32);

static struct platform_device rtk_usb_dwc_otg_device = {
	.name		= "dwc_otg",
	.id		= -1,
	.dev = {
		.parent			= &usb_at_platform,
		.dma_mask		= &dwc_otg_dmamask,
		.coherent_dma_mask	= DMA_BIT_MASK(32),
	},
	.num_resources	= ARRAY_SIZE(rtk_usb_dwc_otg_resources),
	.resource	= rtk_usb_dwc_otg_resources,
};
#endif
static unsigned long uart_clock = UART_CLOCK_27M;

/*****************************************************************************
 * SD/SDIO/MMC -
 ****************************************************************************/
#if 0
static struct resource rtksdio_resources[] = {
    [0] = {
        .start  = GET_MAPPED_RBUS_ADDR((u32)0xb8010C00),
        .end    = GET_MAPPED_RBUS_ADDR((u32)0xb8010C00 + 0x3ff),
        .flags  = IORESOURCE_MEM,
    },
    [1] = {
        .start  = IRQ_CR,
        .end    = IRQ_CR,
        .flags  = IORESOURCE_IRQ,
    },
};

static u64 rtksdio_dmamask = DMA_BIT_MASK(32);

static struct platform_device rtksdio_device = {
    .name           = "rtksdio",
    .id             = -1,
    .dev            = {
        .dma_mask = &rtksdio_dmamask,
        .coherent_dma_mask = DMA_BIT_MASK(32),
    },
    .num_resources  = ARRAY_SIZE(rtksdio_resources),
    .resource       = rtksdio_resources,
};
#endif

#if 0
static struct resource rtkemmc_resources[] = {
    [0] = {
        .start  = GET_MAPPED_RBUS_ADDR((u32)0xb8010800),
        .end    = GET_MAPPED_RBUS_ADDR((u32)0xb8010800 + 0x3FF),
        .flags  = IORESOURCE_MEM,
    },
    [1] = {
        .start  = IRQ_CR,
        .end    = IRQ_CR,
        .flags  = IORESOURCE_IRQ,
    },
};

static u64 rtkemmc_dmamask = DMA_BIT_MASK(32);

static struct platform_device rtkemmc_device = {
    .name           = "rtkemmc",
    .id             = -1,
    .dev            = {
        .dma_mask = &rtkemmc_dmamask,
        .coherent_dma_mask = DMA_BIT_MASK(32),
    },
    .num_resources  = ARRAY_SIZE(rtkemmc_resources),
    .resource       = rtkemmc_resources,
};
#endif

#if 0
static struct resource rtkemmc_dw_resources[] = {
    [0] = {
        .start  = GET_MAPPED_RBUS_ADDR((u32)0xb8010800),
        .end    = GET_MAPPED_RBUS_ADDR((u32)0xb8010800 + 0x3FF),
        .flags  = IORESOURCE_MEM,
    },
    [1] = {
        .start  = IRQ_CR,
        .end    = IRQ_CR,
        .flags  = IORESOURCE_IRQ,
    },
};

static u64 rtkemmc_dw_dmamask = DMA_BIT_MASK(32);

static struct platform_device rtkemmc_dw_device = {
    .name           = "rtkemmc_dw",
    .id             = -1,
    .dev            = {
        .dma_mask = &rtkemmc_dw_dmamask,
        .coherent_dma_mask = DMA_BIT_MASK(32),
    },
    .num_resources  = ARRAY_SIZE(rtkemmc_dw_resources),
    .resource       = rtkemmc_dw_resources,
};
#endif
#if defined(CONFIG_MTD_NAND_RTK)
static struct resource rtk_resource_nand[] = {
    [0] = {
        .start  = GET_MAPPED_RBUS_ADDR((u32)0xb8010000),
        .end    = GET_MAPPED_RBUS_ADDR((u32)0xb8010000 + 0x378),
        .flags  = IORESOURCE_MEM,
    },
    [1] = {
        .start  = IRQ_CR,
        .end    = IRQ_CR,
        .flags  = IORESOURCE_IRQ,
    },
};

static u64 rtk_nand_dma_mask= DMA_BIT_MASK(32);
struct platform_device rtknand_device = {
    .name        = "rtk_nand",
    .id        = -1,
    .dev        = {
        .dma_mask = &rtk_nand_dma_mask,
        .coherent_dma_mask = DMA_BIT_MASK(32),
    },
    .resource      =  rtk_resource_nand,
    .num_resources = ARRAY_SIZE(rtk_resource_nand),
};
#endif

#if defined(CONFIG_MTD_SPI_NAND_RTK)

static struct resource rtk_resource_spi_nand[] = {
	[0] = {
		.start	= GET_MAPPED_RBUS_ADDR((u32)0xB801A800),
		.end	= GET_MAPPED_RBUS_ADDR((u32)0xB801A800 + 0x88),
		.flags	= IORESOURCE_MEM,
	},
	[1] = {
		.start	= IRQ_CR,
		.end	= IRQ_CR,
		.flags	= IORESOURCE_IRQ,
	},
};

static u64 rtk_spi_nand_dma_mask= DMA_BIT_MASK(32);
struct platform_device rtk_spi_nand_device = {
	.name		 = "rtk_sn",
	.id 	   = -1,
	.dev		= {
		.dma_mask = &rtk_spi_nand_dma_mask,
		.coherent_dma_mask = DMA_BIT_MASK(32),
	},
	.resource	   =  rtk_resource_spi_nand,
	.num_resources = ARRAY_SIZE(rtk_resource_spi_nand),
};
#endif

#if 0
/* PMU ( Performance Moniters ) */
static struct resource rtk_pmu_resources[] = {
	DEFINE_RES_IRQ(SPI_GICPMUIRQ)
};

static struct platform_device rtk_pmu_device = {
	.name              = "armv7-pmu",
    .id            = -1,
    .num_resources     = ARRAY_SIZE(rtk_pmu_resources),
	.resource = rtk_pmu_resources
};
#endif

#ifdef CONFIG_ARM64
static struct platform_device *rtk_platform_devices[] = {

};
#else
static struct platform_device *rtk_platform_devices[] = {
#ifdef CONFIG_RTC_DRV_RTK
	&rtk_rtc_device,
#endif

#if 0 /* we use DeviceTree instead */
	&rtk_usb_ehci_device,
	&rtk_usb_ohci_device,
#endif

#if 0
	&rtksdio_device,        /* SDIO */
#endif

#if 0
	&rtkemmc_device,        /* EMMC */
#endif

#if 1
#ifndef CONFIG_REALTEK_OF //temp patch, it cause system crashed
	&rtkemmc_dw_device,     /* EMMC_PLUS */
#endif
#endif
#if defined(CONFIG_MTD_NAND_RTK)
	&rtknand_device,
#endif
#if defined(CONFIG_MTD_SPI_NAND_RTK)
		&rtk_spi_nand_device,
#endif
#if 0
	&rtk_pmu_device		    /* PMU */
#endif
};
#endif

void plat_mem_protect(void)
{
#if 0 //will be enable later
   unsigned int scramble_key = CONTENT_PROTECTION_KEY;
	int index;

   printk("do plat_mem_protect......\n");

   // KCPU code protection
	//rtd_outl(RTD298X_DC_MEM_PROTECT_SADDR0, 0x20000000);
   //rtd_outl(RTD298X_DC_MEM_PROTECT_EADDR0, 0xfffff000);

   //rtd_outl(RTD298X_DC_MEM_PROTECT_SADDR1, (CONFIG_REALTEK_LINUX_LOAD_ADDR-0x1000) & 0x1fffffff);
   //rtd_outl(RTD298X_DC_MEM_PROTECT_EADDR1, 0x1ffff000);

   //sed_rng_init();
   //sed_rng_get(&scramble_key);

	index = 0; //use 1st one to do content protection

   // Content protection
   rtd_outl(DC_MEM_SCRAMBLE_SADDR(index), VIDEO_RINGBUFFER_START);
   rtd_outl(DC_MEM_SCRAMBLE_EADDR(index), VIDEO_RINGBUFFER_START + VIDEO_RINGBUFFER_SIZE);

   rtd_outl(DC_MEM_SCRAMBLE_CURR_KEY0(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_CURR_KEY1(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_CURR_KEY2(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_CURR_KEY3(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_CURR_KEY4(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_CURR_KEY5(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_CURR_KEY6(index), scramble_key);

   rtd_outl(DC_MEM_SCRAMBLE_PREV_KEY0(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_PREV_KEY1(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_PREV_KEY2(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_PREV_KEY3(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_PREV_KEY4(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_PREV_KEY5(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_PREV_KEY6(index), scramble_key);

   rtd_outl(DC_MEM_SCRAMBLE_UPDATE_KEY0(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_UPDATE_KEY1(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_UPDATE_KEY2(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_UPDATE_KEY3(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_UPDATE_KEY4(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_UPDATE_KEY5(index), scramble_key);
   rtd_outl(DC_MEM_SCRAMBLE_UPDATE_KEY6(index), scramble_key);

	// Enable all permission for KCPU/ACPU/VCPU
	rtd_outl(DC_MEM_SCRAMBLE_ACCESS(index), 0xffffffff);

   rtd_setbits(DC_MEM_SCRAMBLE_CTRL, BIT(12+index));
   rtd_setbits(DC_MEM_PROTECT_CTRL, BIT(12+index));
#endif
}

#ifdef CONFIG_RTC_DRV_RTK
extern int  rtk_rtc_ip_init(void);
//the real rtk_rtc_early_init() funciton was defined in rtk_rtc.c.
int __weak rtk_rtc_early_init(void)
{
#ifdef CONFIG_RTC_DRV_RTK
	rtk_rtc_ip_init();
#endif
	return 0;
}
#endif


#ifdef CONFIG_RTK_KDRV_EMCU
extern int rtk_pm_load_8051(int flag);
#endif

static void rtk_platfrom_power_off(void)
{
    rtk_write_boot_reason(BREASON_SHUTDOWN);
#ifdef CONFIG_RTK_KDRV_EMCU
	rtk_pm_load_8051(1); // #define SUSPEND_NORMAL      1
#endif
}

void __init rtk_init_machine(void)
{
#if 0
#ifndef CONFIG_ARM64
	int error = device_register(&usb_at_platform);
	if (error) {
        	pr_err("%s: device_register fail\n", __func__);
   	}
#endif
#endif
   	platform_add_devices(rtk_platform_devices, ARRAY_SIZE(rtk_platform_devices));

	/*[ANDROIDTV-3123] For long press RC power key -> power off */
	pm_power_off = rtk_platfrom_power_off;

	/* Even we use arch_timer, but still need init misc timer2 timer for schedule log used.*/
	rtk_timer_init();
}

void __init rtk_init_late(void)
{
   // add console driver node
   sys_mknod("/dev/console", S_IFCHR + 0600, new_encode_dev(MKDEV(5, 1)));

#ifdef CONFIG_CMA_RTK_ALLOCATOR
#ifdef CONFIG_REALTEK_MANAGE_OVERLAPPED_REGION
   init_overlapped_region(RBUS_BASE_PHYS >> PAGE_SHIFT, RBUS_BASE_SIZE >> PAGE_SHIFT);
#endif
#endif

#ifdef CONFIG_HIBERNATION
    register_nosave_region_late(0x00000000, 0x00000100);
#endif
}

unsigned long get_uart_clock(void)
{
	return uart_clock;
}

static int __init early_uart_clock(char *str)
{
	const char *str_108M = "108M";

	if (strncmp(str_108M, str, strlen(str_108M)) == 0)
	{
		uart_clock = UART_CLOCK_108M;
		pr_info("UART_CLOCK_108M\n");
	}
	else
	{
		uart_clock = UART_CLOCK_27M;
		pr_info("UART_CLOCK_27M");
	}
	return 0;
}

early_param("uartclk", early_uart_clock);

void __init rtk_init_early(void)
{
   // init clcok&PLL or something in early stage
#ifndef CONFIG_REALTEK_FPGA
#if (SYSTEM_CONSOLE == 0)
	if (get_uart_clock() == UART_CLOCK_108M) {
		rtd_clearbits(STB_ST_CLKMUX_reg, BIT(0));
	}
#elif (SYSTEM_CONSOLE == 1 || CONFIG_SERIAL_8250_RUNTIME_UARTS == 2 || CONFIG_RTK_KDRV_SERIAL_8250_RUNTIME_UARTS == 2)
	int system_concole = 1;
	CRT_CLK_OnOff(UART, CLK_ON , &system_concole);
#elif (SYSTEM_CONSOLE == 2)
	int system_concole = 2;
	CRT_CLK_OnOff(UART, CLK_ON , &system_concole);
#elif (SYSTEM_CONSOLE == 3)
	int system_concole = 3;
	CRT_CLK_OnOff(UART, CLK_ON , &system_concole);
#endif
#endif

#ifdef CONFIG_REALTEK_PCBMGR // cklai@121106 setup platform related settings
   printk("pcbMgr: RTK\n");
// printk("prom_init(), _prom_envp=%x\n", (unsigned int)_prom_envp);
   // must be called after parse_early_param that will assign _prom_envp from boot command line
   prom_init();
#endif

#ifdef CONFIG_CACHE_L2X0
   rtk_l2_cache_init();
#endif

#ifdef CONFIG_RTC_DRV_RTK
   rtk_rtc_early_init();
#endif

	plat_mem_protect();
}

static const char * const rtk_board_compat[] = {
	"rtk,rtd2851a",
	"rtk,rtd2841a",
	NULL
};

#ifndef CONFIG_ARM64
#ifdef CONFIG_RTK_IS_HARDWARE_RTD2851A
MACHINE_START(RTK2851A, "rtd2851a")
#else
MACHINE_START(RTK2851A, "rtd2841a")
#endif

// .atag_offset   = 0x100,
#ifdef CONFIG_SMP
   .smp          = smp_ops(rtk_smp_ops),
#endif
   .nr_irqs      = 0,
   .reserve      = rtk_reserve,
   .map_io       = rtk_map_io,
   .init_early   = rtk_init_early,
   .init_irq     = gic_init_irq,
#if 0 // fix me - jinncheng - kernel porting
   .handle_irq   = gic_handle_irq,
#endif
   .init_machine = rtk_init_machine,
   .init_late    = rtk_init_late,
   .restart      = rtk_machine_restart,
	.dt_compat    = rtk_board_compat,
MACHINE_END
#endif



#include <mach/rtk_platform.h>
/**
   list by address order,
   {addr, size}
 */
#define _TBD_ 0
unsigned long carvedout_buf[MM_LAYOUT_CARVEDOUT_NUM][CARVEDOUT_NUM][2] = {
  // MM_LAYOUT_DEFAULT
  {
	{0x00000000,  1*_MB_}, // CARVEDOUT_BOOTCODE
	{DEMOD_CARVED_OUT,  8*_MB_}, // CARVEDOUT_DEMOD
	{0x10000000,  0*_MB_}, // CARVEDOUT_AV_DMEM
#ifdef CONFIG_REALTEK_SECURE
	{0x15f00000,  0*_MB_}, // CARVEDOUT_K_BOOT
#ifdef CONFIG_OPTEE
	{0x16000000, 18*_MB_}, // CARVEDOUT_K_OS (optee)
#else
	{0x16000000, 32*_MB_}, // CARVEDOUT_K_OS (kcpu)
#endif
#endif
	{RBUS_BASE_PHYS, RBUS_BASE_SIZE}, // CARVEDOUT_MAP_RBUS

#ifdef CONFIG_REALTEK_SECURE_DDK
	{0x1a500000 - RTK_GPU_FW_SIZE, RTK_GPU_FW_SIZE}, // CARVEDOUT_GPU_FW
#endif
	{0x1a500000, 10*_MB_}, // CARVEDOUT_AV_OS
#if defined(CONFIG_REALTEK_RPC) ||defined(CONFIG_RTK_KDRV_RPC)
	{0x1b180000,  0x00080000}, // CARVEDOUT_MAP_RPC
#endif
	{VIDEO_RINGBUFFER_START,  VIDEO_RINGBUFFER_SIZE}, // CARVEDOUT_VDEC_RINGBUF
	{AUDIO_RINGBUFFER_START,  AUDIO_RINGBUFFER_SIZE}, // CARVEDOUT_AUDIO_RINGBUF
#ifdef CONFIG_REALTEK_LOGBUF
	{CONST_LOGBUF_MEM_ADDR_START, CONST_LOGBUF_MEM_SIZE}, // CARVEDOUT_LOGBUF
#endif
	{0x1fc00000, 0x00008000}, // CARVEDOUT_ROMCODE
#ifdef CONFIG_PSTORE
	{0x1fd00000, 0x010000}, // RAMOOPS
#endif
	{0x1ffff000, 0x00001000}, // CARVEDOUT_IR_TABLE
	{_TBD_, _TBD_}, // CARVEDOUT_DDR_BOUNDARY
	{_TBD_, _TBD_}, // CARVEDOUT_DDR_END_BOUNDARY
#ifdef CONFIG_CUSTOMER_TV006
	{GAL_MEM_ADDR_START, GAL_MEM_SIZE}, // CARVEDOUT_GAL
#endif

#ifdef CONFIG_LG_SNAPSHOT_BOOT
#if defined(BOOT_MEMORY_START) && defined(BOOT_MEMORY_END)
	{BOOT_MEMORY_START, BOOT_MEMORY_START, (BOOT_MEMORY_END - BOOT_MEMORY_START), 0}, // CARVEDOUT_SNAPSHOT
#else
	{_TBD_, _TBD_}, // CARVEDOUT_SNAPSHOT
#endif
#endif
	{SCLAER_MODULE_START, SCALER_MODULE_SIZE}, // CARVEDOUT_SCALER
	{SCALER_MEMC_START, SCALER_MEMC_SIZE}, // CARVEDOUT_SCALER_MEMC
	{SCALER_MDOMAIN_START, SCALER_MDOMAIN_SIZE}, // CARVEDOUT_SCALER_MDOMAIN
	{SCALER_DI_NR_START, SCALER_DI_NR_SIZE}, // CARVEDOUT_SCALER_DI_NR
	{SCALER_NN_START, SCALER_NN_SIZE}, // CARVEDOUT_SCALER_NN
	{SCALER_VIP_START, SCALER_VIP_SIZE}, // CARVEDOUT_SCALER_VIP
	{SCALER_OD_START, SCALER_OD_SIZE}, // CARVEDOUT_SCALER_OD
	{VDEC_BUFFER_START, VDEC_BUFFER_SIZE}, // CARVEDOUT_VDEC_VBM
	{DEMUX_TP_BUFFER_START, DEMUX_TP_BUFFER_SIZE}, // CARVEDOUT_TP

#if 0
	{KASAN_SHADOW_PHYS_DEFAULT, _AC(CONFIG_KASAN_SHADOW_SIZE, UL)}, // CARVEDOUT_KASAN
#endif
	
	// for desired cma size calculation
	{0x03000000, 128*_MB_/*CMA_LOW_RESERVED_SIZE*/}, // CARVEDOUT_CMA_LOW
	{0, _TBD_}, // CARVEDOUT_CMA_HIGH
	{0, _TBD_}, // CARVEDOUT_CMA_3
	{0, _TBD_}, // CARVEDOUT_CMA_LOW_LIMIT
	{0, _TBD_}, // CARVEDOUT_CMA_BW
	
#ifdef CONFIG_HIGHMEM_BW_CMA_REGION
	{_TBD_, _TBD_}, // CARVEDOUT_HIGHMEM_BW_START
	{0, BW_HIGH_CMA_SIZE}, // CARVEDOUT_BW_HIGH_CMA
#endif

	{0, _TBD_}, // CARVEDOUT_GPU_RESERVED
  },

  // MM_LAYOUT_1G5
  {
	{0x00000000,  1*_MB_}, // CARVEDOUT_BOOTCODE
	{DEMOD_CARVED_OUT,  8*_MB_}, // CARVEDOUT_DEMOD
	{0x10000000,  0*_MB_}, // CARVEDOUT_AV_DMEM
#ifdef CONFIG_REALTEK_SECURE
	{0x15f00000,  0*_MB_}, // CARVEDOUT_K_BOOT
#ifdef CONFIG_OPTEE
	{0x16000000, 18*_MB_}, // CARVEDOUT_K_OS (optee)
#else
	{0x16000000, 32*_MB_}, // CARVEDOUT_K_OS (kcpu)
#endif
#endif
	{RBUS_BASE_PHYS, RBUS_BASE_SIZE}, // CARVEDOUT_MAP_RBUS

#ifdef CONFIG_REALTEK_SECURE_DDK
	{0x1a500000 - RTK_GPU_FW_SIZE, RTK_GPU_FW_SIZE}, // CARVEDOUT_GPU_FW
#endif
	{0x1a500000, 10*_MB_}, // CARVEDOUT_AV_OS
#if defined(CONFIG_REALTEK_RPC) ||defined(CONFIG_RTK_KDRV_RPC)
	{0x1b180000,  0x00080000}, // CARVEDOUT_MAP_RPC
#endif
	{DDR_1G5_VIDEO_RINGBUFFER_START,  DDR_1G5_VIDEO_RINGBUFFER_SIZE}, // CARVEDOUT_VDEC_RINGBUF
	{DDR_1G5_AUDIO_RINGBUFFER_START,  DDR_1G5_AUDIO_RINGBUFFER_SIZE}, // CARVEDOUT_AUDIO_RINGBUF
#ifdef CONFIG_REALTEK_LOGBUF
	{DDR_1G5_CONST_LOGBUF_MEM_ADDR_START, DDR_1G5_CONST_LOGBUF_MEM_SIZE}, // CARVEDOUT_LOGBUF
#endif
	{0x1fc00000, 0x00008000}, // CARVEDOUT_ROMCODE
#ifdef CONFIG_PSTORE
	{0x1fd00000, 0x010000}, // RAMOOPS
#endif
	{0x1ffff000, 0x00001000}, // CARVEDOUT_IR_TABLE
	{_TBD_, _TBD_}, // CARVEDOUT_DDR_BOUNDARY
	{_TBD_, _TBD_}, // CARVEDOUT_DDR_END_BOUNDARY
#ifdef CONFIG_CUSTOMER_TV006
	{DDR_1G5_GAL_MEM_ADDR_START, DDR_1G5_GAL_MEM_SIZE}, // CARVEDOUT_GAL
#endif

#ifdef CONFIG_LG_SNAPSHOT_BOOT
#if defined(BOOT_MEMORY_START) && defined(BOOT_MEMORY_END)
	{BOOT_MEMORY_START, BOOT_MEMORY_START, (BOOT_MEMORY_END - BOOT_MEMORY_START), 0}, // CARVEDOUT_SNAPSHOT
#else
	{_TBD_, _TBD_}, // CARVEDOUT_SNAPSHOT
#endif
#endif
	{DDR_1G5_SCLAER_MODULE_START, DDR_1G5_SCALER_MODULE_SIZE}, // CARVEDOUT_SCALER
	{DDR_1G5_SCALER_MEMC_START, DDR_1G5_SCALER_MEMC_SIZE}, // CARVEDOUT_SCALER_MEMC
	{DDR_1G5_SCALER_MDOMAIN_START, DDR_1G5_SCALER_MDOMAIN_SIZE}, // CARVEDOUT_SCALER_MDOMAIN
	{DDR_1G5_SCALER_DI_NR_START, DDR_1G5_SCALER_DI_NR_SIZE}, // CARVEDOUT_SCALER_DI_NR
	{DDR_1G5_SCALER_NN_START, DDR_1G5_SCALER_NN_SIZE}, // CARVEDOUT_SCALER_NN
	{DDR_1G5_SCALER_VIP_START, DDR_1G5_SCALER_VIP_SIZE}, // CARVEDOUT_SCALER_VIP
	{DDR_1G5_SCALER_OD_START, DDR_1G5_SCALER_OD_SIZE}, // CARVEDOUT_SCALER_OD
	{DDR_1G5_VDEC_BUFFER_START, DDR_1G5_VDEC_BUFFER_SIZE}, // CARVEDOUT_VDEC_VBM
	{DDR_1G5_DEMUX_TP_BUFFER_START, DDR_1G5_DEMUX_TP_BUFFER_SIZE}, // CARVEDOUT_TP

#if 0
    {KASAN_SHADOW_PHYS_DEFAULT, _AC(CONFIG_KASAN_SHADOW_SIZE, UL)}, // CARVEDOUT_KASAN
#endif

    // for desired cma size calculation
	{0x03000000, 128*_MB_/*CMA_LOW_RESERVED_SIZE*/}, // CARVEDOUT_CMA_LOW
	{0, _TBD_}, // CARVEDOUT_CMA_HIGH
	{0, _TBD_}, // CARVEDOUT_CMA_3
	{0, _TBD_}, // CARVEDOUT_CMA_LOW_LIMIT
	{0, _TBD_}, // CARVEDOUT_CMA_BW

#ifdef CONFIG_HIGHMEM_BW_CMA_REGION
	{_TBD_, _TBD_}, // CARVEDOUT_HIGHMEM_BW_START
	{0, DDR_1G5_BW_HIGH_CMA_SIZE}, // CARVEDOUT_BW_HIGH_CMA
#endif

	{0, _TBD_}, // CARVEDOUT_GPU_RESERVED
  },

  // MM_LAYOUT_1GB
  {
	{0x00000000,  1*_MB_}, // CARVEDOUT_BOOTCODE
	{DEMOD_CARVED_OUT,  8*_MB_}, // CARVEDOUT_DEMOD
	{0x10000000,  0*_MB_}, // CARVEDOUT_AV_DMEM
#ifdef CONFIG_REALTEK_SECURE
	{0x15f00000,  0*_MB_}, // CARVEDOUT_K_BOOT
#ifdef CONFIG_OPTEE
	{0x16000000, 16*_MB_}, // CARVEDOUT_K_OS (optee)
#else
	{0x16000000, 32*_MB_}, // CARVEDOUT_K_OS (kcpu)
#endif
#endif
	{RBUS_BASE_PHYS, RBUS_BASE_SIZE}, // CARVEDOUT_MAP_RBUS

#ifdef CONFIG_REALTEK_SECURE_DDK
	{0x1a500000 - RTK_GPU_FW_SIZE, RTK_GPU_FW_SIZE}, // CARVEDOUT_GPU_FW
#endif
	{0x1a500000, 10*_MB_}, // CARVEDOUT_AV_OS
#if defined(CONFIG_REALTEK_RPC) ||defined(CONFIG_RTK_KDRV_RPC)
	{0x1b180000,  0x00080000}, // CARVEDOUT_MAP_RPC
#endif
	{DDR_1GB_VIDEO_RINGBUFFER_START,  DDR_1GB_VIDEO_RINGBUFFER_SIZE}, // CARVEDOUT_VDEC_RINGBUF
	{DDR_1GB_AUDIO_RINGBUFFER_START,  DDR_1GB_AUDIO_RINGBUFFER_SIZE}, // CARVEDOUT_AUDIO_RINGBUF
#ifdef CONFIG_REALTEK_LOGBUF
	{DDR_1GB_CONST_LOGBUF_MEM_ADDR_START, DDR_1GB_CONST_LOGBUF_MEM_SIZE}, // CARVEDOUT_LOGBUF
#endif
	{0x1fc00000, 0x00008000}, // CARVEDOUT_ROMCODE
#ifdef CONFIG_PSTORE
	{0x1fd00000, 0x010000}, // RAMOOPS
#endif
	{0x1ffff000, 0x00001000}, // CARVEDOUT_IR_TABLE
	{_TBD_, _TBD_}, // CARVEDOUT_DDR_BOUNDARY
	{_TBD_, _TBD_}, // CARVEDOUT_DDR_END_BOUNDARY
#ifdef CONFIG_CUSTOMER_TV006
	{DDR_1GB_GAL_MEM_ADDR_START, DDR_1GB_GAL_MEM_SIZE}, // CARVEDOUT_GAL
#endif

#ifdef CONFIG_LG_SNAPSHOT_BOOT
#if defined(BOOT_MEMORY_START) && defined(BOOT_MEMORY_END)
	{BOOT_MEMORY_START, BOOT_MEMORY_START, (BOOT_MEMORY_END - BOOT_MEMORY_START), 0}, // CARVEDOUT_SNAPSHOT
#else
	{_TBD_, _TBD_},//, _TBD_, _TBD_}, // CARVEDOUT_SNAPSHOT
#endif
#endif
	{DDR_1GB_SCLAER_MODULE_START, DDR_1GB_SCALER_MODULE_SIZE}, // CARVEDOUT_SCALER
	{DDR_1GB_SCALER_MEMC_START, DDR_1GB_SCALER_MEMC_SIZE}, // CARVEDOUT_SCALER_MEMC
	{DDR_1GB_SCALER_MDOMAIN_START, DDR_1GB_SCALER_MDOMAIN_SIZE}, // CARVEDOUT_SCALER_MDOMAIN
	{DDR_1GB_SCALER_DI_NR_START, DDR_1GB_SCALER_DI_NR_SIZE}, // CARVEDOUT_SCALER_DI_NR
	{DDR_1GB_SCALER_NN_START, DDR_1GB_SCALER_NN_SIZE}, // CARVEDOUT_SCALER_NN
	{DDR_1GB_SCALER_VIP_START, DDR_1GB_SCALER_VIP_SIZE}, // CARVEDOUT_SCALER_VIP
	{DDR_1GB_SCALER_OD_START, DDR_1GB_SCALER_OD_SIZE}, // CARVEDOUT_SCALER_OD
	{DDR_1GB_VDEC_BUFFER_START, DDR_1GB_VDEC_BUFFER_SIZE}, // CARVEDOUT_VDEC_VBM
	{DDR_1GB_DEMUX_TP_BUFFER_START, DDR_1GB_DEMUX_TP_BUFFER_SIZE}, // CARVEDOUT_TP

#if 0
    {DDR_1GB_KASAN_SHADOW_PHYS, _AC(CONFIG_KASAN_SHADOW_SIZE, UL)}, // CARVEDOUT_KASAN
#endif

    // for desired cma size calculation
	{0x03000000, 128*_MB_/*CMA_LOW_RESERVED_SIZE*/}, // CARVEDOUT_CMA_LOW
	{0, _TBD_}, // CARVEDOUT_CMA_HIGH
	{0, _TBD_}, // CARVEDOUT_CMA_3
	{0, _TBD_}, // CARVEDOUT_CMA_LOW_LIMIT
	{0, _TBD_}, // CARVEDOUT_CMA_BW

#ifdef CONFIG_HIGHMEM_BW_CMA_REGION
	{_TBD_, _TBD_}, // CARVEDOUT_HIGHMEM_BW_START
	{0, DDR_1GB_BW_HIGH_CMA_SIZE}, // CARVEDOUT_BW_HIGH_CMA
#endif

	{0, _TBD_}, // CARVEDOUT_GPU_RESERVED
  },

  // MM_LAYOUT_2K_MODEL
  {
	{0x00000000,  1*_MB_}, // CARVEDOUT_BOOTCODE
	{DEMOD_CARVED_OUT,  8*_MB_}, // CARVEDOUT_DEMOD
	{0x10000000,  0*_MB_}, // CARVEDOUT_AV_DMEM
#ifdef CONFIG_REALTEK_SECURE
	{0x15f00000,  0*_MB_}, // CARVEDOUT_K_BOOT
#ifdef CONFIG_OPTEE
	{0x16000000, 16*_MB_}, // CARVEDOUT_K_OS (optee)
#else
	{0x16000000, 32*_MB_}, // CARVEDOUT_K_OS (kcpu)
#endif
#endif
	{RBUS_BASE_PHYS, RBUS_BASE_SIZE}, // CARVEDOUT_MAP_RBUS

#ifdef CONFIG_REALTEK_SECURE_DDK
	{0x1a500000 - RTK_GPU_FW_SIZE, RTK_GPU_FW_SIZE}, // CARVEDOUT_GPU_FW
#endif
	{0x1a500000, 10*_MB_}, // CARVEDOUT_AV_OS
#if defined(CONFIG_REALTEK_RPC) ||defined(CONFIG_RTK_KDRV_RPC)
	{0x1b180000,  0x00080000}, // CARVEDOUT_MAP_RPC
#endif
	{DDR_2K_MODEL_VIDEO_RINGBUFFER_START,  DDR_2K_MODEL_VIDEO_RINGBUFFER_SIZE}, // CARVEDOUT_VDEC_RINGBUF
	{DDR_2K_MODEL_AUDIO_RINGBUFFER_START,  DDR_2K_MODEL_AUDIO_RINGBUFFER_SIZE}, // CARVEDOUT_AUDIO_RINGBUF
#ifdef CONFIG_REALTEK_LOGBUF
	{DDR_2K_MODEL_CONST_LOGBUF_MEM_ADDR_START, DDR_2K_MODEL_CONST_LOGBUF_MEM_SIZE}, // CARVEDOUT_LOGBUF
#endif
	{0x1fc00000, 0x00008000}, // CARVEDOUT_ROMCODE
#ifdef CONFIG_PSTORE
	{0x1fd00000, 0x010000}, // RAMOOPS
#endif
	{0x1ffff000, 0x00001000}, // CARVEDOUT_IR_TABLE
	{_TBD_, _TBD_}, // CARVEDOUT_DDR_BOUNDARY
	{_TBD_, _TBD_}, // CARVEDOUT_DDR_END_BOUNDARY
#ifdef CONFIG_CUSTOMER_TV006
	{DDR_2K_MODEL_GAL_MEM_ADDR_START, DDR_2K_MODEL_GAL_MEM_SIZE}, // CARVEDOUT_GAL
#endif

#ifdef CONFIG_LG_SNAPSHOT_BOOT
#if defined(BOOT_MEMORY_START) && defined(BOOT_MEMORY_END)
	{BOOT_MEMORY_START, BOOT_MEMORY_START, (BOOT_MEMORY_END - BOOT_MEMORY_START), 0}, // CARVEDOUT_SNAPSHOT
#else
	{_TBD_, _TBD_},//, _TBD_, _TBD_}, // CARVEDOUT_SNAPSHOT
#endif
#endif
	{DDR_2K_MODEL_SCLAER_MODULE_START, DDR_2K_MODEL_SCALER_MODULE_SIZE}, // CARVEDOUT_SCALER
	{DDR_2K_MODEL_SCALER_MEMC_START, DDR_2K_MODEL_SCALER_MEMC_SIZE}, // CARVEDOUT_SCALER_MEMC
	{DDR_2K_MODEL_SCALER_MDOMAIN_START, DDR_2K_MODEL_SCALER_MDOMAIN_SIZE}, // CARVEDOUT_SCALER_MDOMAIN
	{DDR_2K_MODEL_SCALER_DI_NR_START, DDR_2K_MODEL_SCALER_DI_NR_SIZE}, // CARVEDOUT_SCALER_DI_NR
	{DDR_2K_MODEL_SCALER_NN_START, DDR_2K_MODEL_SCALER_NN_SIZE}, // CARVEDOUT_SCALER_NN
	{DDR_2K_MODEL_SCALER_VIP_START, DDR_2K_MODEL_SCALER_VIP_SIZE}, // CARVEDOUT_SCALER_VIP
	{DDR_2K_MODEL_SCALER_OD_START, DDR_2K_MODEL_SCALER_OD_SIZE}, // CARVEDOUT_SCALER_OD
	{DDR_2K_MODEL_VDEC_BUFFER_START, DDR_2K_MODEL_VDEC_BUFFER_SIZE}, // CARVEDOUT_VDEC_VBM
	{DDR_2K_MODEL_DEMUX_TP_BUFFER_START, DDR_2K_MODEL_DEMUX_TP_BUFFER_SIZE}, // CARVEDOUT_TP

#if 0
    {DDR_1GB_KASAN_SHADOW_PHYS, _AC(CONFIG_KASAN_SHADOW_SIZE, UL)}, // CARVEDOUT_KASAN
#endif

    // for desired cma size calculation
	{0x03000000, 128*_MB_/*CMA_LOW_RESERVED_SIZE*/}, // CARVEDOUT_CMA_LOW
	{0, _TBD_}, // CARVEDOUT_CMA_HIGH
	{0, _TBD_}, // CARVEDOUT_CMA_3
	{0, _TBD_}, // CARVEDOUT_CMA_LOW_LIMIT
	{0, _TBD_}, // CARVEDOUT_CMA_BW

#ifdef CONFIG_HIGHMEM_BW_CMA_REGION
	{_TBD_, _TBD_}, // CARVEDOUT_HIGHMEM_BW_START
	{0, DDR_2K_MODEL_BW_HIGH_CMA_SIZE}, // CARVEDOUT_BW_HIGH_CMA
#endif

	{0, _TBD_}, // CARVEDOUT_GPU_RESERVED
  },
};

EXPORT_SYMBOL(carvedout_buf);


static enum PLAFTORM_TYPE platform=PLATFORM_OTHER;
enum PLAFTORM_TYPE get_platform (void)
{
    return platform;
}


static enum PANEL_RES_TYPE panel_resolution = PANEL_RES_MAX;
enum PANEL_RES_TYPE get_panel_res(void)
{
	if(panel_resolution == PANEL_RES_MAX)
	{
#if defined(CONFIG_REALTEK_PCBMGR)
		if(platform_info.panel_parameter_len > 0)
		{
			PANEL_CONFIG_PARAMETER *panel_parameter = (PANEL_CONFIG_PARAMETER *)&platform_info.panel_parameter;
			unsigned int disp_win = panel_parameter->iCONFIG_DISP_ACT_END_HPOS - panel_parameter->iCONFIG_DISP_ACT_STA_HPOS;
			unsigned int disp_len = panel_parameter->iCONFIG_DISP_ACT_END_VPOS - panel_parameter->iCONFIG_DISP_ACT_STA_VPOS;
			if(disp_win == 7680 && disp_len == 4320)
				panel_resolution = PANEL_RES_8K;
			else if(disp_win == 3840 && disp_len == 2160)
				panel_resolution = PANEL_RES_UHD;
			else if(disp_win == 1920 && disp_len == 1080)
				panel_resolution = PANEL_RES_FHD;
			else if(disp_win == 1366 && disp_len == 768)
				panel_resolution = PANEL_RES_HD;
			else
			{
				panic("Error panel parameter disp_win(%d), disp_len(%d)\n", disp_win, disp_len);
			}
		}
#endif
		return panel_resolution;
	}
	else
		return panel_resolution;
}
EXPORT_SYMBOL(get_panel_res);


static enum PLATFORM_MODEL platform_model=PLATFORM_MODEL_DEFAULT;
enum PLATFORM_MODEL get_platform_model (void)
{
    return platform_model;
}

static int boot_freqnum = 5;
static int __init early_parse_dvfs (char *str)
{
    /*const char * dvfs_4="4";
    const char * dvfs_5="5";
    if (strncmp(dvfs_4,str,strlen(dvfs_4))==0)
    {
           boot_freqnum=4;
	   pr_info("clamp parse 4\n");
    }
    else if (strncmp(dvfs_5,str,strlen(dvfs_5))==0)
    {
           boot_freqnum=5;
	   pr_info("clamp parse 5\n");
    }
    else
    {
           boot_freqnum=4;
    }*/

    //RTK hack, force using 5 freq table

    boot_freqnum = 5;

    return 0 ;
}


int platform_get_dvfs(void)
{
	pr_err("%s , boot_freqnum = %d\n", __func__, boot_freqnum);
	return boot_freqnum;
}

static void switch_platform_dvfs(void)
{
	if(boot_freqnum==4){
		boot_freqnum=5;
	   	pr_err("%s , boot_freqnum = %d\n", __func__, boot_freqnum);
	}else {
		boot_freqnum=4;
	   	pr_err("%s , boot_freqnum = %d\n", __func__, boot_freqnum);
	}
}

int is_platform_reset_freq(void)
{
	if(platform_info.apk_boost_mode)
		switch_platform_dvfs();

	pr_debug("%s , platform_info.apk_boost_mode = %d\n", __func__, platform_info.apk_boost_mode);
	return platform_info.apk_boost_mode;
}

void clear_platform_reset_freq(void)
{
	platform_info.apk_boost_mode=0;

}



static int __init early_parse_platform (char *str)
{
    const char *str_plat = "RTD2851A";

    if (strncmp(str_plat, str, strlen(str_plat))==0)
    {
        platform=PLATFORM_RTD2851A;
        pr_info("RTD2851A platform\n");
    }
    else
    {
        pr_err("Wrong platform  ? \e[1;31m%s\e[0m\n",str);
    }

    return 0;
}

static int __init early_parse_platform_model (char *para)
{
	const char *string_2K = "2K";
	const char *string_4K = "4K";
	const char *string_8K = "8K";

	if (strncmp(string_4K, para, strlen(string_4K))==0)
	{
		platform_model = PLATFORM_MODEL_4K;
		pr_info("4K model\n");
	}
	else if (strncmp(string_2K, para, strlen(string_2K))==0)
	{
		platform_model = PLATFORM_MODEL_2K;
		pr_info("2K model\n");
	}
	else if (strncmp(string_8K, para, strlen(string_8K))==0)
	{
		platform_model = PLATFORM_MODEL_8K;
		pr_info("8K model\n");
	}
	else
	{
		pr_err("Wrong model ? \e[1;31m%s\e[0m\n", para);
	}

	return 0;
}


int is_platform_dvs_enable(void)
{
    return platform_info.enable_dvs;
}

early_param("chip", early_parse_platform);
early_param("chip_model", early_parse_platform_model);
early_param("boot_dvfs", early_parse_dvfs);

unsigned int get_ic_version(void)
{
#define GET_IC_VERSION()		(rtd_inl(STB_SC_VerID_reg))
#define VERSION_A_REG_CODE		(0x66410000)
//#define VERSION_B_REG_CODE		(0x6641_FIX)
//#define VERSION_C_REG_CODE		(0x6641_FIX)
#define THIS_IC_REG_CODE		(0x6641)
#define THIS_IC_REG_CODE_MASK	(0xFFFF0000)
#define THIS_IC_REG_CODE_SHIFT	(16)

	unsigned int ic_ver = GET_IC_VERSION();

	if (((ic_ver & THIS_IC_REG_CODE_MASK) >> THIS_IC_REG_CODE_SHIFT) != THIS_IC_REG_CODE)
	{
		return VERSION_A;
	}

	if (ic_ver == VERSION_A_REG_CODE)
	{
		return VERSION_A;
	}
	else
	{
		return VERSION_B;
	}
}

unsigned long get_memc_start_address(void)
{
	unsigned long memc_size = 0;
	unsigned long memc_addr = 0;

	memc_size = carvedout_buf_query(CARVEDOUT_SCALER_MEMC, (void **)&memc_addr);

	return memc_addr;
}
EXPORT_SYMBOL(get_memc_start_address);

int get_memc_size(void)
{
	unsigned long memc_addr = 0;

	return carvedout_buf_query(CARVEDOUT_SCALER_MEMC,(void **) &memc_addr);
}
EXPORT_SYMBOL(get_memc_size);

unsigned long get_scaler_mdomain_start_address(void)
{
	unsigned long mdomain_size = 0;
	unsigned long mdomain_addr = 0;

	mdomain_size = carvedout_buf_query(CARVEDOUT_SCALER_MDOMAIN, (void **)&mdomain_addr);

	return mdomain_addr;
}
EXPORT_SYMBOL(get_scaler_mdomain_start_address);

int get_scaler_mdomain_size(void)
{
	unsigned long mdomain_addr = 0;

	return carvedout_buf_query(CARVEDOUT_SCALER_MDOMAIN, (void **)&mdomain_addr);
}
EXPORT_SYMBOL(get_scaler_mdomain_size);

unsigned long get_scaler_od_start_address(void)
{
	unsigned long od_size = 0;
	unsigned long od_addr = 0;

	od_size = carvedout_buf_query(CARVEDOUT_SCALER_OD, (void **)&od_addr);

	return od_addr;
}
EXPORT_SYMBOL(get_scaler_od_start_address);

int get_scaler_od_size(void)
{
	unsigned long od_addr = 0;

	return carvedout_buf_query(CARVEDOUT_SCALER_OD, (void **)&od_addr);
}
EXPORT_SYMBOL(get_scaler_od_size);

bcas_info_t bcas;
static int __init early_parse_bcas(char *str)
{
    const char *strON="on";
    const char *strOFF="off";
    if (strncmp(strON,str,strlen(strON))==0)
    {
        bcas = bcasON;
        pr_info("bcas on\n");
    }
    else if (strncmp(strOFF,str,strlen(strOFF))==0)
    {
        bcas = bcasOFF;
        pr_info("bcas off\n");
    }
    else
    {
        bcas = bcasUNKNOWN;
        pr_err("bcas is unknown, error!!\n");
    }
    return 0;
}
early_param("bcas", early_parse_bcas);

#ifdef CONFIG_ARM64
static const char *carvedout_mem_dts_name[CARVEDOUT_NUM] = {
	"boot", // CARVEDOUT_BOOTCODE
	"demod", // CARVEDOUT_DEMOD
	"dmem", // CARVEDOUT_AV_DMEM
#ifdef CONFIG_REALTEK_SECURE
	"kboot", // CARVEDOUT_K_BOOT
	"kcpu", //CARVEDOUT_K_OS
#endif
	"rbus", // CARVEDOUT_MAP_RBUS
#ifdef CONFIG_REALTEK_SECURE_DDK
	"gpu_fw", // CARVEDOUT_GPU_FW
#endif
	"avcpu", // CARVEDOUT_AV_OS
#if defined(CONFIG_REALTEK_RPC) ||defined(CONFIG_RTK_KDRV_RPC)
	"rtkrpc", // CARVEDOUT_MAP_RPC
#endif
	"vdec_ringbuffer", // CARVEDOUT_VDEC_RINGBUF
	"audio_ringbuffer", // CARVEDOUT_AUDIO_RINGBUF
#ifdef CONFIG_REALTEK_LOGBUF
	"logbuf", // CARVEDOUT_LOGBUF
#endif
	"rom", // CARVEDOUT_ROMCODE
#ifdef CONFIG_PSTORE
	"ramoops", // RAMOOPS
#endif
	"ir_table", // CARVEDOUT_IR_TABLE
	"ddr_boundary", // CARVEDOUT_DDR_BOUNDARY
	"ddr_end_boundary", // CARVEDOUT_DDR_END_BOUNDARY
#ifdef CONFIG_CUSTOMER_TV006
	"gal", // CARVEDOUT_GAL
#endif
#ifdef CONFIG_LG_SNAPSHOT_BOOT
	"snapshot", // CARVEDOUT_SNAPSHOT
#endif
	"scaler", // CARVEDOUT_SCALER
	"memc", // CARVEDOUT_SCALER_MEMC
	"mdomain", // CARVEDOUT_SCALER_MDOMAIN
	"dr_nr", // CARVEDOUT_SCALER_DI_NR
	"nn", // CARVEDOUT_SCALER_NN
	"vip", // CARVEDOUT_SCALER_VIP
	"od", // CARVEDOUT_SCALER_OD
	"vbm", // CARVEDOUT_VDEC_VBM
	"tp", // CARVEDOUT_TP
#if 0
	"kasan", // CARVEDOUT_KASAN
#endif
	"cma_low_reserved", //CARVEDOUT_CMA_LOW
	"cma_high_reserved", //CARVEDOUT_CMA_HIGH
	"cma_3_reserved", //CARVEDOUT_CMA_3
	"cma_low_limit_reserved", //CARVEDOUT_CMA_LOW_LIMIT
	"cma_bw_reserved", //CARVEDOUT_CMA_BW
#ifdef CONFIG_HIGHMEM_BW_CMA_REGION
	"highmem_bw_start", //CARVEDOUT_HIGHMEM_BW_START
	"bw_high_cma", //CARVEDOUT_BW_HIGH_CMA
#endif
	"gpu_reserved", //CARVEDOUT_GPU_RESERVED
};
#endif

unsigned int carvedout_buf_get_layout_idx(void)
{
	unsigned int layout_idx = MM_LAYOUT_DEFAULT;

	if (get_platform_model() == PLATFORM_MODEL_2K) {
		layout_idx = MM_LAYOUT_2K_MODEL;
	} else if (DRAM_size == 0x60000) { //(get_memory_size(GFP_DCU1) + get_memory_size(GFP_DCU2))
		layout_idx = MM_LAYOUT_1G5;
	} else if (DRAM_size == 0x40000) { //(get_memory_size(GFP_DCU1) + get_memory_size(GFP_DCU2))
		layout_idx = MM_LAYOUT_1GB;
	}

	return layout_idx;
}

unsigned long carvedout_buf_query(carvedout_buf_t what, void **addr)
{
	unsigned long size = 0;
	void *address;
	unsigned int layout_idx = carvedout_buf_get_layout_idx();

	if (what >= CARVEDOUT_NUM) {
		pr_err("Input carvedout query index (%d) is out of range %d\n", what, CARVEDOUT_NUM);
		return 0;
	}

	/* this switch case is list by address order */
	switch (what)
	{
#ifdef CONFIG_HIGHMEM_BW_CMA_REGION
	// TODO:  better BW region shall be got from BW APIs
	case CARVEDOUT_HIGHMEM_BW_START:
		if (layout_idx == MM_LAYOUT_DEFAULT) {
			// for 1.5 GB platform, "better" BW region is 0x2 ~ 0x4
			address = (void *)0x20000000;
			size = 0x20000000;
		} else {
			// for 1 GB platform, no "better" BW region in HighMem
			pr_info("[MEM][BW] No better BW region in HighMem\n");
			address = (void *)0x20000000;
			size = 0;
		}
		break;
#endif

	case CARVEDOUT_DDR_BOUNDARY:
		if (DRAM_size == 0x60000) {
			address = (void *)0x1ffff000; // DDR swap is enabled on 1.5GB, so boundary is at 512 MB
			size = 0x1000;
		} else {
			address = (void *)0;
			size = 0;
		}
		break;

	case CARVEDOUT_DDR_END_BOUNDARY:
		if (DRAM_size >= 0x40000) {
			size = PAGE_SIZE << pageblock_order;
		} else {
			size = PAGE_SIZE;
		}
		address = (void *)((DRAM_size << PAGE_SHIFT) - size);
		break;

	case CARVEDOUT_GPU_RESERVED:
		if (DRAM_size > 0x60000) {
			size = CMA_HIGHMEM_LARGE;
		} else if (DRAM_size == 0x60000) {
			size = CMA_HIGHMEM_MEDIAN;
		} else {
			size = CMA_HIGHMEM_SMALL;
		}
		pr_info("[MEM] Highmem size is 0x%lx (%ld MB)\n", size, size/1024/1024);
		break;

	default:
#if 1//ndef CONFIG_ARM64  //FIXME
		address = (void *)carvedout_buf[layout_idx][what][0];
		size = carvedout_buf[layout_idx][what][1];
#else
		size = fdt_get_carvedout_mem_info(carvedout_mem_dts_name[what], &address);
#endif

		break;

//  implement your own specific case
//	case :
//		break;
	}

	if (addr)
		*addr = address;

	return size;
}
EXPORT_SYMBOL(carvedout_buf_query);

#ifdef CONFIG_OPTEE_SECURE_SVP_PROTECTION
unsigned long carvedout_buf_query_secure(carvedout_buf_t what, void **addr)
{
	unsigned long size = 0, end = 0;
	void *address;
	unsigned int layout_idx = carvedout_buf_get_layout_idx();

#define SVP_PROT_ALIGN 6*1024

	if (what >= CARVEDOUT_NUM) {
		pr_err("Input carvedout query index (%d) is out of range %d\n", what, CARVEDOUT_NUM);
		return 0;
	}

	/* this switch case is list by address order */
	switch (what)
	{
	/* defaut protect MEMC / MDOMAIN / OD / DI_NR*/
	case CARVEDOUT_SCALER_MEMC:
	case CARVEDOUT_SCALER_MDOMAIN:
	case CARVEDOUT_SCALER_OD:
	case CARVEDOUT_SCALER_DI_NR:
		address = (void *)carvedout_buf[layout_idx][what][0];
		size = carvedout_buf[layout_idx][what][1];
		if(address > 0 && size > 0) {
			end = (unsigned long)address + size;
			end = dvr_size_alignment_ex(end, SVP_PROT_ALIGN) - SVP_PROT_ALIGN;
			address = (void*)dvr_size_alignment_ex((unsigned long)address, SVP_PROT_ALIGN);
			size = end - (unsigned long)address;
		}
		break;
	default:
#if 1//ndef CONFIG_ARM64 //FIXME
		address = (void *)carvedout_buf[layout_idx][what][0];
		size = carvedout_buf[layout_idx][what][1];
		if(address > 0 && size > 0) {
			end = (unsigned long)address + size;
			end = dvr_size_alignment_ex(end, SVP_PROT_ALIGN) - SVP_PROT_ALIGN;
			address = (void*)dvr_size_alignment_ex((unsigned long)address, SVP_PROT_ALIGN);
			size = end - (unsigned long)address;
		}
		pr_info("[MEM] carvedout query secure addr=%p size=%lx\n", address, size);
#else
		size = fdt_get_carvedout_mem_info(carvedout_mem_dts_name[what], &address);
#endif
		break;

//  implement your own specific case
//	case :
//		break;
	}

	if (addr)
		*addr = address;

	return size;
}
#endif

unsigned long carvedout_buf_query_range(carvedout_buf_t idx_start, carvedout_buf_t idx_end, void **start, void **end)
{
	unsigned long size = 0;
	unsigned long min_addr = ULONG_MAX;
	unsigned long max_addr = 0;
	int i = 0;
	int idx_a, idx_b;

	if ((idx_start >= CARVEDOUT_NUM) || (idx_end >= CARVEDOUT_NUM)) {
		pr_err("Error! One of carvedout input range index (%d, %d) is out of bounds %d\n", idx_start, idx_end, CARVEDOUT_NUM);
		return 0;
	}

	// index rule : a < b
	idx_a = idx_start;
	idx_b = idx_end;
	if (idx_start > idx_end) { // swap
		idx_a = idx_end;
		idx_b = idx_start;
	}

	for (i = idx_a; i <= idx_b; i++) {
		unsigned long tmp_addr = 0;
		unsigned long tmp_size = 0;

		tmp_size = carvedout_buf_query((carvedout_buf_t) i, (void **)&tmp_addr);
		if (tmp_size) {
			min_addr = min(min_addr, tmp_addr);
			max_addr = max(max_addr, tmp_addr + tmp_size); // end address
			size += tmp_size;
			//pr_info("idx=%d, size=%lx, min_addr=%lx, max_addr=%lx\n", i, tmp_size, min_addr, max_addr);
		}
	}

	if (start && end) {
		*start = (void *)min_addr;
		*end   = (void *)max_addr;
		pr_info("carved-out total size 0x%lx (0x%x@ %p ~ %p)\n", size, (unsigned int)(*end - *start), *start, *end);
	} else {
		pr_info("carved-out non given start or end address, size 0x%lx (0x%x ~ 0x%x)\n", size, (unsigned int)min_addr, (unsigned int)max_addr);
	}

	if (max_addr && ((max_addr - min_addr) != size)) {
		pr_info("carved-out mismatch? size (0x%lx, 0x%lx), choose min one\n", size, (max_addr - min_addr));
		size = min((max_addr - min_addr), size);
	}

	return size;
}

unsigned int carvedout_fallback_query(carvedout_buf_t what)
{
	switch (what)
	{
	case CARVEDOUT_TP:
		return CARVEDOUT_FALLBACK_TO_CMA;

	default:
		return CARVEDOUT_NO_FALLBACK;
	}
}

/*
 * return negative value for invalid query
 */
int carvedout_buf_query_is_in_range(unsigned long in_addr, void **start, void **end)
{
	int i = 0;
	carvedout_buf_t idx;
#ifdef CONFIG_REALTEK_LOGBUF
	carvedout_buf_t whitelist[] = {CARVEDOUT_BOOTCODE, CARVEDOUT_AUDIO_RINGBUF, CARVEDOUT_VDEC_RINGBUF, CARVEDOUT_LOGBUF, CARVEDOUT_VDEC_VBM, CARVEDOUT_TP};
#else
	carvedout_buf_t whitelist[] = {CARVEDOUT_BOOTCODE, CARVEDOUT_VDEC_RINGBUF, CARVEDOUT_VDEC_VBM, CARVEDOUT_TP};
#endif
	unsigned long size, addr;
	int got = 0;

	unsigned int whitelist_num = sizeof(whitelist)/sizeof(carvedout_buf_t);

	for (i = 0; i < whitelist_num; i++) { // except cma area
		idx = whitelist[i];
		size = carvedout_buf_query(idx, (void *)&addr);
		if ((idx == CARVEDOUT_BOOTCODE) && size) {
			if ((in_addr >= addr) && (in_addr < (addr + size))) {
				if (start && end) {
					*start = (void *)addr;
					*end   = (void *)(addr + 0x20000);
				}
				pr_debug("carvedout_bootcode query(%lx) in idx(%d), range(%lx-%lx)\n", in_addr, idx, addr, addr + size);
				return (int)idx;
			}
		}
		else if(addr && size) {
			if ((in_addr >= addr) && (in_addr < (addr + size))) {
				if (start && end) {
					*start = (void *)addr;
					*end   = (void *)(addr + size);
				}
				pr_debug("carvedout_buf query(%lx) in idx(%d), range(%lx-%lx)\n", in_addr, idx, addr, addr + size);
				return (int)idx;
			}
		}
	}

	return -1;
}
EXPORT_SYMBOL(carvedout_buf_query_is_in_range);

extern u32 gic_irq_find_mapping(u32 hwirq);
u32 get_irq_num(u32 hwirq)
{
#ifdef CONFIG_ARM64
    return gic_irq_find_mapping(hwirq);
#else
    return hwirq;
#endif

}

#ifdef CONFIG_RTK_8KCODEC_INTERFACE
#include "kernel/rtk_codec_interface.h"
struct rtk_codec_interface *rtk_8k;
void rtk_codec_interface_register(struct rtk_codec_interface *iface)
{
    pr_info("%s, rtk_8k(%p)\n", __func__, iface);
    rtk_8k = iface;
}
void rtk_codec_interface_unregister(void)
{
    pr_info("%s\n", __func__);
    rtk_8k = NULL;
}
EXPORT_SYMBOL(rtk_codec_interface_register);
EXPORT_SYMBOL(rtk_codec_interface_unregister);
#endif


