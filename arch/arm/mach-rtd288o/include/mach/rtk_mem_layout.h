
#ifndef _RTK_MEMORY_LAYOUT_H
#define _RTK_MEMORY_LAYOUT_H

#define _MB_ 1024*1024
#define DO_ALIGNMENT(x, y) (DIV_ROUND_UP(x, y))*y
#define DO_ALIGNMENT_CHECK(x, y) (x & (y - 1))

/**
 *  --- Default memory layout start ---
 */

#if defined (CONFIG_IMG_DEMOD_CARVED_OUT_ADDRESS)
#define DEMOD_CARVED_OUT CONFIG_IMG_DEMOD_CARVED_OUT_ADDRESS
#else
#define DEMOD_CARVED_OUT 0x02000000  //compatible for previous released version.
#endif  //#if defined (CONFIG_IMG_DEMOD)

#define VIDEO_RINGBUFFER_START         0x1b200000
#define VIDEO_RINGBUFFER_SIZE			0x1000000
#define VIDEO_RINGBUFFER_SIZE_K2L_ONLY 		 0x1800000
#define AUDIO_RINGBUFFER_START         (VIDEO_RINGBUFFER_START+VIDEO_RINGBUFFER_SIZE)
#define AUDIO_RINGBUFFER_SIZE                      0x00600000


#ifdef CONFIG_REALTEK_LOGBUF
#define CONST_LOGBUF_MEM_ADDR_START (0x1ca00000)
#define CONST_LOGBUF_MEM_SIZE (512*1024)
#endif

#ifdef CONFIG_CUSTOMER_TV006	//for GAL reserve mem, 4MB align
extern const int GAL_MEM_SIZE;
extern const int GAL_MEM_ADDR_START;
#else
#define GAL_MEM_SIZE 0
#define GAL_MEM_ADDR_START 0
#endif

#ifdef CONFIG_KASAN
#define VBM_START_ADDRESS_KERNEL       0x28000000  // + c000000 (+ 192M)
#define MEMC_START_ADDRESS_KERNEL      0x34000000  // + 4300000 (+  67M)
#define MDOMAIN_START_ADDRESS_KERNEL   0x38300000  // + 2500000 (+  37M)
#define DI_NR_START_ADDRESS_KERNEL     0x3A800000  // + 0d00000 (+  13M)
#define NN_START_ADDRESS_KERNEL        0x3B500000  // + 0100000 (+   1M)
#define VIP_START_ADDRESS_KERNEL       0x3B600000  // + 0200000 (+   2M)
#define OD_START_ADDRESS_KERNEL        0x3B800000  // + 0500000 (+   5M)
#else
#define VBM_START_ADDRESS_KERNEL       0x20000000  // + c000000 (+ 192M)
#define MEMC_START_ADDRESS_KERNEL      0x2c000000  // + 4300000 (+  67M)
#define MDOMAIN_START_ADDRESS_KERNEL   0x30300000  // + 2500000 (+  37M)
#define DI_NR_START_ADDRESS_KERNEL     0x32800000  // + 0d00000 (+  13M)
#define NN_START_ADDRESS_KERNEL        0x33500000  // + 0100000 (+   1M)
#define VIP_START_ADDRESS_KERNEL       0x33600000  // + 0200000 (+   2M)
#define OD_START_ADDRESS_KERNEL        0x33800000  // + 0500000 (+   5M)
#endif

#define VDEC_BUFFER_START (VBM_START_ADDRESS_KERNEL)
#define VDEC_BUFFER_SIZE 192*_MB_    // 184 MB + 8 MB for compression header

#ifdef VBM_START_ADDRESS_KERNEL
#if (VBM_START_ADDRESS_KERNEL != VDEC_BUFFER_START)
#error "VBM size doesn't match for kernel & drivers!"
#endif
#else
#error "No define VBM_START_ADDRESS_KERNEL"
#endif

#define SCALER_MEMC_START (VDEC_BUFFER_START + VDEC_BUFFER_SIZE)
#define SCALER_MEMC_SIZE (67*_MB_)

#if (MEMC_START_ADDRESS_KERNEL != SCALER_MEMC_START)
#error "Scaler M-domain size doesn't match for kernel & drivers!"
#endif

