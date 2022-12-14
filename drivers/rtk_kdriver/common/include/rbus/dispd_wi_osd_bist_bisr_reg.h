/**
* @file Mac7p-DesignSpec-D-Domain_STAGE2_TOP_BIST_BISR_control
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_DISPD_WI_OSD_BIST_BISR_REG_H_
#define _RBUS_DISPD_WI_OSD_BIST_BISR_REG_H_

#include "rbus_types.h"



//  DISPD_WI_OSD_BIST_BISR Register Address
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE                                 0x18029F80
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_reg_addr                         "0xB8029F80"
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_reg                              0xB8029F80
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_inst_addr                        "0x0000"
#define  set_DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_reg(data)                    (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_reg                          (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_reg))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_od_line_buf_bist_mode_shift      (22)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_mplus_sram_3_bist_mode_shift     (21)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_mplus_sram_2_bist_mode_shift     (20)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pqdc2_bist_mode_shift            (19)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pqdc1_bist_mode_shift            (18)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pqc2_bist_mode_shift             (17)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pqc1_bist_mode_shift             (16)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_m_plus_sram_bist_mode_shift      (15)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pod2_1p_bist_mode_shift          (14)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pod2_2p_bist_mode_shift          (13)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pcid_tab_bist_mode_0_shift       (11)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pcid_tab_bist_mode_1_shift       (10)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pcid_tab_bist_mode_2_shift       (9)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_inv_out_gamma_bist_mode_shift    (8)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_gamma2_bist_mode_shift           (7)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pcid_lb_bist_mode_shift          (6)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_demura_2p_bist_mode_shift        (5)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_demura_bist_mode_shift           (4)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_oddma_bist_mode_shift            (3)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_od_bist_mode_shift               (2)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_ld_con_bist_mode_shift           (1)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_ld_spi_con_bist_mode_shift       (0)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_od_line_buf_bist_mode_mask       (0x00400000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_mplus_sram_3_bist_mode_mask      (0x00200000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_mplus_sram_2_bist_mode_mask      (0x00100000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pqdc2_bist_mode_mask             (0x00080000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pqdc1_bist_mode_mask             (0x00040000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pqc2_bist_mode_mask              (0x00020000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pqc1_bist_mode_mask              (0x00010000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_m_plus_sram_bist_mode_mask       (0x00008000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pod2_1p_bist_mode_mask           (0x00004000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pod2_2p_bist_mode_mask           (0x00002000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pcid_tab_bist_mode_0_mask        (0x00000800)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pcid_tab_bist_mode_1_mask        (0x00000400)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pcid_tab_bist_mode_2_mask        (0x00000200)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_inv_out_gamma_bist_mode_mask     (0x00000100)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_gamma2_bist_mode_mask            (0x00000080)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pcid_lb_bist_mode_mask           (0x00000040)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_demura_2p_bist_mode_mask         (0x00000020)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_demura_bist_mode_mask            (0x00000010)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_oddma_bist_mode_mask             (0x00000008)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_od_bist_mode_mask                (0x00000004)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_ld_con_bist_mode_mask            (0x00000002)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_ld_spi_con_bist_mode_mask        (0x00000001)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_od_line_buf_bist_mode(data)      (0x00400000&((data)<<22))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_mplus_sram_3_bist_mode(data)     (0x00200000&((data)<<21))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_mplus_sram_2_bist_mode(data)     (0x00100000&((data)<<20))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pqdc2_bist_mode(data)            (0x00080000&((data)<<19))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pqdc1_bist_mode(data)            (0x00040000&((data)<<18))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pqc2_bist_mode(data)             (0x00020000&((data)<<17))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pqc1_bist_mode(data)             (0x00010000&((data)<<16))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_m_plus_sram_bist_mode(data)      (0x00008000&((data)<<15))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pod2_1p_bist_mode(data)          (0x00004000&((data)<<14))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pod2_2p_bist_mode(data)          (0x00002000&((data)<<13))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pcid_tab_bist_mode_0(data)       (0x00000800&((data)<<11))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pcid_tab_bist_mode_1(data)       (0x00000400&((data)<<10))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pcid_tab_bist_mode_2(data)       (0x00000200&((data)<<9))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_inv_out_gamma_bist_mode(data)    (0x00000100&((data)<<8))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_gamma2_bist_mode(data)           (0x00000080&((data)<<7))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_pcid_lb_bist_mode(data)          (0x00000040&((data)<<6))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_demura_2p_bist_mode(data)        (0x00000020&((data)<<5))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_demura_bist_mode(data)           (0x00000010&((data)<<4))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_oddma_bist_mode(data)            (0x00000008&((data)<<3))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_od_bist_mode(data)               (0x00000004&((data)<<2))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_ld_con_bist_mode(data)           (0x00000002&((data)<<1))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_ld_spi_con_bist_mode(data)       (0x00000001&(data))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_od_line_buf_bist_mode(data)  ((0x00400000&(data))>>22)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_mplus_sram_3_bist_mode(data) ((0x00200000&(data))>>21)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_mplus_sram_2_bist_mode(data) ((0x00100000&(data))>>20)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_pqdc2_bist_mode(data)        ((0x00080000&(data))>>19)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_pqdc1_bist_mode(data)        ((0x00040000&(data))>>18)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_pqc2_bist_mode(data)         ((0x00020000&(data))>>17)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_pqc1_bist_mode(data)         ((0x00010000&(data))>>16)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_m_plus_sram_bist_mode(data)  ((0x00008000&(data))>>15)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_pod2_1p_bist_mode(data)      ((0x00004000&(data))>>14)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_pod2_2p_bist_mode(data)      ((0x00002000&(data))>>13)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_pcid_tab_bist_mode_0(data)   ((0x00000800&(data))>>11)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_pcid_tab_bist_mode_1(data)   ((0x00000400&(data))>>10)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_pcid_tab_bist_mode_2(data)   ((0x00000200&(data))>>9)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_inv_out_gamma_bist_mode(data) ((0x00000100&(data))>>8)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_gamma2_bist_mode(data)       ((0x00000080&(data))>>7)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_pcid_lb_bist_mode(data)      ((0x00000040&(data))>>6)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_demura_2p_bist_mode(data)    ((0x00000020&(data))>>5)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_demura_bist_mode(data)       ((0x00000010&(data))>>4)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_oddma_bist_mode(data)        ((0x00000008&(data))>>3)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_od_bist_mode(data)           ((0x00000004&(data))>>2)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_ld_con_bist_mode(data)       ((0x00000002&(data))>>1)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_MODE_get_ld_spi_con_bist_mode(data)   (0x00000001&(data))

#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE                                 0x18029F84
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_reg_addr                         "0xB8029F84"
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_reg                              0xB8029F84
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_inst_addr                        "0x0001"
#define  set_DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_reg(data)                    (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_reg                          (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_reg))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_od_line_buf_bist_done_shift      (22)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_mplus_sram_bist_done_3_shift     (21)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_mplus_sram_bist_done_2_shift     (20)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pqdc2_bist_done_shift            (19)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pqdc1_bist_done_shift            (18)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pqc2_bist_done_shift             (17)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pqc1_bist_done_shift             (16)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_m_plus_sram_bist_done_shift      (15)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pod2_1p_bist_done_shift          (14)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pod2_2p_bist_done_shift          (13)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pcid_tab_bist_done_0_shift       (11)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pcid_tab_bist_done_1_shift       (10)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pcid_tab_bist_done_2_shift       (9)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_inv_out_gamma_bist_done_shift    (8)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_gamma2_bist_done_shift           (7)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pcid_lb_bist_done_shift          (6)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_demura_2p_bist_done_shift        (5)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_demura_bist_done_shift           (4)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_oddma_bist_done_shift            (3)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_od_bist_done_shift               (2)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_ld_con_bist_done_shift           (1)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_ld_spi_con_bist_done_shift       (0)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_od_line_buf_bist_done_mask       (0x00400000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_mplus_sram_bist_done_3_mask      (0x00200000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_mplus_sram_bist_done_2_mask      (0x00100000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pqdc2_bist_done_mask             (0x00080000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pqdc1_bist_done_mask             (0x00040000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pqc2_bist_done_mask              (0x00020000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pqc1_bist_done_mask              (0x00010000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_m_plus_sram_bist_done_mask       (0x00008000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pod2_1p_bist_done_mask           (0x00004000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pod2_2p_bist_done_mask           (0x00002000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pcid_tab_bist_done_0_mask        (0x00000800)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pcid_tab_bist_done_1_mask        (0x00000400)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pcid_tab_bist_done_2_mask        (0x00000200)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_inv_out_gamma_bist_done_mask     (0x00000100)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_gamma2_bist_done_mask            (0x00000080)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pcid_lb_bist_done_mask           (0x00000040)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_demura_2p_bist_done_mask         (0x00000020)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_demura_bist_done_mask            (0x00000010)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_oddma_bist_done_mask             (0x00000008)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_od_bist_done_mask                (0x00000004)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_ld_con_bist_done_mask            (0x00000002)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_ld_spi_con_bist_done_mask        (0x00000001)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_od_line_buf_bist_done(data)      (0x00400000&((data)<<22))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_mplus_sram_bist_done_3(data)     (0x00200000&((data)<<21))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_mplus_sram_bist_done_2(data)     (0x00100000&((data)<<20))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pqdc2_bist_done(data)            (0x00080000&((data)<<19))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pqdc1_bist_done(data)            (0x00040000&((data)<<18))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pqc2_bist_done(data)             (0x00020000&((data)<<17))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pqc1_bist_done(data)             (0x00010000&((data)<<16))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_m_plus_sram_bist_done(data)      (0x00008000&((data)<<15))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pod2_1p_bist_done(data)          (0x00004000&((data)<<14))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pod2_2p_bist_done(data)          (0x00002000&((data)<<13))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pcid_tab_bist_done_0(data)       (0x00000800&((data)<<11))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pcid_tab_bist_done_1(data)       (0x00000400&((data)<<10))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pcid_tab_bist_done_2(data)       (0x00000200&((data)<<9))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_inv_out_gamma_bist_done(data)    (0x00000100&((data)<<8))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_gamma2_bist_done(data)           (0x00000080&((data)<<7))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_pcid_lb_bist_done(data)          (0x00000040&((data)<<6))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_demura_2p_bist_done(data)        (0x00000020&((data)<<5))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_demura_bist_done(data)           (0x00000010&((data)<<4))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_oddma_bist_done(data)            (0x00000008&((data)<<3))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_od_bist_done(data)               (0x00000004&((data)<<2))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_ld_con_bist_done(data)           (0x00000002&((data)<<1))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_ld_spi_con_bist_done(data)       (0x00000001&(data))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_od_line_buf_bist_done(data)  ((0x00400000&(data))>>22)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_mplus_sram_bist_done_3(data) ((0x00200000&(data))>>21)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_mplus_sram_bist_done_2(data) ((0x00100000&(data))>>20)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_pqdc2_bist_done(data)        ((0x00080000&(data))>>19)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_pqdc1_bist_done(data)        ((0x00040000&(data))>>18)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_pqc2_bist_done(data)         ((0x00020000&(data))>>17)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_pqc1_bist_done(data)         ((0x00010000&(data))>>16)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_m_plus_sram_bist_done(data)  ((0x00008000&(data))>>15)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_pod2_1p_bist_done(data)      ((0x00004000&(data))>>14)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_pod2_2p_bist_done(data)      ((0x00002000&(data))>>13)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_pcid_tab_bist_done_0(data)   ((0x00000800&(data))>>11)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_pcid_tab_bist_done_1(data)   ((0x00000400&(data))>>10)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_pcid_tab_bist_done_2(data)   ((0x00000200&(data))>>9)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_inv_out_gamma_bist_done(data) ((0x00000100&(data))>>8)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_gamma2_bist_done(data)       ((0x00000080&(data))>>7)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_pcid_lb_bist_done(data)      ((0x00000040&(data))>>6)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_demura_2p_bist_done(data)    ((0x00000020&(data))>>5)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_demura_bist_done(data)       ((0x00000010&(data))>>4)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_oddma_bist_done(data)        ((0x00000008&(data))>>3)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_od_bist_done(data)           ((0x00000004&(data))>>2)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_ld_con_bist_done(data)       ((0x00000002&(data))>>1)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_DONE_get_ld_spi_con_bist_done(data)   (0x00000001&(data))

#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP                           0x18029F88
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_reg_addr                   "0xB8029F88"
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_reg                        0xB8029F88
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_inst_addr                  "0x0002"
#define  set_DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_reg(data)              (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_reg                    (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_reg))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_od_line_buf_bist_fail_group_shift (22)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_mplus_bist_fail_group_3_shift (21)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_mplus_bist_fail_group_2_shift (20)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pqdc2_bist_fail_group_shift (19)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pqdc1_bist_fail_group_shift (18)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pqc2_bist_fail_group_shift (17)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pqc1_bist_fail_group_shift (16)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_m_plus_bist_fail_group_shift (15)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pod2_1p_bist_fail_group_shift (14)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pod2_2p_bist_fail_group_shift (13)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pcid_tab_bist_fail_group_0_shift (11)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pcid_tab_bist_fail_group_1_shift (10)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pcid_tab_bist_fail_group_2_shift (9)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_inv_out_gamma_bist_fail_group_shift (8)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_gamma2_bist_fail_group_shift (7)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pcid_lb_bist_fail_group_shift (6)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_demura_2p_bist_fail_group_shift (5)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_demura_bist_fail_group_shift (4)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_oddma_bist_fail_group_shift (3)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_od_bist_fail_group_shift   (2)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_ld_con_bist_fail_group_shift (1)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_ld_spi_con_bist_fail_group_shift (0)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_od_line_buf_bist_fail_group_mask (0x00400000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_mplus_bist_fail_group_3_mask (0x00200000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_mplus_bist_fail_group_2_mask (0x00100000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pqdc2_bist_fail_group_mask (0x00080000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pqdc1_bist_fail_group_mask (0x00040000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pqc2_bist_fail_group_mask  (0x00020000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pqc1_bist_fail_group_mask  (0x00010000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_m_plus_bist_fail_group_mask (0x00008000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pod2_1p_bist_fail_group_mask (0x00004000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pod2_2p_bist_fail_group_mask (0x00002000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pcid_tab_bist_fail_group_0_mask (0x00000800)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pcid_tab_bist_fail_group_1_mask (0x00000400)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pcid_tab_bist_fail_group_2_mask (0x00000200)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_inv_out_gamma_bist_fail_group_mask (0x00000100)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_gamma2_bist_fail_group_mask (0x00000080)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pcid_lb_bist_fail_group_mask (0x00000040)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_demura_2p_bist_fail_group_mask (0x00000020)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_demura_bist_fail_group_mask (0x00000010)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_oddma_bist_fail_group_mask (0x00000008)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_od_bist_fail_group_mask    (0x00000004)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_ld_con_bist_fail_group_mask (0x00000002)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_ld_spi_con_bist_fail_group_mask (0x00000001)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_od_line_buf_bist_fail_group(data) (0x00400000&((data)<<22))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_mplus_bist_fail_group_3(data) (0x00200000&((data)<<21))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_mplus_bist_fail_group_2(data) (0x00100000&((data)<<20))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pqdc2_bist_fail_group(data) (0x00080000&((data)<<19))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pqdc1_bist_fail_group(data) (0x00040000&((data)<<18))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pqc2_bist_fail_group(data) (0x00020000&((data)<<17))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pqc1_bist_fail_group(data) (0x00010000&((data)<<16))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_m_plus_bist_fail_group(data) (0x00008000&((data)<<15))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pod2_1p_bist_fail_group(data) (0x00004000&((data)<<14))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pod2_2p_bist_fail_group(data) (0x00002000&((data)<<13))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pcid_tab_bist_fail_group_0(data) (0x00000800&((data)<<11))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pcid_tab_bist_fail_group_1(data) (0x00000400&((data)<<10))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pcid_tab_bist_fail_group_2(data) (0x00000200&((data)<<9))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_inv_out_gamma_bist_fail_group(data) (0x00000100&((data)<<8))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_gamma2_bist_fail_group(data) (0x00000080&((data)<<7))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_pcid_lb_bist_fail_group(data) (0x00000040&((data)<<6))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_demura_2p_bist_fail_group(data) (0x00000020&((data)<<5))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_demura_bist_fail_group(data) (0x00000010&((data)<<4))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_oddma_bist_fail_group(data) (0x00000008&((data)<<3))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_od_bist_fail_group(data)   (0x00000004&((data)<<2))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_ld_con_bist_fail_group(data) (0x00000002&((data)<<1))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_ld_spi_con_bist_fail_group(data) (0x00000001&(data))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_od_line_buf_bist_fail_group(data) ((0x00400000&(data))>>22)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_mplus_bist_fail_group_3(data) ((0x00200000&(data))>>21)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_mplus_bist_fail_group_2(data) ((0x00100000&(data))>>20)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_pqdc2_bist_fail_group(data) ((0x00080000&(data))>>19)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_pqdc1_bist_fail_group(data) ((0x00040000&(data))>>18)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_pqc2_bist_fail_group(data) ((0x00020000&(data))>>17)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_pqc1_bist_fail_group(data) ((0x00010000&(data))>>16)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_m_plus_bist_fail_group(data) ((0x00008000&(data))>>15)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_pod2_1p_bist_fail_group(data) ((0x00004000&(data))>>14)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_pod2_2p_bist_fail_group(data) ((0x00002000&(data))>>13)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_pcid_tab_bist_fail_group_0(data) ((0x00000800&(data))>>11)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_pcid_tab_bist_fail_group_1(data) ((0x00000400&(data))>>10)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_pcid_tab_bist_fail_group_2(data) ((0x00000200&(data))>>9)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_inv_out_gamma_bist_fail_group(data) ((0x00000100&(data))>>8)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_gamma2_bist_fail_group(data) ((0x00000080&(data))>>7)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_pcid_lb_bist_fail_group(data) ((0x00000040&(data))>>6)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_demura_2p_bist_fail_group(data) ((0x00000020&(data))>>5)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_demura_bist_fail_group(data) ((0x00000010&(data))>>4)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_oddma_bist_fail_group(data) ((0x00000008&(data))>>3)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_od_bist_fail_group(data) ((0x00000004&(data))>>2)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_ld_con_bist_fail_group(data) ((0x00000002&(data))>>1)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_BIST_FAIL_GROUP_get_ld_spi_con_bist_fail_group(data) (0x00000001&(data))

#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE                                  0x18029F8C
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_reg_addr                          "0xB8029F8C"
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_reg                               0xB8029F8C
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_inst_addr                         "0x0003"
#define  set_DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_reg(data)                     (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_reg                           (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_reg))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_od_line_buf_drf_mode_shift        (22)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_mplus_drf_3_bist_mode_shift       (21)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_mplus_drf_2_bist_mode_shift       (20)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pqdc2_drf_bist_mode_shift         (19)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pqdc1_drf_bist_mode_shift         (18)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pqc2_drf_bist_mode_shift          (17)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pqc1_drf_bist_mode_shift          (16)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_m_plus_drf_mode_shift             (15)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pod2_1p_drf_mode_shift            (14)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pod2_2p_drf_mode_shift            (13)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pcid_tab_drf_mode_0_shift         (11)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pcid_tab_drf_mode_1_shift         (10)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pcid_tab_drf_mode_2_shift         (9)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_inv_out_gamma_drf_mode_shift      (8)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_gamma2_drf_mode_shift             (7)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pcid_lb_drf_mode_shift            (6)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_demura_2p_drf_bist_mode_shift     (5)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_demura_drf_bist_mode_shift        (4)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_oddma_drf_mode_shift              (3)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_od_drf_mode_shift                 (2)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_ld_con_drf_mode_shift             (1)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_ld_spi_con_drf_mode_shift         (0)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_od_line_buf_drf_mode_mask         (0x00400000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_mplus_drf_3_bist_mode_mask        (0x00200000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_mplus_drf_2_bist_mode_mask        (0x00100000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pqdc2_drf_bist_mode_mask          (0x00080000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pqdc1_drf_bist_mode_mask          (0x00040000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pqc2_drf_bist_mode_mask           (0x00020000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pqc1_drf_bist_mode_mask           (0x00010000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_m_plus_drf_mode_mask              (0x00008000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pod2_1p_drf_mode_mask             (0x00004000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pod2_2p_drf_mode_mask             (0x00002000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pcid_tab_drf_mode_0_mask          (0x00000800)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pcid_tab_drf_mode_1_mask          (0x00000400)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pcid_tab_drf_mode_2_mask          (0x00000200)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_inv_out_gamma_drf_mode_mask       (0x00000100)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_gamma2_drf_mode_mask              (0x00000080)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pcid_lb_drf_mode_mask             (0x00000040)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_demura_2p_drf_bist_mode_mask      (0x00000020)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_demura_drf_bist_mode_mask         (0x00000010)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_oddma_drf_mode_mask               (0x00000008)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_od_drf_mode_mask                  (0x00000004)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_ld_con_drf_mode_mask              (0x00000002)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_ld_spi_con_drf_mode_mask          (0x00000001)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_od_line_buf_drf_mode(data)        (0x00400000&((data)<<22))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_mplus_drf_3_bist_mode(data)       (0x00200000&((data)<<21))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_mplus_drf_2_bist_mode(data)       (0x00100000&((data)<<20))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pqdc2_drf_bist_mode(data)         (0x00080000&((data)<<19))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pqdc1_drf_bist_mode(data)         (0x00040000&((data)<<18))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pqc2_drf_bist_mode(data)          (0x00020000&((data)<<17))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pqc1_drf_bist_mode(data)          (0x00010000&((data)<<16))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_m_plus_drf_mode(data)             (0x00008000&((data)<<15))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pod2_1p_drf_mode(data)            (0x00004000&((data)<<14))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pod2_2p_drf_mode(data)            (0x00002000&((data)<<13))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pcid_tab_drf_mode_0(data)         (0x00000800&((data)<<11))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pcid_tab_drf_mode_1(data)         (0x00000400&((data)<<10))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pcid_tab_drf_mode_2(data)         (0x00000200&((data)<<9))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_inv_out_gamma_drf_mode(data)      (0x00000100&((data)<<8))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_gamma2_drf_mode(data)             (0x00000080&((data)<<7))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_pcid_lb_drf_mode(data)            (0x00000040&((data)<<6))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_demura_2p_drf_bist_mode(data)     (0x00000020&((data)<<5))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_demura_drf_bist_mode(data)        (0x00000010&((data)<<4))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_oddma_drf_mode(data)              (0x00000008&((data)<<3))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_od_drf_mode(data)                 (0x00000004&((data)<<2))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_ld_con_drf_mode(data)             (0x00000002&((data)<<1))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_ld_spi_con_drf_mode(data)         (0x00000001&(data))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_od_line_buf_drf_mode(data)    ((0x00400000&(data))>>22)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_mplus_drf_3_bist_mode(data)   ((0x00200000&(data))>>21)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_mplus_drf_2_bist_mode(data)   ((0x00100000&(data))>>20)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_pqdc2_drf_bist_mode(data)     ((0x00080000&(data))>>19)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_pqdc1_drf_bist_mode(data)     ((0x00040000&(data))>>18)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_pqc2_drf_bist_mode(data)      ((0x00020000&(data))>>17)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_pqc1_drf_bist_mode(data)      ((0x00010000&(data))>>16)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_m_plus_drf_mode(data)         ((0x00008000&(data))>>15)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_pod2_1p_drf_mode(data)        ((0x00004000&(data))>>14)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_pod2_2p_drf_mode(data)        ((0x00002000&(data))>>13)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_pcid_tab_drf_mode_0(data)     ((0x00000800&(data))>>11)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_pcid_tab_drf_mode_1(data)     ((0x00000400&(data))>>10)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_pcid_tab_drf_mode_2(data)     ((0x00000200&(data))>>9)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_inv_out_gamma_drf_mode(data)  ((0x00000100&(data))>>8)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_gamma2_drf_mode(data)         ((0x00000080&(data))>>7)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_pcid_lb_drf_mode(data)        ((0x00000040&(data))>>6)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_demura_2p_drf_bist_mode(data) ((0x00000020&(data))>>5)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_demura_drf_bist_mode(data)    ((0x00000010&(data))>>4)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_oddma_drf_mode(data)          ((0x00000008&(data))>>3)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_od_drf_mode(data)             ((0x00000004&(data))>>2)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_ld_con_drf_mode(data)         ((0x00000002&(data))>>1)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_MODE_get_ld_spi_con_drf_mode(data)     (0x00000001&(data))

#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME                                0x18029F90
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_reg_addr                        "0xB8029F90"
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_reg                             0xB8029F90
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_inst_addr                       "0x0004"
#define  set_DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_reg(data)                   (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_reg                         (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_reg))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_od_line_buf_drf_resume_shift    (22)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_mplus_drf_3_test_resume_shift   (21)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_mplus_drf_2_test_resume_shift   (20)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pqdc2_drf_test_resume_shift     (19)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pqdc1_drf_test_resume_shift     (18)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pqc2_drf_test_resume_shift      (17)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pqc1_drf_test_resume_shift      (16)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_m_plus_drf_resume_shift         (15)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pod2_1p_drf_resume_shift        (14)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pod2_2p_drf_resume_shift        (13)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pcid_tab_drf_resume_0_shift     (11)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pcid_tab_drf_resume_1_shift     (10)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pcid_tab_drf_resume_2_shift     (9)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_inv_out_gamma_drf_resume_shift  (8)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_gamma2_drf_resume_shift         (7)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pcid_lb_drf_resume_shift        (6)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_demura_2p_test_resume_shift     (5)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_demura_test_resume_shift        (4)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_oddma_drf_resume_shift          (3)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_od_drf_resume_shift             (2)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_ld_con_drf_resume_shift         (1)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_ld_spi_con_drf_resume_shift     (0)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_od_line_buf_drf_resume_mask     (0x00400000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_mplus_drf_3_test_resume_mask    (0x00200000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_mplus_drf_2_test_resume_mask    (0x00100000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pqdc2_drf_test_resume_mask      (0x00080000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pqdc1_drf_test_resume_mask      (0x00040000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pqc2_drf_test_resume_mask       (0x00020000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pqc1_drf_test_resume_mask       (0x00010000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_m_plus_drf_resume_mask          (0x00008000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pod2_1p_drf_resume_mask         (0x00004000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pod2_2p_drf_resume_mask         (0x00002000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pcid_tab_drf_resume_0_mask      (0x00000800)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pcid_tab_drf_resume_1_mask      (0x00000400)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pcid_tab_drf_resume_2_mask      (0x00000200)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_inv_out_gamma_drf_resume_mask   (0x00000100)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_gamma2_drf_resume_mask          (0x00000080)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pcid_lb_drf_resume_mask         (0x00000040)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_demura_2p_test_resume_mask      (0x00000020)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_demura_test_resume_mask         (0x00000010)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_oddma_drf_resume_mask           (0x00000008)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_od_drf_resume_mask              (0x00000004)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_ld_con_drf_resume_mask          (0x00000002)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_ld_spi_con_drf_resume_mask      (0x00000001)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_od_line_buf_drf_resume(data)    (0x00400000&((data)<<22))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_mplus_drf_3_test_resume(data)   (0x00200000&((data)<<21))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_mplus_drf_2_test_resume(data)   (0x00100000&((data)<<20))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pqdc2_drf_test_resume(data)     (0x00080000&((data)<<19))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pqdc1_drf_test_resume(data)     (0x00040000&((data)<<18))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pqc2_drf_test_resume(data)      (0x00020000&((data)<<17))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pqc1_drf_test_resume(data)      (0x00010000&((data)<<16))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_m_plus_drf_resume(data)         (0x00008000&((data)<<15))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pod2_1p_drf_resume(data)        (0x00004000&((data)<<14))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pod2_2p_drf_resume(data)        (0x00002000&((data)<<13))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pcid_tab_drf_resume_0(data)     (0x00000800&((data)<<11))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pcid_tab_drf_resume_1(data)     (0x00000400&((data)<<10))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pcid_tab_drf_resume_2(data)     (0x00000200&((data)<<9))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_inv_out_gamma_drf_resume(data)  (0x00000100&((data)<<8))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_gamma2_drf_resume(data)         (0x00000080&((data)<<7))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_pcid_lb_drf_resume(data)        (0x00000040&((data)<<6))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_demura_2p_test_resume(data)     (0x00000020&((data)<<5))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_demura_test_resume(data)        (0x00000010&((data)<<4))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_oddma_drf_resume(data)          (0x00000008&((data)<<3))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_od_drf_resume(data)             (0x00000004&((data)<<2))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_ld_con_drf_resume(data)         (0x00000002&((data)<<1))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_ld_spi_con_drf_resume(data)     (0x00000001&(data))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_od_line_buf_drf_resume(data) ((0x00400000&(data))>>22)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_mplus_drf_3_test_resume(data) ((0x00200000&(data))>>21)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_mplus_drf_2_test_resume(data) ((0x00100000&(data))>>20)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_pqdc2_drf_test_resume(data) ((0x00080000&(data))>>19)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_pqdc1_drf_test_resume(data) ((0x00040000&(data))>>18)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_pqc2_drf_test_resume(data)  ((0x00020000&(data))>>17)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_pqc1_drf_test_resume(data)  ((0x00010000&(data))>>16)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_m_plus_drf_resume(data)     ((0x00008000&(data))>>15)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_pod2_1p_drf_resume(data)    ((0x00004000&(data))>>14)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_pod2_2p_drf_resume(data)    ((0x00002000&(data))>>13)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_pcid_tab_drf_resume_0(data) ((0x00000800&(data))>>11)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_pcid_tab_drf_resume_1(data) ((0x00000400&(data))>>10)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_pcid_tab_drf_resume_2(data) ((0x00000200&(data))>>9)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_inv_out_gamma_drf_resume(data) ((0x00000100&(data))>>8)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_gamma2_drf_resume(data)     ((0x00000080&(data))>>7)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_pcid_lb_drf_resume(data)    ((0x00000040&(data))>>6)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_demura_2p_test_resume(data) ((0x00000020&(data))>>5)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_demura_test_resume(data)    ((0x00000010&(data))>>4)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_oddma_drf_resume(data)      ((0x00000008&(data))>>3)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_od_drf_resume(data)         ((0x00000004&(data))>>2)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_ld_con_drf_resume(data)     ((0x00000002&(data))>>1)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_RESUME_get_ld_spi_con_drf_resume(data) (0x00000001&(data))

#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE                                  0x18029F94
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_reg_addr                          "0xB8029F94"
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_reg                               0xB8029F94
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_inst_addr                         "0x0005"
#define  set_DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_reg(data)                     (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_reg                           (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_reg))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_od_line_buf_drf_done_shift        (22)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_mplus_drf_bist_done_3_shift       (21)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_mplus_drf_bist_done_2_shift       (20)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pqdc2_drf_bist_done_shift         (19)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pqdc1_drf_bist_done_shift         (18)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pqc2_drf_bist_done_shift          (17)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pqc1_drf_bist_done_shift          (16)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_m_plus_drf_done_shift             (15)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pod2_1p_drf_done_shift            (14)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pod2_2p_drf_done_shift            (13)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pcid_tab_drf_done_0_shift         (11)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pcid_tab_drf_done_1_shift         (10)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pcid_tab_drf_done_2_shift         (9)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_inv_out_gamma_drf_done_shift      (8)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_gamma2_drf_done_shift             (7)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pcid_lb_drf_done_shift            (6)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_demura_2p_drf_bist_done_shift     (5)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_demura_drf_bist_done_shift        (4)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_oddma_drf_done_shift              (3)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_od_drf_done_shift                 (2)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_ld_con_drf_done_shift             (1)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_ld_spi_con_drf_done_shift         (0)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_od_line_buf_drf_done_mask         (0x00400000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_mplus_drf_bist_done_3_mask        (0x00200000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_mplus_drf_bist_done_2_mask        (0x00100000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pqdc2_drf_bist_done_mask          (0x00080000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pqdc1_drf_bist_done_mask          (0x00040000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pqc2_drf_bist_done_mask           (0x00020000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pqc1_drf_bist_done_mask           (0x00010000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_m_plus_drf_done_mask              (0x00008000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pod2_1p_drf_done_mask             (0x00004000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pod2_2p_drf_done_mask             (0x00002000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pcid_tab_drf_done_0_mask          (0x00000800)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pcid_tab_drf_done_1_mask          (0x00000400)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pcid_tab_drf_done_2_mask          (0x00000200)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_inv_out_gamma_drf_done_mask       (0x00000100)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_gamma2_drf_done_mask              (0x00000080)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pcid_lb_drf_done_mask             (0x00000040)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_demura_2p_drf_bist_done_mask      (0x00000020)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_demura_drf_bist_done_mask         (0x00000010)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_oddma_drf_done_mask               (0x00000008)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_od_drf_done_mask                  (0x00000004)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_ld_con_drf_done_mask              (0x00000002)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_ld_spi_con_drf_done_mask          (0x00000001)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_od_line_buf_drf_done(data)        (0x00400000&((data)<<22))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_mplus_drf_bist_done_3(data)       (0x00200000&((data)<<21))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_mplus_drf_bist_done_2(data)       (0x00100000&((data)<<20))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pqdc2_drf_bist_done(data)         (0x00080000&((data)<<19))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pqdc1_drf_bist_done(data)         (0x00040000&((data)<<18))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pqc2_drf_bist_done(data)          (0x00020000&((data)<<17))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pqc1_drf_bist_done(data)          (0x00010000&((data)<<16))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_m_plus_drf_done(data)             (0x00008000&((data)<<15))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pod2_1p_drf_done(data)            (0x00004000&((data)<<14))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pod2_2p_drf_done(data)            (0x00002000&((data)<<13))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pcid_tab_drf_done_0(data)         (0x00000800&((data)<<11))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pcid_tab_drf_done_1(data)         (0x00000400&((data)<<10))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pcid_tab_drf_done_2(data)         (0x00000200&((data)<<9))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_inv_out_gamma_drf_done(data)      (0x00000100&((data)<<8))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_gamma2_drf_done(data)             (0x00000080&((data)<<7))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_pcid_lb_drf_done(data)            (0x00000040&((data)<<6))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_demura_2p_drf_bist_done(data)     (0x00000020&((data)<<5))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_demura_drf_bist_done(data)        (0x00000010&((data)<<4))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_oddma_drf_done(data)              (0x00000008&((data)<<3))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_od_drf_done(data)                 (0x00000004&((data)<<2))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_ld_con_drf_done(data)             (0x00000002&((data)<<1))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_ld_spi_con_drf_done(data)         (0x00000001&(data))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_od_line_buf_drf_done(data)    ((0x00400000&(data))>>22)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_mplus_drf_bist_done_3(data)   ((0x00200000&(data))>>21)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_mplus_drf_bist_done_2(data)   ((0x00100000&(data))>>20)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_pqdc2_drf_bist_done(data)     ((0x00080000&(data))>>19)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_pqdc1_drf_bist_done(data)     ((0x00040000&(data))>>18)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_pqc2_drf_bist_done(data)      ((0x00020000&(data))>>17)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_pqc1_drf_bist_done(data)      ((0x00010000&(data))>>16)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_m_plus_drf_done(data)         ((0x00008000&(data))>>15)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_pod2_1p_drf_done(data)        ((0x00004000&(data))>>14)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_pod2_2p_drf_done(data)        ((0x00002000&(data))>>13)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_pcid_tab_drf_done_0(data)     ((0x00000800&(data))>>11)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_pcid_tab_drf_done_1(data)     ((0x00000400&(data))>>10)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_pcid_tab_drf_done_2(data)     ((0x00000200&(data))>>9)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_inv_out_gamma_drf_done(data)  ((0x00000100&(data))>>8)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_gamma2_drf_done(data)         ((0x00000080&(data))>>7)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_pcid_lb_drf_done(data)        ((0x00000040&(data))>>6)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_demura_2p_drf_bist_done(data) ((0x00000020&(data))>>5)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_demura_drf_bist_done(data)    ((0x00000010&(data))>>4)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_oddma_drf_done(data)          ((0x00000008&(data))>>3)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_od_drf_done(data)             ((0x00000004&(data))>>2)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_ld_con_drf_done(data)         ((0x00000002&(data))>>1)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_DONE_get_ld_spi_con_drf_done(data)     (0x00000001&(data))

#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE                                 0x18029F98
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_reg_addr                         "0xB8029F98"
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_reg                              0xB8029F98
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_inst_addr                        "0x0006"
#define  set_DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_reg(data)                    (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_reg                          (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_reg))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_od_line_buf_drf_pause_shift      (22)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_mplus_drf_3_start_pause_shift    (21)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_mplus_drf_2_start_pause_shift    (20)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pqdc2_drf_start_pause_shift      (19)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pqdc1_drf_start_pause_shift      (18)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pqc2_drf_start_pause_shift       (17)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pqc1_drf_start_pause_shift       (16)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_m_plus_drf_pause_shift           (15)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pod2_1p_drf_pause_shift          (14)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pod2_2p_drf_pause_shift          (13)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pcid_tab_drf_pause_0_shift       (11)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pcid_tab_drf_pause_1_shift       (10)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pcid_tab_drf_pause_2_shift       (9)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_inv_out_gamma_drf_pause_shift    (8)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_gamma2_drf_pause_shift           (7)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pcid_lb_drf_pause_shift          (6)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_demura_2p_drf_start_pause_shift  (5)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_demura_drf_start_pause_shift     (4)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_oddma_drf_pause_shift            (3)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_od_drf_pause_shift               (2)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_ld_con_drf_pause_shift           (1)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_ld_spi_con_drf_pause_shift       (0)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_od_line_buf_drf_pause_mask       (0x00400000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_mplus_drf_3_start_pause_mask     (0x00200000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_mplus_drf_2_start_pause_mask     (0x00100000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pqdc2_drf_start_pause_mask       (0x00080000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pqdc1_drf_start_pause_mask       (0x00040000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pqc2_drf_start_pause_mask        (0x00020000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pqc1_drf_start_pause_mask        (0x00010000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_m_plus_drf_pause_mask            (0x00008000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pod2_1p_drf_pause_mask           (0x00004000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pod2_2p_drf_pause_mask           (0x00002000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pcid_tab_drf_pause_0_mask        (0x00000800)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pcid_tab_drf_pause_1_mask        (0x00000400)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pcid_tab_drf_pause_2_mask        (0x00000200)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_inv_out_gamma_drf_pause_mask     (0x00000100)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_gamma2_drf_pause_mask            (0x00000080)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pcid_lb_drf_pause_mask           (0x00000040)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_demura_2p_drf_start_pause_mask   (0x00000020)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_demura_drf_start_pause_mask      (0x00000010)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_oddma_drf_pause_mask             (0x00000008)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_od_drf_pause_mask                (0x00000004)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_ld_con_drf_pause_mask            (0x00000002)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_ld_spi_con_drf_pause_mask        (0x00000001)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_od_line_buf_drf_pause(data)      (0x00400000&((data)<<22))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_mplus_drf_3_start_pause(data)    (0x00200000&((data)<<21))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_mplus_drf_2_start_pause(data)    (0x00100000&((data)<<20))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pqdc2_drf_start_pause(data)      (0x00080000&((data)<<19))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pqdc1_drf_start_pause(data)      (0x00040000&((data)<<18))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pqc2_drf_start_pause(data)       (0x00020000&((data)<<17))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pqc1_drf_start_pause(data)       (0x00010000&((data)<<16))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_m_plus_drf_pause(data)           (0x00008000&((data)<<15))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pod2_1p_drf_pause(data)          (0x00004000&((data)<<14))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pod2_2p_drf_pause(data)          (0x00002000&((data)<<13))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pcid_tab_drf_pause_0(data)       (0x00000800&((data)<<11))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pcid_tab_drf_pause_1(data)       (0x00000400&((data)<<10))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pcid_tab_drf_pause_2(data)       (0x00000200&((data)<<9))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_inv_out_gamma_drf_pause(data)    (0x00000100&((data)<<8))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_gamma2_drf_pause(data)           (0x00000080&((data)<<7))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_pcid_lb_drf_pause(data)          (0x00000040&((data)<<6))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_demura_2p_drf_start_pause(data)  (0x00000020&((data)<<5))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_demura_drf_start_pause(data)     (0x00000010&((data)<<4))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_oddma_drf_pause(data)            (0x00000008&((data)<<3))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_od_drf_pause(data)               (0x00000004&((data)<<2))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_ld_con_drf_pause(data)           (0x00000002&((data)<<1))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_ld_spi_con_drf_pause(data)       (0x00000001&(data))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_od_line_buf_drf_pause(data)  ((0x00400000&(data))>>22)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_mplus_drf_3_start_pause(data) ((0x00200000&(data))>>21)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_mplus_drf_2_start_pause(data) ((0x00100000&(data))>>20)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_pqdc2_drf_start_pause(data)  ((0x00080000&(data))>>19)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_pqdc1_drf_start_pause(data)  ((0x00040000&(data))>>18)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_pqc2_drf_start_pause(data)   ((0x00020000&(data))>>17)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_pqc1_drf_start_pause(data)   ((0x00010000&(data))>>16)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_m_plus_drf_pause(data)       ((0x00008000&(data))>>15)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_pod2_1p_drf_pause(data)      ((0x00004000&(data))>>14)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_pod2_2p_drf_pause(data)      ((0x00002000&(data))>>13)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_pcid_tab_drf_pause_0(data)   ((0x00000800&(data))>>11)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_pcid_tab_drf_pause_1(data)   ((0x00000400&(data))>>10)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_pcid_tab_drf_pause_2(data)   ((0x00000200&(data))>>9)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_inv_out_gamma_drf_pause(data) ((0x00000100&(data))>>8)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_gamma2_drf_pause(data)       ((0x00000080&(data))>>7)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_pcid_lb_drf_pause(data)      ((0x00000040&(data))>>6)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_demura_2p_drf_start_pause(data) ((0x00000020&(data))>>5)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_demura_drf_start_pause(data) ((0x00000010&(data))>>4)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_oddma_drf_pause(data)        ((0x00000008&(data))>>3)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_od_drf_pause(data)           ((0x00000004&(data))>>2)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_ld_con_drf_pause(data)       ((0x00000002&(data))>>1)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_PAUSE_get_ld_spi_con_drf_pause(data)   (0x00000001&(data))

#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP                            0x18029F9C
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_reg_addr                    "0xB8029F9C"
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_reg                         0xB8029F9C
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_inst_addr                   "0x0007"
#define  set_DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_reg(data)               (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_reg                     (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_reg))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_od_line_buf_drf_fail_group_shift (22)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_mplus_drf_fail_group_3_shift (21)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_mplus_drf_fail_group_2_shift (20)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pqdc2_drf_fail_group_shift  (19)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pqdc1_drf_fail_group_shift  (18)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pqc2_drf_fail_group_shift   (17)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pqc1_drf_fail_group_shift   (16)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_m_plus_drf_fail_group_shift (15)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pod2_1p_drf_fail_group_shift (14)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pod2_2p_drf_fail_group_shift (13)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pcid_tab_drf_fail_group_0_shift (11)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pcid_tab_drf_fail_group_1_shift (10)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pcid_tab_drf_fail_group_2_shift (9)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_inv_out_gamma_drf_fail_group_shift (8)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_gamma2_drf_fail_group_shift (7)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pcid_lb_drf_fail_group_shift (6)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_demura_2p_drf_fail_group_shift (5)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_demura_drf_fail_group_shift (4)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_oddma_drf_fail_group_shift  (3)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_od_drf_fail_group_shift     (2)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_ld_con_drf_fail_group_shift (1)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_ld_spi_con_drf_fail_group_shift (0)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_od_line_buf_drf_fail_group_mask (0x00400000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_mplus_drf_fail_group_3_mask (0x00200000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_mplus_drf_fail_group_2_mask (0x00100000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pqdc2_drf_fail_group_mask   (0x00080000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pqdc1_drf_fail_group_mask   (0x00040000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pqc2_drf_fail_group_mask    (0x00020000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pqc1_drf_fail_group_mask    (0x00010000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_m_plus_drf_fail_group_mask  (0x00008000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pod2_1p_drf_fail_group_mask (0x00004000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pod2_2p_drf_fail_group_mask (0x00002000)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pcid_tab_drf_fail_group_0_mask (0x00000800)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pcid_tab_drf_fail_group_1_mask (0x00000400)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pcid_tab_drf_fail_group_2_mask (0x00000200)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_inv_out_gamma_drf_fail_group_mask (0x00000100)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_gamma2_drf_fail_group_mask  (0x00000080)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pcid_lb_drf_fail_group_mask (0x00000040)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_demura_2p_drf_fail_group_mask (0x00000020)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_demura_drf_fail_group_mask  (0x00000010)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_oddma_drf_fail_group_mask   (0x00000008)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_od_drf_fail_group_mask      (0x00000004)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_ld_con_drf_fail_group_mask  (0x00000002)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_ld_spi_con_drf_fail_group_mask (0x00000001)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_od_line_buf_drf_fail_group(data) (0x00400000&((data)<<22))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_mplus_drf_fail_group_3(data) (0x00200000&((data)<<21))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_mplus_drf_fail_group_2(data) (0x00100000&((data)<<20))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pqdc2_drf_fail_group(data)  (0x00080000&((data)<<19))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pqdc1_drf_fail_group(data)  (0x00040000&((data)<<18))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pqc2_drf_fail_group(data)   (0x00020000&((data)<<17))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pqc1_drf_fail_group(data)   (0x00010000&((data)<<16))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_m_plus_drf_fail_group(data) (0x00008000&((data)<<15))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pod2_1p_drf_fail_group(data) (0x00004000&((data)<<14))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pod2_2p_drf_fail_group(data) (0x00002000&((data)<<13))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pcid_tab_drf_fail_group_0(data) (0x00000800&((data)<<11))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pcid_tab_drf_fail_group_1(data) (0x00000400&((data)<<10))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pcid_tab_drf_fail_group_2(data) (0x00000200&((data)<<9))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_inv_out_gamma_drf_fail_group(data) (0x00000100&((data)<<8))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_gamma2_drf_fail_group(data) (0x00000080&((data)<<7))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_pcid_lb_drf_fail_group(data) (0x00000040&((data)<<6))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_demura_2p_drf_fail_group(data) (0x00000020&((data)<<5))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_demura_drf_fail_group(data) (0x00000010&((data)<<4))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_oddma_drf_fail_group(data)  (0x00000008&((data)<<3))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_od_drf_fail_group(data)     (0x00000004&((data)<<2))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_ld_con_drf_fail_group(data) (0x00000002&((data)<<1))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_ld_spi_con_drf_fail_group(data) (0x00000001&(data))
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_od_line_buf_drf_fail_group(data) ((0x00400000&(data))>>22)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_mplus_drf_fail_group_3(data) ((0x00200000&(data))>>21)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_mplus_drf_fail_group_2(data) ((0x00100000&(data))>>20)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_pqdc2_drf_fail_group(data) ((0x00080000&(data))>>19)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_pqdc1_drf_fail_group(data) ((0x00040000&(data))>>18)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_pqc2_drf_fail_group(data) ((0x00020000&(data))>>17)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_pqc1_drf_fail_group(data) ((0x00010000&(data))>>16)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_m_plus_drf_fail_group(data) ((0x00008000&(data))>>15)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_pod2_1p_drf_fail_group(data) ((0x00004000&(data))>>14)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_pod2_2p_drf_fail_group(data) ((0x00002000&(data))>>13)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_pcid_tab_drf_fail_group_0(data) ((0x00000800&(data))>>11)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_pcid_tab_drf_fail_group_1(data) ((0x00000400&(data))>>10)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_pcid_tab_drf_fail_group_2(data) ((0x00000200&(data))>>9)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_inv_out_gamma_drf_fail_group(data) ((0x00000100&(data))>>8)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_gamma2_drf_fail_group(data) ((0x00000080&(data))>>7)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_pcid_lb_drf_fail_group(data) ((0x00000040&(data))>>6)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_demura_2p_drf_fail_group(data) ((0x00000020&(data))>>5)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_demura_drf_fail_group(data) ((0x00000010&(data))>>4)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_oddma_drf_fail_group(data) ((0x00000008&(data))>>3)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_od_drf_fail_group(data) ((0x00000004&(data))>>2)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_ld_con_drf_fail_group(data) ((0x00000002&(data))>>1)
#define  DISPD_WI_OSD_BIST_BISR_DISPD_DRF_FAIL_GROUP_get_ld_spi_con_drf_fail_group(data) (0x00000001&(data))

#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G1                                0x18029FA0
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G1_reg_addr                        "0xB8029FA0"
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G1_reg                             0xB8029FA0
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G1_inst_addr                       "0x0008"
#define  set_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G1_reg(data)                   (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G1_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G1_reg                         (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G1_reg))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G1_m_plus_rom_crc_g1_shift         (0)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G1_m_plus_rom_crc_g1_mask          (0xFFFFFFFF)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G1_m_plus_rom_crc_g1(data)         (0xFFFFFFFF&(data))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G1_get_m_plus_rom_crc_g1(data)     (0xFFFFFFFF&(data))

#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B1                                0x18029FA4
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B1_reg_addr                        "0xB8029FA4"
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B1_reg                             0xB8029FA4
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B1_inst_addr                       "0x0009"
#define  set_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B1_reg(data)                   (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B1_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B1_reg                         (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B1_reg))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B1_m_plus_rom_crc_b1_shift         (0)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B1_m_plus_rom_crc_b1_mask          (0xFFFFFFFF)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B1_m_plus_rom_crc_b1(data)         (0xFFFFFFFF&(data))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B1_get_m_plus_rom_crc_b1(data)     (0xFFFFFFFF&(data))

#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R1                                0x18029FA8
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R1_reg_addr                        "0xB8029FA8"
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R1_reg                             0xB8029FA8
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R1_inst_addr                       "0x000A"
#define  set_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R1_reg(data)                   (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R1_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R1_reg                         (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R1_reg))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R1_m_plus_rom_crc_r1_shift         (0)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R1_m_plus_rom_crc_r1_mask          (0xFFFFFFFF)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R1_m_plus_rom_crc_r1(data)         (0xFFFFFFFF&(data))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R1_get_m_plus_rom_crc_r1(data)     (0xFFFFFFFF&(data))

#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G2                                0x18029FAC
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G2_reg_addr                        "0xB8029FAC"
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G2_reg                             0xB8029FAC
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G2_inst_addr                       "0x000B"
#define  set_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G2_reg(data)                   (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G2_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G2_reg                         (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G2_reg))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G2_m_plus_rom_crc_g2_shift         (0)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G2_m_plus_rom_crc_g2_mask          (0xFFFFFFFF)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G2_m_plus_rom_crc_g2(data)         (0xFFFFFFFF&(data))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_G2_get_m_plus_rom_crc_g2(data)     (0xFFFFFFFF&(data))

#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B2                                0x18029FB0
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B2_reg_addr                        "0xB8029FB0"
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B2_reg                             0xB8029FB0
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B2_inst_addr                       "0x000C"
#define  set_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B2_reg(data)                   (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B2_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B2_reg                         (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B2_reg))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B2_m_plus_rom_crc_b2_shift         (0)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B2_m_plus_rom_crc_b2_mask          (0xFFFFFFFF)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B2_m_plus_rom_crc_b2(data)         (0xFFFFFFFF&(data))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_B2_get_m_plus_rom_crc_b2(data)     (0xFFFFFFFF&(data))

#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R2                                0x18029FB4
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R2_reg_addr                        "0xB8029FB4"
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R2_reg                             0xB8029FB4
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R2_inst_addr                       "0x000D"
#define  set_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R2_reg(data)                   (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R2_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R2_reg                         (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R2_reg))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R2_m_plus_rom_crc_r2_shift         (0)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R2_m_plus_rom_crc_r2_mask          (0xFFFFFFFF)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R2_m_plus_rom_crc_r2(data)         (0xFFFFFFFF&(data))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_CRC_R2_get_m_plus_rom_crc_r2(data)     (0xFFFFFFFF&(data))

#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G1                               0x18029FB8
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G1_reg_addr                       "0xB8029FB8"
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G1_reg                            0xB8029FB8
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G1_inst_addr                      "0x000E"
#define  set_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G1_reg(data)                  (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G1_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G1_reg                        (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G1_reg))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G1_m_plus_rom2_crc_g1_shift       (0)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G1_m_plus_rom2_crc_g1_mask        (0xFFFFFFFF)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G1_m_plus_rom2_crc_g1(data)       (0xFFFFFFFF&(data))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G1_get_m_plus_rom2_crc_g1(data)   (0xFFFFFFFF&(data))

#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B1                               0x18029FBC
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B1_reg_addr                       "0xB8029FBC"
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B1_reg                            0xB8029FBC
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B1_inst_addr                      "0x000F"
#define  set_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B1_reg(data)                  (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B1_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B1_reg                        (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B1_reg))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B1_m_plus_rom2_crc_b1_shift       (0)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B1_m_plus_rom2_crc_b1_mask        (0xFFFFFFFF)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B1_m_plus_rom2_crc_b1(data)       (0xFFFFFFFF&(data))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B1_get_m_plus_rom2_crc_b1(data)   (0xFFFFFFFF&(data))

#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R1                               0x18029FC0
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R1_reg_addr                       "0xB8029FC0"
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R1_reg                            0xB8029FC0
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R1_inst_addr                      "0x0010"
#define  set_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R1_reg(data)                  (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R1_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R1_reg                        (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R1_reg))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R1_m_plus_rom2_crc_r1_shift       (0)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R1_m_plus_rom2_crc_r1_mask        (0xFFFFFFFF)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R1_m_plus_rom2_crc_r1(data)       (0xFFFFFFFF&(data))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R1_get_m_plus_rom2_crc_r1(data)   (0xFFFFFFFF&(data))

#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G2                               0x18029FC4
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G2_reg_addr                       "0xB8029FC4"
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G2_reg                            0xB8029FC4
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G2_inst_addr                      "0x0011"
#define  set_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G2_reg(data)                  (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G2_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G2_reg                        (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G2_reg))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G2_m_plus_rom2_crc_g2_shift       (0)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G2_m_plus_rom2_crc_g2_mask        (0xFFFFFFFF)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G2_m_plus_rom2_crc_g2(data)       (0xFFFFFFFF&(data))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_G2_get_m_plus_rom2_crc_g2(data)   (0xFFFFFFFF&(data))

#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B2                               0x18029FC8
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B2_reg_addr                       "0xB8029FC8"
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B2_reg                            0xB8029FC8
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B2_inst_addr                      "0x0012"
#define  set_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B2_reg(data)                  (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B2_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B2_reg                        (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B2_reg))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B2_m_plus_rom2_crc_b2_shift       (0)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B2_m_plus_rom2_crc_b2_mask        (0xFFFFFFFF)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B2_m_plus_rom2_crc_b2(data)       (0xFFFFFFFF&(data))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_B2_get_m_plus_rom2_crc_b2(data)   (0xFFFFFFFF&(data))

#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R2                               0x18029FCC
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R2_reg_addr                       "0xB8029FCC"
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R2_reg                            0xB8029FCC
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R2_inst_addr                      "0x0013"
#define  set_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R2_reg(data)                  (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R2_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R2_reg                        (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R2_reg))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R2_m_plus_rom2_crc_r2_shift       (0)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R2_m_plus_rom2_crc_r2_mask        (0xFFFFFFFF)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R2_m_plus_rom2_crc_r2(data)       (0xFFFFFFFF&(data))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM2_CRC_R2_get_m_plus_rom2_crc_r2(data)   (0xFFFFFFFF&(data))

#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_MODE                             0x18029FD0
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_MODE_reg_addr                     "0xB8029FD0"
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_MODE_reg                          0xB8029FD0
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_MODE_inst_addr                    "0x0014"
#define  set_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_MODE_reg(data)                (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_MODE_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_MODE_reg                      (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_MODE_reg))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_MODE_mplus_rom2_bist_mode_shift   (1)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_MODE_m_plus_rom_bist_mode_shift   (0)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_MODE_mplus_rom2_bist_mode_mask    (0x00000002)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_MODE_m_plus_rom_bist_mode_mask    (0x00000001)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_MODE_mplus_rom2_bist_mode(data)   (0x00000002&((data)<<1))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_MODE_m_plus_rom_bist_mode(data)   (0x00000001&(data))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_MODE_get_mplus_rom2_bist_mode(data) ((0x00000002&(data))>>1)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_MODE_get_m_plus_rom_bist_mode(data) (0x00000001&(data))

#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_DONE                             0x18029FD4
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_DONE_reg_addr                     "0xB8029FD4"
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_DONE_reg                          0xB8029FD4
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_DONE_inst_addr                    "0x0015"
#define  set_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_DONE_reg(data)                (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_DONE_reg)=data)
#define  get_DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_DONE_reg                      (*((volatile unsigned int*)DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_DONE_reg))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_DONE_mplus_rom2_bist_done_shift   (1)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_DONE_m_plus_rom_bist_done_shift   (0)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_DONE_mplus_rom2_bist_done_mask    (0x00000002)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_DONE_m_plus_rom_bist_done_mask    (0x00000001)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_DONE_mplus_rom2_bist_done(data)   (0x00000002&((data)<<1))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_DONE_m_plus_rom_bist_done(data)   (0x00000001&(data))
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_DONE_get_mplus_rom2_bist_done(data) ((0x00000002&(data))>>1)
#define  DISPD_WI_OSD_BIST_BISR_MPLUS_ROM_BIST_DONE_get_m_plus_rom_bist_done(data) (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======DISPD_WI_OSD_BIST_BISR register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  od_line_buf_bist_mode:1;
        RBus_UInt32  mplus_sram_3_bist_mode:1;
        RBus_UInt32  mplus_sram_2_bist_mode:1;
        RBus_UInt32  pqdc2_bist_mode:1;
        RBus_UInt32  pqdc1_bist_mode:1;
        RBus_UInt32  pqc2_bist_mode:1;
        RBus_UInt32  pqc1_bist_mode:1;
        RBus_UInt32  m_plus_sram_bist_mode:1;
        RBus_UInt32  pod2_1p_bist_mode:1;
        RBus_UInt32  pod2_2p_bist_mode:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pcid_tab_bist_mode_0:1;
        RBus_UInt32  pcid_tab_bist_mode_1:1;
        RBus_UInt32  pcid_tab_bist_mode_2:1;
        RBus_UInt32  inv_out_gamma_bist_mode:1;
        RBus_UInt32  gamma2_bist_mode:1;
        RBus_UInt32  pcid_lb_bist_mode:1;
        RBus_UInt32  demura_2p_bist_mode:1;
        RBus_UInt32  demura_bist_mode:1;
        RBus_UInt32  oddma_bist_mode:1;
        RBus_UInt32  od_bist_mode:1;
        RBus_UInt32  ld_con_bist_mode:1;
        RBus_UInt32  ld_spi_con_bist_mode:1;
    };
}dispd_wi_osd_bist_bisr_dispd_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  od_line_buf_bist_done:1;
        RBus_UInt32  mplus_sram_bist_done_3:1;
        RBus_UInt32  mplus_sram_bist_done_2:1;
        RBus_UInt32  pqdc2_bist_done:1;
        RBus_UInt32  pqdc1_bist_done:1;
        RBus_UInt32  pqc2_bist_done:1;
        RBus_UInt32  pqc1_bist_done:1;
        RBus_UInt32  m_plus_sram_bist_done:1;
        RBus_UInt32  pod2_1p_bist_done:1;
        RBus_UInt32  pod2_2p_bist_done:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pcid_tab_bist_done_0:1;
        RBus_UInt32  pcid_tab_bist_done_1:1;
        RBus_UInt32  pcid_tab_bist_done_2:1;
        RBus_UInt32  inv_out_gamma_bist_done:1;
        RBus_UInt32  gamma2_bist_done:1;
        RBus_UInt32  pcid_lb_bist_done:1;
        RBus_UInt32  demura_2p_bist_done:1;
        RBus_UInt32  demura_bist_done:1;
        RBus_UInt32  oddma_bist_done:1;
        RBus_UInt32  od_bist_done:1;
        RBus_UInt32  ld_con_bist_done:1;
        RBus_UInt32  ld_spi_con_bist_done:1;
    };
}dispd_wi_osd_bist_bisr_dispd_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  od_line_buf_bist_fail_group:1;
        RBus_UInt32  mplus_bist_fail_group_3:1;
        RBus_UInt32  mplus_bist_fail_group_2:1;
        RBus_UInt32  pqdc2_bist_fail_group:1;
        RBus_UInt32  pqdc1_bist_fail_group:1;
        RBus_UInt32  pqc2_bist_fail_group:1;
        RBus_UInt32  pqc1_bist_fail_group:1;
        RBus_UInt32  m_plus_bist_fail_group:1;
        RBus_UInt32  pod2_1p_bist_fail_group:1;
        RBus_UInt32  pod2_2p_bist_fail_group:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pcid_tab_bist_fail_group_0:1;
        RBus_UInt32  pcid_tab_bist_fail_group_1:1;
        RBus_UInt32  pcid_tab_bist_fail_group_2:1;
        RBus_UInt32  inv_out_gamma_bist_fail_group:1;
        RBus_UInt32  gamma2_bist_fail_group:1;
        RBus_UInt32  pcid_lb_bist_fail_group:1;
        RBus_UInt32  demura_2p_bist_fail_group:1;
        RBus_UInt32  demura_bist_fail_group:1;
        RBus_UInt32  oddma_bist_fail_group:1;
        RBus_UInt32  od_bist_fail_group:1;
        RBus_UInt32  ld_con_bist_fail_group:1;
        RBus_UInt32  ld_spi_con_bist_fail_group:1;
    };
}dispd_wi_osd_bist_bisr_dispd_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  od_line_buf_drf_mode:1;
        RBus_UInt32  mplus_drf_3_bist_mode:1;
        RBus_UInt32  mplus_drf_2_bist_mode:1;
        RBus_UInt32  pqdc2_drf_bist_mode:1;
        RBus_UInt32  pqdc1_drf_bist_mode:1;
        RBus_UInt32  pqc2_drf_bist_mode:1;
        RBus_UInt32  pqc1_drf_bist_mode:1;
        RBus_UInt32  m_plus_drf_mode:1;
        RBus_UInt32  pod2_1p_drf_mode:1;
        RBus_UInt32  pod2_2p_drf_mode:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pcid_tab_drf_mode_0:1;
        RBus_UInt32  pcid_tab_drf_mode_1:1;
        RBus_UInt32  pcid_tab_drf_mode_2:1;
        RBus_UInt32  inv_out_gamma_drf_mode:1;
        RBus_UInt32  gamma2_drf_mode:1;
        RBus_UInt32  pcid_lb_drf_mode:1;
        RBus_UInt32  demura_2p_drf_bist_mode:1;
        RBus_UInt32  demura_drf_bist_mode:1;
        RBus_UInt32  oddma_drf_mode:1;
        RBus_UInt32  od_drf_mode:1;
        RBus_UInt32  ld_con_drf_mode:1;
        RBus_UInt32  ld_spi_con_drf_mode:1;
    };
}dispd_wi_osd_bist_bisr_dispd_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  od_line_buf_drf_resume:1;
        RBus_UInt32  mplus_drf_3_test_resume:1;
        RBus_UInt32  mplus_drf_2_test_resume:1;
        RBus_UInt32  pqdc2_drf_test_resume:1;
        RBus_UInt32  pqdc1_drf_test_resume:1;
        RBus_UInt32  pqc2_drf_test_resume:1;
        RBus_UInt32  pqc1_drf_test_resume:1;
        RBus_UInt32  m_plus_drf_resume:1;
        RBus_UInt32  pod2_1p_drf_resume:1;
        RBus_UInt32  pod2_2p_drf_resume:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pcid_tab_drf_resume_0:1;
        RBus_UInt32  pcid_tab_drf_resume_1:1;
        RBus_UInt32  pcid_tab_drf_resume_2:1;
        RBus_UInt32  inv_out_gamma_drf_resume:1;
        RBus_UInt32  gamma2_drf_resume:1;
        RBus_UInt32  pcid_lb_drf_resume:1;
        RBus_UInt32  demura_2p_test_resume:1;
        RBus_UInt32  demura_test_resume:1;
        RBus_UInt32  oddma_drf_resume:1;
        RBus_UInt32  od_drf_resume:1;
        RBus_UInt32  ld_con_drf_resume:1;
        RBus_UInt32  ld_spi_con_drf_resume:1;
    };
}dispd_wi_osd_bist_bisr_dispd_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  od_line_buf_drf_done:1;
        RBus_UInt32  mplus_drf_bist_done_3:1;
        RBus_UInt32  mplus_drf_bist_done_2:1;
        RBus_UInt32  pqdc2_drf_bist_done:1;
        RBus_UInt32  pqdc1_drf_bist_done:1;
        RBus_UInt32  pqc2_drf_bist_done:1;
        RBus_UInt32  pqc1_drf_bist_done:1;
        RBus_UInt32  m_plus_drf_done:1;
        RBus_UInt32  pod2_1p_drf_done:1;
        RBus_UInt32  pod2_2p_drf_done:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pcid_tab_drf_done_0:1;
        RBus_UInt32  pcid_tab_drf_done_1:1;
        RBus_UInt32  pcid_tab_drf_done_2:1;
        RBus_UInt32  inv_out_gamma_drf_done:1;
        RBus_UInt32  gamma2_drf_done:1;
        RBus_UInt32  pcid_lb_drf_done:1;
        RBus_UInt32  demura_2p_drf_bist_done:1;
        RBus_UInt32  demura_drf_bist_done:1;
        RBus_UInt32  oddma_drf_done:1;
        RBus_UInt32  od_drf_done:1;
        RBus_UInt32  ld_con_drf_done:1;
        RBus_UInt32  ld_spi_con_drf_done:1;
    };
}dispd_wi_osd_bist_bisr_dispd_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  od_line_buf_drf_pause:1;
        RBus_UInt32  mplus_drf_3_start_pause:1;
        RBus_UInt32  mplus_drf_2_start_pause:1;
        RBus_UInt32  pqdc2_drf_start_pause:1;
        RBus_UInt32  pqdc1_drf_start_pause:1;
        RBus_UInt32  pqc2_drf_start_pause:1;
        RBus_UInt32  pqc1_drf_start_pause:1;
        RBus_UInt32  m_plus_drf_pause:1;
        RBus_UInt32  pod2_1p_drf_pause:1;
        RBus_UInt32  pod2_2p_drf_pause:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pcid_tab_drf_pause_0:1;
        RBus_UInt32  pcid_tab_drf_pause_1:1;
        RBus_UInt32  pcid_tab_drf_pause_2:1;
        RBus_UInt32  inv_out_gamma_drf_pause:1;
        RBus_UInt32  gamma2_drf_pause:1;
        RBus_UInt32  pcid_lb_drf_pause:1;
        RBus_UInt32  demura_2p_drf_start_pause:1;
        RBus_UInt32  demura_drf_start_pause:1;
        RBus_UInt32  oddma_drf_pause:1;
        RBus_UInt32  od_drf_pause:1;
        RBus_UInt32  ld_con_drf_pause:1;
        RBus_UInt32  ld_spi_con_drf_pause:1;
    };
}dispd_wi_osd_bist_bisr_dispd_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  od_line_buf_drf_fail_group:1;
        RBus_UInt32  mplus_drf_fail_group_3:1;
        RBus_UInt32  mplus_drf_fail_group_2:1;
        RBus_UInt32  pqdc2_drf_fail_group:1;
        RBus_UInt32  pqdc1_drf_fail_group:1;
        RBus_UInt32  pqc2_drf_fail_group:1;
        RBus_UInt32  pqc1_drf_fail_group:1;
        RBus_UInt32  m_plus_drf_fail_group:1;
        RBus_UInt32  pod2_1p_drf_fail_group:1;
        RBus_UInt32  pod2_2p_drf_fail_group:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pcid_tab_drf_fail_group_0:1;
        RBus_UInt32  pcid_tab_drf_fail_group_1:1;
        RBus_UInt32  pcid_tab_drf_fail_group_2:1;
        RBus_UInt32  inv_out_gamma_drf_fail_group:1;
        RBus_UInt32  gamma2_drf_fail_group:1;
        RBus_UInt32  pcid_lb_drf_fail_group:1;
        RBus_UInt32  demura_2p_drf_fail_group:1;
        RBus_UInt32  demura_drf_fail_group:1;
        RBus_UInt32  oddma_drf_fail_group:1;
        RBus_UInt32  od_drf_fail_group:1;
        RBus_UInt32  ld_con_drf_fail_group:1;
        RBus_UInt32  ld_spi_con_drf_fail_group:1;
    };
}dispd_wi_osd_bist_bisr_dispd_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom_crc_g1:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom_crc_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom_crc_b1:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom_crc_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom_crc_r1:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom_crc_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom_crc_g2:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom_crc_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom_crc_b2:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom_crc_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom_crc_r2:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom_crc_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom2_crc_g1:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom2_crc_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom2_crc_b1:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom2_crc_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom2_crc_r1:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom2_crc_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom2_crc_g2:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom2_crc_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom2_crc_b2:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom2_crc_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom2_crc_r2:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom2_crc_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  mplus_rom2_bist_mode:1;
        RBus_UInt32  m_plus_rom_bist_mode:1;
    };
}dispd_wi_osd_bist_bisr_mplus_rom_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  mplus_rom2_bist_done:1;
        RBus_UInt32  m_plus_rom_bist_done:1;
    };
}dispd_wi_osd_bist_bisr_mplus_rom_bist_done_RBUS;

#else //apply LITTLE_ENDIAN

//======DISPD_WI_OSD_BIST_BISR register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_spi_con_bist_mode:1;
        RBus_UInt32  ld_con_bist_mode:1;
        RBus_UInt32  od_bist_mode:1;
        RBus_UInt32  oddma_bist_mode:1;
        RBus_UInt32  demura_bist_mode:1;
        RBus_UInt32  demura_2p_bist_mode:1;
        RBus_UInt32  pcid_lb_bist_mode:1;
        RBus_UInt32  gamma2_bist_mode:1;
        RBus_UInt32  inv_out_gamma_bist_mode:1;
        RBus_UInt32  pcid_tab_bist_mode_2:1;
        RBus_UInt32  pcid_tab_bist_mode_1:1;
        RBus_UInt32  pcid_tab_bist_mode_0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pod2_2p_bist_mode:1;
        RBus_UInt32  pod2_1p_bist_mode:1;
        RBus_UInt32  m_plus_sram_bist_mode:1;
        RBus_UInt32  pqc1_bist_mode:1;
        RBus_UInt32  pqc2_bist_mode:1;
        RBus_UInt32  pqdc1_bist_mode:1;
        RBus_UInt32  pqdc2_bist_mode:1;
        RBus_UInt32  mplus_sram_2_bist_mode:1;
        RBus_UInt32  mplus_sram_3_bist_mode:1;
        RBus_UInt32  od_line_buf_bist_mode:1;
        RBus_UInt32  res2:9;
    };
}dispd_wi_osd_bist_bisr_dispd_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_spi_con_bist_done:1;
        RBus_UInt32  ld_con_bist_done:1;
        RBus_UInt32  od_bist_done:1;
        RBus_UInt32  oddma_bist_done:1;
        RBus_UInt32  demura_bist_done:1;
        RBus_UInt32  demura_2p_bist_done:1;
        RBus_UInt32  pcid_lb_bist_done:1;
        RBus_UInt32  gamma2_bist_done:1;
        RBus_UInt32  inv_out_gamma_bist_done:1;
        RBus_UInt32  pcid_tab_bist_done_2:1;
        RBus_UInt32  pcid_tab_bist_done_1:1;
        RBus_UInt32  pcid_tab_bist_done_0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pod2_2p_bist_done:1;
        RBus_UInt32  pod2_1p_bist_done:1;
        RBus_UInt32  m_plus_sram_bist_done:1;
        RBus_UInt32  pqc1_bist_done:1;
        RBus_UInt32  pqc2_bist_done:1;
        RBus_UInt32  pqdc1_bist_done:1;
        RBus_UInt32  pqdc2_bist_done:1;
        RBus_UInt32  mplus_sram_bist_done_2:1;
        RBus_UInt32  mplus_sram_bist_done_3:1;
        RBus_UInt32  od_line_buf_bist_done:1;
        RBus_UInt32  res2:9;
    };
}dispd_wi_osd_bist_bisr_dispd_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_spi_con_bist_fail_group:1;
        RBus_UInt32  ld_con_bist_fail_group:1;
        RBus_UInt32  od_bist_fail_group:1;
        RBus_UInt32  oddma_bist_fail_group:1;
        RBus_UInt32  demura_bist_fail_group:1;
        RBus_UInt32  demura_2p_bist_fail_group:1;
        RBus_UInt32  pcid_lb_bist_fail_group:1;
        RBus_UInt32  gamma2_bist_fail_group:1;
        RBus_UInt32  inv_out_gamma_bist_fail_group:1;
        RBus_UInt32  pcid_tab_bist_fail_group_2:1;
        RBus_UInt32  pcid_tab_bist_fail_group_1:1;
        RBus_UInt32  pcid_tab_bist_fail_group_0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pod2_2p_bist_fail_group:1;
        RBus_UInt32  pod2_1p_bist_fail_group:1;
        RBus_UInt32  m_plus_bist_fail_group:1;
        RBus_UInt32  pqc1_bist_fail_group:1;
        RBus_UInt32  pqc2_bist_fail_group:1;
        RBus_UInt32  pqdc1_bist_fail_group:1;
        RBus_UInt32  pqdc2_bist_fail_group:1;
        RBus_UInt32  mplus_bist_fail_group_2:1;
        RBus_UInt32  mplus_bist_fail_group_3:1;
        RBus_UInt32  od_line_buf_bist_fail_group:1;
        RBus_UInt32  res2:9;
    };
}dispd_wi_osd_bist_bisr_dispd_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_spi_con_drf_mode:1;
        RBus_UInt32  ld_con_drf_mode:1;
        RBus_UInt32  od_drf_mode:1;
        RBus_UInt32  oddma_drf_mode:1;
        RBus_UInt32  demura_drf_bist_mode:1;
        RBus_UInt32  demura_2p_drf_bist_mode:1;
        RBus_UInt32  pcid_lb_drf_mode:1;
        RBus_UInt32  gamma2_drf_mode:1;
        RBus_UInt32  inv_out_gamma_drf_mode:1;
        RBus_UInt32  pcid_tab_drf_mode_2:1;
        RBus_UInt32  pcid_tab_drf_mode_1:1;
        RBus_UInt32  pcid_tab_drf_mode_0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pod2_2p_drf_mode:1;
        RBus_UInt32  pod2_1p_drf_mode:1;
        RBus_UInt32  m_plus_drf_mode:1;
        RBus_UInt32  pqc1_drf_bist_mode:1;
        RBus_UInt32  pqc2_drf_bist_mode:1;
        RBus_UInt32  pqdc1_drf_bist_mode:1;
        RBus_UInt32  pqdc2_drf_bist_mode:1;
        RBus_UInt32  mplus_drf_2_bist_mode:1;
        RBus_UInt32  mplus_drf_3_bist_mode:1;
        RBus_UInt32  od_line_buf_drf_mode:1;
        RBus_UInt32  res2:9;
    };
}dispd_wi_osd_bist_bisr_dispd_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_spi_con_drf_resume:1;
        RBus_UInt32  ld_con_drf_resume:1;
        RBus_UInt32  od_drf_resume:1;
        RBus_UInt32  oddma_drf_resume:1;
        RBus_UInt32  demura_test_resume:1;
        RBus_UInt32  demura_2p_test_resume:1;
        RBus_UInt32  pcid_lb_drf_resume:1;
        RBus_UInt32  gamma2_drf_resume:1;
        RBus_UInt32  inv_out_gamma_drf_resume:1;
        RBus_UInt32  pcid_tab_drf_resume_2:1;
        RBus_UInt32  pcid_tab_drf_resume_1:1;
        RBus_UInt32  pcid_tab_drf_resume_0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pod2_2p_drf_resume:1;
        RBus_UInt32  pod2_1p_drf_resume:1;
        RBus_UInt32  m_plus_drf_resume:1;
        RBus_UInt32  pqc1_drf_test_resume:1;
        RBus_UInt32  pqc2_drf_test_resume:1;
        RBus_UInt32  pqdc1_drf_test_resume:1;
        RBus_UInt32  pqdc2_drf_test_resume:1;
        RBus_UInt32  mplus_drf_2_test_resume:1;
        RBus_UInt32  mplus_drf_3_test_resume:1;
        RBus_UInt32  od_line_buf_drf_resume:1;
        RBus_UInt32  res2:9;
    };
}dispd_wi_osd_bist_bisr_dispd_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_spi_con_drf_done:1;
        RBus_UInt32  ld_con_drf_done:1;
        RBus_UInt32  od_drf_done:1;
        RBus_UInt32  oddma_drf_done:1;
        RBus_UInt32  demura_drf_bist_done:1;
        RBus_UInt32  demura_2p_drf_bist_done:1;
        RBus_UInt32  pcid_lb_drf_done:1;
        RBus_UInt32  gamma2_drf_done:1;
        RBus_UInt32  inv_out_gamma_drf_done:1;
        RBus_UInt32  pcid_tab_drf_done_2:1;
        RBus_UInt32  pcid_tab_drf_done_1:1;
        RBus_UInt32  pcid_tab_drf_done_0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pod2_2p_drf_done:1;
        RBus_UInt32  pod2_1p_drf_done:1;
        RBus_UInt32  m_plus_drf_done:1;
        RBus_UInt32  pqc1_drf_bist_done:1;
        RBus_UInt32  pqc2_drf_bist_done:1;
        RBus_UInt32  pqdc1_drf_bist_done:1;
        RBus_UInt32  pqdc2_drf_bist_done:1;
        RBus_UInt32  mplus_drf_bist_done_2:1;
        RBus_UInt32  mplus_drf_bist_done_3:1;
        RBus_UInt32  od_line_buf_drf_done:1;
        RBus_UInt32  res2:9;
    };
}dispd_wi_osd_bist_bisr_dispd_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_spi_con_drf_pause:1;
        RBus_UInt32  ld_con_drf_pause:1;
        RBus_UInt32  od_drf_pause:1;
        RBus_UInt32  oddma_drf_pause:1;
        RBus_UInt32  demura_drf_start_pause:1;
        RBus_UInt32  demura_2p_drf_start_pause:1;
        RBus_UInt32  pcid_lb_drf_pause:1;
        RBus_UInt32  gamma2_drf_pause:1;
        RBus_UInt32  inv_out_gamma_drf_pause:1;
        RBus_UInt32  pcid_tab_drf_pause_2:1;
        RBus_UInt32  pcid_tab_drf_pause_1:1;
        RBus_UInt32  pcid_tab_drf_pause_0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pod2_2p_drf_pause:1;
        RBus_UInt32  pod2_1p_drf_pause:1;
        RBus_UInt32  m_plus_drf_pause:1;
        RBus_UInt32  pqc1_drf_start_pause:1;
        RBus_UInt32  pqc2_drf_start_pause:1;
        RBus_UInt32  pqdc1_drf_start_pause:1;
        RBus_UInt32  pqdc2_drf_start_pause:1;
        RBus_UInt32  mplus_drf_2_start_pause:1;
        RBus_UInt32  mplus_drf_3_start_pause:1;
        RBus_UInt32  od_line_buf_drf_pause:1;
        RBus_UInt32  res2:9;
    };
}dispd_wi_osd_bist_bisr_dispd_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_spi_con_drf_fail_group:1;
        RBus_UInt32  ld_con_drf_fail_group:1;
        RBus_UInt32  od_drf_fail_group:1;
        RBus_UInt32  oddma_drf_fail_group:1;
        RBus_UInt32  demura_drf_fail_group:1;
        RBus_UInt32  demura_2p_drf_fail_group:1;
        RBus_UInt32  pcid_lb_drf_fail_group:1;
        RBus_UInt32  gamma2_drf_fail_group:1;
        RBus_UInt32  inv_out_gamma_drf_fail_group:1;
        RBus_UInt32  pcid_tab_drf_fail_group_2:1;
        RBus_UInt32  pcid_tab_drf_fail_group_1:1;
        RBus_UInt32  pcid_tab_drf_fail_group_0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pod2_2p_drf_fail_group:1;
        RBus_UInt32  pod2_1p_drf_fail_group:1;
        RBus_UInt32  m_plus_drf_fail_group:1;
        RBus_UInt32  pqc1_drf_fail_group:1;
        RBus_UInt32  pqc2_drf_fail_group:1;
        RBus_UInt32  pqdc1_drf_fail_group:1;
        RBus_UInt32  pqdc2_drf_fail_group:1;
        RBus_UInt32  mplus_drf_fail_group_2:1;
        RBus_UInt32  mplus_drf_fail_group_3:1;
        RBus_UInt32  od_line_buf_drf_fail_group:1;
        RBus_UInt32  res2:9;
    };
}dispd_wi_osd_bist_bisr_dispd_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom_crc_g1:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom_crc_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom_crc_b1:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom_crc_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom_crc_r1:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom_crc_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom_crc_g2:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom_crc_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom_crc_b2:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom_crc_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom_crc_r2:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom_crc_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom2_crc_g1:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom2_crc_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom2_crc_b1:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom2_crc_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom2_crc_r1:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom2_crc_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom2_crc_g2:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom2_crc_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom2_crc_b2:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom2_crc_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom2_crc_r2:32;
    };
}dispd_wi_osd_bist_bisr_mplus_rom2_crc_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom_bist_mode:1;
        RBus_UInt32  mplus_rom2_bist_mode:1;
        RBus_UInt32  res1:30;
    };
}dispd_wi_osd_bist_bisr_mplus_rom_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m_plus_rom_bist_done:1;
        RBus_UInt32  mplus_rom2_bist_done:1;
        RBus_UInt32  res1:30;
    };
}dispd_wi_osd_bist_bisr_mplus_rom_bist_done_RBUS;




#endif 


#endif 
