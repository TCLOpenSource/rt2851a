/**
* @file Mac7p-DesignSpec-GPU_ref_decmp_wrapper
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_GPU_REF_DECMP_WRAP_REG_H_
#define _RBUS_GPU_REF_DECMP_WRAP_REG_H_

#include "rbus_types.h"



//  GPU_REF_DECMP_WRAP Register Address
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl                                      0x18069000
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_reg_addr                              "0xB8069000"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_reg                                   0xB8069000
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_inst_addr                             "0x0000"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_reg(data)                         (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_reg                               (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_dummy_31_shift                        (31)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_out_fifo_ext_dis_shift                (30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_cache_q1_dis_shift                    (29)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_cmd_inorder_shift                     (28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_decomp_core_rst_shift                 (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_decomp_sel_shift                      (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_dummy_31_mask                         (0x80000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_out_fifo_ext_dis_mask                 (0x40000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_cache_q1_dis_mask                     (0x20000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_cmd_inorder_mask                      (0x10000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_decomp_core_rst_mask                  (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_decomp_sel_mask                       (0x00000003)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_dummy_31(data)                        (0x80000000&((data)<<31))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_out_fifo_ext_dis(data)                (0x40000000&((data)<<30))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_cache_q1_dis(data)                    (0x20000000&((data)<<29))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_cmd_inorder(data)                     (0x10000000&((data)<<28))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_decomp_core_rst(data)                 (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_decomp_sel(data)                      (0x00000003&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_get_dummy_31(data)                    ((0x80000000&(data))>>31)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_get_out_fifo_ext_dis(data)            ((0x40000000&(data))>>30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_get_cache_q1_dis(data)                ((0x20000000&(data))>>29)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_get_cmd_inorder(data)                 ((0x10000000&(data))>>28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_get_decomp_core_rst(data)             ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ctrl_get_decomp_sel(data)                  (0x00000003&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0                                  0x18069100
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_reg_addr                          "0xB8069100"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_reg                               0xB8069100
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_inst_addr                         "0x0001"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_region_0_reg(data)                     (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_0_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_region_0_reg                           (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_0_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_decomp_qlvl_c_shift               (30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_decomp_qlvl_y_shift               (28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_decomp_bpp_shift                  (24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_pic_width_div_16_shift            (12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_hdr_remap_shift                   (10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_bypass_en_shift                   (9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_lossy_en_shift                    (8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_bl_err_shift                      (7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_cross_err_shift                   (6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_chg_err_shift                     (5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_busy_shift                        (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_cache_dis_shift                   (1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_enable_shift                      (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_decomp_qlvl_c_mask                (0x40000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_decomp_qlvl_y_mask                (0x30000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_decomp_bpp_mask                   (0x03000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_pic_width_div_16_mask             (0x001FF000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_hdr_remap_mask                    (0x00000C00)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_bypass_en_mask                    (0x00000200)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_lossy_en_mask                     (0x00000100)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_bl_err_mask                       (0x00000080)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_cross_err_mask                    (0x00000040)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_chg_err_mask                      (0x00000020)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_busy_mask                         (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_cache_dis_mask                    (0x00000002)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_enable_mask                       (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_decomp_qlvl_c(data)               (0x40000000&((data)<<30))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_decomp_qlvl_y(data)               (0x30000000&((data)<<28))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_decomp_bpp(data)                  (0x03000000&((data)<<24))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_pic_width_div_16(data)            (0x001FF000&((data)<<12))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_hdr_remap(data)                   (0x00000C00&((data)<<10))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_bypass_en(data)                   (0x00000200&((data)<<9))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_lossy_en(data)                    (0x00000100&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_bl_err(data)                      (0x00000080&((data)<<7))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_cross_err(data)                   (0x00000040&((data)<<6))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_chg_err(data)                     (0x00000020&((data)<<5))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_busy(data)                        (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_cache_dis(data)                   (0x00000002&((data)<<1))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_enable(data)                      (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_get_decomp_qlvl_c(data)           ((0x40000000&(data))>>30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_get_decomp_qlvl_y(data)           ((0x30000000&(data))>>28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_get_decomp_bpp(data)              ((0x03000000&(data))>>24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_get_pic_width_div_16(data)        ((0x001FF000&(data))>>12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_get_hdr_remap(data)               ((0x00000C00&(data))>>10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_get_bypass_en(data)               ((0x00000200&(data))>>9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_get_lossy_en(data)                ((0x00000100&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_get_bl_err(data)                  ((0x00000080&(data))>>7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_get_cross_err(data)               ((0x00000040&(data))>>6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_get_chg_err(data)                 ((0x00000020&(data))>>5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_get_busy(data)                    ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_get_cache_dis(data)               ((0x00000002&(data))>>1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_0_get_enable(data)                  (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1                                  0x18069104
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_reg_addr                          "0xB8069104"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_reg                               0xB8069104
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_inst_addr                         "0x0002"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_region_1_reg(data)                     (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_1_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_region_1_reg                           (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_1_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_decomp_qlvl_c_shift               (30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_decomp_qlvl_y_shift               (28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_decomp_bpp_shift                  (24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_pic_width_div_16_shift            (12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_hdr_remap_shift                   (10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_bypass_en_shift                   (9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_lossy_en_shift                    (8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_bl_err_shift                      (7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_cross_err_shift                   (6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_chg_err_shift                     (5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_busy_shift                        (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_cache_dis_shift                   (1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_enable_shift                      (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_decomp_qlvl_c_mask                (0x40000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_decomp_qlvl_y_mask                (0x30000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_decomp_bpp_mask                   (0x03000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_pic_width_div_16_mask             (0x001FF000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_hdr_remap_mask                    (0x00000C00)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_bypass_en_mask                    (0x00000200)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_lossy_en_mask                     (0x00000100)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_bl_err_mask                       (0x00000080)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_cross_err_mask                    (0x00000040)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_chg_err_mask                      (0x00000020)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_busy_mask                         (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_cache_dis_mask                    (0x00000002)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_enable_mask                       (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_decomp_qlvl_c(data)               (0x40000000&((data)<<30))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_decomp_qlvl_y(data)               (0x30000000&((data)<<28))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_decomp_bpp(data)                  (0x03000000&((data)<<24))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_pic_width_div_16(data)            (0x001FF000&((data)<<12))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_hdr_remap(data)                   (0x00000C00&((data)<<10))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_bypass_en(data)                   (0x00000200&((data)<<9))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_lossy_en(data)                    (0x00000100&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_bl_err(data)                      (0x00000080&((data)<<7))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_cross_err(data)                   (0x00000040&((data)<<6))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_chg_err(data)                     (0x00000020&((data)<<5))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_busy(data)                        (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_cache_dis(data)                   (0x00000002&((data)<<1))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_enable(data)                      (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_get_decomp_qlvl_c(data)           ((0x40000000&(data))>>30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_get_decomp_qlvl_y(data)           ((0x30000000&(data))>>28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_get_decomp_bpp(data)              ((0x03000000&(data))>>24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_get_pic_width_div_16(data)        ((0x001FF000&(data))>>12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_get_hdr_remap(data)               ((0x00000C00&(data))>>10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_get_bypass_en(data)               ((0x00000200&(data))>>9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_get_lossy_en(data)                ((0x00000100&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_get_bl_err(data)                  ((0x00000080&(data))>>7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_get_cross_err(data)               ((0x00000040&(data))>>6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_get_chg_err(data)                 ((0x00000020&(data))>>5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_get_busy(data)                    ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_get_cache_dis(data)               ((0x00000002&(data))>>1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_1_get_enable(data)                  (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2                                  0x18069108
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_reg_addr                          "0xB8069108"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_reg                               0xB8069108
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_inst_addr                         "0x0003"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_region_2_reg(data)                     (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_2_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_region_2_reg                           (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_2_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_decomp_qlvl_c_shift               (30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_decomp_qlvl_y_shift               (28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_decomp_bpp_shift                  (24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_pic_width_div_16_shift            (12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_hdr_remap_shift                   (10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_bypass_en_shift                   (9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_lossy_en_shift                    (8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_bl_err_shift                      (7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_cross_err_shift                   (6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_chg_err_shift                     (5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_busy_shift                        (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_cache_dis_shift                   (1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_enable_shift                      (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_decomp_qlvl_c_mask                (0x40000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_decomp_qlvl_y_mask                (0x30000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_decomp_bpp_mask                   (0x03000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_pic_width_div_16_mask             (0x001FF000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_hdr_remap_mask                    (0x00000C00)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_bypass_en_mask                    (0x00000200)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_lossy_en_mask                     (0x00000100)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_bl_err_mask                       (0x00000080)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_cross_err_mask                    (0x00000040)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_chg_err_mask                      (0x00000020)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_busy_mask                         (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_cache_dis_mask                    (0x00000002)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_enable_mask                       (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_decomp_qlvl_c(data)               (0x40000000&((data)<<30))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_decomp_qlvl_y(data)               (0x30000000&((data)<<28))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_decomp_bpp(data)                  (0x03000000&((data)<<24))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_pic_width_div_16(data)            (0x001FF000&((data)<<12))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_hdr_remap(data)                   (0x00000C00&((data)<<10))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_bypass_en(data)                   (0x00000200&((data)<<9))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_lossy_en(data)                    (0x00000100&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_bl_err(data)                      (0x00000080&((data)<<7))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_cross_err(data)                   (0x00000040&((data)<<6))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_chg_err(data)                     (0x00000020&((data)<<5))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_busy(data)                        (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_cache_dis(data)                   (0x00000002&((data)<<1))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_enable(data)                      (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_get_decomp_qlvl_c(data)           ((0x40000000&(data))>>30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_get_decomp_qlvl_y(data)           ((0x30000000&(data))>>28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_get_decomp_bpp(data)              ((0x03000000&(data))>>24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_get_pic_width_div_16(data)        ((0x001FF000&(data))>>12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_get_hdr_remap(data)               ((0x00000C00&(data))>>10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_get_bypass_en(data)               ((0x00000200&(data))>>9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_get_lossy_en(data)                ((0x00000100&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_get_bl_err(data)                  ((0x00000080&(data))>>7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_get_cross_err(data)               ((0x00000040&(data))>>6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_get_chg_err(data)                 ((0x00000020&(data))>>5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_get_busy(data)                    ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_get_cache_dis(data)               ((0x00000002&(data))>>1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_2_get_enable(data)                  (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3                                  0x1806910C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_reg_addr                          "0xB806910C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_reg                               0xB806910C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_inst_addr                         "0x0004"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_region_3_reg(data)                     (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_3_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_region_3_reg                           (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_3_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_decomp_qlvl_c_shift               (30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_decomp_qlvl_y_shift               (28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_decomp_bpp_shift                  (24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_pic_width_div_16_shift            (12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_hdr_remap_shift                   (10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_bypass_en_shift                   (9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_lossy_en_shift                    (8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_bl_err_shift                      (7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_cross_err_shift                   (6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_chg_err_shift                     (5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_busy_shift                        (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_cache_dis_shift                   (1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_enable_shift                      (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_decomp_qlvl_c_mask                (0x40000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_decomp_qlvl_y_mask                (0x30000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_decomp_bpp_mask                   (0x03000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_pic_width_div_16_mask             (0x001FF000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_hdr_remap_mask                    (0x00000C00)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_bypass_en_mask                    (0x00000200)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_lossy_en_mask                     (0x00000100)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_bl_err_mask                       (0x00000080)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_cross_err_mask                    (0x00000040)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_chg_err_mask                      (0x00000020)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_busy_mask                         (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_cache_dis_mask                    (0x00000002)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_enable_mask                       (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_decomp_qlvl_c(data)               (0x40000000&((data)<<30))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_decomp_qlvl_y(data)               (0x30000000&((data)<<28))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_decomp_bpp(data)                  (0x03000000&((data)<<24))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_pic_width_div_16(data)            (0x001FF000&((data)<<12))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_hdr_remap(data)                   (0x00000C00&((data)<<10))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_bypass_en(data)                   (0x00000200&((data)<<9))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_lossy_en(data)                    (0x00000100&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_bl_err(data)                      (0x00000080&((data)<<7))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_cross_err(data)                   (0x00000040&((data)<<6))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_chg_err(data)                     (0x00000020&((data)<<5))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_busy(data)                        (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_cache_dis(data)                   (0x00000002&((data)<<1))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_enable(data)                      (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_get_decomp_qlvl_c(data)           ((0x40000000&(data))>>30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_get_decomp_qlvl_y(data)           ((0x30000000&(data))>>28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_get_decomp_bpp(data)              ((0x03000000&(data))>>24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_get_pic_width_div_16(data)        ((0x001FF000&(data))>>12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_get_hdr_remap(data)               ((0x00000C00&(data))>>10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_get_bypass_en(data)               ((0x00000200&(data))>>9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_get_lossy_en(data)                ((0x00000100&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_get_bl_err(data)                  ((0x00000080&(data))>>7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_get_cross_err(data)               ((0x00000040&(data))>>6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_get_chg_err(data)                 ((0x00000020&(data))>>5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_get_busy(data)                    ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_get_cache_dis(data)               ((0x00000002&(data))>>1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_3_get_enable(data)                  (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4                                  0x18069110
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_reg_addr                          "0xB8069110"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_reg                               0xB8069110
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_inst_addr                         "0x0005"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_region_4_reg(data)                     (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_4_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_region_4_reg                           (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_4_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_decomp_qlvl_c_shift               (30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_decomp_qlvl_y_shift               (28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_decomp_bpp_shift                  (24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_pic_width_div_16_shift            (12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_hdr_remap_shift                   (10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_bypass_en_shift                   (9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_lossy_en_shift                    (8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_bl_err_shift                      (7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_cross_err_shift                   (6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_chg_err_shift                     (5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_busy_shift                        (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_cache_dis_shift                   (1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_enable_shift                      (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_decomp_qlvl_c_mask                (0x40000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_decomp_qlvl_y_mask                (0x30000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_decomp_bpp_mask                   (0x03000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_pic_width_div_16_mask             (0x001FF000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_hdr_remap_mask                    (0x00000C00)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_bypass_en_mask                    (0x00000200)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_lossy_en_mask                     (0x00000100)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_bl_err_mask                       (0x00000080)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_cross_err_mask                    (0x00000040)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_chg_err_mask                      (0x00000020)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_busy_mask                         (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_cache_dis_mask                    (0x00000002)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_enable_mask                       (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_decomp_qlvl_c(data)               (0x40000000&((data)<<30))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_decomp_qlvl_y(data)               (0x30000000&((data)<<28))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_decomp_bpp(data)                  (0x03000000&((data)<<24))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_pic_width_div_16(data)            (0x001FF000&((data)<<12))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_hdr_remap(data)                   (0x00000C00&((data)<<10))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_bypass_en(data)                   (0x00000200&((data)<<9))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_lossy_en(data)                    (0x00000100&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_bl_err(data)                      (0x00000080&((data)<<7))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_cross_err(data)                   (0x00000040&((data)<<6))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_chg_err(data)                     (0x00000020&((data)<<5))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_busy(data)                        (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_cache_dis(data)                   (0x00000002&((data)<<1))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_enable(data)                      (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_get_decomp_qlvl_c(data)           ((0x40000000&(data))>>30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_get_decomp_qlvl_y(data)           ((0x30000000&(data))>>28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_get_decomp_bpp(data)              ((0x03000000&(data))>>24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_get_pic_width_div_16(data)        ((0x001FF000&(data))>>12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_get_hdr_remap(data)               ((0x00000C00&(data))>>10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_get_bypass_en(data)               ((0x00000200&(data))>>9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_get_lossy_en(data)                ((0x00000100&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_get_bl_err(data)                  ((0x00000080&(data))>>7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_get_cross_err(data)               ((0x00000040&(data))>>6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_get_chg_err(data)                 ((0x00000020&(data))>>5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_get_busy(data)                    ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_get_cache_dis(data)               ((0x00000002&(data))>>1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_4_get_enable(data)                  (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5                                  0x18069114
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_reg_addr                          "0xB8069114"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_reg                               0xB8069114
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_inst_addr                         "0x0006"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_region_5_reg(data)                     (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_5_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_region_5_reg                           (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_5_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_decomp_qlvl_c_shift               (30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_decomp_qlvl_y_shift               (28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_decomp_bpp_shift                  (24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_pic_width_div_16_shift            (12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_hdr_remap_shift                   (10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_bypass_en_shift                   (9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_lossy_en_shift                    (8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_bl_err_shift                      (7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_cross_err_shift                   (6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_chg_err_shift                     (5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_busy_shift                        (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_cache_dis_shift                   (1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_enable_shift                      (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_decomp_qlvl_c_mask                (0x40000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_decomp_qlvl_y_mask                (0x30000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_decomp_bpp_mask                   (0x03000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_pic_width_div_16_mask             (0x001FF000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_hdr_remap_mask                    (0x00000C00)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_bypass_en_mask                    (0x00000200)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_lossy_en_mask                     (0x00000100)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_bl_err_mask                       (0x00000080)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_cross_err_mask                    (0x00000040)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_chg_err_mask                      (0x00000020)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_busy_mask                         (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_cache_dis_mask                    (0x00000002)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_enable_mask                       (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_decomp_qlvl_c(data)               (0x40000000&((data)<<30))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_decomp_qlvl_y(data)               (0x30000000&((data)<<28))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_decomp_bpp(data)                  (0x03000000&((data)<<24))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_pic_width_div_16(data)            (0x001FF000&((data)<<12))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_hdr_remap(data)                   (0x00000C00&((data)<<10))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_bypass_en(data)                   (0x00000200&((data)<<9))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_lossy_en(data)                    (0x00000100&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_bl_err(data)                      (0x00000080&((data)<<7))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_cross_err(data)                   (0x00000040&((data)<<6))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_chg_err(data)                     (0x00000020&((data)<<5))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_busy(data)                        (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_cache_dis(data)                   (0x00000002&((data)<<1))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_enable(data)                      (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_get_decomp_qlvl_c(data)           ((0x40000000&(data))>>30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_get_decomp_qlvl_y(data)           ((0x30000000&(data))>>28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_get_decomp_bpp(data)              ((0x03000000&(data))>>24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_get_pic_width_div_16(data)        ((0x001FF000&(data))>>12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_get_hdr_remap(data)               ((0x00000C00&(data))>>10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_get_bypass_en(data)               ((0x00000200&(data))>>9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_get_lossy_en(data)                ((0x00000100&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_get_bl_err(data)                  ((0x00000080&(data))>>7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_get_cross_err(data)               ((0x00000040&(data))>>6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_get_chg_err(data)                 ((0x00000020&(data))>>5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_get_busy(data)                    ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_get_cache_dis(data)               ((0x00000002&(data))>>1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_5_get_enable(data)                  (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6                                  0x18069118
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_reg_addr                          "0xB8069118"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_reg                               0xB8069118
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_inst_addr                         "0x0007"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_region_6_reg(data)                     (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_6_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_region_6_reg                           (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_6_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_decomp_qlvl_c_shift               (30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_decomp_qlvl_y_shift               (28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_decomp_bpp_shift                  (24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_pic_width_div_16_shift            (12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_hdr_remap_shift                   (10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_bypass_en_shift                   (9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_lossy_en_shift                    (8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_bl_err_shift                      (7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_cross_err_shift                   (6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_chg_err_shift                     (5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_busy_shift                        (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_cache_dis_shift                   (1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_enable_shift                      (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_decomp_qlvl_c_mask                (0x40000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_decomp_qlvl_y_mask                (0x30000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_decomp_bpp_mask                   (0x03000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_pic_width_div_16_mask             (0x001FF000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_hdr_remap_mask                    (0x00000C00)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_bypass_en_mask                    (0x00000200)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_lossy_en_mask                     (0x00000100)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_bl_err_mask                       (0x00000080)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_cross_err_mask                    (0x00000040)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_chg_err_mask                      (0x00000020)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_busy_mask                         (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_cache_dis_mask                    (0x00000002)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_enable_mask                       (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_decomp_qlvl_c(data)               (0x40000000&((data)<<30))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_decomp_qlvl_y(data)               (0x30000000&((data)<<28))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_decomp_bpp(data)                  (0x03000000&((data)<<24))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_pic_width_div_16(data)            (0x001FF000&((data)<<12))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_hdr_remap(data)                   (0x00000C00&((data)<<10))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_bypass_en(data)                   (0x00000200&((data)<<9))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_lossy_en(data)                    (0x00000100&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_bl_err(data)                      (0x00000080&((data)<<7))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_cross_err(data)                   (0x00000040&((data)<<6))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_chg_err(data)                     (0x00000020&((data)<<5))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_busy(data)                        (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_cache_dis(data)                   (0x00000002&((data)<<1))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_enable(data)                      (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_get_decomp_qlvl_c(data)           ((0x40000000&(data))>>30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_get_decomp_qlvl_y(data)           ((0x30000000&(data))>>28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_get_decomp_bpp(data)              ((0x03000000&(data))>>24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_get_pic_width_div_16(data)        ((0x001FF000&(data))>>12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_get_hdr_remap(data)               ((0x00000C00&(data))>>10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_get_bypass_en(data)               ((0x00000200&(data))>>9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_get_lossy_en(data)                ((0x00000100&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_get_bl_err(data)                  ((0x00000080&(data))>>7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_get_cross_err(data)               ((0x00000040&(data))>>6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_get_chg_err(data)                 ((0x00000020&(data))>>5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_get_busy(data)                    ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_get_cache_dis(data)               ((0x00000002&(data))>>1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_6_get_enable(data)                  (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7                                  0x1806911C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_reg_addr                          "0xB806911C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_reg                               0xB806911C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_inst_addr                         "0x0008"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_region_7_reg(data)                     (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_7_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_region_7_reg                           (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_7_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_decomp_qlvl_c_shift               (30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_decomp_qlvl_y_shift               (28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_decomp_bpp_shift                  (24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_pic_width_div_16_shift            (12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_hdr_remap_shift                   (10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_bypass_en_shift                   (9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_lossy_en_shift                    (8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_bl_err_shift                      (7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_cross_err_shift                   (6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_chg_err_shift                     (5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_busy_shift                        (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_cache_dis_shift                   (1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_enable_shift                      (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_decomp_qlvl_c_mask                (0x40000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_decomp_qlvl_y_mask                (0x30000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_decomp_bpp_mask                   (0x03000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_pic_width_div_16_mask             (0x001FF000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_hdr_remap_mask                    (0x00000C00)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_bypass_en_mask                    (0x00000200)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_lossy_en_mask                     (0x00000100)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_bl_err_mask                       (0x00000080)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_cross_err_mask                    (0x00000040)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_chg_err_mask                      (0x00000020)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_busy_mask                         (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_cache_dis_mask                    (0x00000002)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_enable_mask                       (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_decomp_qlvl_c(data)               (0x40000000&((data)<<30))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_decomp_qlvl_y(data)               (0x30000000&((data)<<28))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_decomp_bpp(data)                  (0x03000000&((data)<<24))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_pic_width_div_16(data)            (0x001FF000&((data)<<12))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_hdr_remap(data)                   (0x00000C00&((data)<<10))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_bypass_en(data)                   (0x00000200&((data)<<9))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_lossy_en(data)                    (0x00000100&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_bl_err(data)                      (0x00000080&((data)<<7))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_cross_err(data)                   (0x00000040&((data)<<6))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_chg_err(data)                     (0x00000020&((data)<<5))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_busy(data)                        (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_cache_dis(data)                   (0x00000002&((data)<<1))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_enable(data)                      (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_get_decomp_qlvl_c(data)           ((0x40000000&(data))>>30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_get_decomp_qlvl_y(data)           ((0x30000000&(data))>>28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_get_decomp_bpp(data)              ((0x03000000&(data))>>24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_get_pic_width_div_16(data)        ((0x001FF000&(data))>>12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_get_hdr_remap(data)               ((0x00000C00&(data))>>10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_get_bypass_en(data)               ((0x00000200&(data))>>9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_get_lossy_en(data)                ((0x00000100&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_get_bl_err(data)                  ((0x00000080&(data))>>7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_get_cross_err(data)               ((0x00000040&(data))>>6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_get_chg_err(data)                 ((0x00000020&(data))>>5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_get_busy(data)                    ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_get_cache_dis(data)               ((0x00000002&(data))>>1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_7_get_enable(data)                  (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8                                  0x18069120
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_reg_addr                          "0xB8069120"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_reg                               0xB8069120
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_inst_addr                         "0x0009"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_region_8_reg(data)                     (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_8_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_region_8_reg                           (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_8_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_decomp_qlvl_c_shift               (30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_decomp_qlvl_y_shift               (28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_decomp_bpp_shift                  (24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_pic_width_div_16_shift            (12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_hdr_remap_shift                   (10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_bypass_en_shift                   (9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_lossy_en_shift                    (8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_bl_err_shift                      (7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_cross_err_shift                   (6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_chg_err_shift                     (5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_busy_shift                        (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_cache_dis_shift                   (1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_enable_shift                      (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_decomp_qlvl_c_mask                (0x40000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_decomp_qlvl_y_mask                (0x30000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_decomp_bpp_mask                   (0x03000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_pic_width_div_16_mask             (0x001FF000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_hdr_remap_mask                    (0x00000C00)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_bypass_en_mask                    (0x00000200)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_lossy_en_mask                     (0x00000100)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_bl_err_mask                       (0x00000080)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_cross_err_mask                    (0x00000040)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_chg_err_mask                      (0x00000020)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_busy_mask                         (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_cache_dis_mask                    (0x00000002)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_enable_mask                       (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_decomp_qlvl_c(data)               (0x40000000&((data)<<30))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_decomp_qlvl_y(data)               (0x30000000&((data)<<28))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_decomp_bpp(data)                  (0x03000000&((data)<<24))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_pic_width_div_16(data)            (0x001FF000&((data)<<12))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_hdr_remap(data)                   (0x00000C00&((data)<<10))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_bypass_en(data)                   (0x00000200&((data)<<9))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_lossy_en(data)                    (0x00000100&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_bl_err(data)                      (0x00000080&((data)<<7))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_cross_err(data)                   (0x00000040&((data)<<6))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_chg_err(data)                     (0x00000020&((data)<<5))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_busy(data)                        (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_cache_dis(data)                   (0x00000002&((data)<<1))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_enable(data)                      (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_get_decomp_qlvl_c(data)           ((0x40000000&(data))>>30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_get_decomp_qlvl_y(data)           ((0x30000000&(data))>>28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_get_decomp_bpp(data)              ((0x03000000&(data))>>24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_get_pic_width_div_16(data)        ((0x001FF000&(data))>>12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_get_hdr_remap(data)               ((0x00000C00&(data))>>10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_get_bypass_en(data)               ((0x00000200&(data))>>9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_get_lossy_en(data)                ((0x00000100&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_get_bl_err(data)                  ((0x00000080&(data))>>7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_get_cross_err(data)               ((0x00000040&(data))>>6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_get_chg_err(data)                 ((0x00000020&(data))>>5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_get_busy(data)                    ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_get_cache_dis(data)               ((0x00000002&(data))>>1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_8_get_enable(data)                  (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9                                  0x18069124
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_reg_addr                          "0xB8069124"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_reg                               0xB8069124
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_inst_addr                         "0x000A"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_region_9_reg(data)                     (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_9_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_region_9_reg                           (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_9_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_decomp_qlvl_c_shift               (30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_decomp_qlvl_y_shift               (28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_decomp_bpp_shift                  (24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_pic_width_div_16_shift            (12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_hdr_remap_shift                   (10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_bypass_en_shift                   (9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_lossy_en_shift                    (8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_bl_err_shift                      (7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_cross_err_shift                   (6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_chg_err_shift                     (5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_busy_shift                        (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_cache_dis_shift                   (1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_enable_shift                      (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_decomp_qlvl_c_mask                (0x40000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_decomp_qlvl_y_mask                (0x30000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_decomp_bpp_mask                   (0x03000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_pic_width_div_16_mask             (0x001FF000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_hdr_remap_mask                    (0x00000C00)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_bypass_en_mask                    (0x00000200)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_lossy_en_mask                     (0x00000100)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_bl_err_mask                       (0x00000080)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_cross_err_mask                    (0x00000040)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_chg_err_mask                      (0x00000020)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_busy_mask                         (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_cache_dis_mask                    (0x00000002)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_enable_mask                       (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_decomp_qlvl_c(data)               (0x40000000&((data)<<30))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_decomp_qlvl_y(data)               (0x30000000&((data)<<28))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_decomp_bpp(data)                  (0x03000000&((data)<<24))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_pic_width_div_16(data)            (0x001FF000&((data)<<12))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_hdr_remap(data)                   (0x00000C00&((data)<<10))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_bypass_en(data)                   (0x00000200&((data)<<9))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_lossy_en(data)                    (0x00000100&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_bl_err(data)                      (0x00000080&((data)<<7))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_cross_err(data)                   (0x00000040&((data)<<6))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_chg_err(data)                     (0x00000020&((data)<<5))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_busy(data)                        (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_cache_dis(data)                   (0x00000002&((data)<<1))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_enable(data)                      (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_get_decomp_qlvl_c(data)           ((0x40000000&(data))>>30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_get_decomp_qlvl_y(data)           ((0x30000000&(data))>>28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_get_decomp_bpp(data)              ((0x03000000&(data))>>24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_get_pic_width_div_16(data)        ((0x001FF000&(data))>>12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_get_hdr_remap(data)               ((0x00000C00&(data))>>10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_get_bypass_en(data)               ((0x00000200&(data))>>9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_get_lossy_en(data)                ((0x00000100&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_get_bl_err(data)                  ((0x00000080&(data))>>7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_get_cross_err(data)               ((0x00000040&(data))>>6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_get_chg_err(data)                 ((0x00000020&(data))>>5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_get_busy(data)                    ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_get_cache_dis(data)               ((0x00000002&(data))>>1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_9_get_enable(data)                  (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10                                 0x18069128
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_reg_addr                         "0xB8069128"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_reg                              0xB8069128
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_inst_addr                        "0x000B"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_region_10_reg(data)                    (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_10_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_region_10_reg                          (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_10_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_decomp_qlvl_c_shift              (30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_decomp_qlvl_y_shift              (28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_decomp_bpp_shift                 (24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_pic_width_div_16_shift           (12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_hdr_remap_shift                  (10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_bypass_en_shift                  (9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_lossy_en_shift                   (8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_bl_err_shift                     (7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_cross_err_shift                  (6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_chg_err_shift                    (5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_busy_shift                       (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_cache_dis_shift                  (1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_enable_shift                     (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_decomp_qlvl_c_mask               (0x40000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_decomp_qlvl_y_mask               (0x30000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_decomp_bpp_mask                  (0x03000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_pic_width_div_16_mask            (0x001FF000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_hdr_remap_mask                   (0x00000C00)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_bypass_en_mask                   (0x00000200)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_lossy_en_mask                    (0x00000100)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_bl_err_mask                      (0x00000080)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_cross_err_mask                   (0x00000040)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_chg_err_mask                     (0x00000020)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_busy_mask                        (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_cache_dis_mask                   (0x00000002)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_enable_mask                      (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_decomp_qlvl_c(data)              (0x40000000&((data)<<30))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_decomp_qlvl_y(data)              (0x30000000&((data)<<28))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_decomp_bpp(data)                 (0x03000000&((data)<<24))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_pic_width_div_16(data)           (0x001FF000&((data)<<12))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_hdr_remap(data)                  (0x00000C00&((data)<<10))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_bypass_en(data)                  (0x00000200&((data)<<9))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_lossy_en(data)                   (0x00000100&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_bl_err(data)                     (0x00000080&((data)<<7))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_cross_err(data)                  (0x00000040&((data)<<6))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_chg_err(data)                    (0x00000020&((data)<<5))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_busy(data)                       (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_cache_dis(data)                  (0x00000002&((data)<<1))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_enable(data)                     (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_get_decomp_qlvl_c(data)          ((0x40000000&(data))>>30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_get_decomp_qlvl_y(data)          ((0x30000000&(data))>>28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_get_decomp_bpp(data)             ((0x03000000&(data))>>24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_get_pic_width_div_16(data)       ((0x001FF000&(data))>>12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_get_hdr_remap(data)              ((0x00000C00&(data))>>10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_get_bypass_en(data)              ((0x00000200&(data))>>9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_get_lossy_en(data)               ((0x00000100&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_get_bl_err(data)                 ((0x00000080&(data))>>7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_get_cross_err(data)              ((0x00000040&(data))>>6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_get_chg_err(data)                ((0x00000020&(data))>>5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_get_busy(data)                   ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_get_cache_dis(data)              ((0x00000002&(data))>>1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_10_get_enable(data)                 (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11                                 0x1806912C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_reg_addr                         "0xB806912C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_reg                              0xB806912C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_inst_addr                        "0x000C"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_region_11_reg(data)                    (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_11_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_region_11_reg                          (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_region_11_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_decomp_qlvl_c_shift              (30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_decomp_qlvl_y_shift              (28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_decomp_bpp_shift                 (24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_pic_width_div_16_shift           (12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_hdr_remap_shift                  (10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_bypass_en_shift                  (9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_lossy_en_shift                   (8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_bl_err_shift                     (7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_cross_err_shift                  (6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_chg_err_shift                    (5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_busy_shift                       (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_cache_dis_shift                  (1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_enable_shift                     (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_decomp_qlvl_c_mask               (0x40000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_decomp_qlvl_y_mask               (0x30000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_decomp_bpp_mask                  (0x03000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_pic_width_div_16_mask            (0x001FF000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_hdr_remap_mask                   (0x00000C00)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_bypass_en_mask                   (0x00000200)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_lossy_en_mask                    (0x00000100)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_bl_err_mask                      (0x00000080)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_cross_err_mask                   (0x00000040)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_chg_err_mask                     (0x00000020)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_busy_mask                        (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_cache_dis_mask                   (0x00000002)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_enable_mask                      (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_decomp_qlvl_c(data)              (0x40000000&((data)<<30))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_decomp_qlvl_y(data)              (0x30000000&((data)<<28))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_decomp_bpp(data)                 (0x03000000&((data)<<24))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_pic_width_div_16(data)           (0x001FF000&((data)<<12))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_hdr_remap(data)                  (0x00000C00&((data)<<10))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_bypass_en(data)                  (0x00000200&((data)<<9))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_lossy_en(data)                   (0x00000100&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_bl_err(data)                     (0x00000080&((data)<<7))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_cross_err(data)                  (0x00000040&((data)<<6))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_chg_err(data)                    (0x00000020&((data)<<5))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_busy(data)                       (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_cache_dis(data)                  (0x00000002&((data)<<1))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_enable(data)                     (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_get_decomp_qlvl_c(data)          ((0x40000000&(data))>>30)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_get_decomp_qlvl_y(data)          ((0x30000000&(data))>>28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_get_decomp_bpp(data)             ((0x03000000&(data))>>24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_get_pic_width_div_16(data)       ((0x001FF000&(data))>>12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_get_hdr_remap(data)              ((0x00000C00&(data))>>10)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_get_bypass_en(data)              ((0x00000200&(data))>>9)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_get_lossy_en(data)               ((0x00000100&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_get_bl_err(data)                 ((0x00000080&(data))>>7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_get_cross_err(data)              ((0x00000040&(data))>>6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_get_chg_err(data)                ((0x00000020&(data))>>5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_get_busy(data)                   ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_get_cache_dis(data)              ((0x00000002&(data))>>1)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_region_11_get_enable(data)                 (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_0                                    0x18069200
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_0_reg_addr                            "0xB8069200"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_0_reg                                 0xB8069200
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_0_inst_addr                           "0x000D"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_0_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_0_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_0_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_0_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_0_lu_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_0_lu_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_0_lu_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_0_get_lu_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_1                                    0x18069204
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_1_reg_addr                            "0xB8069204"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_1_reg                                 0xB8069204
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_1_inst_addr                           "0x000E"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_1_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_1_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_1_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_1_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_1_lu_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_1_lu_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_1_lu_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_1_get_lu_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_2                                    0x18069208
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_2_reg_addr                            "0xB8069208"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_2_reg                                 0xB8069208
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_2_inst_addr                           "0x000F"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_2_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_2_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_2_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_2_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_2_lu_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_2_lu_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_2_lu_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_2_get_lu_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_3                                    0x1806920C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_3_reg_addr                            "0xB806920C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_3_reg                                 0xB806920C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_3_inst_addr                           "0x0010"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_3_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_3_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_3_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_3_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_3_lu_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_3_lu_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_3_lu_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_3_get_lu_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_4                                    0x18069210
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_4_reg_addr                            "0xB8069210"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_4_reg                                 0xB8069210
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_4_inst_addr                           "0x0011"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_4_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_4_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_4_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_4_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_4_lu_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_4_lu_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_4_lu_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_4_get_lu_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_5                                    0x18069214
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_5_reg_addr                            "0xB8069214"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_5_reg                                 0xB8069214
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_5_inst_addr                           "0x0012"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_5_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_5_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_5_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_5_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_5_lu_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_5_lu_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_5_lu_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_5_get_lu_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_6                                    0x18069218
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_6_reg_addr                            "0xB8069218"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_6_reg                                 0xB8069218
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_6_inst_addr                           "0x0013"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_6_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_6_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_6_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_6_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_6_lu_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_6_lu_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_6_lu_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_6_get_lu_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_7                                    0x1806921C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_7_reg_addr                            "0xB806921C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_7_reg                                 0xB806921C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_7_inst_addr                           "0x0014"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_7_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_7_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_7_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_7_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_7_lu_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_7_lu_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_7_lu_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_7_get_lu_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_8                                    0x18069220
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_8_reg_addr                            "0xB8069220"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_8_reg                                 0xB8069220
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_8_inst_addr                           "0x0015"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_8_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_8_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_8_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_8_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_8_lu_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_8_lu_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_8_lu_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_8_get_lu_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_9                                    0x18069224
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_9_reg_addr                            "0xB8069224"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_9_reg                                 0xB8069224
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_9_inst_addr                           "0x0016"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_9_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_9_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_9_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_9_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_9_lu_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_9_lu_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_9_lu_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_9_get_lu_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_10                                   0x18069228
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_10_reg_addr                           "0xB8069228"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_10_reg                                0xB8069228
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_10_inst_addr                          "0x0017"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_10_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_10_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_10_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_10_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_10_lu_hdr_sta_adr_shift               (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_10_lu_hdr_sta_adr_mask                (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_10_lu_hdr_sta_adr(data)               (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_10_get_lu_hdr_sta_adr(data)           ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_11                                   0x1806922C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_11_reg_addr                           "0xB806922C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_11_reg                                0xB806922C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_11_inst_addr                          "0x0018"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_11_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_11_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_11_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_11_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_11_lu_hdr_sta_adr_shift               (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_11_lu_hdr_sta_adr_mask                (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_11_lu_hdr_sta_adr(data)               (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_0_11_get_lu_hdr_sta_adr(data)           ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_0                                    0x18069240
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_0_reg_addr                            "0xB8069240"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_0_reg                                 0xB8069240
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_0_inst_addr                           "0x0019"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_0_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_0_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_0_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_0_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_0_lu_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_0_lu_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_0_lu_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_0_get_lu_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_1                                    0x18069244
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_1_reg_addr                            "0xB8069244"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_1_reg                                 0xB8069244
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_1_inst_addr                           "0x001A"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_1_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_1_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_1_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_1_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_1_lu_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_1_lu_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_1_lu_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_1_get_lu_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_2                                    0x18069248
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_2_reg_addr                            "0xB8069248"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_2_reg                                 0xB8069248
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_2_inst_addr                           "0x001B"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_2_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_2_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_2_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_2_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_2_lu_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_2_lu_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_2_lu_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_2_get_lu_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_3                                    0x1806924C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_3_reg_addr                            "0xB806924C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_3_reg                                 0xB806924C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_3_inst_addr                           "0x001C"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_3_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_3_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_3_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_3_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_3_lu_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_3_lu_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_3_lu_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_3_get_lu_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_4                                    0x18069250
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_4_reg_addr                            "0xB8069250"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_4_reg                                 0xB8069250
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_4_inst_addr                           "0x001D"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_4_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_4_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_4_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_4_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_4_lu_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_4_lu_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_4_lu_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_4_get_lu_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_5                                    0x18069254
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_5_reg_addr                            "0xB8069254"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_5_reg                                 0xB8069254
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_5_inst_addr                           "0x001E"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_5_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_5_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_5_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_5_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_5_lu_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_5_lu_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_5_lu_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_5_get_lu_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_6                                    0x18069258
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_6_reg_addr                            "0xB8069258"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_6_reg                                 0xB8069258
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_6_inst_addr                           "0x001F"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_6_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_6_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_6_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_6_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_6_lu_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_6_lu_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_6_lu_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_6_get_lu_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_7                                    0x1806925C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_7_reg_addr                            "0xB806925C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_7_reg                                 0xB806925C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_7_inst_addr                           "0x0020"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_7_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_7_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_7_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_7_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_7_lu_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_7_lu_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_7_lu_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_7_get_lu_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_8                                    0x18069260
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_8_reg_addr                            "0xB8069260"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_8_reg                                 0xB8069260
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_8_inst_addr                           "0x0021"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_8_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_8_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_8_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_8_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_8_lu_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_8_lu_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_8_lu_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_8_get_lu_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_9                                    0x18069264
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_9_reg_addr                            "0xB8069264"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_9_reg                                 0xB8069264
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_9_inst_addr                           "0x0022"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_9_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_9_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_9_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_9_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_9_lu_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_9_lu_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_9_lu_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_9_get_lu_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_10                                   0x18069268
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_10_reg_addr                           "0xB8069268"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_10_reg                                0xB8069268
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_10_inst_addr                          "0x0023"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_10_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_10_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_10_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_10_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_10_lu_dat_sta_adr_shift               (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_10_lu_dat_sta_adr_mask                (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_10_lu_dat_sta_adr(data)               (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_10_get_lu_dat_sta_adr(data)           ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_11                                   0x1806926C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_11_reg_addr                           "0xB806926C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_11_reg                                0xB806926C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_11_inst_addr                          "0x0024"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_11_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_11_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_11_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_11_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_11_lu_dat_sta_adr_shift               (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_11_lu_dat_sta_adr_mask                (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_11_lu_dat_sta_adr(data)               (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_1_11_get_lu_dat_sta_adr(data)           ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_0                                    0x18069280
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_0_reg_addr                            "0xB8069280"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_0_reg                                 0xB8069280
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_0_inst_addr                           "0x0025"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_0_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_0_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_0_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_0_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_0_lu_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_0_lu_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_0_lu_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_0_get_lu_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_1                                    0x18069284
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_1_reg_addr                            "0xB8069284"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_1_reg                                 0xB8069284
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_1_inst_addr                           "0x0026"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_1_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_1_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_1_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_1_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_1_lu_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_1_lu_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_1_lu_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_1_get_lu_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_2                                    0x18069288
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_2_reg_addr                            "0xB8069288"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_2_reg                                 0xB8069288
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_2_inst_addr                           "0x0027"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_2_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_2_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_2_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_2_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_2_lu_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_2_lu_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_2_lu_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_2_get_lu_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_3                                    0x1806928C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_3_reg_addr                            "0xB806928C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_3_reg                                 0xB806928C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_3_inst_addr                           "0x0028"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_3_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_3_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_3_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_3_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_3_lu_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_3_lu_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_3_lu_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_3_get_lu_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_4                                    0x18069290
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_4_reg_addr                            "0xB8069290"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_4_reg                                 0xB8069290
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_4_inst_addr                           "0x0029"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_4_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_4_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_4_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_4_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_4_lu_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_4_lu_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_4_lu_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_4_get_lu_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_5                                    0x18069294
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_5_reg_addr                            "0xB8069294"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_5_reg                                 0xB8069294
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_5_inst_addr                           "0x002A"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_5_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_5_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_5_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_5_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_5_lu_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_5_lu_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_5_lu_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_5_get_lu_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_6                                    0x18069298
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_6_reg_addr                            "0xB8069298"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_6_reg                                 0xB8069298
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_6_inst_addr                           "0x002B"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_6_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_6_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_6_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_6_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_6_lu_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_6_lu_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_6_lu_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_6_get_lu_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_7                                    0x1806929C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_7_reg_addr                            "0xB806929C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_7_reg                                 0xB806929C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_7_inst_addr                           "0x002C"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_7_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_7_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_7_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_7_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_7_lu_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_7_lu_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_7_lu_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_7_get_lu_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_8                                    0x180692A0
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_8_reg_addr                            "0xB80692A0"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_8_reg                                 0xB80692A0
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_8_inst_addr                           "0x002D"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_8_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_8_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_8_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_8_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_8_lu_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_8_lu_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_8_lu_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_8_get_lu_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_9                                    0x180692A4
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_9_reg_addr                            "0xB80692A4"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_9_reg                                 0xB80692A4
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_9_inst_addr                           "0x002E"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_9_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_9_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_9_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_9_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_9_lu_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_9_lu_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_9_lu_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_9_get_lu_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_10                                   0x180692A8
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_10_reg_addr                           "0xB80692A8"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_10_reg                                0xB80692A8
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_10_inst_addr                          "0x002F"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_10_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_10_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_10_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_10_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_10_lu_dat_end_adr_shift               (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_10_lu_dat_end_adr_mask                (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_10_lu_dat_end_adr(data)               (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_10_get_lu_dat_end_adr(data)           ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_11                                   0x180692AC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_11_reg_addr                           "0xB80692AC"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_11_reg                                0xB80692AC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_11_inst_addr                          "0x0030"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_11_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_11_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_11_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_11_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_11_lu_dat_end_adr_shift               (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_11_lu_dat_end_adr_mask                (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_11_lu_dat_end_adr(data)               (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_2_11_get_lu_dat_end_adr(data)           ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_0                                    0x180692C0
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_0_reg_addr                            "0xB80692C0"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_0_reg                                 0xB80692C0
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_0_inst_addr                           "0x0031"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_0_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_0_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_0_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_0_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_0_lu_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_0_lu_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_0_lu_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_0_get_lu_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_1                                    0x180692C4
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_1_reg_addr                            "0xB80692C4"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_1_reg                                 0xB80692C4
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_1_inst_addr                           "0x0032"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_1_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_1_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_1_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_1_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_1_lu_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_1_lu_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_1_lu_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_1_get_lu_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_2                                    0x180692C8
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_2_reg_addr                            "0xB80692C8"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_2_reg                                 0xB80692C8
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_2_inst_addr                           "0x0033"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_2_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_2_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_2_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_2_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_2_lu_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_2_lu_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_2_lu_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_2_get_lu_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_3                                    0x180692CC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_3_reg_addr                            "0xB80692CC"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_3_reg                                 0xB80692CC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_3_inst_addr                           "0x0034"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_3_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_3_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_3_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_3_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_3_lu_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_3_lu_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_3_lu_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_3_get_lu_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_4                                    0x180692D0
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_4_reg_addr                            "0xB80692D0"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_4_reg                                 0xB80692D0
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_4_inst_addr                           "0x0035"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_4_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_4_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_4_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_4_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_4_lu_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_4_lu_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_4_lu_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_4_get_lu_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_5                                    0x180692D4
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_5_reg_addr                            "0xB80692D4"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_5_reg                                 0xB80692D4
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_5_inst_addr                           "0x0036"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_5_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_5_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_5_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_5_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_5_lu_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_5_lu_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_5_lu_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_5_get_lu_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_6                                    0x180692D8
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_6_reg_addr                            "0xB80692D8"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_6_reg                                 0xB80692D8
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_6_inst_addr                           "0x0037"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_6_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_6_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_6_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_6_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_6_lu_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_6_lu_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_6_lu_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_6_get_lu_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_7                                    0x180692DC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_7_reg_addr                            "0xB80692DC"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_7_reg                                 0xB80692DC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_7_inst_addr                           "0x0038"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_7_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_7_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_7_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_7_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_7_lu_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_7_lu_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_7_lu_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_7_get_lu_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_8                                    0x180692E0
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_8_reg_addr                            "0xB80692E0"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_8_reg                                 0xB80692E0
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_8_inst_addr                           "0x0039"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_8_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_8_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_8_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_8_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_8_lu_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_8_lu_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_8_lu_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_8_get_lu_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_9                                    0x180692E4
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_9_reg_addr                            "0xB80692E4"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_9_reg                                 0xB80692E4
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_9_inst_addr                           "0x003A"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_9_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_9_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_9_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_9_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_9_lu_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_9_lu_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_9_lu_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_9_get_lu_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_10                                   0x180692E8
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_10_reg_addr                           "0xB80692E8"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_10_reg                                0xB80692E8
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_10_inst_addr                          "0x003B"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_10_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_10_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_10_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_10_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_10_lu_dat_pitch_shift                 (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_10_lu_dat_pitch_mask                  (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_10_lu_dat_pitch(data)                 (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_10_get_lu_dat_pitch(data)             ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_11                                   0x180692EC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_11_reg_addr                           "0xB80692EC"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_11_reg                                0xB80692EC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_11_inst_addr                          "0x003C"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_11_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_11_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_11_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_11_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_11_lu_dat_pitch_shift                 (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_11_lu_dat_pitch_mask                  (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_11_lu_dat_pitch(data)                 (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_3_11_get_lu_dat_pitch(data)             ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_0                                    0x18069300
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_0_reg_addr                            "0xB8069300"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_0_reg                                 0xB8069300
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_0_inst_addr                           "0x003D"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_0_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_0_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_0_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_0_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_0_lu_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_0_lu_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_0_lu_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_0_get_lu_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_1                                    0x18069304
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_1_reg_addr                            "0xB8069304"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_1_reg                                 0xB8069304
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_1_inst_addr                           "0x003E"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_1_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_1_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_1_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_1_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_1_lu_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_1_lu_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_1_lu_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_1_get_lu_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_2                                    0x18069308
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_2_reg_addr                            "0xB8069308"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_2_reg                                 0xB8069308
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_2_inst_addr                           "0x003F"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_2_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_2_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_2_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_2_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_2_lu_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_2_lu_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_2_lu_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_2_get_lu_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_3                                    0x1806930C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_3_reg_addr                            "0xB806930C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_3_reg                                 0xB806930C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_3_inst_addr                           "0x0040"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_3_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_3_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_3_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_3_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_3_lu_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_3_lu_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_3_lu_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_3_get_lu_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_4                                    0x18069310
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_4_reg_addr                            "0xB8069310"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_4_reg                                 0xB8069310
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_4_inst_addr                           "0x0041"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_4_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_4_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_4_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_4_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_4_lu_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_4_lu_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_4_lu_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_4_get_lu_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_5                                    0x18069314
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_5_reg_addr                            "0xB8069314"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_5_reg                                 0xB8069314
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_5_inst_addr                           "0x0042"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_5_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_5_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_5_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_5_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_5_lu_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_5_lu_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_5_lu_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_5_get_lu_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_6                                    0x18069318
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_6_reg_addr                            "0xB8069318"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_6_reg                                 0xB8069318
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_6_inst_addr                           "0x0043"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_6_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_6_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_6_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_6_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_6_lu_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_6_lu_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_6_lu_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_6_get_lu_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_7                                    0x1806931C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_7_reg_addr                            "0xB806931C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_7_reg                                 0xB806931C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_7_inst_addr                           "0x0044"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_7_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_7_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_7_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_7_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_7_lu_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_7_lu_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_7_lu_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_7_get_lu_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_8                                    0x18069320
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_8_reg_addr                            "0xB8069320"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_8_reg                                 0xB8069320
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_8_inst_addr                           "0x0045"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_8_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_8_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_8_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_8_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_8_lu_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_8_lu_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_8_lu_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_8_get_lu_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_9                                    0x18069324
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_9_reg_addr                            "0xB8069324"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_9_reg                                 0xB8069324
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_9_inst_addr                           "0x0046"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_9_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_9_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_9_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_9_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_9_lu_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_9_lu_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_9_lu_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_9_get_lu_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_10                                   0x18069328
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_10_reg_addr                           "0xB8069328"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_10_reg                                0xB8069328
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_10_inst_addr                          "0x0047"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_10_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_10_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_10_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_10_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_10_lu_cmp_pitch_shift                 (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_10_lu_cmp_pitch_mask                  (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_10_lu_cmp_pitch(data)                 (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_10_get_lu_cmp_pitch(data)             ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_11                                   0x1806932C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_11_reg_addr                           "0xB806932C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_11_reg                                0xB806932C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_11_inst_addr                          "0x0048"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_11_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_11_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_11_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_11_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_11_lu_cmp_pitch_shift                 (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_11_lu_cmp_pitch_mask                  (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_11_lu_cmp_pitch(data)                 (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_4_11_get_lu_cmp_pitch(data)             ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_0                                    0x18069340
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_0_reg_addr                            "0xB8069340"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_0_reg                                 0xB8069340
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_0_inst_addr                           "0x0049"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_0_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_0_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_0_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_0_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_0_lu_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_0_lu_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_0_lu_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_0_get_lu_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_1                                    0x18069344
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_1_reg_addr                            "0xB8069344"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_1_reg                                 0xB8069344
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_1_inst_addr                           "0x004A"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_1_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_1_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_1_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_1_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_1_lu_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_1_lu_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_1_lu_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_1_get_lu_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_2                                    0x18069348
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_2_reg_addr                            "0xB8069348"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_2_reg                                 0xB8069348
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_2_inst_addr                           "0x004B"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_2_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_2_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_2_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_2_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_2_lu_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_2_lu_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_2_lu_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_2_get_lu_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_3                                    0x1806934C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_3_reg_addr                            "0xB806934C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_3_reg                                 0xB806934C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_3_inst_addr                           "0x004C"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_3_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_3_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_3_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_3_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_3_lu_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_3_lu_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_3_lu_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_3_get_lu_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_4                                    0x18069350
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_4_reg_addr                            "0xB8069350"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_4_reg                                 0xB8069350
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_4_inst_addr                           "0x004D"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_4_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_4_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_4_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_4_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_4_lu_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_4_lu_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_4_lu_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_4_get_lu_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_5                                    0x18069354
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_5_reg_addr                            "0xB8069354"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_5_reg                                 0xB8069354
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_5_inst_addr                           "0x004E"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_5_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_5_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_5_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_5_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_5_lu_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_5_lu_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_5_lu_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_5_get_lu_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_6                                    0x18069358
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_6_reg_addr                            "0xB8069358"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_6_reg                                 0xB8069358
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_6_inst_addr                           "0x004F"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_6_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_6_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_6_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_6_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_6_lu_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_6_lu_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_6_lu_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_6_get_lu_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_7                                    0x1806935C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_7_reg_addr                            "0xB806935C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_7_reg                                 0xB806935C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_7_inst_addr                           "0x0050"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_7_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_7_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_7_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_7_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_7_lu_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_7_lu_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_7_lu_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_7_get_lu_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_8                                    0x18069360
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_8_reg_addr                            "0xB8069360"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_8_reg                                 0xB8069360
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_8_inst_addr                           "0x0051"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_8_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_8_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_8_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_8_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_8_lu_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_8_lu_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_8_lu_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_8_get_lu_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_9                                    0x18069364
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_9_reg_addr                            "0xB8069364"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_9_reg                                 0xB8069364
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_9_inst_addr                           "0x0052"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_9_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_9_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_9_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_9_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_9_lu_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_9_lu_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_9_lu_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_9_get_lu_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_10                                   0x18069368
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_10_reg_addr                           "0xB8069368"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_10_reg                                0xB8069368
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_10_inst_addr                          "0x0053"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_10_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_10_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_10_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_10_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_10_lu_mem_pitch_shift                 (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_10_lu_mem_pitch_mask                  (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_10_lu_mem_pitch(data)                 (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_10_get_lu_mem_pitch(data)             ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_11                                   0x1806936C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_11_reg_addr                           "0xB806936C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_11_reg                                0xB806936C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_11_inst_addr                          "0x0054"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_11_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_11_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_11_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_11_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_11_lu_mem_pitch_shift                 (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_11_lu_mem_pitch_mask                  (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_11_lu_mem_pitch(data)                 (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_lu_5_11_get_lu_mem_pitch(data)             ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_0                                    0x18069400
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_0_reg_addr                            "0xB8069400"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_0_reg                                 0xB8069400
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_0_inst_addr                           "0x0055"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_0_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_0_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_0_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_0_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_0_ch_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_0_ch_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_0_ch_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_0_get_ch_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_1                                    0x18069404
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_1_reg_addr                            "0xB8069404"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_1_reg                                 0xB8069404
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_1_inst_addr                           "0x0056"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_1_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_1_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_1_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_1_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_1_ch_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_1_ch_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_1_ch_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_1_get_ch_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_2                                    0x18069408
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_2_reg_addr                            "0xB8069408"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_2_reg                                 0xB8069408
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_2_inst_addr                           "0x0057"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_2_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_2_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_2_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_2_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_2_ch_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_2_ch_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_2_ch_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_2_get_ch_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_3                                    0x1806940C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_3_reg_addr                            "0xB806940C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_3_reg                                 0xB806940C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_3_inst_addr                           "0x0058"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_3_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_3_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_3_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_3_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_3_ch_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_3_ch_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_3_ch_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_3_get_ch_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_4                                    0x18069410
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_4_reg_addr                            "0xB8069410"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_4_reg                                 0xB8069410
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_4_inst_addr                           "0x0059"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_4_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_4_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_4_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_4_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_4_ch_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_4_ch_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_4_ch_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_4_get_ch_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_5                                    0x18069414
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_5_reg_addr                            "0xB8069414"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_5_reg                                 0xB8069414
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_5_inst_addr                           "0x005A"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_5_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_5_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_5_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_5_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_5_ch_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_5_ch_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_5_ch_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_5_get_ch_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_6                                    0x18069418
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_6_reg_addr                            "0xB8069418"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_6_reg                                 0xB8069418
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_6_inst_addr                           "0x005B"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_6_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_6_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_6_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_6_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_6_ch_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_6_ch_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_6_ch_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_6_get_ch_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_7                                    0x1806941C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_7_reg_addr                            "0xB806941C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_7_reg                                 0xB806941C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_7_inst_addr                           "0x005C"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_7_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_7_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_7_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_7_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_7_ch_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_7_ch_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_7_ch_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_7_get_ch_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_8                                    0x18069420
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_8_reg_addr                            "0xB8069420"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_8_reg                                 0xB8069420
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_8_inst_addr                           "0x005D"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_8_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_8_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_8_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_8_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_8_ch_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_8_ch_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_8_ch_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_8_get_ch_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_9                                    0x18069424
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_9_reg_addr                            "0xB8069424"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_9_reg                                 0xB8069424
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_9_inst_addr                           "0x005E"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_9_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_9_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_9_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_9_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_9_ch_hdr_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_9_ch_hdr_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_9_ch_hdr_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_9_get_ch_hdr_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_10                                   0x18069428
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_10_reg_addr                           "0xB8069428"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_10_reg                                0xB8069428
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_10_inst_addr                          "0x005F"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_10_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_10_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_10_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_10_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_10_ch_hdr_sta_adr_shift               (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_10_ch_hdr_sta_adr_mask                (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_10_ch_hdr_sta_adr(data)               (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_10_get_ch_hdr_sta_adr(data)           ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_11                                   0x1806942C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_11_reg_addr                           "0xB806942C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_11_reg                                0xB806942C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_11_inst_addr                          "0x0060"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_11_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_11_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_11_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_11_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_11_ch_hdr_sta_adr_shift               (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_11_ch_hdr_sta_adr_mask                (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_11_ch_hdr_sta_adr(data)               (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_0_11_get_ch_hdr_sta_adr(data)           ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_0                                    0x18069440
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_0_reg_addr                            "0xB8069440"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_0_reg                                 0xB8069440
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_0_inst_addr                           "0x0061"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_0_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_0_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_0_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_0_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_0_ch_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_0_ch_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_0_ch_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_0_get_ch_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_1                                    0x18069444
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_1_reg_addr                            "0xB8069444"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_1_reg                                 0xB8069444
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_1_inst_addr                           "0x0062"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_1_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_1_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_1_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_1_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_1_ch_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_1_ch_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_1_ch_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_1_get_ch_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_2                                    0x18069448
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_2_reg_addr                            "0xB8069448"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_2_reg                                 0xB8069448
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_2_inst_addr                           "0x0063"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_2_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_2_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_2_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_2_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_2_ch_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_2_ch_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_2_ch_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_2_get_ch_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_3                                    0x1806944C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_3_reg_addr                            "0xB806944C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_3_reg                                 0xB806944C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_3_inst_addr                           "0x0064"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_3_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_3_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_3_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_3_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_3_ch_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_3_ch_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_3_ch_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_3_get_ch_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_4                                    0x18069450
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_4_reg_addr                            "0xB8069450"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_4_reg                                 0xB8069450
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_4_inst_addr                           "0x0065"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_4_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_4_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_4_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_4_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_4_ch_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_4_ch_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_4_ch_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_4_get_ch_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_5                                    0x18069454
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_5_reg_addr                            "0xB8069454"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_5_reg                                 0xB8069454
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_5_inst_addr                           "0x0066"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_5_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_5_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_5_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_5_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_5_ch_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_5_ch_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_5_ch_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_5_get_ch_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_6                                    0x18069458
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_6_reg_addr                            "0xB8069458"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_6_reg                                 0xB8069458
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_6_inst_addr                           "0x0067"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_6_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_6_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_6_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_6_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_6_ch_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_6_ch_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_6_ch_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_6_get_ch_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_7                                    0x1806945C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_7_reg_addr                            "0xB806945C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_7_reg                                 0xB806945C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_7_inst_addr                           "0x0068"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_7_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_7_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_7_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_7_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_7_ch_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_7_ch_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_7_ch_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_7_get_ch_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_8                                    0x18069460
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_8_reg_addr                            "0xB8069460"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_8_reg                                 0xB8069460
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_8_inst_addr                           "0x0069"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_8_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_8_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_8_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_8_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_8_ch_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_8_ch_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_8_ch_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_8_get_ch_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_9                                    0x18069464
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_9_reg_addr                            "0xB8069464"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_9_reg                                 0xB8069464
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_9_inst_addr                           "0x006A"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_9_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_9_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_9_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_9_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_9_ch_dat_sta_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_9_ch_dat_sta_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_9_ch_dat_sta_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_9_get_ch_dat_sta_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_10                                   0x18069468
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_10_reg_addr                           "0xB8069468"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_10_reg                                0xB8069468
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_10_inst_addr                          "0x006B"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_10_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_10_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_10_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_10_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_10_ch_dat_sta_adr_shift               (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_10_ch_dat_sta_adr_mask                (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_10_ch_dat_sta_adr(data)               (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_10_get_ch_dat_sta_adr(data)           ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_11                                   0x1806946C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_11_reg_addr                           "0xB806946C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_11_reg                                0xB806946C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_11_inst_addr                          "0x006C"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_11_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_11_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_11_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_11_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_11_ch_dat_sta_adr_shift               (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_11_ch_dat_sta_adr_mask                (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_11_ch_dat_sta_adr(data)               (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_1_11_get_ch_dat_sta_adr(data)           ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_0                                    0x18069480
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_0_reg_addr                            "0xB8069480"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_0_reg                                 0xB8069480
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_0_inst_addr                           "0x006D"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_0_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_0_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_0_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_0_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_0_ch_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_0_ch_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_0_ch_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_0_get_ch_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_1                                    0x18069484
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_1_reg_addr                            "0xB8069484"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_1_reg                                 0xB8069484
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_1_inst_addr                           "0x006E"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_1_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_1_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_1_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_1_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_1_ch_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_1_ch_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_1_ch_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_1_get_ch_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_2                                    0x18069488
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_2_reg_addr                            "0xB8069488"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_2_reg                                 0xB8069488
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_2_inst_addr                           "0x006F"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_2_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_2_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_2_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_2_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_2_ch_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_2_ch_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_2_ch_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_2_get_ch_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_3                                    0x1806948C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_3_reg_addr                            "0xB806948C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_3_reg                                 0xB806948C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_3_inst_addr                           "0x0070"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_3_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_3_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_3_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_3_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_3_ch_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_3_ch_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_3_ch_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_3_get_ch_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_4                                    0x18069490
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_4_reg_addr                            "0xB8069490"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_4_reg                                 0xB8069490
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_4_inst_addr                           "0x0071"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_4_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_4_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_4_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_4_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_4_ch_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_4_ch_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_4_ch_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_4_get_ch_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_5                                    0x18069494
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_5_reg_addr                            "0xB8069494"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_5_reg                                 0xB8069494
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_5_inst_addr                           "0x0072"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_5_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_5_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_5_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_5_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_5_ch_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_5_ch_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_5_ch_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_5_get_ch_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_6                                    0x18069498
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_6_reg_addr                            "0xB8069498"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_6_reg                                 0xB8069498
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_6_inst_addr                           "0x0073"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_6_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_6_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_6_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_6_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_6_ch_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_6_ch_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_6_ch_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_6_get_ch_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_7                                    0x1806949C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_7_reg_addr                            "0xB806949C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_7_reg                                 0xB806949C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_7_inst_addr                           "0x0074"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_7_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_7_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_7_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_7_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_7_ch_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_7_ch_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_7_ch_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_7_get_ch_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_8                                    0x180694A0
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_8_reg_addr                            "0xB80694A0"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_8_reg                                 0xB80694A0
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_8_inst_addr                           "0x0075"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_8_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_8_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_8_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_8_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_8_ch_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_8_ch_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_8_ch_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_8_get_ch_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_9                                    0x180694A4
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_9_reg_addr                            "0xB80694A4"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_9_reg                                 0xB80694A4
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_9_inst_addr                           "0x0076"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_9_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_9_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_9_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_9_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_9_ch_dat_end_adr_shift                (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_9_ch_dat_end_adr_mask                 (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_9_ch_dat_end_adr(data)                (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_9_get_ch_dat_end_adr(data)            ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_10                                   0x180694A8
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_10_reg_addr                           "0xB80694A8"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_10_reg                                0xB80694A8
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_10_inst_addr                          "0x0077"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_10_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_10_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_10_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_10_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_10_ch_dat_end_adr_shift               (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_10_ch_dat_end_adr_mask                (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_10_ch_dat_end_adr(data)               (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_10_get_ch_dat_end_adr(data)           ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_11                                   0x180694AC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_11_reg_addr                           "0xB80694AC"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_11_reg                                0xB80694AC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_11_inst_addr                          "0x0078"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_11_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_11_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_11_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_11_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_11_ch_dat_end_adr_shift               (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_11_ch_dat_end_adr_mask                (0xFFFFFFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_11_ch_dat_end_adr(data)               (0xFFFFFFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_2_11_get_ch_dat_end_adr(data)           ((0xFFFFFFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_0                                    0x180694C0
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_0_reg_addr                            "0xB80694C0"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_0_reg                                 0xB80694C0
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_0_inst_addr                           "0x0079"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_0_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_0_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_0_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_0_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_0_ch_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_0_ch_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_0_ch_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_0_get_ch_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_1                                    0x180694C4
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_1_reg_addr                            "0xB80694C4"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_1_reg                                 0xB80694C4
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_1_inst_addr                           "0x007A"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_1_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_1_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_1_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_1_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_1_ch_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_1_ch_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_1_ch_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_1_get_ch_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_2                                    0x180694C8
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_2_reg_addr                            "0xB80694C8"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_2_reg                                 0xB80694C8
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_2_inst_addr                           "0x007B"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_2_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_2_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_2_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_2_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_2_ch_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_2_ch_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_2_ch_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_2_get_ch_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_3                                    0x180694CC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_3_reg_addr                            "0xB80694CC"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_3_reg                                 0xB80694CC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_3_inst_addr                           "0x007C"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_3_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_3_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_3_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_3_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_3_ch_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_3_ch_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_3_ch_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_3_get_ch_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_4                                    0x180694D0
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_4_reg_addr                            "0xB80694D0"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_4_reg                                 0xB80694D0
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_4_inst_addr                           "0x007D"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_4_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_4_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_4_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_4_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_4_ch_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_4_ch_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_4_ch_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_4_get_ch_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_5                                    0x180694D4
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_5_reg_addr                            "0xB80694D4"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_5_reg                                 0xB80694D4
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_5_inst_addr                           "0x007E"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_5_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_5_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_5_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_5_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_5_ch_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_5_ch_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_5_ch_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_5_get_ch_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_6                                    0x180694D8
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_6_reg_addr                            "0xB80694D8"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_6_reg                                 0xB80694D8
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_6_inst_addr                           "0x007F"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_6_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_6_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_6_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_6_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_6_ch_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_6_ch_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_6_ch_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_6_get_ch_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_7                                    0x180694DC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_7_reg_addr                            "0xB80694DC"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_7_reg                                 0xB80694DC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_7_inst_addr                           "0x0080"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_7_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_7_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_7_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_7_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_7_ch_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_7_ch_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_7_ch_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_7_get_ch_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_8                                    0x180694E0
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_8_reg_addr                            "0xB80694E0"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_8_reg                                 0xB80694E0
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_8_inst_addr                           "0x0081"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_8_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_8_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_8_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_8_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_8_ch_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_8_ch_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_8_ch_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_8_get_ch_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_9                                    0x180694E4
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_9_reg_addr                            "0xB80694E4"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_9_reg                                 0xB80694E4
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_9_inst_addr                           "0x0082"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_9_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_9_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_9_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_9_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_9_ch_dat_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_9_ch_dat_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_9_ch_dat_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_9_get_ch_dat_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_10                                   0x180694E8
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_10_reg_addr                           "0xB80694E8"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_10_reg                                0xB80694E8
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_10_inst_addr                          "0x0083"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_10_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_10_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_10_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_10_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_10_ch_dat_pitch_shift                 (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_10_ch_dat_pitch_mask                  (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_10_ch_dat_pitch(data)                 (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_10_get_ch_dat_pitch(data)             ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_11                                   0x180694EC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_11_reg_addr                           "0xB80694EC"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_11_reg                                0xB80694EC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_11_inst_addr                          "0x0084"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_11_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_11_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_11_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_11_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_11_ch_dat_pitch_shift                 (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_11_ch_dat_pitch_mask                  (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_11_ch_dat_pitch(data)                 (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_3_11_get_ch_dat_pitch(data)             ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_0                                    0x18069500
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_0_reg_addr                            "0xB8069500"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_0_reg                                 0xB8069500
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_0_inst_addr                           "0x0085"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_0_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_0_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_0_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_0_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_0_ch_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_0_ch_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_0_ch_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_0_get_ch_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_1                                    0x18069504
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_1_reg_addr                            "0xB8069504"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_1_reg                                 0xB8069504
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_1_inst_addr                           "0x0086"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_1_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_1_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_1_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_1_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_1_ch_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_1_ch_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_1_ch_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_1_get_ch_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_2                                    0x18069508
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_2_reg_addr                            "0xB8069508"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_2_reg                                 0xB8069508
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_2_inst_addr                           "0x0087"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_2_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_2_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_2_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_2_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_2_ch_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_2_ch_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_2_ch_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_2_get_ch_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_3                                    0x1806950C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_3_reg_addr                            "0xB806950C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_3_reg                                 0xB806950C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_3_inst_addr                           "0x0088"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_3_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_3_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_3_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_3_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_3_ch_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_3_ch_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_3_ch_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_3_get_ch_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_4                                    0x18069510
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_4_reg_addr                            "0xB8069510"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_4_reg                                 0xB8069510
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_4_inst_addr                           "0x0089"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_4_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_4_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_4_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_4_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_4_ch_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_4_ch_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_4_ch_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_4_get_ch_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_5                                    0x18069514
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_5_reg_addr                            "0xB8069514"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_5_reg                                 0xB8069514
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_5_inst_addr                           "0x008A"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_5_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_5_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_5_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_5_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_5_ch_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_5_ch_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_5_ch_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_5_get_ch_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_6                                    0x18069518
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_6_reg_addr                            "0xB8069518"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_6_reg                                 0xB8069518
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_6_inst_addr                           "0x008B"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_6_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_6_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_6_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_6_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_6_ch_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_6_ch_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_6_ch_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_6_get_ch_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_7                                    0x1806951C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_7_reg_addr                            "0xB806951C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_7_reg                                 0xB806951C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_7_inst_addr                           "0x008C"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_7_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_7_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_7_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_7_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_7_ch_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_7_ch_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_7_ch_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_7_get_ch_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_8                                    0x18069520
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_8_reg_addr                            "0xB8069520"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_8_reg                                 0xB8069520
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_8_inst_addr                           "0x008D"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_8_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_8_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_8_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_8_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_8_ch_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_8_ch_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_8_ch_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_8_get_ch_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_9                                    0x18069524
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_9_reg_addr                            "0xB8069524"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_9_reg                                 0xB8069524
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_9_inst_addr                           "0x008E"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_9_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_9_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_9_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_9_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_9_ch_cmp_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_9_ch_cmp_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_9_ch_cmp_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_9_get_ch_cmp_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_10                                   0x18069528
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_10_reg_addr                           "0xB8069528"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_10_reg                                0xB8069528
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_10_inst_addr                          "0x008F"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_10_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_10_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_10_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_10_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_10_ch_cmp_pitch_shift                 (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_10_ch_cmp_pitch_mask                  (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_10_ch_cmp_pitch(data)                 (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_10_get_ch_cmp_pitch(data)             ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_11                                   0x1806952C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_11_reg_addr                           "0xB806952C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_11_reg                                0xB806952C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_11_inst_addr                          "0x0090"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_11_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_11_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_11_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_11_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_11_ch_cmp_pitch_shift                 (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_11_ch_cmp_pitch_mask                  (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_11_ch_cmp_pitch(data)                 (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_4_11_get_ch_cmp_pitch(data)             ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_0                                    0x18069540
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_0_reg_addr                            "0xB8069540"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_0_reg                                 0xB8069540
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_0_inst_addr                           "0x0091"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_0_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_0_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_0_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_0_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_0_ch_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_0_ch_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_0_ch_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_0_get_ch_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_1                                    0x18069544
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_1_reg_addr                            "0xB8069544"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_1_reg                                 0xB8069544
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_1_inst_addr                           "0x0092"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_1_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_1_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_1_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_1_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_1_ch_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_1_ch_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_1_ch_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_1_get_ch_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_2                                    0x18069548
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_2_reg_addr                            "0xB8069548"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_2_reg                                 0xB8069548
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_2_inst_addr                           "0x0093"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_2_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_2_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_2_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_2_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_2_ch_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_2_ch_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_2_ch_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_2_get_ch_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_3                                    0x1806954C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_3_reg_addr                            "0xB806954C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_3_reg                                 0xB806954C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_3_inst_addr                           "0x0094"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_3_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_3_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_3_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_3_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_3_ch_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_3_ch_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_3_ch_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_3_get_ch_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_4                                    0x18069550
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_4_reg_addr                            "0xB8069550"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_4_reg                                 0xB8069550
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_4_inst_addr                           "0x0095"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_4_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_4_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_4_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_4_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_4_ch_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_4_ch_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_4_ch_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_4_get_ch_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_5                                    0x18069554
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_5_reg_addr                            "0xB8069554"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_5_reg                                 0xB8069554
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_5_inst_addr                           "0x0096"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_5_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_5_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_5_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_5_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_5_ch_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_5_ch_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_5_ch_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_5_get_ch_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_6                                    0x18069558
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_6_reg_addr                            "0xB8069558"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_6_reg                                 0xB8069558
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_6_inst_addr                           "0x0097"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_6_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_6_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_6_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_6_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_6_ch_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_6_ch_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_6_ch_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_6_get_ch_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_7                                    0x1806955C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_7_reg_addr                            "0xB806955C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_7_reg                                 0xB806955C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_7_inst_addr                           "0x0098"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_7_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_7_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_7_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_7_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_7_ch_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_7_ch_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_7_ch_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_7_get_ch_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_8                                    0x18069560
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_8_reg_addr                            "0xB8069560"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_8_reg                                 0xB8069560
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_8_inst_addr                           "0x0099"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_8_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_8_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_8_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_8_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_8_ch_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_8_ch_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_8_ch_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_8_get_ch_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_9                                    0x18069564
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_9_reg_addr                            "0xB8069564"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_9_reg                                 0xB8069564
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_9_inst_addr                           "0x009A"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_9_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_9_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_9_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_9_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_9_ch_mem_pitch_shift                  (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_9_ch_mem_pitch_mask                   (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_9_ch_mem_pitch(data)                  (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_9_get_ch_mem_pitch(data)              ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_10                                   0x18069568
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_10_reg_addr                           "0xB8069568"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_10_reg                                0xB8069568
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_10_inst_addr                          "0x009B"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_10_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_10_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_10_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_10_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_10_ch_mem_pitch_shift                 (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_10_ch_mem_pitch_mask                  (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_10_ch_mem_pitch(data)                 (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_10_get_ch_mem_pitch(data)             ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_11                                   0x1806956C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_11_reg_addr                           "0xB806956C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_11_reg                                0xB806956C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_11_inst_addr                          "0x009C"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_11_reg(data)                      (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_11_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_11_reg                            (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_11_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_11_ch_mem_pitch_shift                 (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_11_ch_mem_pitch_mask                  (0x0000FFF0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_11_ch_mem_pitch(data)                 (0x0000FFF0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_ch_5_11_get_ch_mem_pitch(data)             ((0x0000FFF0&(data))>>4)

#define  GPU_REF_DECMP_WRAP_GPU_decmp_status                                    0x18069800
#define  GPU_REF_DECMP_WRAP_GPU_decmp_status_reg_addr                            "0xB8069800"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_status_reg                                 0xB8069800
#define  GPU_REF_DECMP_WRAP_GPU_decmp_status_inst_addr                           "0x009D"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_status_reg(data)                       (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_status_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_status_reg                             (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_status_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_status_decomp_core_errflag_clr_shift       (31)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_status_decomp_core_flag2irq_en_shift       (8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_status_decomp_core_errflag_ro_shift        (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_status_decomp_core_errflag_clr_mask        (0x80000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_status_decomp_core_flag2irq_en_mask        (0x0000FF00)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_status_decomp_core_errflag_ro_mask         (0x000000FF)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_status_decomp_core_errflag_clr(data)       (0x80000000&((data)<<31))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_status_decomp_core_flag2irq_en(data)       (0x0000FF00&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_status_decomp_core_errflag_ro(data)        (0x000000FF&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_status_get_decomp_core_errflag_clr(data)   ((0x80000000&(data))>>31)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_status_get_decomp_core_flag2irq_en(data)   ((0x0000FF00&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_status_get_decomp_core_errflag_ro(data)    (0x000000FF&(data))

#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_0                                      0x18069900
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_0_reg_addr                              "0xB8069900"
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_0_reg                                   0xB8069900
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_0_inst_addr                             "0x009E"
#define  set_GPU_REF_DECMP_WRAP_GPU_wrap_mon_0_reg(data)                         (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_0_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_wrap_mon_0_reg                               (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_0_reg))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_0_wrap_mon_go_shift                     (0)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_0_wrap_mon_go_mask                      (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_0_wrap_mon_go(data)                     (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_0_get_wrap_mon_go(data)                 (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_1                                      0x18069904
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_1_reg_addr                              "0xB8069904"
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_1_reg                                   0xB8069904
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_1_inst_addr                             "0x009F"
#define  set_GPU_REF_DECMP_WRAP_GPU_wrap_mon_1_reg(data)                         (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_1_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_wrap_mon_1_reg                               (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_1_reg))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_1_total_dat_cnt_shift                   (0)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_1_total_dat_cnt_mask                    (0x00FFFFFF)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_1_total_dat_cnt(data)                   (0x00FFFFFF&(data))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_1_get_total_dat_cnt(data)               (0x00FFFFFF&(data))

#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_2                                      0x18069908
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_2_reg_addr                              "0xB8069908"
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_2_reg                                   0xB8069908
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_2_inst_addr                             "0x00A0"
#define  set_GPU_REF_DECMP_WRAP_GPU_wrap_mon_2_reg(data)                         (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_2_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_wrap_mon_2_reg                               (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_2_reg))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_2_bypass_dat_cnt_shift                  (0)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_2_bypass_dat_cnt_mask                   (0x00FFFFFF)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_2_bypass_dat_cnt(data)                  (0x00FFFFFF&(data))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_2_get_bypass_dat_cnt(data)              (0x00FFFFFF&(data))

#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_3                                      0x1806990C
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_3_reg_addr                              "0xB806990C"
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_3_reg                                   0xB806990C
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_3_inst_addr                             "0x00A1"
#define  set_GPU_REF_DECMP_WRAP_GPU_wrap_mon_3_reg(data)                         (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_3_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_wrap_mon_3_reg                               (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_3_reg))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_3_hit_dat_cnt_shift                     (0)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_3_hit_dat_cnt_mask                      (0x00FFFFFF)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_3_hit_dat_cnt(data)                     (0x00FFFFFF&(data))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_3_get_hit_dat_cnt(data)                 (0x00FFFFFF&(data))

#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_4                                      0x18069910
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_4_reg_addr                              "0xB8069910"
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_4_reg                                   0xB8069910
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_4_inst_addr                             "0x00A2"
#define  set_GPU_REF_DECMP_WRAP_GPU_wrap_mon_4_reg(data)                         (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_4_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_wrap_mon_4_reg                               (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_4_reg))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_4_total_hdr_cnt_shift                   (0)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_4_total_hdr_cnt_mask                    (0x00FFFFFF)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_4_total_hdr_cnt(data)                   (0x00FFFFFF&(data))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_4_get_total_hdr_cnt(data)               (0x00FFFFFF&(data))

#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_5                                      0x18069914
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_5_reg_addr                              "0xB8069914"
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_5_reg                                   0xB8069914
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_5_inst_addr                             "0x00A3"
#define  set_GPU_REF_DECMP_WRAP_GPU_wrap_mon_5_reg(data)                         (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_5_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_wrap_mon_5_reg                               (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_5_reg))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_5_hit_hdr_cnt_shift                     (0)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_5_hit_hdr_cnt_mask                      (0x00FFFFFF)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_5_hit_hdr_cnt(data)                     (0x00FFFFFF&(data))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_5_get_hit_hdr_cnt(data)                 (0x00FFFFFF&(data))

#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_6                                      0x18069918
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_6_reg_addr                              "0xB8069918"
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_6_reg                                   0xB8069918
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_6_inst_addr                             "0x00A4"
#define  set_GPU_REF_DECMP_WRAP_GPU_wrap_mon_6_reg(data)                         (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_6_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_wrap_mon_6_reg                               (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_6_reg))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_6_cmp_hdr_cnt_shift                     (0)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_6_cmp_hdr_cnt_mask                      (0x00FFFFFF)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_6_cmp_hdr_cnt(data)                     (0x00FFFFFF&(data))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_6_get_cmp_hdr_cnt(data)                 (0x00FFFFFF&(data))

#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_7                                      0x1806991C
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_7_reg_addr                              "0xB806991C"
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_7_reg                                   0xB806991C
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_7_inst_addr                             "0x00A5"
#define  set_GPU_REF_DECMP_WRAP_GPU_wrap_mon_7_reg(data)                         (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_7_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_wrap_mon_7_reg                               (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_7_reg))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_7_cmp_dat_cnt_shift                     (0)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_7_cmp_dat_cnt_mask                      (0x00FFFFFF)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_7_cmp_dat_cnt(data)                     (0x00FFFFFF&(data))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_7_get_cmp_dat_cnt(data)                 (0x00FFFFFF&(data))

#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_8                                      0x18069920
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_8_reg_addr                              "0xB8069920"
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_8_reg                                   0xB8069920
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_8_inst_addr                             "0x00A6"
#define  set_GPU_REF_DECMP_WRAP_GPU_wrap_mon_8_reg(data)                         (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_8_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_wrap_mon_8_reg                               (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_mon_8_reg))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_8_max_cmd_latency_shift                 (0)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_8_max_cmd_latency_mask                  (0x000FFFFF)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_8_max_cmd_latency(data)                 (0x000FFFFF&(data))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_mon_8_get_max_cmd_latency(data)             (0x000FFFFF&(data))

#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0                               0x18069A00
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_reg_addr                       "0xB8069A00"
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_reg                            0xB8069A00
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_inst_addr                      "0x00A7"
#define  set_GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_reg(data)                  (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_reg                        (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_reg))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_int_status_clr_shift           (31)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_max_lvl_reorder_fifo_shift     (8)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_cur_lvl_reorder_fifo_shift     (0)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_int_status_clr_mask            (0x80000000)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_max_lvl_reorder_fifo_mask      (0x0000FF00)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_cur_lvl_reorder_fifo_mask      (0x000000FF)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_int_status_clr(data)           (0x80000000&((data)<<31))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_max_lvl_reorder_fifo(data)     (0x0000FF00&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_cur_lvl_reorder_fifo(data)     (0x000000FF&(data))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_get_int_status_clr(data)       ((0x80000000&(data))>>31)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_get_max_lvl_reorder_fifo(data) ((0x0000FF00&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_0_get_cur_lvl_reorder_fifo(data) (0x000000FF&(data))

#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_1                               0x18069A04
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_1_reg_addr                       "0xB8069A04"
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_1_reg                            0xB8069A04
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_1_inst_addr                      "0x00A8"
#define  set_GPU_REF_DECMP_WRAP_GPU_wrap_int_status_1_reg(data)                  (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_int_status_1_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_wrap_int_status_1_reg                        (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_int_status_1_reg))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_1_unfinished_byps_rcmd_shift     (8)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_1_unfinished_rcmd_shift          (0)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_1_unfinished_byps_rcmd_mask      (0x0000FF00)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_1_unfinished_rcmd_mask           (0x000000FF)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_1_unfinished_byps_rcmd(data)     (0x0000FF00&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_1_unfinished_rcmd(data)          (0x000000FF&(data))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_1_get_unfinished_byps_rcmd(data) ((0x0000FF00&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_1_get_unfinished_rcmd(data)      (0x000000FF&(data))

#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_2                               0x18069A08
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_2_reg_addr                       "0xB8069A08"
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_2_reg                            0xB8069A08
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_2_inst_addr                      "0x00A9"
#define  set_GPU_REF_DECMP_WRAP_GPU_wrap_int_status_2_reg(data)                  (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_int_status_2_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_wrap_int_status_2_reg                        (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_wrap_int_status_2_reg))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_2_max_lvl_rcmd_to_decmp_shift    (8)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_2_unfinished_rcmd_to_decmp_shift (0)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_2_max_lvl_rcmd_to_decmp_mask     (0x0000FF00)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_2_unfinished_rcmd_to_decmp_mask  (0x000000FF)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_2_max_lvl_rcmd_to_decmp(data)    (0x0000FF00&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_2_unfinished_rcmd_to_decmp(data) (0x000000FF&(data))
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_2_get_max_lvl_rcmd_to_decmp(data) ((0x0000FF00&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_wrap_int_status_2_get_unfinished_rcmd_to_decmp(data) (0x000000FF&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status                               0x18069B00
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_reg_addr                       "0xB8069B00"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_reg                            0xB8069B00
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_inst_addr                      "0x00AA"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_reg(data)                  (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_reg                        (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_gdp_rcmd_fifo_space_margin_shift (28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_gdp_byps_fifo_space_margin_shift (24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_cti_overflow_shift             (11)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_cmd_num_in_cti_shift           (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_cti_queue_flush_shift          (3)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_cti_req_mask_shift             (2)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_cti_space_margin_shift         (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_gdp_rcmd_fifo_space_margin_mask (0x30000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_gdp_byps_fifo_space_margin_mask (0x03000000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_cti_overflow_mask              (0x00000800)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_cmd_num_in_cti_mask            (0x000001F0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_cti_queue_flush_mask           (0x00000008)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_cti_req_mask_mask              (0x00000004)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_cti_space_margin_mask          (0x00000003)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_gdp_rcmd_fifo_space_margin(data) (0x30000000&((data)<<28))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_gdp_byps_fifo_space_margin(data) (0x03000000&((data)<<24))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_cti_overflow(data)             (0x00000800&((data)<<11))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_cmd_num_in_cti(data)           (0x000001F0&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_cti_queue_flush(data)          (0x00000008&((data)<<3))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_cti_req_mask(data)             (0x00000004&((data)<<2))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_cti_space_margin(data)         (0x00000003&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_get_gdp_rcmd_fifo_space_margin(data) ((0x30000000&(data))>>28)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_get_gdp_byps_fifo_space_margin(data) ((0x03000000&(data))>>24)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_get_cti_overflow(data)         ((0x00000800&(data))>>11)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_get_cmd_num_in_cti(data)       ((0x000001F0&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_get_cti_queue_flush(data)      ((0x00000008&(data))>>3)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_get_cti_req_mask(data)         ((0x00000004&(data))>>2)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_fifo_status_get_cti_space_margin(data)     (0x00000003&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL                                 0x18069C00
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_reg_addr                         "0xB8069C00"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_reg                              0xB8069C00
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_inst_addr                        "0x00AB"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_reg(data)                    (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_reg                          (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_gdp_test1_shift                  (16)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_gdp_testrwm_shift                (12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_gdp_rm_shift                     (8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_gdp_rme_shift                    (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_gdp_ls_shift                     (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_gdp_test1_mask                   (0x00010000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_gdp_testrwm_mask                 (0x00001000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_gdp_rm_mask                      (0x00000F00)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_gdp_rme_mask                     (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_gdp_ls_mask                      (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_gdp_test1(data)                  (0x00010000&((data)<<16))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_gdp_testrwm(data)                (0x00001000&((data)<<12))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_gdp_rm(data)                     (0x00000F00&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_gdp_rme(data)                    (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_gdp_ls(data)                     (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_get_gdp_test1(data)              ((0x00010000&(data))>>16)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_get_gdp_testrwm(data)            ((0x00001000&(data))>>12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_get_gdp_rm(data)                 ((0x00000F00&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_get_gdp_rme(data)                ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_SRAM_CTRL_get_gdp_ls(data)                 (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_CTRL                                 0x18069C04
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_CTRL_reg_addr                         "0xB8069C04"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_CTRL_reg                              0xB8069C04
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_CTRL_inst_addr                        "0x00AC"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_BIST_CTRL_reg(data)                    (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_BIST_CTRL_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_BIST_CTRL_reg                          (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_BIST_CTRL_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_CTRL_gdp_bist_done_shift              (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_CTRL_gdp_bist_mode_shift              (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_CTRL_gdp_bist_done_mask               (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_CTRL_gdp_bist_mode_mask               (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_CTRL_gdp_bist_done(data)              (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_CTRL_gdp_bist_mode(data)              (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_CTRL_get_gdp_bist_done(data)          ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_CTRL_get_gdp_bist_mode(data)          (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL                                 0x18069C08
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_reg_addr                         "0xB8069C08"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_reg                              0xB8069C08
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_inst_addr                        "0x00AD"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_reg(data)                    (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_reg                          (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_gdp_bist_fail_3_shift            (7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_gdp_bist_fail_2_shift            (6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_gdp_bist_fail_1_shift            (5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_gdp_bist_fail_0_shift            (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_gdp_bist_fail_grp_shift          (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_gdp_bist_fail_3_mask             (0x00000080)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_gdp_bist_fail_2_mask             (0x00000040)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_gdp_bist_fail_1_mask             (0x00000020)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_gdp_bist_fail_0_mask             (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_gdp_bist_fail_grp_mask           (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_gdp_bist_fail_3(data)            (0x00000080&((data)<<7))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_gdp_bist_fail_2(data)            (0x00000040&((data)<<6))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_gdp_bist_fail_1(data)            (0x00000020&((data)<<5))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_gdp_bist_fail_0(data)            (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_gdp_bist_fail_grp(data)          (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_get_gdp_bist_fail_3(data)        ((0x00000080&(data))>>7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_get_gdp_bist_fail_2(data)        ((0x00000040&(data))>>6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_get_gdp_bist_fail_1(data)        ((0x00000020&(data))>>5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_get_gdp_bist_fail_0(data)        ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_BIST_FAIL_get_gdp_bist_fail_grp(data)      (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL                                  0x18069C0C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_reg_addr                          "0xB8069C0C"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_reg                               0xB8069C0C
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_inst_addr                         "0x00AE"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_reg(data)                     (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_reg                           (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_gdp_drf_done_shift                (12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_gdp_drf_pause_shift               (8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_gdp_drf_resume_shift              (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_gdp_drf_mode_shift                (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_gdp_drf_done_mask                 (0x00001000)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_gdp_drf_pause_mask                (0x00000100)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_gdp_drf_resume_mask               (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_gdp_drf_mode_mask                 (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_gdp_drf_done(data)                (0x00001000&((data)<<12))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_gdp_drf_pause(data)               (0x00000100&((data)<<8))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_gdp_drf_resume(data)              (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_gdp_drf_mode(data)                (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_get_gdp_drf_done(data)            ((0x00001000&(data))>>12)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_get_gdp_drf_pause(data)           ((0x00000100&(data))>>8)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_get_gdp_drf_resume(data)          ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_CTRL_get_gdp_drf_mode(data)            (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL                                  0x18069C10
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_reg_addr                          "0xB8069C10"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_reg                               0xB8069C10
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_inst_addr                         "0x00AF"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_reg(data)                     (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_reg                           (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_gdp_drf_fail_3_shift              (7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_gdp_drf_fail_2_shift              (6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_gdp_drf_fail_1_shift              (5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_gdp_drf_fail_0_shift              (4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_gdp_drf_fail_grp_shift            (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_gdp_drf_fail_3_mask               (0x00000080)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_gdp_drf_fail_2_mask               (0x00000040)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_gdp_drf_fail_1_mask               (0x00000020)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_gdp_drf_fail_0_mask               (0x00000010)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_gdp_drf_fail_grp_mask             (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_gdp_drf_fail_3(data)              (0x00000080&((data)<<7))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_gdp_drf_fail_2(data)              (0x00000040&((data)<<6))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_gdp_drf_fail_1(data)              (0x00000020&((data)<<5))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_gdp_drf_fail_0(data)              (0x00000010&((data)<<4))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_gdp_drf_fail_grp(data)            (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_get_gdp_drf_fail_3(data)          ((0x00000080&(data))>>7)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_get_gdp_drf_fail_2(data)          ((0x00000040&(data))>>6)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_get_gdp_drf_fail_1(data)          ((0x00000020&(data))>>5)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_get_gdp_drf_fail_0(data)          ((0x00000010&(data))>>4)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_DRF_FAIL_get_gdp_drf_fail_grp(data)        (0x00000001&(data))

#define  GPU_REF_DECMP_WRAP_GPU_decmp_dummy                                     0x18069FFC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_dummy_reg_addr                             "0xB8069FFC"
#define  GPU_REF_DECMP_WRAP_GPU_decmp_dummy_reg                                  0xB8069FFC
#define  GPU_REF_DECMP_WRAP_GPU_decmp_dummy_inst_addr                            "0x00B0"
#define  set_GPU_REF_DECMP_WRAP_GPU_decmp_dummy_reg(data)                        (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_dummy_reg)=data)
#define  get_GPU_REF_DECMP_WRAP_GPU_decmp_dummy_reg                              (*((volatile unsigned int*)GPU_REF_DECMP_WRAP_GPU_decmp_dummy_reg))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_dummy_dummy_0_shift                        (0)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_dummy_dummy_0_mask                         (0x00000001)
#define  GPU_REF_DECMP_WRAP_GPU_decmp_dummy_dummy_0(data)                        (0x00000001&(data))
#define  GPU_REF_DECMP_WRAP_GPU_decmp_dummy_get_dummy_0(data)                    (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======GPU_REF_DECMP_WRAP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18069000_31:1;
        RBus_UInt32  out_fifo_ext_dis:1;
        RBus_UInt32  cache_q1_dis:1;
        RBus_UInt32  cmd_inorder:1;
        RBus_UInt32  res1:23;
        RBus_UInt32  decomp_core_rst:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  decomp_sel:2;
    };
}gpu_ref_decmp_wrap_gpu_decmp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  decomp_qlvl_c:1;
        RBus_UInt32  decomp_qlvl_y:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  decomp_bpp:2;
        RBus_UInt32  res3:3;
        RBus_UInt32  pic_width_div_16:9;
        RBus_UInt32  hdr_remap:2;
        RBus_UInt32  bypass_en:1;
        RBus_UInt32  lossy_en:1;
        RBus_UInt32  bl_err:1;
        RBus_UInt32  cross_err:1;
        RBus_UInt32  chg_err:1;
        RBus_UInt32  busy:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  cache_dis:1;
        RBus_UInt32  enable:1;
    };
}gpu_ref_decmp_wrap_gpu_decmp_region_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lu_hdr_sta_adr:28;
        RBus_UInt32  res1:4;
    };
}gpu_ref_decmp_wrap_gpu_decmp_lu_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lu_dat_sta_adr:28;
        RBus_UInt32  res1:4;
    };
}gpu_ref_decmp_wrap_gpu_decmp_lu_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lu_dat_end_adr:28;
        RBus_UInt32  res1:4;
    };
}gpu_ref_decmp_wrap_gpu_decmp_lu_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  lu_dat_pitch:12;
        RBus_UInt32  res2:4;
    };
}gpu_ref_decmp_wrap_gpu_decmp_lu_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  lu_cmp_pitch:12;
        RBus_UInt32  res2:4;
    };
}gpu_ref_decmp_wrap_gpu_decmp_lu_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  lu_mem_pitch:12;
        RBus_UInt32  res2:4;
    };
}gpu_ref_decmp_wrap_gpu_decmp_lu_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_hdr_sta_adr:28;
        RBus_UInt32  res1:4;
    };
}gpu_ref_decmp_wrap_gpu_decmp_ch_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_dat_sta_adr:28;
        RBus_UInt32  res1:4;
    };
}gpu_ref_decmp_wrap_gpu_decmp_ch_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_dat_end_adr:28;
        RBus_UInt32  res1:4;
    };
}gpu_ref_decmp_wrap_gpu_decmp_ch_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ch_dat_pitch:12;
        RBus_UInt32  res2:4;
    };
}gpu_ref_decmp_wrap_gpu_decmp_ch_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ch_cmp_pitch:12;
        RBus_UInt32  res2:4;
    };
}gpu_ref_decmp_wrap_gpu_decmp_ch_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ch_mem_pitch:12;
        RBus_UInt32  res2:4;
    };
}gpu_ref_decmp_wrap_gpu_decmp_ch_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_core_errflag_clr:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  decomp_core_flag2irq_en:8;
        RBus_UInt32  decomp_core_errflag_ro:8;
    };
}gpu_ref_decmp_wrap_gpu_decmp_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  wrap_mon_go:1;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  total_dat_cnt:24;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  bypass_dat_cnt:24;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  hit_dat_cnt:24;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  total_hdr_cnt:24;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  hit_hdr_cnt:24;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmp_hdr_cnt:24;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmp_dat_cnt:24;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  max_cmd_latency:20;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int_status_clr:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  max_lvl_reorder_fifo:8;
        RBus_UInt32  cur_lvl_reorder_fifo:8;
    };
}gpu_ref_decmp_wrap_gpu_wrap_int_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  unfinished_byps_rcmd:8;
        RBus_UInt32  unfinished_rcmd:8;
    };
}gpu_ref_decmp_wrap_gpu_wrap_int_status_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  max_lvl_rcmd_to_decmp:8;
        RBus_UInt32  unfinished_rcmd_to_decmp:8;
    };
}gpu_ref_decmp_wrap_gpu_wrap_int_status_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  gdp_rcmd_fifo_space_margin:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  gdp_byps_fifo_space_margin:2;
        RBus_UInt32  res3:12;
        RBus_UInt32  cti_overflow:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  cmd_num_in_cti:5;
        RBus_UInt32  cti_queue_flush:1;
        RBus_UInt32  cti_req_mask:1;
        RBus_UInt32  cti_space_margin:2;
    };
}gpu_ref_decmp_wrap_gpu_decmp_fifo_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  gdp_test1:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  gdp_testrwm:1;
        RBus_UInt32  gdp_rm:4;
        RBus_UInt32  res3:3;
        RBus_UInt32  gdp_rme:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  gdp_ls:1;
    };
}gpu_ref_decmp_wrap_gpu_decmp_sram_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  gdp_bist_done:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  gdp_bist_mode:1;
    };
}gpu_ref_decmp_wrap_gpu_decmp_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  gdp_bist_fail_3:1;
        RBus_UInt32  gdp_bist_fail_2:1;
        RBus_UInt32  gdp_bist_fail_1:1;
        RBus_UInt32  gdp_bist_fail_0:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  gdp_bist_fail_grp:1;
    };
}gpu_ref_decmp_wrap_gpu_decmp_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  gdp_drf_done:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  gdp_drf_pause:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  gdp_drf_resume:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  gdp_drf_mode:1;
    };
}gpu_ref_decmp_wrap_gpu_decmp_drf_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  gdp_drf_fail_3:1;
        RBus_UInt32  gdp_drf_fail_2:1;
        RBus_UInt32  gdp_drf_fail_1:1;
        RBus_UInt32  gdp_drf_fail_0:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  gdp_drf_fail_grp:1;
    };
}gpu_ref_decmp_wrap_gpu_decmp_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  dummy18069ffc_0:1;
    };
}gpu_ref_decmp_wrap_gpu_decmp_dummy_RBUS;

#else //apply LITTLE_ENDIAN

//======GPU_REF_DECMP_WRAP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  decomp_core_rst:1;
        RBus_UInt32  res2:23;
        RBus_UInt32  cmd_inorder:1;
        RBus_UInt32  cache_q1_dis:1;
        RBus_UInt32  out_fifo_ext_dis:1;
        RBus_UInt32  dummy18069000_31:1;
    };
}gpu_ref_decmp_wrap_gpu_decmp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  enable:1;
        RBus_UInt32  cache_dis:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  busy:1;
        RBus_UInt32  chg_err:1;
        RBus_UInt32  cross_err:1;
        RBus_UInt32  bl_err:1;
        RBus_UInt32  lossy_en:1;
        RBus_UInt32  bypass_en:1;
        RBus_UInt32  hdr_remap:2;
        RBus_UInt32  pic_width_div_16:9;
        RBus_UInt32  res2:3;
        RBus_UInt32  decomp_bpp:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  decomp_qlvl_y:2;
        RBus_UInt32  decomp_qlvl_c:1;
        RBus_UInt32  res4:1;
    };
}gpu_ref_decmp_wrap_gpu_decmp_region_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  lu_hdr_sta_adr:28;
    };
}gpu_ref_decmp_wrap_gpu_decmp_lu_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  lu_dat_sta_adr:28;
    };
}gpu_ref_decmp_wrap_gpu_decmp_lu_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  lu_dat_end_adr:28;
    };
}gpu_ref_decmp_wrap_gpu_decmp_lu_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  lu_dat_pitch:12;
        RBus_UInt32  res2:16;
    };
}gpu_ref_decmp_wrap_gpu_decmp_lu_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  lu_cmp_pitch:12;
        RBus_UInt32  res2:16;
    };
}gpu_ref_decmp_wrap_gpu_decmp_lu_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  lu_mem_pitch:12;
        RBus_UInt32  res2:16;
    };
}gpu_ref_decmp_wrap_gpu_decmp_lu_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ch_hdr_sta_adr:28;
    };
}gpu_ref_decmp_wrap_gpu_decmp_ch_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ch_dat_sta_adr:28;
    };
}gpu_ref_decmp_wrap_gpu_decmp_ch_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ch_dat_end_adr:28;
    };
}gpu_ref_decmp_wrap_gpu_decmp_ch_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ch_dat_pitch:12;
        RBus_UInt32  res2:16;
    };
}gpu_ref_decmp_wrap_gpu_decmp_ch_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ch_cmp_pitch:12;
        RBus_UInt32  res2:16;
    };
}gpu_ref_decmp_wrap_gpu_decmp_ch_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ch_mem_pitch:12;
        RBus_UInt32  res2:16;
    };
}gpu_ref_decmp_wrap_gpu_decmp_ch_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_core_errflag_ro:8;
        RBus_UInt32  decomp_core_flag2irq_en:8;
        RBus_UInt32  res1:15;
        RBus_UInt32  decomp_core_errflag_clr:1;
    };
}gpu_ref_decmp_wrap_gpu_decmp_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wrap_mon_go:1;
        RBus_UInt32  res1:31;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_dat_cnt:24;
        RBus_UInt32  res1:8;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bypass_dat_cnt:24;
        RBus_UInt32  res1:8;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hit_dat_cnt:24;
        RBus_UInt32  res1:8;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_hdr_cnt:24;
        RBus_UInt32  res1:8;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hit_hdr_cnt:24;
        RBus_UInt32  res1:8;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_hdr_cnt:24;
        RBus_UInt32  res1:8;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_dat_cnt:24;
        RBus_UInt32  res1:8;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_cmd_latency:20;
        RBus_UInt32  res1:12;
    };
}gpu_ref_decmp_wrap_gpu_wrap_mon_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cur_lvl_reorder_fifo:8;
        RBus_UInt32  max_lvl_reorder_fifo:8;
        RBus_UInt32  res1:15;
        RBus_UInt32  int_status_clr:1;
    };
}gpu_ref_decmp_wrap_gpu_wrap_int_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  unfinished_rcmd:8;
        RBus_UInt32  unfinished_byps_rcmd:8;
        RBus_UInt32  res1:16;
    };
}gpu_ref_decmp_wrap_gpu_wrap_int_status_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  unfinished_rcmd_to_decmp:8;
        RBus_UInt32  max_lvl_rcmd_to_decmp:8;
        RBus_UInt32  res1:16;
    };
}gpu_ref_decmp_wrap_gpu_wrap_int_status_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cti_space_margin:2;
        RBus_UInt32  cti_req_mask:1;
        RBus_UInt32  cti_queue_flush:1;
        RBus_UInt32  cmd_num_in_cti:5;
        RBus_UInt32  res1:2;
        RBus_UInt32  cti_overflow:1;
        RBus_UInt32  res2:12;
        RBus_UInt32  gdp_byps_fifo_space_margin:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  gdp_rcmd_fifo_space_margin:2;
        RBus_UInt32  res4:2;
    };
}gpu_ref_decmp_wrap_gpu_decmp_fifo_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdp_ls:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  gdp_rme:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  gdp_rm:4;
        RBus_UInt32  gdp_testrwm:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  gdp_test1:1;
        RBus_UInt32  res4:15;
    };
}gpu_ref_decmp_wrap_gpu_decmp_sram_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdp_bist_mode:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  gdp_bist_done:1;
        RBus_UInt32  res2:27;
    };
}gpu_ref_decmp_wrap_gpu_decmp_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdp_bist_fail_grp:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  gdp_bist_fail_0:1;
        RBus_UInt32  gdp_bist_fail_1:1;
        RBus_UInt32  gdp_bist_fail_2:1;
        RBus_UInt32  gdp_bist_fail_3:1;
        RBus_UInt32  res2:24;
    };
}gpu_ref_decmp_wrap_gpu_decmp_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdp_drf_mode:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  gdp_drf_resume:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  gdp_drf_pause:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  gdp_drf_done:1;
        RBus_UInt32  res4:19;
    };
}gpu_ref_decmp_wrap_gpu_decmp_drf_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdp_drf_fail_grp:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  gdp_drf_fail_0:1;
        RBus_UInt32  gdp_drf_fail_1:1;
        RBus_UInt32  gdp_drf_fail_2:1;
        RBus_UInt32  gdp_drf_fail_3:1;
        RBus_UInt32  res2:24;
    };
}gpu_ref_decmp_wrap_gpu_decmp_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18069ffc_0:1;
        RBus_UInt32  res1:31;
    };
}gpu_ref_decmp_wrap_gpu_decmp_dummy_RBUS;




#endif 


#endif 