#define SCALER_MDOMAIN_START (SCALER_MEMC_START + SCALER_MEMC_SIZE)
#define SCALER_MDOMAIN_SIZE (37*_MB_) // 37MB(M-Domain)

#if (MDOMAIN_START_ADDRESS_KERNEL != SCALER_MDOMAIN_START)
#error "Scaler M-domain size doesn't match for kernel & drivers!"
#endif

#define SCALER_DI_NR_START (SCALER_MDOMAIN_START + SCALER_MDOMAIN_SIZE)
#define SCALER_DI_NR_SIZE (13*_MB_) // 13MB

#if (DI_NR_START_ADDRESS_KERNEL != SCALER_DI_NR_START)
#error "Scaler DI_NR size doesn't match for kernel & drivers!"
#endif

#define SCALER_NN_START (SCALER_DI_NR_START + SCALER_DI_NR_SIZE)
#define SCALER_NN_SIZE (1*_MB_) // 11MB

#if (NN_START_ADDRESS_KERNEL != SCALER_NN_START)
#error "Scaler NN size doesn't match for kernel & drivers!"
#endif

#define SCALER_VIP_START (SCALER_NN_START + SCALER_NN_SIZE)
#define SCALER_VIP_SIZE  (2*_MB_)

//fixme: why can't enable this compile check in arm64?
#ifndef CONFIG_ARM64
#ifdef VIP_START_ADDRESS_KERNEL
#if (VIP_START_ADDRESS_KERNEL != SCALER_VIP_START)
#error "Scaler VIP size doesn't match for kernel & drivers!"
#endif
#else
#error "No define VIP_START_ADDRESS_KERNEL"
#endif
#endif

#define SCALER_OD_START (SCALER_VIP_START + SCALER_VIP_SIZE)
#define SCALER_OD_SIZE  5*_MB_

//fixme: why can't enable this compile check in arm64?
#ifndef CONFIG_ARM64
#ifdef OD_START_ADDRESS_KERNEL
#if (OD_START_ADDRESS_KERNEL != SCALER_OD_START)
#error "Scaler OD size doesn't match for kernel & drivers!"
#endif
#else
#error "No define OD_START_ADDRESS_KERNEL"
#endif
#endif

#define SCLAER_MODULE_START SCALER_MEMC_START
#define SCALER_MODULE_SIZE_QUERY (SCALER_MEMC_SIZE + SCALER_MDOMAIN_SIZE + SCALER_DI_NR_SIZE + SCALER_NN_SIZE + SCALER_VIP_SIZE + SCALER_OD_SIZE)
#define SCALER_MODULE_SIZE DO_ALIGNMENT(SCALER_MODULE_SIZE_QUERY, 4*_MB_)
#define SCALER_MODULE_BAND (SCALER_MODULE_SIZE - SCALER_MODULE_SIZE_QUERY)

#if (SCALER_MODULE_SIZE & 0x3FFFFF) // 4MB align
#error "Scaler module size didn't follow 4MB alignment"
#endif

#define DEMUX_TP_BUFFER_START (SCLAER_MODULE_START + SCALER_MODULE_SIZE)
#ifdef CONFIG_RTK_KDRV_DEMUX
#define DEMUX_TP_BUFFER_SIZE 32*_MB_  // must be 4MB page block alignment
#else
#define DEMUX_TP_BUFFER_SIZE 0
#endif

#ifdef CONFIG_KASAN
#define KASAN_SHADOW_PHYS_DEFAULT (DEMUX_TP_BUFFER_START + DEMUX_TP_BUFFER_SIZE)
#endif

#ifdef CONFIG_HIGHMEM_BW_CMA_REGION
#define BW_HIGH_CMA_SIZE        (88*_MB_)	// Better BW CMA size in HighMem
#endif

/**
 *  --- Default memory layout end ---
 */


/**
 *  --- 1GB memory layout start ---
 */
#define DDR_1GB_VIDEO_RINGBUFFER_START         0x1b200000
#define DDR_1GB_VIDEO_RINGBUFFER_SIZE			0x1000000
#define DDR_1GB_VIDEO_RINGBUFFER_SIZE_K2L_ONLY 		 0x1800000
#define DDR_1GB_AUDIO_RINGBUFFER_START         (DDR_1GB_VIDEO_RINGBUFFER_START+DDR_1GB_VIDEO_RINGBUFFER_SIZE)
#define DDR_1GB_AUDIO_RINGBUFFER_SIZE                      0x00600000

#ifdef CONFIG_REALTEK_LOGBUF
#define DDR_1GB_CONST_LOGBUF_MEM_ADDR_START (0x1ca00000)
#define DDR_1GB_CONST_LOGBUF_MEM_SIZE (512*1024)
#endif

#ifdef CONFIG_CUSTOMER_TV006	//for GAL reserve mem, 4MB align
extern const int DDR_1GB_GAL_MEM_SIZE;
extern const int DDR_1GB_GAL_MEM_ADDR_START;
#else
#define DDR_1GB_GAL_MEM_SIZE 0
#define DDR_1GB_GAL_MEM_ADDR_START 0
#endif

#define DDR_1GB_VBM_START_ADDRESS_KERNEL       0x20000000  // + c000000 (+ 192M)
#define DDR_1GB_MEMC_START_ADDRESS_KERNEL      0x2c000000  // + 0000000 (+   0M)
#define DDR_1GB_MDOMAIN_START_ADDRESS_KERNEL   0x2c000000  // + 2500000 (+  37M)
#define DDR_1GB_DI_NR_START_ADDRESS_KERNEL     0x2e500000  // + 0d00000 (+  13M)
#define DDR_1GB_NN_START_ADDRESS_KERNEL        0x2f200000  // + 0100000 (+   1M)
#define DDR_1GB_VIP_START_ADDRESS_KERNEL       0x2f300000  // + 0200000 (+   2M)
#define DDR_1GB_OD_START_ADDRESS_KERNEL        0x2f500000  // + 0400000 (+   4M)

#define DDR_1GB_VDEC_BUFFER_START (DDR_1GB_VBM_START_ADDRESS_KERNEL)
#define DDR_1GB_VDEC_BUFFER_SIZE 192*_MB_    // 184 MB + 8 MB for compression header

#ifdef DDR_1GB_VBM_START_ADDRESS_KERNEL
#if (DDR_1GB_VBM_START_ADDRESS_KERNEL != DDR_1GB_VDEC_BUFFER_START)
#error "1GB VBM size doesn't match for kernel & drivers!"
#endif
#else
#error "1GB No define VBM_START_ADDRESS_KERNEL"
#endif

#define DDR_1GB_SCALER_MEMC_START (DDR_1GB_VDEC_BUFFER_START + DDR_1GB_VDEC_BUFFER_SIZE)
#define DDR_1GB_SCALER_MEMC_SIZE (0*_MB_)

#if (DDR_1GB_MEMC_START_ADDRESS_KERNEL != DDR_1GB_SCALER_MEMC_START)
#error "1GB Scaler M-domain size doesn't match for kernel & drivers!"
#endif

#define DDR_1GB_SCALER_MDOMAIN_START (DDR_1GB_SCALER_MEMC_START + DDR_1GB_SCALER_MEMC_SIZE)
#define DDR_1GB_SCALER_MDOMAIN_SIZE (37*_MB_) // 37MB(M-Domain)

#if (DDR_1GB_MDOMAIN_START_ADDRESS_KERNEL != DDR_1GB_SCALER_MDOMAIN_START)
#error "1GB Scaler M-domain size doesn't match for kernel & drivers!"
#endif

#define DDR_1GB_SCALER_DI_NR_START (DDR_1GB_SCALER_MDOMAIN_START + DDR_1GB_SCALER_MDOMAIN_SIZE)
#define DDR_1GB_SCALER_DI_NR_SIZE (13*_MB_) // 13MB(DI/RTNR)

#if (DDR_1GB_DI_NR_START_ADDRESS_KERNEL != DDR_1GB_SCALER_DI_NR_START)
#error "1GB Scaler DI_NR size doesn't match for kernel & drivers!"
#endif

#define DDR_1GB_SCALER_NN_START (DDR_1GB_SCALER_DI_NR_START + DDR_1GB_SCALER_DI_NR_SIZE)
#define DDR_1GB_SCALER_NN_SIZE (1*_MB_) // 

#if (DDR_1GB_NN_START_ADDRESS_KERNEL != DDR_1GB_SCALER_NN_START)
#error "1GB Scaler NN size doesn't match for kernel & drivers!"
#endif

#define DDR_1GB_SCALER_VIP_START (DDR_1GB_SCALER_NN_START + DDR_1GB_SCALER_NN_SIZE)
#define DDR_1GB_SCALER_VIP_SIZE  (2*_MB_)

//fixme: why can't enable this compile check in arm64?
#ifndef CONFIG_ARM64
#ifdef DDR_1GB_VIP_START_ADDRESS_KERNEL
#if (DDR_1GB_VIP_START_ADDRESS_KERNEL != DDR_1GB_SCALER_VIP_START)
#error "1GB Scaler VIP size doesn't match for kernel & drivers!"
#endif
#else
#error "No define DDR_1GB_VIP_START_ADDRESS_KERNEL"
#endif
#endif

#define DDR_1GB_SCALER_OD_START (DDR_1GB_SCALER_VIP_START + DDR_1GB_SCALER_VIP_SIZE)
#define DDR_1GB_SCALER_OD_SIZE  4*_MB_

//fixme: why can't enable this compile check in arm64?
#ifndef CONFIG_ARM64
#ifdef DDR_1GB_OD_START_ADDRESS_KERNEL
#if (DDR_1GB_OD_START_ADDRESS_KERNEL != DDR_1GB_SCALER_OD_START)
#error "1GB Scaler OD size doesn't match for kernel & drivers!"
#endif
#else
#error "1GB No define OD_START_ADDRESS_KERNEL"
#endif
#endif

#define DDR_1GB_SCLAER_MODULE_START DDR_1GB_SCALER_MEMC_START
#define DDR_1GB_SCALER_MODULE_SIZE_QUERY (DDR_1GB_SCALER_MEMC_SIZE + DDR_1GB_SCALER_MDOMAIN_SIZE + DDR_1GB_SCALER_DI_NR_SIZE + DDR_1GB_SCALER_NN_SIZE + DDR_1GB_SCALER_VIP_SIZE + DDR_1GB_SCALER_OD_SIZE)
#define DDR_1GB_SCALER_MODULE_SIZE DO_ALIGNMENT(DDR_1GB_SCALER_MODULE_SIZE_QUERY, 4*_MB_)
#define DDR_1GB_SCALER_MODULE_BAND (DDR_1GB_SCALER_MODULE_SIZE - DDR_1GB_SCALER_MODULE_SIZE_QUERY)

#if (DDR_1GB_SCALER_MODULE_SIZE & 0x3FFFFF) // 4MB align
#error "1GB Scaler module size didn't follow 4MB alignment"
#endif

#define DDR_1GB_DEMUX_TP_BUFFER_START (DDR_1GB_SCLAER_MODULE_START + DDR_1GB_SCALER_MODULE_SIZE)
#ifdef CONFIG_RTK_KDRV_DEMUX
#define DDR_1GB_DEMUX_TP_BUFFER_SIZE 0 //32*_MB_  // must be 4MB page block alignment
#else
#define DDR_1GB_DEMUX_TP_BUFFER_SIZE 0
#endif

#ifdef CONFIG_KASAN
#define DDR_1GB_KASAN_SHADOW_PHYS (DDR_1GB_DEMUX_TP_BUFFER_START + DDR_1GB_DEMUX_TP_BUFFER_SIZE)
#endif

#ifdef CONFIG_HIGHMEM_BW_CMA_REGION
#define DDR_1GB_BW_HIGH_CMA_SIZE        (0*_MB_)	// Better BW CMA size in HighMem
#endif

/**
 *  --- 1GB memory layout end ---
 */


#define RTK_GPU_FW_SIZE (512*1024)

#define CMA_HIGHMEM_SMALL 128*1024*1024
#define CMA_HIGHMEM_LARGE 512*1024*1024


#endif //_RTK_MEMORY_LAYOUT_H
