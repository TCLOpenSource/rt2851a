/**
* @file Mac7p-DesignSpec-D-Domain_PCID
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_PCID_REG_H_
#define _RBUS_PCID_REG_H_

#include "rbus_types.h"



//  PCID Register Address
#define  PCID_PCID_CTRL                                                         0x1802EF40
#define  PCID_PCID_CTRL_reg_addr                                                 "0xB802EF40"
#define  PCID_PCID_CTRL_reg                                                      0xB802EF40
#define  PCID_PCID_CTRL_inst_addr                                                "0x0000"
#define  set_PCID_PCID_CTRL_reg(data)                                            (*((volatile unsigned int*)PCID_PCID_CTRL_reg)=data)
#define  get_PCID_PCID_CTRL_reg                                                  (*((volatile unsigned int*)PCID_PCID_CTRL_reg))
#define  PCID_PCID_CTRL_dummy_31_2_shift                                         (2)
#define  PCID_PCID_CTRL_intp_bit_sel_shift                                       (1)
#define  PCID_PCID_CTRL_boundary_mode_shift                                      (0)
#define  PCID_PCID_CTRL_dummy_31_2_mask                                          (0xFFFFFFFC)
#define  PCID_PCID_CTRL_intp_bit_sel_mask                                        (0x00000002)
#define  PCID_PCID_CTRL_boundary_mode_mask                                       (0x00000001)
#define  PCID_PCID_CTRL_dummy_31_2(data)                                         (0xFFFFFFFC&((data)<<2))
#define  PCID_PCID_CTRL_intp_bit_sel(data)                                       (0x00000002&((data)<<1))
#define  PCID_PCID_CTRL_boundary_mode(data)                                      (0x00000001&(data))
#define  PCID_PCID_CTRL_get_dummy_31_2(data)                                     ((0xFFFFFFFC&(data))>>2)
#define  PCID_PCID_CTRL_get_intp_bit_sel(data)                                   ((0x00000002&(data))>>1)
#define  PCID_PCID_CTRL_get_boundary_mode(data)                                  (0x00000001&(data))

#define  PCID_PCID_CTRL_2                                                       0x1802EF44
#define  PCID_PCID_CTRL_2_reg_addr                                               "0xB802EF44"
#define  PCID_PCID_CTRL_2_reg                                                    0xB802EF44
#define  PCID_PCID_CTRL_2_inst_addr                                              "0x0001"
#define  set_PCID_PCID_CTRL_2_reg(data)                                          (*((volatile unsigned int*)PCID_PCID_CTRL_2_reg)=data)
#define  get_PCID_PCID_CTRL_2_reg                                                (*((volatile unsigned int*)PCID_PCID_CTRL_2_reg))
#define  PCID_PCID_CTRL_2_pcid_tab2_xtr_en_shift                                 (31)
#define  PCID_PCID_CTRL_2_pcid_tab1_xtr_en_shift                                 (30)
#define  PCID_PCID_CTRL_2_pcid_thd_mode_shift                                    (29)
#define  PCID_PCID_CTRL_2_pcid_thd_en_shift                                      (28)
#define  PCID_PCID_CTRL_2_pcid_tab1_b_thd_shift                                  (16)
#define  PCID_PCID_CTRL_2_pcid_tab1_g_thd_shift                                  (8)
#define  PCID_PCID_CTRL_2_pcid_tab1_r_thd_shift                                  (0)
#define  PCID_PCID_CTRL_2_pcid_tab2_xtr_en_mask                                  (0x80000000)
#define  PCID_PCID_CTRL_2_pcid_tab1_xtr_en_mask                                  (0x40000000)
#define  PCID_PCID_CTRL_2_pcid_thd_mode_mask                                     (0x20000000)
#define  PCID_PCID_CTRL_2_pcid_thd_en_mask                                       (0x10000000)
#define  PCID_PCID_CTRL_2_pcid_tab1_b_thd_mask                                   (0x00FF0000)
#define  PCID_PCID_CTRL_2_pcid_tab1_g_thd_mask                                   (0x0000FF00)
#define  PCID_PCID_CTRL_2_pcid_tab1_r_thd_mask                                   (0x000000FF)
#define  PCID_PCID_CTRL_2_pcid_tab2_xtr_en(data)                                 (0x80000000&((data)<<31))
#define  PCID_PCID_CTRL_2_pcid_tab1_xtr_en(data)                                 (0x40000000&((data)<<30))
#define  PCID_PCID_CTRL_2_pcid_thd_mode(data)                                    (0x20000000&((data)<<29))
#define  PCID_PCID_CTRL_2_pcid_thd_en(data)                                      (0x10000000&((data)<<28))
#define  PCID_PCID_CTRL_2_pcid_tab1_b_thd(data)                                  (0x00FF0000&((data)<<16))
#define  PCID_PCID_CTRL_2_pcid_tab1_g_thd(data)                                  (0x0000FF00&((data)<<8))
#define  PCID_PCID_CTRL_2_pcid_tab1_r_thd(data)                                  (0x000000FF&(data))
#define  PCID_PCID_CTRL_2_get_pcid_tab2_xtr_en(data)                             ((0x80000000&(data))>>31)
#define  PCID_PCID_CTRL_2_get_pcid_tab1_xtr_en(data)                             ((0x40000000&(data))>>30)
#define  PCID_PCID_CTRL_2_get_pcid_thd_mode(data)                                ((0x20000000&(data))>>29)
#define  PCID_PCID_CTRL_2_get_pcid_thd_en(data)                                  ((0x10000000&(data))>>28)
#define  PCID_PCID_CTRL_2_get_pcid_tab1_b_thd(data)                              ((0x00FF0000&(data))>>16)
#define  PCID_PCID_CTRL_2_get_pcid_tab1_g_thd(data)                              ((0x0000FF00&(data))>>8)
#define  PCID_PCID_CTRL_2_get_pcid_tab1_r_thd(data)                              (0x000000FF&(data))

#define  PCID_PCID_CTRL_3                                                       0x1802EF48
#define  PCID_PCID_CTRL_3_reg_addr                                               "0xB802EF48"
#define  PCID_PCID_CTRL_3_reg                                                    0xB802EF48
#define  PCID_PCID_CTRL_3_inst_addr                                              "0x0002"
#define  set_PCID_PCID_CTRL_3_reg(data)                                          (*((volatile unsigned int*)PCID_PCID_CTRL_3_reg)=data)
#define  get_PCID_PCID_CTRL_3_reg                                                (*((volatile unsigned int*)PCID_PCID_CTRL_3_reg))
#define  PCID_PCID_CTRL_3_dummy_31_24_shift                                      (24)
#define  PCID_PCID_CTRL_3_pcid_tab2_b_thd_shift                                  (16)
#define  PCID_PCID_CTRL_3_pcid_tab2_g_thd_shift                                  (8)
#define  PCID_PCID_CTRL_3_pcid_tab2_r_thd_shift                                  (0)
#define  PCID_PCID_CTRL_3_dummy_31_24_mask                                       (0xFF000000)
#define  PCID_PCID_CTRL_3_pcid_tab2_b_thd_mask                                   (0x00FF0000)
#define  PCID_PCID_CTRL_3_pcid_tab2_g_thd_mask                                   (0x0000FF00)
#define  PCID_PCID_CTRL_3_pcid_tab2_r_thd_mask                                   (0x000000FF)
#define  PCID_PCID_CTRL_3_dummy_31_24(data)                                      (0xFF000000&((data)<<24))
#define  PCID_PCID_CTRL_3_pcid_tab2_b_thd(data)                                  (0x00FF0000&((data)<<16))
#define  PCID_PCID_CTRL_3_pcid_tab2_g_thd(data)                                  (0x0000FF00&((data)<<8))
#define  PCID_PCID_CTRL_3_pcid_tab2_r_thd(data)                                  (0x000000FF&(data))
#define  PCID_PCID_CTRL_3_get_dummy_31_24(data)                                  ((0xFF000000&(data))>>24)
#define  PCID_PCID_CTRL_3_get_pcid_tab2_b_thd(data)                              ((0x00FF0000&(data))>>16)
#define  PCID_PCID_CTRL_3_get_pcid_tab2_g_thd(data)                              ((0x0000FF00&(data))>>8)
#define  PCID_PCID_CTRL_3_get_pcid_tab2_r_thd(data)                              (0x000000FF&(data))

#define  PCID_PCID_LINE_1                                                       0x1802EF50
#define  PCID_PCID_LINE_1_reg_addr                                               "0xB802EF50"
#define  PCID_PCID_LINE_1_reg                                                    0xB802EF50
#define  PCID_PCID_LINE_1_inst_addr                                              "0x0003"
#define  set_PCID_PCID_LINE_1_reg(data)                                          (*((volatile unsigned int*)PCID_PCID_LINE_1_reg)=data)
#define  get_PCID_PCID_LINE_1_reg                                                (*((volatile unsigned int*)PCID_PCID_LINE_1_reg))
#define  PCID_PCID_LINE_1_line1_odd_b_color_select_shift                         (30)
#define  PCID_PCID_LINE_1_line1_odd_g_color_select_shift                         (28)
#define  PCID_PCID_LINE_1_line1_odd_r_color_select_shift                         (26)
#define  PCID_PCID_LINE_1_line1_odd_b_point_select_shift                         (24)
#define  PCID_PCID_LINE_1_line1_odd_g_point_select_shift                         (22)
#define  PCID_PCID_LINE_1_line1_odd_r_point_select_shift                         (20)
#define  PCID_PCID_LINE_1_line1_odd_b_line_select_shift                          (18)
#define  PCID_PCID_LINE_1_line1_odd_g_line_select_shift                          (17)
#define  PCID_PCID_LINE_1_line1_odd_r_line_select_shift                          (16)
#define  PCID_PCID_LINE_1_line1_even_b_color_select_shift                        (14)
#define  PCID_PCID_LINE_1_line1_even_g_color_select_shift                        (12)
#define  PCID_PCID_LINE_1_line1_even_r_color_select_shift                        (10)
#define  PCID_PCID_LINE_1_line1_even_b_point_select_shift                        (8)
#define  PCID_PCID_LINE_1_line1_even_g_point_select_shift                        (6)
#define  PCID_PCID_LINE_1_line1_even_r_point_select_shift                        (4)
#define  PCID_PCID_LINE_1_line1_even_b_line_select_shift                         (2)
#define  PCID_PCID_LINE_1_line1_even_g_line_select_shift                         (1)
#define  PCID_PCID_LINE_1_line1_even_r_line_select_shift                         (0)
#define  PCID_PCID_LINE_1_line1_odd_b_color_select_mask                          (0xC0000000)
#define  PCID_PCID_LINE_1_line1_odd_g_color_select_mask                          (0x30000000)
#define  PCID_PCID_LINE_1_line1_odd_r_color_select_mask                          (0x0C000000)
#define  PCID_PCID_LINE_1_line1_odd_b_point_select_mask                          (0x03000000)
#define  PCID_PCID_LINE_1_line1_odd_g_point_select_mask                          (0x00C00000)
#define  PCID_PCID_LINE_1_line1_odd_r_point_select_mask                          (0x00300000)
#define  PCID_PCID_LINE_1_line1_odd_b_line_select_mask                           (0x00040000)
#define  PCID_PCID_LINE_1_line1_odd_g_line_select_mask                           (0x00020000)
#define  PCID_PCID_LINE_1_line1_odd_r_line_select_mask                           (0x00010000)
#define  PCID_PCID_LINE_1_line1_even_b_color_select_mask                         (0x0000C000)
#define  PCID_PCID_LINE_1_line1_even_g_color_select_mask                         (0x00003000)
#define  PCID_PCID_LINE_1_line1_even_r_color_select_mask                         (0x00000C00)
#define  PCID_PCID_LINE_1_line1_even_b_point_select_mask                         (0x00000300)
#define  PCID_PCID_LINE_1_line1_even_g_point_select_mask                         (0x000000C0)
#define  PCID_PCID_LINE_1_line1_even_r_point_select_mask                         (0x00000030)
#define  PCID_PCID_LINE_1_line1_even_b_line_select_mask                          (0x00000004)
#define  PCID_PCID_LINE_1_line1_even_g_line_select_mask                          (0x00000002)
#define  PCID_PCID_LINE_1_line1_even_r_line_select_mask                          (0x00000001)
#define  PCID_PCID_LINE_1_line1_odd_b_color_select(data)                         (0xC0000000&((data)<<30))
#define  PCID_PCID_LINE_1_line1_odd_g_color_select(data)                         (0x30000000&((data)<<28))
#define  PCID_PCID_LINE_1_line1_odd_r_color_select(data)                         (0x0C000000&((data)<<26))
#define  PCID_PCID_LINE_1_line1_odd_b_point_select(data)                         (0x03000000&((data)<<24))
#define  PCID_PCID_LINE_1_line1_odd_g_point_select(data)                         (0x00C00000&((data)<<22))
#define  PCID_PCID_LINE_1_line1_odd_r_point_select(data)                         (0x00300000&((data)<<20))
#define  PCID_PCID_LINE_1_line1_odd_b_line_select(data)                          (0x00040000&((data)<<18))
#define  PCID_PCID_LINE_1_line1_odd_g_line_select(data)                          (0x00020000&((data)<<17))
#define  PCID_PCID_LINE_1_line1_odd_r_line_select(data)                          (0x00010000&((data)<<16))
#define  PCID_PCID_LINE_1_line1_even_b_color_select(data)                        (0x0000C000&((data)<<14))
#define  PCID_PCID_LINE_1_line1_even_g_color_select(data)                        (0x00003000&((data)<<12))
#define  PCID_PCID_LINE_1_line1_even_r_color_select(data)                        (0x00000C00&((data)<<10))
#define  PCID_PCID_LINE_1_line1_even_b_point_select(data)                        (0x00000300&((data)<<8))
#define  PCID_PCID_LINE_1_line1_even_g_point_select(data)                        (0x000000C0&((data)<<6))
#define  PCID_PCID_LINE_1_line1_even_r_point_select(data)                        (0x00000030&((data)<<4))
#define  PCID_PCID_LINE_1_line1_even_b_line_select(data)                         (0x00000004&((data)<<2))
#define  PCID_PCID_LINE_1_line1_even_g_line_select(data)                         (0x00000002&((data)<<1))
#define  PCID_PCID_LINE_1_line1_even_r_line_select(data)                         (0x00000001&(data))
#define  PCID_PCID_LINE_1_get_line1_odd_b_color_select(data)                     ((0xC0000000&(data))>>30)
#define  PCID_PCID_LINE_1_get_line1_odd_g_color_select(data)                     ((0x30000000&(data))>>28)
#define  PCID_PCID_LINE_1_get_line1_odd_r_color_select(data)                     ((0x0C000000&(data))>>26)
#define  PCID_PCID_LINE_1_get_line1_odd_b_point_select(data)                     ((0x03000000&(data))>>24)
#define  PCID_PCID_LINE_1_get_line1_odd_g_point_select(data)                     ((0x00C00000&(data))>>22)
#define  PCID_PCID_LINE_1_get_line1_odd_r_point_select(data)                     ((0x00300000&(data))>>20)
#define  PCID_PCID_LINE_1_get_line1_odd_b_line_select(data)                      ((0x00040000&(data))>>18)
#define  PCID_PCID_LINE_1_get_line1_odd_g_line_select(data)                      ((0x00020000&(data))>>17)
#define  PCID_PCID_LINE_1_get_line1_odd_r_line_select(data)                      ((0x00010000&(data))>>16)
#define  PCID_PCID_LINE_1_get_line1_even_b_color_select(data)                    ((0x0000C000&(data))>>14)
#define  PCID_PCID_LINE_1_get_line1_even_g_color_select(data)                    ((0x00003000&(data))>>12)
#define  PCID_PCID_LINE_1_get_line1_even_r_color_select(data)                    ((0x00000C00&(data))>>10)
#define  PCID_PCID_LINE_1_get_line1_even_b_point_select(data)                    ((0x00000300&(data))>>8)
#define  PCID_PCID_LINE_1_get_line1_even_g_point_select(data)                    ((0x000000C0&(data))>>6)
#define  PCID_PCID_LINE_1_get_line1_even_r_point_select(data)                    ((0x00000030&(data))>>4)
#define  PCID_PCID_LINE_1_get_line1_even_b_line_select(data)                     ((0x00000004&(data))>>2)
#define  PCID_PCID_LINE_1_get_line1_even_g_line_select(data)                     ((0x00000002&(data))>>1)
#define  PCID_PCID_LINE_1_get_line1_even_r_line_select(data)                     (0x00000001&(data))

#define  PCID_PCID_LINE_2                                                       0x1802EF54
#define  PCID_PCID_LINE_2_reg_addr                                               "0xB802EF54"
#define  PCID_PCID_LINE_2_reg                                                    0xB802EF54
#define  PCID_PCID_LINE_2_inst_addr                                              "0x0004"
#define  set_PCID_PCID_LINE_2_reg(data)                                          (*((volatile unsigned int*)PCID_PCID_LINE_2_reg)=data)
#define  get_PCID_PCID_LINE_2_reg                                                (*((volatile unsigned int*)PCID_PCID_LINE_2_reg))
#define  PCID_PCID_LINE_2_line2_odd_b_color_select_shift                         (30)
#define  PCID_PCID_LINE_2_line2_odd_g_color_select_shift                         (28)
#define  PCID_PCID_LINE_2_line2_odd_r_color_select_shift                         (26)
#define  PCID_PCID_LINE_2_line2_odd_b_point_select_shift                         (24)
#define  PCID_PCID_LINE_2_line2_odd_g_point_select_shift                         (22)
#define  PCID_PCID_LINE_2_line2_odd_r_point_select_shift                         (20)
#define  PCID_PCID_LINE_2_line2_odd_b_line_select_shift                          (18)
#define  PCID_PCID_LINE_2_line2_odd_g_line_select_shift                          (17)
#define  PCID_PCID_LINE_2_line2_odd_r_line_select_shift                          (16)
#define  PCID_PCID_LINE_2_line2_even_b_color_select_shift                        (14)
#define  PCID_PCID_LINE_2_line2_even_g_color_select_shift                        (12)
#define  PCID_PCID_LINE_2_line2_even_r_color_select_shift                        (10)
#define  PCID_PCID_LINE_2_line2_even_b_point_select_shift                        (8)
#define  PCID_PCID_LINE_2_line2_even_g_point_select_shift                        (6)
#define  PCID_PCID_LINE_2_line2_even_r_point_select_shift                        (4)
#define  PCID_PCID_LINE_2_line2_even_b_line_select_shift                         (2)
#define  PCID_PCID_LINE_2_line2_even_g_line_select_shift                         (1)
#define  PCID_PCID_LINE_2_line2_even_r_line_select_shift                         (0)
#define  PCID_PCID_LINE_2_line2_odd_b_color_select_mask                          (0xC0000000)
#define  PCID_PCID_LINE_2_line2_odd_g_color_select_mask                          (0x30000000)
#define  PCID_PCID_LINE_2_line2_odd_r_color_select_mask                          (0x0C000000)
#define  PCID_PCID_LINE_2_line2_odd_b_point_select_mask                          (0x03000000)
#define  PCID_PCID_LINE_2_line2_odd_g_point_select_mask                          (0x00C00000)
#define  PCID_PCID_LINE_2_line2_odd_r_point_select_mask                          (0x00300000)
#define  PCID_PCID_LINE_2_line2_odd_b_line_select_mask                           (0x00040000)
#define  PCID_PCID_LINE_2_line2_odd_g_line_select_mask                           (0x00020000)
#define  PCID_PCID_LINE_2_line2_odd_r_line_select_mask                           (0x00010000)
#define  PCID_PCID_LINE_2_line2_even_b_color_select_mask                         (0x0000C000)
#define  PCID_PCID_LINE_2_line2_even_g_color_select_mask                         (0x00003000)
#define  PCID_PCID_LINE_2_line2_even_r_color_select_mask                         (0x00000C00)
#define  PCID_PCID_LINE_2_line2_even_b_point_select_mask                         (0x00000300)
#define  PCID_PCID_LINE_2_line2_even_g_point_select_mask                         (0x000000C0)
#define  PCID_PCID_LINE_2_line2_even_r_point_select_mask                         (0x00000030)
#define  PCID_PCID_LINE_2_line2_even_b_line_select_mask                          (0x00000004)
#define  PCID_PCID_LINE_2_line2_even_g_line_select_mask                          (0x00000002)
#define  PCID_PCID_LINE_2_line2_even_r_line_select_mask                          (0x00000001)
#define  PCID_PCID_LINE_2_line2_odd_b_color_select(data)                         (0xC0000000&((data)<<30))
#define  PCID_PCID_LINE_2_line2_odd_g_color_select(data)                         (0x30000000&((data)<<28))
#define  PCID_PCID_LINE_2_line2_odd_r_color_select(data)                         (0x0C000000&((data)<<26))
#define  PCID_PCID_LINE_2_line2_odd_b_point_select(data)                         (0x03000000&((data)<<24))
#define  PCID_PCID_LINE_2_line2_odd_g_point_select(data)                         (0x00C00000&((data)<<22))
#define  PCID_PCID_LINE_2_line2_odd_r_point_select(data)                         (0x00300000&((data)<<20))
#define  PCID_PCID_LINE_2_line2_odd_b_line_select(data)                          (0x00040000&((data)<<18))
#define  PCID_PCID_LINE_2_line2_odd_g_line_select(data)                          (0x00020000&((data)<<17))
#define  PCID_PCID_LINE_2_line2_odd_r_line_select(data)                          (0x00010000&((data)<<16))
#define  PCID_PCID_LINE_2_line2_even_b_color_select(data)                        (0x0000C000&((data)<<14))
#define  PCID_PCID_LINE_2_line2_even_g_color_select(data)                        (0x00003000&((data)<<12))
#define  PCID_PCID_LINE_2_line2_even_r_color_select(data)                        (0x00000C00&((data)<<10))
#define  PCID_PCID_LINE_2_line2_even_b_point_select(data)                        (0x00000300&((data)<<8))
#define  PCID_PCID_LINE_2_line2_even_g_point_select(data)                        (0x000000C0&((data)<<6))
#define  PCID_PCID_LINE_2_line2_even_r_point_select(data)                        (0x00000030&((data)<<4))
#define  PCID_PCID_LINE_2_line2_even_b_line_select(data)                         (0x00000004&((data)<<2))
#define  PCID_PCID_LINE_2_line2_even_g_line_select(data)                         (0x00000002&((data)<<1))
#define  PCID_PCID_LINE_2_line2_even_r_line_select(data)                         (0x00000001&(data))
#define  PCID_PCID_LINE_2_get_line2_odd_b_color_select(data)                     ((0xC0000000&(data))>>30)
#define  PCID_PCID_LINE_2_get_line2_odd_g_color_select(data)                     ((0x30000000&(data))>>28)
#define  PCID_PCID_LINE_2_get_line2_odd_r_color_select(data)                     ((0x0C000000&(data))>>26)
#define  PCID_PCID_LINE_2_get_line2_odd_b_point_select(data)                     ((0x03000000&(data))>>24)
#define  PCID_PCID_LINE_2_get_line2_odd_g_point_select(data)                     ((0x00C00000&(data))>>22)
#define  PCID_PCID_LINE_2_get_line2_odd_r_point_select(data)                     ((0x00300000&(data))>>20)
#define  PCID_PCID_LINE_2_get_line2_odd_b_line_select(data)                      ((0x00040000&(data))>>18)
#define  PCID_PCID_LINE_2_get_line2_odd_g_line_select(data)                      ((0x00020000&(data))>>17)
#define  PCID_PCID_LINE_2_get_line2_odd_r_line_select(data)                      ((0x00010000&(data))>>16)
#define  PCID_PCID_LINE_2_get_line2_even_b_color_select(data)                    ((0x0000C000&(data))>>14)
#define  PCID_PCID_LINE_2_get_line2_even_g_color_select(data)                    ((0x00003000&(data))>>12)
#define  PCID_PCID_LINE_2_get_line2_even_r_color_select(data)                    ((0x00000C00&(data))>>10)
#define  PCID_PCID_LINE_2_get_line2_even_b_point_select(data)                    ((0x00000300&(data))>>8)
#define  PCID_PCID_LINE_2_get_line2_even_g_point_select(data)                    ((0x000000C0&(data))>>6)
#define  PCID_PCID_LINE_2_get_line2_even_r_point_select(data)                    ((0x00000030&(data))>>4)
#define  PCID_PCID_LINE_2_get_line2_even_b_line_select(data)                     ((0x00000004&(data))>>2)
#define  PCID_PCID_LINE_2_get_line2_even_g_line_select(data)                     ((0x00000002&(data))>>1)
#define  PCID_PCID_LINE_2_get_line2_even_r_line_select(data)                     (0x00000001&(data))

#define  PCID_PCID_LINE_3                                                       0x1802EF58
#define  PCID_PCID_LINE_3_reg_addr                                               "0xB802EF58"
#define  PCID_PCID_LINE_3_reg                                                    0xB802EF58
#define  PCID_PCID_LINE_3_inst_addr                                              "0x0005"
#define  set_PCID_PCID_LINE_3_reg(data)                                          (*((volatile unsigned int*)PCID_PCID_LINE_3_reg)=data)
#define  get_PCID_PCID_LINE_3_reg                                                (*((volatile unsigned int*)PCID_PCID_LINE_3_reg))
#define  PCID_PCID_LINE_3_line3_odd_b_color_select_shift                         (30)
#define  PCID_PCID_LINE_3_line3_odd_g_color_select_shift                         (28)
#define  PCID_PCID_LINE_3_line3_odd_r_color_select_shift                         (26)
#define  PCID_PCID_LINE_3_line3_odd_b_point_select_shift                         (24)
#define  PCID_PCID_LINE_3_line3_odd_g_point_select_shift                         (22)
#define  PCID_PCID_LINE_3_line3_odd_r_point_select_shift                         (20)
#define  PCID_PCID_LINE_3_line3_odd_b_line_select_shift                          (18)
#define  PCID_PCID_LINE_3_line3_odd_g_line_select_shift                          (17)
#define  PCID_PCID_LINE_3_line3_odd_r_line_select_shift                          (16)
#define  PCID_PCID_LINE_3_line3_even_b_color_select_shift                        (14)
#define  PCID_PCID_LINE_3_line3_even_g_color_select_shift                        (12)
#define  PCID_PCID_LINE_3_line3_even_r_color_select_shift                        (10)
#define  PCID_PCID_LINE_3_line3_even_b_point_select_shift                        (8)
#define  PCID_PCID_LINE_3_line3_even_g_point_select_shift                        (6)
#define  PCID_PCID_LINE_3_line3_even_r_point_select_shift                        (4)
#define  PCID_PCID_LINE_3_line3_even_b_line_select_shift                         (2)
#define  PCID_PCID_LINE_3_line3_even_g_line_select_shift                         (1)
#define  PCID_PCID_LINE_3_line3_even_r_line_select_shift                         (0)
#define  PCID_PCID_LINE_3_line3_odd_b_color_select_mask                          (0xC0000000)
#define  PCID_PCID_LINE_3_line3_odd_g_color_select_mask                          (0x30000000)
#define  PCID_PCID_LINE_3_line3_odd_r_color_select_mask                          (0x0C000000)
#define  PCID_PCID_LINE_3_line3_odd_b_point_select_mask                          (0x03000000)
#define  PCID_PCID_LINE_3_line3_odd_g_point_select_mask                          (0x00C00000)
#define  PCID_PCID_LINE_3_line3_odd_r_point_select_mask                          (0x00300000)
#define  PCID_PCID_LINE_3_line3_odd_b_line_select_mask                           (0x00040000)
#define  PCID_PCID_LINE_3_line3_odd_g_line_select_mask                           (0x00020000)
#define  PCID_PCID_LINE_3_line3_odd_r_line_select_mask                           (0x00010000)
#define  PCID_PCID_LINE_3_line3_even_b_color_select_mask                         (0x0000C000)
#define  PCID_PCID_LINE_3_line3_even_g_color_select_mask                         (0x00003000)
#define  PCID_PCID_LINE_3_line3_even_r_color_select_mask                         (0x00000C00)
#define  PCID_PCID_LINE_3_line3_even_b_point_select_mask                         (0x00000300)
#define  PCID_PCID_LINE_3_line3_even_g_point_select_mask                         (0x000000C0)
#define  PCID_PCID_LINE_3_line3_even_r_point_select_mask                         (0x00000030)
#define  PCID_PCID_LINE_3_line3_even_b_line_select_mask                          (0x00000004)
#define  PCID_PCID_LINE_3_line3_even_g_line_select_mask                          (0x00000002)
#define  PCID_PCID_LINE_3_line3_even_r_line_select_mask                          (0x00000001)
#define  PCID_PCID_LINE_3_line3_odd_b_color_select(data)                         (0xC0000000&((data)<<30))
#define  PCID_PCID_LINE_3_line3_odd_g_color_select(data)                         (0x30000000&((data)<<28))
#define  PCID_PCID_LINE_3_line3_odd_r_color_select(data)                         (0x0C000000&((data)<<26))
#define  PCID_PCID_LINE_3_line3_odd_b_point_select(data)                         (0x03000000&((data)<<24))
#define  PCID_PCID_LINE_3_line3_odd_g_point_select(data)                         (0x00C00000&((data)<<22))
#define  PCID_PCID_LINE_3_line3_odd_r_point_select(data)                         (0x00300000&((data)<<20))
#define  PCID_PCID_LINE_3_line3_odd_b_line_select(data)                          (0x00040000&((data)<<18))
#define  PCID_PCID_LINE_3_line3_odd_g_line_select(data)                          (0x00020000&((data)<<17))
#define  PCID_PCID_LINE_3_line3_odd_r_line_select(data)                          (0x00010000&((data)<<16))
#define  PCID_PCID_LINE_3_line3_even_b_color_select(data)                        (0x0000C000&((data)<<14))
#define  PCID_PCID_LINE_3_line3_even_g_color_select(data)                        (0x00003000&((data)<<12))
#define  PCID_PCID_LINE_3_line3_even_r_color_select(data)                        (0x00000C00&((data)<<10))
#define  PCID_PCID_LINE_3_line3_even_b_point_select(data)                        (0x00000300&((data)<<8))
#define  PCID_PCID_LINE_3_line3_even_g_point_select(data)                        (0x000000C0&((data)<<6))
#define  PCID_PCID_LINE_3_line3_even_r_point_select(data)                        (0x00000030&((data)<<4))
#define  PCID_PCID_LINE_3_line3_even_b_line_select(data)                         (0x00000004&((data)<<2))
#define  PCID_PCID_LINE_3_line3_even_g_line_select(data)                         (0x00000002&((data)<<1))
#define  PCID_PCID_LINE_3_line3_even_r_line_select(data)                         (0x00000001&(data))
#define  PCID_PCID_LINE_3_get_line3_odd_b_color_select(data)                     ((0xC0000000&(data))>>30)
#define  PCID_PCID_LINE_3_get_line3_odd_g_color_select(data)                     ((0x30000000&(data))>>28)
#define  PCID_PCID_LINE_3_get_line3_odd_r_color_select(data)                     ((0x0C000000&(data))>>26)
#define  PCID_PCID_LINE_3_get_line3_odd_b_point_select(data)                     ((0x03000000&(data))>>24)
#define  PCID_PCID_LINE_3_get_line3_odd_g_point_select(data)                     ((0x00C00000&(data))>>22)
#define  PCID_PCID_LINE_3_get_line3_odd_r_point_select(data)                     ((0x00300000&(data))>>20)
#define  PCID_PCID_LINE_3_get_line3_odd_b_line_select(data)                      ((0x00040000&(data))>>18)
#define  PCID_PCID_LINE_3_get_line3_odd_g_line_select(data)                      ((0x00020000&(data))>>17)
#define  PCID_PCID_LINE_3_get_line3_odd_r_line_select(data)                      ((0x00010000&(data))>>16)
#define  PCID_PCID_LINE_3_get_line3_even_b_color_select(data)                    ((0x0000C000&(data))>>14)
#define  PCID_PCID_LINE_3_get_line3_even_g_color_select(data)                    ((0x00003000&(data))>>12)
#define  PCID_PCID_LINE_3_get_line3_even_r_color_select(data)                    ((0x00000C00&(data))>>10)
#define  PCID_PCID_LINE_3_get_line3_even_b_point_select(data)                    ((0x00000300&(data))>>8)
#define  PCID_PCID_LINE_3_get_line3_even_g_point_select(data)                    ((0x000000C0&(data))>>6)
#define  PCID_PCID_LINE_3_get_line3_even_r_point_select(data)                    ((0x00000030&(data))>>4)
#define  PCID_PCID_LINE_3_get_line3_even_b_line_select(data)                     ((0x00000004&(data))>>2)
#define  PCID_PCID_LINE_3_get_line3_even_g_line_select(data)                     ((0x00000002&(data))>>1)
#define  PCID_PCID_LINE_3_get_line3_even_r_line_select(data)                     (0x00000001&(data))

#define  PCID_PCID_LINE_4                                                       0x1802EF5C
#define  PCID_PCID_LINE_4_reg_addr                                               "0xB802EF5C"
#define  PCID_PCID_LINE_4_reg                                                    0xB802EF5C
#define  PCID_PCID_LINE_4_inst_addr                                              "0x0006"
#define  set_PCID_PCID_LINE_4_reg(data)                                          (*((volatile unsigned int*)PCID_PCID_LINE_4_reg)=data)
#define  get_PCID_PCID_LINE_4_reg                                                (*((volatile unsigned int*)PCID_PCID_LINE_4_reg))
#define  PCID_PCID_LINE_4_line4_odd_b_color_select_shift                         (30)
#define  PCID_PCID_LINE_4_line4_odd_g_color_select_shift                         (28)
#define  PCID_PCID_LINE_4_line4_odd_r_color_select_shift                         (26)
#define  PCID_PCID_LINE_4_line4_odd_b_point_select_shift                         (24)
#define  PCID_PCID_LINE_4_line4_odd_g_point_select_shift                         (22)
#define  PCID_PCID_LINE_4_line4_odd_r_point_select_shift                         (20)
#define  PCID_PCID_LINE_4_line4_odd_b_line_select_shift                          (18)
#define  PCID_PCID_LINE_4_line4_odd_g_line_select_shift                          (17)
#define  PCID_PCID_LINE_4_line4_odd_r_line_select_shift                          (16)
#define  PCID_PCID_LINE_4_line4_even_b_color_select_shift                        (14)
#define  PCID_PCID_LINE_4_line4_even_g_color_select_shift                        (12)
#define  PCID_PCID_LINE_4_line4_even_r_color_select_shift                        (10)
#define  PCID_PCID_LINE_4_line4_even_b_point_select_shift                        (8)
#define  PCID_PCID_LINE_4_line4_even_g_point_select_shift                        (6)
#define  PCID_PCID_LINE_4_line4_even_r_point_select_shift                        (4)
#define  PCID_PCID_LINE_4_line4_even_b_line_select_shift                         (2)
#define  PCID_PCID_LINE_4_line4_even_g_line_select_shift                         (1)
#define  PCID_PCID_LINE_4_line4_even_r_line_select_shift                         (0)
#define  PCID_PCID_LINE_4_line4_odd_b_color_select_mask                          (0xC0000000)
#define  PCID_PCID_LINE_4_line4_odd_g_color_select_mask                          (0x30000000)
#define  PCID_PCID_LINE_4_line4_odd_r_color_select_mask                          (0x0C000000)
#define  PCID_PCID_LINE_4_line4_odd_b_point_select_mask                          (0x03000000)
#define  PCID_PCID_LINE_4_line4_odd_g_point_select_mask                          (0x00C00000)
#define  PCID_PCID_LINE_4_line4_odd_r_point_select_mask                          (0x00300000)
#define  PCID_PCID_LINE_4_line4_odd_b_line_select_mask                           (0x00040000)
#define  PCID_PCID_LINE_4_line4_odd_g_line_select_mask                           (0x00020000)
#define  PCID_PCID_LINE_4_line4_odd_r_line_select_mask                           (0x00010000)
#define  PCID_PCID_LINE_4_line4_even_b_color_select_mask                         (0x0000C000)
#define  PCID_PCID_LINE_4_line4_even_g_color_select_mask                         (0x00003000)
#define  PCID_PCID_LINE_4_line4_even_r_color_select_mask                         (0x00000C00)
#define  PCID_PCID_LINE_4_line4_even_b_point_select_mask                         (0x00000300)
#define  PCID_PCID_LINE_4_line4_even_g_point_select_mask                         (0x000000C0)
#define  PCID_PCID_LINE_4_line4_even_r_point_select_mask                         (0x00000030)
#define  PCID_PCID_LINE_4_line4_even_b_line_select_mask                          (0x00000004)
#define  PCID_PCID_LINE_4_line4_even_g_line_select_mask                          (0x00000002)
#define  PCID_PCID_LINE_4_line4_even_r_line_select_mask                          (0x00000001)
#define  PCID_PCID_LINE_4_line4_odd_b_color_select(data)                         (0xC0000000&((data)<<30))
#define  PCID_PCID_LINE_4_line4_odd_g_color_select(data)                         (0x30000000&((data)<<28))
#define  PCID_PCID_LINE_4_line4_odd_r_color_select(data)                         (0x0C000000&((data)<<26))
#define  PCID_PCID_LINE_4_line4_odd_b_point_select(data)                         (0x03000000&((data)<<24))
#define  PCID_PCID_LINE_4_line4_odd_g_point_select(data)                         (0x00C00000&((data)<<22))
#define  PCID_PCID_LINE_4_line4_odd_r_point_select(data)                         (0x00300000&((data)<<20))
#define  PCID_PCID_LINE_4_line4_odd_b_line_select(data)                          (0x00040000&((data)<<18))
#define  PCID_PCID_LINE_4_line4_odd_g_line_select(data)                          (0x00020000&((data)<<17))
#define  PCID_PCID_LINE_4_line4_odd_r_line_select(data)                          (0x00010000&((data)<<16))
#define  PCID_PCID_LINE_4_line4_even_b_color_select(data)                        (0x0000C000&((data)<<14))
#define  PCID_PCID_LINE_4_line4_even_g_color_select(data)                        (0x00003000&((data)<<12))
#define  PCID_PCID_LINE_4_line4_even_r_color_select(data)                        (0x00000C00&((data)<<10))
#define  PCID_PCID_LINE_4_line4_even_b_point_select(data)                        (0x00000300&((data)<<8))
#define  PCID_PCID_LINE_4_line4_even_g_point_select(data)                        (0x000000C0&((data)<<6))
#define  PCID_PCID_LINE_4_line4_even_r_point_select(data)                        (0x00000030&((data)<<4))
#define  PCID_PCID_LINE_4_line4_even_b_line_select(data)                         (0x00000004&((data)<<2))
#define  PCID_PCID_LINE_4_line4_even_g_line_select(data)                         (0x00000002&((data)<<1))
#define  PCID_PCID_LINE_4_line4_even_r_line_select(data)                         (0x00000001&(data))
#define  PCID_PCID_LINE_4_get_line4_odd_b_color_select(data)                     ((0xC0000000&(data))>>30)
#define  PCID_PCID_LINE_4_get_line4_odd_g_color_select(data)                     ((0x30000000&(data))>>28)
#define  PCID_PCID_LINE_4_get_line4_odd_r_color_select(data)                     ((0x0C000000&(data))>>26)
#define  PCID_PCID_LINE_4_get_line4_odd_b_point_select(data)                     ((0x03000000&(data))>>24)
#define  PCID_PCID_LINE_4_get_line4_odd_g_point_select(data)                     ((0x00C00000&(data))>>22)
#define  PCID_PCID_LINE_4_get_line4_odd_r_point_select(data)                     ((0x00300000&(data))>>20)
#define  PCID_PCID_LINE_4_get_line4_odd_b_line_select(data)                      ((0x00040000&(data))>>18)
#define  PCID_PCID_LINE_4_get_line4_odd_g_line_select(data)                      ((0x00020000&(data))>>17)
#define  PCID_PCID_LINE_4_get_line4_odd_r_line_select(data)                      ((0x00010000&(data))>>16)
#define  PCID_PCID_LINE_4_get_line4_even_b_color_select(data)                    ((0x0000C000&(data))>>14)
#define  PCID_PCID_LINE_4_get_line4_even_g_color_select(data)                    ((0x00003000&(data))>>12)
#define  PCID_PCID_LINE_4_get_line4_even_r_color_select(data)                    ((0x00000C00&(data))>>10)
#define  PCID_PCID_LINE_4_get_line4_even_b_point_select(data)                    ((0x00000300&(data))>>8)
#define  PCID_PCID_LINE_4_get_line4_even_g_point_select(data)                    ((0x000000C0&(data))>>6)
#define  PCID_PCID_LINE_4_get_line4_even_r_point_select(data)                    ((0x00000030&(data))>>4)
#define  PCID_PCID_LINE_4_get_line4_even_b_line_select(data)                     ((0x00000004&(data))>>2)
#define  PCID_PCID_LINE_4_get_line4_even_g_line_select(data)                     ((0x00000002&(data))>>1)
#define  PCID_PCID_LINE_4_get_line4_even_r_line_select(data)                     (0x00000001&(data))

#define  PCID_PCID2_POLARITY_R_1                                                0x1802EF70
#define  PCID_PCID2_POLARITY_R_1_reg_addr                                        "0xB802EF70"
#define  PCID_PCID2_POLARITY_R_1_reg                                             0xB802EF70
#define  PCID_PCID2_POLARITY_R_1_inst_addr                                       "0x0007"
#define  set_PCID_PCID2_POLARITY_R_1_reg(data)                                   (*((volatile unsigned int*)PCID_PCID2_POLARITY_R_1_reg)=data)
#define  get_PCID_PCID2_POLARITY_R_1_reg                                         (*((volatile unsigned int*)PCID_PCID2_POLARITY_R_1_reg))
#define  PCID_PCID2_POLARITY_R_1_r_po_line2_shift                                (16)
#define  PCID_PCID2_POLARITY_R_1_r_po_line1_shift                                (0)
#define  PCID_PCID2_POLARITY_R_1_r_po_line2_mask                                 (0xFFFF0000)
#define  PCID_PCID2_POLARITY_R_1_r_po_line1_mask                                 (0x0000FFFF)
#define  PCID_PCID2_POLARITY_R_1_r_po_line2(data)                                (0xFFFF0000&((data)<<16))
#define  PCID_PCID2_POLARITY_R_1_r_po_line1(data)                                (0x0000FFFF&(data))
#define  PCID_PCID2_POLARITY_R_1_get_r_po_line2(data)                            ((0xFFFF0000&(data))>>16)
#define  PCID_PCID2_POLARITY_R_1_get_r_po_line1(data)                            (0x0000FFFF&(data))

#define  PCID_PCID2_POLARITY_R_2                                                0x1802EF74
#define  PCID_PCID2_POLARITY_R_2_reg_addr                                        "0xB802EF74"
#define  PCID_PCID2_POLARITY_R_2_reg                                             0xB802EF74
#define  PCID_PCID2_POLARITY_R_2_inst_addr                                       "0x0008"
#define  set_PCID_PCID2_POLARITY_R_2_reg(data)                                   (*((volatile unsigned int*)PCID_PCID2_POLARITY_R_2_reg)=data)
#define  get_PCID_PCID2_POLARITY_R_2_reg                                         (*((volatile unsigned int*)PCID_PCID2_POLARITY_R_2_reg))
#define  PCID_PCID2_POLARITY_R_2_r_po_line4_shift                                (16)
#define  PCID_PCID2_POLARITY_R_2_r_po_line3_shift                                (0)
#define  PCID_PCID2_POLARITY_R_2_r_po_line4_mask                                 (0xFFFF0000)
#define  PCID_PCID2_POLARITY_R_2_r_po_line3_mask                                 (0x0000FFFF)
#define  PCID_PCID2_POLARITY_R_2_r_po_line4(data)                                (0xFFFF0000&((data)<<16))
#define  PCID_PCID2_POLARITY_R_2_r_po_line3(data)                                (0x0000FFFF&(data))
#define  PCID_PCID2_POLARITY_R_2_get_r_po_line4(data)                            ((0xFFFF0000&(data))>>16)
#define  PCID_PCID2_POLARITY_R_2_get_r_po_line3(data)                            (0x0000FFFF&(data))

#define  PCID_PCID2_POLARITY_R_3                                                0x1802EF78
#define  PCID_PCID2_POLARITY_R_3_reg_addr                                        "0xB802EF78"
#define  PCID_PCID2_POLARITY_R_3_reg                                             0xB802EF78
#define  PCID_PCID2_POLARITY_R_3_inst_addr                                       "0x0009"
#define  set_PCID_PCID2_POLARITY_R_3_reg(data)                                   (*((volatile unsigned int*)PCID_PCID2_POLARITY_R_3_reg)=data)
#define  get_PCID_PCID2_POLARITY_R_3_reg                                         (*((volatile unsigned int*)PCID_PCID2_POLARITY_R_3_reg))
#define  PCID_PCID2_POLARITY_R_3_r_po_line6_shift                                (16)
#define  PCID_PCID2_POLARITY_R_3_r_po_line5_shift                                (0)
#define  PCID_PCID2_POLARITY_R_3_r_po_line6_mask                                 (0xFFFF0000)
#define  PCID_PCID2_POLARITY_R_3_r_po_line5_mask                                 (0x0000FFFF)
#define  PCID_PCID2_POLARITY_R_3_r_po_line6(data)                                (0xFFFF0000&((data)<<16))
#define  PCID_PCID2_POLARITY_R_3_r_po_line5(data)                                (0x0000FFFF&(data))
#define  PCID_PCID2_POLARITY_R_3_get_r_po_line6(data)                            ((0xFFFF0000&(data))>>16)
#define  PCID_PCID2_POLARITY_R_3_get_r_po_line5(data)                            (0x0000FFFF&(data))

#define  PCID_PCID2_POLARITY_R_4                                                0x1802EF7C
#define  PCID_PCID2_POLARITY_R_4_reg_addr                                        "0xB802EF7C"
#define  PCID_PCID2_POLARITY_R_4_reg                                             0xB802EF7C
#define  PCID_PCID2_POLARITY_R_4_inst_addr                                       "0x000A"
#define  set_PCID_PCID2_POLARITY_R_4_reg(data)                                   (*((volatile unsigned int*)PCID_PCID2_POLARITY_R_4_reg)=data)
#define  get_PCID_PCID2_POLARITY_R_4_reg                                         (*((volatile unsigned int*)PCID_PCID2_POLARITY_R_4_reg))
#define  PCID_PCID2_POLARITY_R_4_r_po_line8_shift                                (16)
#define  PCID_PCID2_POLARITY_R_4_r_po_line7_shift                                (0)
#define  PCID_PCID2_POLARITY_R_4_r_po_line8_mask                                 (0xFFFF0000)
#define  PCID_PCID2_POLARITY_R_4_r_po_line7_mask                                 (0x0000FFFF)
#define  PCID_PCID2_POLARITY_R_4_r_po_line8(data)                                (0xFFFF0000&((data)<<16))
#define  PCID_PCID2_POLARITY_R_4_r_po_line7(data)                                (0x0000FFFF&(data))
#define  PCID_PCID2_POLARITY_R_4_get_r_po_line8(data)                            ((0xFFFF0000&(data))>>16)
#define  PCID_PCID2_POLARITY_R_4_get_r_po_line7(data)                            (0x0000FFFF&(data))

#define  PCID_PCID2_POLARITY_G_1                                                0x1802EF80
#define  PCID_PCID2_POLARITY_G_1_reg_addr                                        "0xB802EF80"
#define  PCID_PCID2_POLARITY_G_1_reg                                             0xB802EF80
#define  PCID_PCID2_POLARITY_G_1_inst_addr                                       "0x000B"
#define  set_PCID_PCID2_POLARITY_G_1_reg(data)                                   (*((volatile unsigned int*)PCID_PCID2_POLARITY_G_1_reg)=data)
#define  get_PCID_PCID2_POLARITY_G_1_reg                                         (*((volatile unsigned int*)PCID_PCID2_POLARITY_G_1_reg))
#define  PCID_PCID2_POLARITY_G_1_g_po_line2_shift                                (16)
#define  PCID_PCID2_POLARITY_G_1_g_po_line1_shift                                (0)
#define  PCID_PCID2_POLARITY_G_1_g_po_line2_mask                                 (0xFFFF0000)
#define  PCID_PCID2_POLARITY_G_1_g_po_line1_mask                                 (0x0000FFFF)
#define  PCID_PCID2_POLARITY_G_1_g_po_line2(data)                                (0xFFFF0000&((data)<<16))
#define  PCID_PCID2_POLARITY_G_1_g_po_line1(data)                                (0x0000FFFF&(data))
#define  PCID_PCID2_POLARITY_G_1_get_g_po_line2(data)                            ((0xFFFF0000&(data))>>16)
#define  PCID_PCID2_POLARITY_G_1_get_g_po_line1(data)                            (0x0000FFFF&(data))

#define  PCID_PCID2_POLARITY_G_2                                                0x1802EF84
#define  PCID_PCID2_POLARITY_G_2_reg_addr                                        "0xB802EF84"
#define  PCID_PCID2_POLARITY_G_2_reg                                             0xB802EF84
#define  PCID_PCID2_POLARITY_G_2_inst_addr                                       "0x000C"
#define  set_PCID_PCID2_POLARITY_G_2_reg(data)                                   (*((volatile unsigned int*)PCID_PCID2_POLARITY_G_2_reg)=data)
#define  get_PCID_PCID2_POLARITY_G_2_reg                                         (*((volatile unsigned int*)PCID_PCID2_POLARITY_G_2_reg))
#define  PCID_PCID2_POLARITY_G_2_g_po_line4_shift                                (16)
#define  PCID_PCID2_POLARITY_G_2_g_po_line3_shift                                (0)
#define  PCID_PCID2_POLARITY_G_2_g_po_line4_mask                                 (0xFFFF0000)
#define  PCID_PCID2_POLARITY_G_2_g_po_line3_mask                                 (0x0000FFFF)
#define  PCID_PCID2_POLARITY_G_2_g_po_line4(data)                                (0xFFFF0000&((data)<<16))
#define  PCID_PCID2_POLARITY_G_2_g_po_line3(data)                                (0x0000FFFF&(data))
#define  PCID_PCID2_POLARITY_G_2_get_g_po_line4(data)                            ((0xFFFF0000&(data))>>16)
#define  PCID_PCID2_POLARITY_G_2_get_g_po_line3(data)                            (0x0000FFFF&(data))

#define  PCID_PCID2_POLARITY_G_3                                                0x1802EF88
#define  PCID_PCID2_POLARITY_G_3_reg_addr                                        "0xB802EF88"
#define  PCID_PCID2_POLARITY_G_3_reg                                             0xB802EF88
#define  PCID_PCID2_POLARITY_G_3_inst_addr                                       "0x000D"
#define  set_PCID_PCID2_POLARITY_G_3_reg(data)                                   (*((volatile unsigned int*)PCID_PCID2_POLARITY_G_3_reg)=data)
#define  get_PCID_PCID2_POLARITY_G_3_reg                                         (*((volatile unsigned int*)PCID_PCID2_POLARITY_G_3_reg))
#define  PCID_PCID2_POLARITY_G_3_g_po_line6_shift                                (16)
#define  PCID_PCID2_POLARITY_G_3_g_po_line5_shift                                (0)
#define  PCID_PCID2_POLARITY_G_3_g_po_line6_mask                                 (0xFFFF0000)
#define  PCID_PCID2_POLARITY_G_3_g_po_line5_mask                                 (0x0000FFFF)
#define  PCID_PCID2_POLARITY_G_3_g_po_line6(data)                                (0xFFFF0000&((data)<<16))
#define  PCID_PCID2_POLARITY_G_3_g_po_line5(data)                                (0x0000FFFF&(data))
#define  PCID_PCID2_POLARITY_G_3_get_g_po_line6(data)                            ((0xFFFF0000&(data))>>16)
#define  PCID_PCID2_POLARITY_G_3_get_g_po_line5(data)                            (0x0000FFFF&(data))

#define  PCID_PCID2_POLARITY_G_4                                                0x1802EF8C
#define  PCID_PCID2_POLARITY_G_4_reg_addr                                        "0xB802EF8C"
#define  PCID_PCID2_POLARITY_G_4_reg                                             0xB802EF8C
#define  PCID_PCID2_POLARITY_G_4_inst_addr                                       "0x000E"
#define  set_PCID_PCID2_POLARITY_G_4_reg(data)                                   (*((volatile unsigned int*)PCID_PCID2_POLARITY_G_4_reg)=data)
#define  get_PCID_PCID2_POLARITY_G_4_reg                                         (*((volatile unsigned int*)PCID_PCID2_POLARITY_G_4_reg))
#define  PCID_PCID2_POLARITY_G_4_g_po_line8_shift                                (16)
#define  PCID_PCID2_POLARITY_G_4_g_po_line7_shift                                (0)
#define  PCID_PCID2_POLARITY_G_4_g_po_line8_mask                                 (0xFFFF0000)
#define  PCID_PCID2_POLARITY_G_4_g_po_line7_mask                                 (0x0000FFFF)
#define  PCID_PCID2_POLARITY_G_4_g_po_line8(data)                                (0xFFFF0000&((data)<<16))
#define  PCID_PCID2_POLARITY_G_4_g_po_line7(data)                                (0x0000FFFF&(data))
#define  PCID_PCID2_POLARITY_G_4_get_g_po_line8(data)                            ((0xFFFF0000&(data))>>16)
#define  PCID_PCID2_POLARITY_G_4_get_g_po_line7(data)                            (0x0000FFFF&(data))

#define  PCID_PCID2_POLARITY_B_1                                                0x1802EF90
#define  PCID_PCID2_POLARITY_B_1_reg_addr                                        "0xB802EF90"
#define  PCID_PCID2_POLARITY_B_1_reg                                             0xB802EF90
#define  PCID_PCID2_POLARITY_B_1_inst_addr                                       "0x000F"
#define  set_PCID_PCID2_POLARITY_B_1_reg(data)                                   (*((volatile unsigned int*)PCID_PCID2_POLARITY_B_1_reg)=data)
#define  get_PCID_PCID2_POLARITY_B_1_reg                                         (*((volatile unsigned int*)PCID_PCID2_POLARITY_B_1_reg))
#define  PCID_PCID2_POLARITY_B_1_b_po_line2_shift                                (16)
#define  PCID_PCID2_POLARITY_B_1_b_po_line1_shift                                (0)
#define  PCID_PCID2_POLARITY_B_1_b_po_line2_mask                                 (0xFFFF0000)
#define  PCID_PCID2_POLARITY_B_1_b_po_line1_mask                                 (0x0000FFFF)
#define  PCID_PCID2_POLARITY_B_1_b_po_line2(data)                                (0xFFFF0000&((data)<<16))
#define  PCID_PCID2_POLARITY_B_1_b_po_line1(data)                                (0x0000FFFF&(data))
#define  PCID_PCID2_POLARITY_B_1_get_b_po_line2(data)                            ((0xFFFF0000&(data))>>16)
#define  PCID_PCID2_POLARITY_B_1_get_b_po_line1(data)                            (0x0000FFFF&(data))

#define  PCID_PCID2_POLARITY_B_2                                                0x1802EF94
#define  PCID_PCID2_POLARITY_B_2_reg_addr                                        "0xB802EF94"
#define  PCID_PCID2_POLARITY_B_2_reg                                             0xB802EF94
#define  PCID_PCID2_POLARITY_B_2_inst_addr                                       "0x0010"
#define  set_PCID_PCID2_POLARITY_B_2_reg(data)                                   (*((volatile unsigned int*)PCID_PCID2_POLARITY_B_2_reg)=data)
#define  get_PCID_PCID2_POLARITY_B_2_reg                                         (*((volatile unsigned int*)PCID_PCID2_POLARITY_B_2_reg))
#define  PCID_PCID2_POLARITY_B_2_b_po_line4_shift                                (16)
#define  PCID_PCID2_POLARITY_B_2_b_po_line3_shift                                (0)
#define  PCID_PCID2_POLARITY_B_2_b_po_line4_mask                                 (0xFFFF0000)
#define  PCID_PCID2_POLARITY_B_2_b_po_line3_mask                                 (0x0000FFFF)
#define  PCID_PCID2_POLARITY_B_2_b_po_line4(data)                                (0xFFFF0000&((data)<<16))
#define  PCID_PCID2_POLARITY_B_2_b_po_line3(data)                                (0x0000FFFF&(data))
#define  PCID_PCID2_POLARITY_B_2_get_b_po_line4(data)                            ((0xFFFF0000&(data))>>16)
#define  PCID_PCID2_POLARITY_B_2_get_b_po_line3(data)                            (0x0000FFFF&(data))

#define  PCID_PCID2_POLARITY_B_3                                                0x1802EF98
#define  PCID_PCID2_POLARITY_B_3_reg_addr                                        "0xB802EF98"
#define  PCID_PCID2_POLARITY_B_3_reg                                             0xB802EF98
#define  PCID_PCID2_POLARITY_B_3_inst_addr                                       "0x0011"
#define  set_PCID_PCID2_POLARITY_B_3_reg(data)                                   (*((volatile unsigned int*)PCID_PCID2_POLARITY_B_3_reg)=data)
#define  get_PCID_PCID2_POLARITY_B_3_reg                                         (*((volatile unsigned int*)PCID_PCID2_POLARITY_B_3_reg))
#define  PCID_PCID2_POLARITY_B_3_b_po_line6_shift                                (16)
#define  PCID_PCID2_POLARITY_B_3_b_po_line5_shift                                (0)
#define  PCID_PCID2_POLARITY_B_3_b_po_line6_mask                                 (0xFFFF0000)
#define  PCID_PCID2_POLARITY_B_3_b_po_line5_mask                                 (0x0000FFFF)
#define  PCID_PCID2_POLARITY_B_3_b_po_line6(data)                                (0xFFFF0000&((data)<<16))
#define  PCID_PCID2_POLARITY_B_3_b_po_line5(data)                                (0x0000FFFF&(data))
#define  PCID_PCID2_POLARITY_B_3_get_b_po_line6(data)                            ((0xFFFF0000&(data))>>16)
#define  PCID_PCID2_POLARITY_B_3_get_b_po_line5(data)                            (0x0000FFFF&(data))

#define  PCID_PCID2_POLARITY_B_4                                                0x1802EF9C
#define  PCID_PCID2_POLARITY_B_4_reg_addr                                        "0xB802EF9C"
#define  PCID_PCID2_POLARITY_B_4_reg                                             0xB802EF9C
#define  PCID_PCID2_POLARITY_B_4_inst_addr                                       "0x0012"
#define  set_PCID_PCID2_POLARITY_B_4_reg(data)                                   (*((volatile unsigned int*)PCID_PCID2_POLARITY_B_4_reg)=data)
#define  get_PCID_PCID2_POLARITY_B_4_reg                                         (*((volatile unsigned int*)PCID_PCID2_POLARITY_B_4_reg))
#define  PCID_PCID2_POLARITY_B_4_b_po_line8_shift                                (16)
#define  PCID_PCID2_POLARITY_B_4_b_po_line7_shift                                (0)
#define  PCID_PCID2_POLARITY_B_4_b_po_line8_mask                                 (0xFFFF0000)
#define  PCID_PCID2_POLARITY_B_4_b_po_line7_mask                                 (0x0000FFFF)
#define  PCID_PCID2_POLARITY_B_4_b_po_line8(data)                                (0xFFFF0000&((data)<<16))
#define  PCID_PCID2_POLARITY_B_4_b_po_line7(data)                                (0x0000FFFF&(data))
#define  PCID_PCID2_POLARITY_B_4_get_b_po_line8(data)                            ((0xFFFF0000&(data))>>16)
#define  PCID_PCID2_POLARITY_B_4_get_b_po_line7(data)                            (0x0000FFFF&(data))

#define  PCID_PCID_VALC_CTRL                                                    0x1802EFA0
#define  PCID_PCID_VALC_CTRL_reg_addr                                            "0xB802EFA0"
#define  PCID_PCID_VALC_CTRL_reg                                                 0xB802EFA0
#define  PCID_PCID_VALC_CTRL_inst_addr                                           "0x0013"
#define  set_PCID_PCID_VALC_CTRL_reg(data)                                       (*((volatile unsigned int*)PCID_PCID_VALC_CTRL_reg)=data)
#define  get_PCID_PCID_VALC_CTRL_reg                                             (*((volatile unsigned int*)PCID_PCID_VALC_CTRL_reg))
#define  PCID_PCID_VALC_CTRL_dummy_31_12_shift                                   (12)
#define  PCID_PCID_VALC_CTRL_valc_dbg_region_shift                               (8)
#define  PCID_PCID_VALC_CTRL_valc_dbg_sel_shift                                  (4)
#define  PCID_PCID_VALC_CTRL_valc_hpf_clip_shift                                 (1)
#define  PCID_PCID_VALC_CTRL_valc_en_shift                                       (0)
#define  PCID_PCID_VALC_CTRL_dummy_31_12_mask                                    (0xFFFFF000)
#define  PCID_PCID_VALC_CTRL_valc_dbg_region_mask                                (0x00000F00)
#define  PCID_PCID_VALC_CTRL_valc_dbg_sel_mask                                   (0x00000030)
#define  PCID_PCID_VALC_CTRL_valc_hpf_clip_mask                                  (0x00000006)
#define  PCID_PCID_VALC_CTRL_valc_en_mask                                        (0x00000001)
#define  PCID_PCID_VALC_CTRL_dummy_31_12(data)                                   (0xFFFFF000&((data)<<12))
#define  PCID_PCID_VALC_CTRL_valc_dbg_region(data)                               (0x00000F00&((data)<<8))
#define  PCID_PCID_VALC_CTRL_valc_dbg_sel(data)                                  (0x00000030&((data)<<4))
#define  PCID_PCID_VALC_CTRL_valc_hpf_clip(data)                                 (0x00000006&((data)<<1))
#define  PCID_PCID_VALC_CTRL_valc_en(data)                                       (0x00000001&(data))
#define  PCID_PCID_VALC_CTRL_get_dummy_31_12(data)                               ((0xFFFFF000&(data))>>12)
#define  PCID_PCID_VALC_CTRL_get_valc_dbg_region(data)                           ((0x00000F00&(data))>>8)
#define  PCID_PCID_VALC_CTRL_get_valc_dbg_sel(data)                              ((0x00000030&(data))>>4)
#define  PCID_PCID_VALC_CTRL_get_valc_hpf_clip(data)                             ((0x00000006&(data))>>1)
#define  PCID_PCID_VALC_CTRL_get_valc_en(data)                                   (0x00000001&(data))

#define  PCID_PCID_VALC_HPF_0                                                   0x1802EFA4
#define  PCID_PCID_VALC_HPF_0_reg_addr                                           "0xB802EFA4"
#define  PCID_PCID_VALC_HPF_0_reg                                                0xB802EFA4
#define  PCID_PCID_VALC_HPF_0_inst_addr                                          "0x0014"
#define  set_PCID_PCID_VALC_HPF_0_reg(data)                                      (*((volatile unsigned int*)PCID_PCID_VALC_HPF_0_reg)=data)
#define  get_PCID_PCID_VALC_HPF_0_reg                                            (*((volatile unsigned int*)PCID_PCID_VALC_HPF_0_reg))
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w15_shift                                 (28)
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w14_shift                                 (24)
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w13_shift                                 (20)
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w12_shift                                 (16)
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w11_shift                                 (12)
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w10_shift                                 (8)
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w9_shift                                  (4)
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w8_shift                                  (0)
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w15_mask                                  (0xF0000000)
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w14_mask                                  (0x0F000000)
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w13_mask                                  (0x00F00000)
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w12_mask                                  (0x000F0000)
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w11_mask                                  (0x0000F000)
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w10_mask                                  (0x00000F00)
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w9_mask                                   (0x000000F0)
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w8_mask                                   (0x0000000F)
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w15(data)                                 (0xF0000000&((data)<<28))
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w14(data)                                 (0x0F000000&((data)<<24))
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w13(data)                                 (0x00F00000&((data)<<20))
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w12(data)                                 (0x000F0000&((data)<<16))
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w11(data)                                 (0x0000F000&((data)<<12))
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w10(data)                                 (0x00000F00&((data)<<8))
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w9(data)                                  (0x000000F0&((data)<<4))
#define  PCID_PCID_VALC_HPF_0_valc_hpf_w8(data)                                  (0x0000000F&(data))
#define  PCID_PCID_VALC_HPF_0_get_valc_hpf_w15(data)                             ((0xF0000000&(data))>>28)
#define  PCID_PCID_VALC_HPF_0_get_valc_hpf_w14(data)                             ((0x0F000000&(data))>>24)
#define  PCID_PCID_VALC_HPF_0_get_valc_hpf_w13(data)                             ((0x00F00000&(data))>>20)
#define  PCID_PCID_VALC_HPF_0_get_valc_hpf_w12(data)                             ((0x000F0000&(data))>>16)
#define  PCID_PCID_VALC_HPF_0_get_valc_hpf_w11(data)                             ((0x0000F000&(data))>>12)
#define  PCID_PCID_VALC_HPF_0_get_valc_hpf_w10(data)                             ((0x00000F00&(data))>>8)
#define  PCID_PCID_VALC_HPF_0_get_valc_hpf_w9(data)                              ((0x000000F0&(data))>>4)
#define  PCID_PCID_VALC_HPF_0_get_valc_hpf_w8(data)                              (0x0000000F&(data))

#define  PCID_PCID_VALC_HPF_1                                                   0x1802EFA8
#define  PCID_PCID_VALC_HPF_1_reg_addr                                           "0xB802EFA8"
#define  PCID_PCID_VALC_HPF_1_reg                                                0xB802EFA8
#define  PCID_PCID_VALC_HPF_1_inst_addr                                          "0x0015"
#define  set_PCID_PCID_VALC_HPF_1_reg(data)                                      (*((volatile unsigned int*)PCID_PCID_VALC_HPF_1_reg)=data)
#define  get_PCID_PCID_VALC_HPF_1_reg                                            (*((volatile unsigned int*)PCID_PCID_VALC_HPF_1_reg))
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w7_shift                                  (28)
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w6_shift                                  (24)
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w5_shift                                  (20)
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w4_shift                                  (16)
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w3_shift                                  (12)
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w2_shift                                  (8)
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w1_shift                                  (4)
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w0_shift                                  (0)
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w7_mask                                   (0xF0000000)
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w6_mask                                   (0x0F000000)
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w5_mask                                   (0x00F00000)
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w4_mask                                   (0x000F0000)
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w3_mask                                   (0x0000F000)
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w2_mask                                   (0x00000F00)
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w1_mask                                   (0x000000F0)
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w0_mask                                   (0x0000000F)
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w7(data)                                  (0xF0000000&((data)<<28))
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w6(data)                                  (0x0F000000&((data)<<24))
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w5(data)                                  (0x00F00000&((data)<<20))
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w4(data)                                  (0x000F0000&((data)<<16))
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w3(data)                                  (0x0000F000&((data)<<12))
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w2(data)                                  (0x00000F00&((data)<<8))
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w1(data)                                  (0x000000F0&((data)<<4))
#define  PCID_PCID_VALC_HPF_1_valc_hpf_w0(data)                                  (0x0000000F&(data))
#define  PCID_PCID_VALC_HPF_1_get_valc_hpf_w7(data)                              ((0xF0000000&(data))>>28)
#define  PCID_PCID_VALC_HPF_1_get_valc_hpf_w6(data)                              ((0x0F000000&(data))>>24)
#define  PCID_PCID_VALC_HPF_1_get_valc_hpf_w5(data)                              ((0x00F00000&(data))>>20)
#define  PCID_PCID_VALC_HPF_1_get_valc_hpf_w4(data)                              ((0x000F0000&(data))>>16)
#define  PCID_PCID_VALC_HPF_1_get_valc_hpf_w3(data)                              ((0x0000F000&(data))>>12)
#define  PCID_PCID_VALC_HPF_1_get_valc_hpf_w2(data)                              ((0x00000F00&(data))>>8)
#define  PCID_PCID_VALC_HPF_1_get_valc_hpf_w1(data)                              ((0x000000F0&(data))>>4)
#define  PCID_PCID_VALC_HPF_1_get_valc_hpf_w0(data)                              (0x0000000F&(data))

#define  PCID_PCID_VALC_SAT_0                                                   0x1802EFAC
#define  PCID_PCID_VALC_SAT_0_reg_addr                                           "0xB802EFAC"
#define  PCID_PCID_VALC_SAT_0_reg                                                0xB802EFAC
#define  PCID_PCID_VALC_SAT_0_inst_addr                                          "0x0016"
#define  set_PCID_PCID_VALC_SAT_0_reg(data)                                      (*((volatile unsigned int*)PCID_PCID_VALC_SAT_0_reg)=data)
#define  get_PCID_PCID_VALC_SAT_0_reg                                            (*((volatile unsigned int*)PCID_PCID_VALC_SAT_0_reg))
#define  PCID_PCID_VALC_SAT_0_valc_sat_w15_shift                                 (28)
#define  PCID_PCID_VALC_SAT_0_valc_sat_w14_shift                                 (24)
#define  PCID_PCID_VALC_SAT_0_valc_sat_w13_shift                                 (20)
#define  PCID_PCID_VALC_SAT_0_valc_sat_w12_shift                                 (16)
#define  PCID_PCID_VALC_SAT_0_valc_sat_w11_shift                                 (12)
#define  PCID_PCID_VALC_SAT_0_valc_sat_w10_shift                                 (8)
#define  PCID_PCID_VALC_SAT_0_valc_sat_w9_shift                                  (4)
#define  PCID_PCID_VALC_SAT_0_valc_sat_w8_shift                                  (0)
#define  PCID_PCID_VALC_SAT_0_valc_sat_w15_mask                                  (0xF0000000)
#define  PCID_PCID_VALC_SAT_0_valc_sat_w14_mask                                  (0x0F000000)
#define  PCID_PCID_VALC_SAT_0_valc_sat_w13_mask                                  (0x00F00000)
#define  PCID_PCID_VALC_SAT_0_valc_sat_w12_mask                                  (0x000F0000)
#define  PCID_PCID_VALC_SAT_0_valc_sat_w11_mask                                  (0x0000F000)
#define  PCID_PCID_VALC_SAT_0_valc_sat_w10_mask                                  (0x00000F00)
#define  PCID_PCID_VALC_SAT_0_valc_sat_w9_mask                                   (0x000000F0)
#define  PCID_PCID_VALC_SAT_0_valc_sat_w8_mask                                   (0x0000000F)
#define  PCID_PCID_VALC_SAT_0_valc_sat_w15(data)                                 (0xF0000000&((data)<<28))
#define  PCID_PCID_VALC_SAT_0_valc_sat_w14(data)                                 (0x0F000000&((data)<<24))
#define  PCID_PCID_VALC_SAT_0_valc_sat_w13(data)                                 (0x00F00000&((data)<<20))
#define  PCID_PCID_VALC_SAT_0_valc_sat_w12(data)                                 (0x000F0000&((data)<<16))
#define  PCID_PCID_VALC_SAT_0_valc_sat_w11(data)                                 (0x0000F000&((data)<<12))
#define  PCID_PCID_VALC_SAT_0_valc_sat_w10(data)                                 (0x00000F00&((data)<<8))
#define  PCID_PCID_VALC_SAT_0_valc_sat_w9(data)                                  (0x000000F0&((data)<<4))
#define  PCID_PCID_VALC_SAT_0_valc_sat_w8(data)                                  (0x0000000F&(data))
#define  PCID_PCID_VALC_SAT_0_get_valc_sat_w15(data)                             ((0xF0000000&(data))>>28)
#define  PCID_PCID_VALC_SAT_0_get_valc_sat_w14(data)                             ((0x0F000000&(data))>>24)
#define  PCID_PCID_VALC_SAT_0_get_valc_sat_w13(data)                             ((0x00F00000&(data))>>20)
#define  PCID_PCID_VALC_SAT_0_get_valc_sat_w12(data)                             ((0x000F0000&(data))>>16)
#define  PCID_PCID_VALC_SAT_0_get_valc_sat_w11(data)                             ((0x0000F000&(data))>>12)
#define  PCID_PCID_VALC_SAT_0_get_valc_sat_w10(data)                             ((0x00000F00&(data))>>8)
#define  PCID_PCID_VALC_SAT_0_get_valc_sat_w9(data)                              ((0x000000F0&(data))>>4)
#define  PCID_PCID_VALC_SAT_0_get_valc_sat_w8(data)                              (0x0000000F&(data))

#define  PCID_PCID_VALC_SAT_1                                                   0x1802EFB0
#define  PCID_PCID_VALC_SAT_1_reg_addr                                           "0xB802EFB0"
#define  PCID_PCID_VALC_SAT_1_reg                                                0xB802EFB0
#define  PCID_PCID_VALC_SAT_1_inst_addr                                          "0x0017"
#define  set_PCID_PCID_VALC_SAT_1_reg(data)                                      (*((volatile unsigned int*)PCID_PCID_VALC_SAT_1_reg)=data)
#define  get_PCID_PCID_VALC_SAT_1_reg                                            (*((volatile unsigned int*)PCID_PCID_VALC_SAT_1_reg))
#define  PCID_PCID_VALC_SAT_1_valc_sat_w7_shift                                  (28)
#define  PCID_PCID_VALC_SAT_1_valc_sat_w6_shift                                  (24)
#define  PCID_PCID_VALC_SAT_1_valc_sat_w5_shift                                  (20)
#define  PCID_PCID_VALC_SAT_1_valc_sat_w4_shift                                  (16)
#define  PCID_PCID_VALC_SAT_1_valc_sat_w3_shift                                  (12)
#define  PCID_PCID_VALC_SAT_1_valc_sat_w2_shift                                  (8)
#define  PCID_PCID_VALC_SAT_1_valc_sat_w1_shift                                  (4)
#define  PCID_PCID_VALC_SAT_1_valc_sat_w0_shift                                  (0)
#define  PCID_PCID_VALC_SAT_1_valc_sat_w7_mask                                   (0xF0000000)
#define  PCID_PCID_VALC_SAT_1_valc_sat_w6_mask                                   (0x0F000000)
#define  PCID_PCID_VALC_SAT_1_valc_sat_w5_mask                                   (0x00F00000)
#define  PCID_PCID_VALC_SAT_1_valc_sat_w4_mask                                   (0x000F0000)
#define  PCID_PCID_VALC_SAT_1_valc_sat_w3_mask                                   (0x0000F000)
#define  PCID_PCID_VALC_SAT_1_valc_sat_w2_mask                                   (0x00000F00)
#define  PCID_PCID_VALC_SAT_1_valc_sat_w1_mask                                   (0x000000F0)
#define  PCID_PCID_VALC_SAT_1_valc_sat_w0_mask                                   (0x0000000F)
#define  PCID_PCID_VALC_SAT_1_valc_sat_w7(data)                                  (0xF0000000&((data)<<28))
#define  PCID_PCID_VALC_SAT_1_valc_sat_w6(data)                                  (0x0F000000&((data)<<24))
#define  PCID_PCID_VALC_SAT_1_valc_sat_w5(data)                                  (0x00F00000&((data)<<20))
#define  PCID_PCID_VALC_SAT_1_valc_sat_w4(data)                                  (0x000F0000&((data)<<16))
#define  PCID_PCID_VALC_SAT_1_valc_sat_w3(data)                                  (0x0000F000&((data)<<12))
#define  PCID_PCID_VALC_SAT_1_valc_sat_w2(data)                                  (0x00000F00&((data)<<8))
#define  PCID_PCID_VALC_SAT_1_valc_sat_w1(data)                                  (0x000000F0&((data)<<4))
#define  PCID_PCID_VALC_SAT_1_valc_sat_w0(data)                                  (0x0000000F&(data))
#define  PCID_PCID_VALC_SAT_1_get_valc_sat_w7(data)                              ((0xF0000000&(data))>>28)
#define  PCID_PCID_VALC_SAT_1_get_valc_sat_w6(data)                              ((0x0F000000&(data))>>24)
#define  PCID_PCID_VALC_SAT_1_get_valc_sat_w5(data)                              ((0x00F00000&(data))>>20)
#define  PCID_PCID_VALC_SAT_1_get_valc_sat_w4(data)                              ((0x000F0000&(data))>>16)
#define  PCID_PCID_VALC_SAT_1_get_valc_sat_w3(data)                              ((0x0000F000&(data))>>12)
#define  PCID_PCID_VALC_SAT_1_get_valc_sat_w2(data)                              ((0x00000F00&(data))>>8)
#define  PCID_PCID_VALC_SAT_1_get_valc_sat_w1(data)                              ((0x000000F0&(data))>>4)
#define  PCID_PCID_VALC_SAT_1_get_valc_sat_w0(data)                              (0x0000000F&(data))

#define  PCID_PCID_RM                                                           0x1802EFB4
#define  PCID_PCID_RM_reg_addr                                                   "0xB802EFB4"
#define  PCID_PCID_RM_reg                                                        0xB802EFB4
#define  PCID_PCID_RM_inst_addr                                                  "0x0018"
#define  set_PCID_PCID_RM_reg(data)                                              (*((volatile unsigned int*)PCID_PCID_RM_reg)=data)
#define  get_PCID_PCID_RM_reg                                                    (*((volatile unsigned int*)PCID_PCID_RM_reg))
#define  PCID_PCID_RM_pcid_tab_test1_2_shift                                     (30)
#define  PCID_PCID_RM_pcid_tab_test1_1_shift                                     (29)
#define  PCID_PCID_RM_pcid_tab_test1_0_shift                                     (28)
#define  PCID_PCID_RM_pcid_tab_rm_2_shift                                        (24)
#define  PCID_PCID_RM_pcid_tab_rm_1_shift                                        (20)
#define  PCID_PCID_RM_pcid_tab_rm_0_shift                                        (16)
#define  PCID_PCID_RM_pcid_lb_test1_shift                                        (4)
#define  PCID_PCID_RM_pcid_lb_rm_shift                                           (0)
#define  PCID_PCID_RM_pcid_tab_test1_2_mask                                      (0x40000000)
#define  PCID_PCID_RM_pcid_tab_test1_1_mask                                      (0x20000000)
#define  PCID_PCID_RM_pcid_tab_test1_0_mask                                      (0x10000000)
#define  PCID_PCID_RM_pcid_tab_rm_2_mask                                         (0x0F000000)
#define  PCID_PCID_RM_pcid_tab_rm_1_mask                                         (0x00F00000)
#define  PCID_PCID_RM_pcid_tab_rm_0_mask                                         (0x000F0000)
#define  PCID_PCID_RM_pcid_lb_test1_mask                                         (0x00000010)
#define  PCID_PCID_RM_pcid_lb_rm_mask                                            (0x0000000F)
#define  PCID_PCID_RM_pcid_tab_test1_2(data)                                     (0x40000000&((data)<<30))
#define  PCID_PCID_RM_pcid_tab_test1_1(data)                                     (0x20000000&((data)<<29))
#define  PCID_PCID_RM_pcid_tab_test1_0(data)                                     (0x10000000&((data)<<28))
#define  PCID_PCID_RM_pcid_tab_rm_2(data)                                        (0x0F000000&((data)<<24))
#define  PCID_PCID_RM_pcid_tab_rm_1(data)                                        (0x00F00000&((data)<<20))
#define  PCID_PCID_RM_pcid_tab_rm_0(data)                                        (0x000F0000&((data)<<16))
#define  PCID_PCID_RM_pcid_lb_test1(data)                                        (0x00000010&((data)<<4))
#define  PCID_PCID_RM_pcid_lb_rm(data)                                           (0x0000000F&(data))
#define  PCID_PCID_RM_get_pcid_tab_test1_2(data)                                 ((0x40000000&(data))>>30)
#define  PCID_PCID_RM_get_pcid_tab_test1_1(data)                                 ((0x20000000&(data))>>29)
#define  PCID_PCID_RM_get_pcid_tab_test1_0(data)                                 ((0x10000000&(data))>>28)
#define  PCID_PCID_RM_get_pcid_tab_rm_2(data)                                    ((0x0F000000&(data))>>24)
#define  PCID_PCID_RM_get_pcid_tab_rm_1(data)                                    ((0x00F00000&(data))>>20)
#define  PCID_PCID_RM_get_pcid_tab_rm_0(data)                                    ((0x000F0000&(data))>>16)
#define  PCID_PCID_RM_get_pcid_lb_test1(data)                                    ((0x00000010&(data))>>4)
#define  PCID_PCID_RM_get_pcid_lb_rm(data)                                       (0x0000000F&(data))

#define  PCID_PCID_RME_LS                                                       0x1802EFB8
#define  PCID_PCID_RME_LS_reg_addr                                               "0xB802EFB8"
#define  PCID_PCID_RME_LS_reg                                                    0xB802EFB8
#define  PCID_PCID_RME_LS_inst_addr                                              "0x0019"
#define  set_PCID_PCID_RME_LS_reg(data)                                          (*((volatile unsigned int*)PCID_PCID_RME_LS_reg)=data)
#define  get_PCID_PCID_RME_LS_reg                                                (*((volatile unsigned int*)PCID_PCID_RME_LS_reg))
#define  PCID_PCID_RME_LS_pcid_tab_ls_2_shift                                    (22)
#define  PCID_PCID_RME_LS_pcid_tab_ls_1_shift                                    (21)
#define  PCID_PCID_RME_LS_pcid_tab_ls_0_shift                                    (20)
#define  PCID_PCID_RME_LS_pcid_lb_ls_shift                                       (16)
#define  PCID_PCID_RME_LS_pcid_tab_rme_2_shift                                   (6)
#define  PCID_PCID_RME_LS_pcid_tab_rme_1_shift                                   (5)
#define  PCID_PCID_RME_LS_pcid_tab_rme_0_shift                                   (4)
#define  PCID_PCID_RME_LS_pcid_lb_rme_shift                                      (0)
#define  PCID_PCID_RME_LS_pcid_tab_ls_2_mask                                     (0x00400000)
#define  PCID_PCID_RME_LS_pcid_tab_ls_1_mask                                     (0x00200000)
#define  PCID_PCID_RME_LS_pcid_tab_ls_0_mask                                     (0x00100000)
#define  PCID_PCID_RME_LS_pcid_lb_ls_mask                                        (0x00010000)
#define  PCID_PCID_RME_LS_pcid_tab_rme_2_mask                                    (0x00000040)
#define  PCID_PCID_RME_LS_pcid_tab_rme_1_mask                                    (0x00000020)
#define  PCID_PCID_RME_LS_pcid_tab_rme_0_mask                                    (0x00000010)
#define  PCID_PCID_RME_LS_pcid_lb_rme_mask                                       (0x00000001)
#define  PCID_PCID_RME_LS_pcid_tab_ls_2(data)                                    (0x00400000&((data)<<22))
#define  PCID_PCID_RME_LS_pcid_tab_ls_1(data)                                    (0x00200000&((data)<<21))
#define  PCID_PCID_RME_LS_pcid_tab_ls_0(data)                                    (0x00100000&((data)<<20))
#define  PCID_PCID_RME_LS_pcid_lb_ls(data)                                       (0x00010000&((data)<<16))
#define  PCID_PCID_RME_LS_pcid_tab_rme_2(data)                                   (0x00000040&((data)<<6))
#define  PCID_PCID_RME_LS_pcid_tab_rme_1(data)                                   (0x00000020&((data)<<5))
#define  PCID_PCID_RME_LS_pcid_tab_rme_0(data)                                   (0x00000010&((data)<<4))
#define  PCID_PCID_RME_LS_pcid_lb_rme(data)                                      (0x00000001&(data))
#define  PCID_PCID_RME_LS_get_pcid_tab_ls_2(data)                                ((0x00400000&(data))>>22)
#define  PCID_PCID_RME_LS_get_pcid_tab_ls_1(data)                                ((0x00200000&(data))>>21)
#define  PCID_PCID_RME_LS_get_pcid_tab_ls_0(data)                                ((0x00100000&(data))>>20)
#define  PCID_PCID_RME_LS_get_pcid_lb_ls(data)                                   ((0x00010000&(data))>>16)
#define  PCID_PCID_RME_LS_get_pcid_tab_rme_2(data)                               ((0x00000040&(data))>>6)
#define  PCID_PCID_RME_LS_get_pcid_tab_rme_1(data)                               ((0x00000020&(data))>>5)
#define  PCID_PCID_RME_LS_get_pcid_tab_rme_0(data)                               ((0x00000010&(data))>>4)
#define  PCID_PCID_RME_LS_get_pcid_lb_rme(data)                                  (0x00000001&(data))

#define  PCID_PCID_FAIL                                                         0x1802EFBC
#define  PCID_PCID_FAIL_reg_addr                                                 "0xB802EFBC"
#define  PCID_PCID_FAIL_reg                                                      0xB802EFBC
#define  PCID_PCID_FAIL_inst_addr                                                "0x001A"
#define  set_PCID_PCID_FAIL_reg(data)                                            (*((volatile unsigned int*)PCID_PCID_FAIL_reg)=data)
#define  get_PCID_PCID_FAIL_reg                                                  (*((volatile unsigned int*)PCID_PCID_FAIL_reg))
#define  PCID_PCID_FAIL_tab_drf_fail_11_shift                                    (29)
#define  PCID_PCID_FAIL_tab_drf_fail_10_shift                                    (28)
#define  PCID_PCID_FAIL_tab_drf_fail_9_shift                                     (27)
#define  PCID_PCID_FAIL_tab_drf_fail_8_shift                                     (26)
#define  PCID_PCID_FAIL_tab_drf_fail_7_shift                                     (25)
#define  PCID_PCID_FAIL_tab_drf_fail_6_shift                                     (24)
#define  PCID_PCID_FAIL_tab_drf_fail_5_shift                                     (23)
#define  PCID_PCID_FAIL_tab_drf_fail_4_shift                                     (22)
#define  PCID_PCID_FAIL_tab_drf_fail_3_shift                                     (21)
#define  PCID_PCID_FAIL_tab_drf_fail_2_shift                                     (20)
#define  PCID_PCID_FAIL_tab_drf_fail_1_shift                                     (19)
#define  PCID_PCID_FAIL_tab_drf_fail_0_shift                                     (18)
#define  PCID_PCID_FAIL_lb_drf_fail_1_shift                                      (17)
#define  PCID_PCID_FAIL_lb_drf_fail_0_shift                                      (16)
#define  PCID_PCID_FAIL_tab_bist_fail_11_shift                                   (13)
#define  PCID_PCID_FAIL_tab_bist_fail_10_shift                                   (12)
#define  PCID_PCID_FAIL_tab_bist_fail_9_shift                                    (11)
#define  PCID_PCID_FAIL_tab_bist_fail_8_shift                                    (10)
#define  PCID_PCID_FAIL_tab_bist_fail_7_shift                                    (9)
#define  PCID_PCID_FAIL_tab_bist_fail_6_shift                                    (8)
#define  PCID_PCID_FAIL_tab_bist_fail_5_shift                                    (7)
#define  PCID_PCID_FAIL_tab_bist_fail_4_shift                                    (6)
#define  PCID_PCID_FAIL_tab_bist_fail_3_shift                                    (5)
#define  PCID_PCID_FAIL_tab_bist_fail_2_shift                                    (4)
#define  PCID_PCID_FAIL_tab_bist_fail_1_shift                                    (3)
#define  PCID_PCID_FAIL_tab_bist_fail_0_shift                                    (2)
#define  PCID_PCID_FAIL_lb_bist_fail_1_shift                                     (1)
#define  PCID_PCID_FAIL_lb_bist_fail_0_shift                                     (0)
#define  PCID_PCID_FAIL_tab_drf_fail_11_mask                                     (0x20000000)
#define  PCID_PCID_FAIL_tab_drf_fail_10_mask                                     (0x10000000)
#define  PCID_PCID_FAIL_tab_drf_fail_9_mask                                      (0x08000000)
#define  PCID_PCID_FAIL_tab_drf_fail_8_mask                                      (0x04000000)
#define  PCID_PCID_FAIL_tab_drf_fail_7_mask                                      (0x02000000)
#define  PCID_PCID_FAIL_tab_drf_fail_6_mask                                      (0x01000000)
#define  PCID_PCID_FAIL_tab_drf_fail_5_mask                                      (0x00800000)
#define  PCID_PCID_FAIL_tab_drf_fail_4_mask                                      (0x00400000)
#define  PCID_PCID_FAIL_tab_drf_fail_3_mask                                      (0x00200000)
#define  PCID_PCID_FAIL_tab_drf_fail_2_mask                                      (0x00100000)
#define  PCID_PCID_FAIL_tab_drf_fail_1_mask                                      (0x00080000)
#define  PCID_PCID_FAIL_tab_drf_fail_0_mask                                      (0x00040000)
#define  PCID_PCID_FAIL_lb_drf_fail_1_mask                                       (0x00020000)
#define  PCID_PCID_FAIL_lb_drf_fail_0_mask                                       (0x00010000)
#define  PCID_PCID_FAIL_tab_bist_fail_11_mask                                    (0x00002000)
#define  PCID_PCID_FAIL_tab_bist_fail_10_mask                                    (0x00001000)
#define  PCID_PCID_FAIL_tab_bist_fail_9_mask                                     (0x00000800)
#define  PCID_PCID_FAIL_tab_bist_fail_8_mask                                     (0x00000400)
#define  PCID_PCID_FAIL_tab_bist_fail_7_mask                                     (0x00000200)
#define  PCID_PCID_FAIL_tab_bist_fail_6_mask                                     (0x00000100)
#define  PCID_PCID_FAIL_tab_bist_fail_5_mask                                     (0x00000080)
#define  PCID_PCID_FAIL_tab_bist_fail_4_mask                                     (0x00000040)
#define  PCID_PCID_FAIL_tab_bist_fail_3_mask                                     (0x00000020)
#define  PCID_PCID_FAIL_tab_bist_fail_2_mask                                     (0x00000010)
#define  PCID_PCID_FAIL_tab_bist_fail_1_mask                                     (0x00000008)
#define  PCID_PCID_FAIL_tab_bist_fail_0_mask                                     (0x00000004)
#define  PCID_PCID_FAIL_lb_bist_fail_1_mask                                      (0x00000002)
#define  PCID_PCID_FAIL_lb_bist_fail_0_mask                                      (0x00000001)
#define  PCID_PCID_FAIL_tab_drf_fail_11(data)                                    (0x20000000&((data)<<29))
#define  PCID_PCID_FAIL_tab_drf_fail_10(data)                                    (0x10000000&((data)<<28))
#define  PCID_PCID_FAIL_tab_drf_fail_9(data)                                     (0x08000000&((data)<<27))
#define  PCID_PCID_FAIL_tab_drf_fail_8(data)                                     (0x04000000&((data)<<26))
#define  PCID_PCID_FAIL_tab_drf_fail_7(data)                                     (0x02000000&((data)<<25))
#define  PCID_PCID_FAIL_tab_drf_fail_6(data)                                     (0x01000000&((data)<<24))
#define  PCID_PCID_FAIL_tab_drf_fail_5(data)                                     (0x00800000&((data)<<23))
#define  PCID_PCID_FAIL_tab_drf_fail_4(data)                                     (0x00400000&((data)<<22))
#define  PCID_PCID_FAIL_tab_drf_fail_3(data)                                     (0x00200000&((data)<<21))
#define  PCID_PCID_FAIL_tab_drf_fail_2(data)                                     (0x00100000&((data)<<20))
#define  PCID_PCID_FAIL_tab_drf_fail_1(data)                                     (0x00080000&((data)<<19))
#define  PCID_PCID_FAIL_tab_drf_fail_0(data)                                     (0x00040000&((data)<<18))
#define  PCID_PCID_FAIL_lb_drf_fail_1(data)                                      (0x00020000&((data)<<17))
#define  PCID_PCID_FAIL_lb_drf_fail_0(data)                                      (0x00010000&((data)<<16))
#define  PCID_PCID_FAIL_tab_bist_fail_11(data)                                   (0x00002000&((data)<<13))
#define  PCID_PCID_FAIL_tab_bist_fail_10(data)                                   (0x00001000&((data)<<12))
#define  PCID_PCID_FAIL_tab_bist_fail_9(data)                                    (0x00000800&((data)<<11))
#define  PCID_PCID_FAIL_tab_bist_fail_8(data)                                    (0x00000400&((data)<<10))
#define  PCID_PCID_FAIL_tab_bist_fail_7(data)                                    (0x00000200&((data)<<9))
#define  PCID_PCID_FAIL_tab_bist_fail_6(data)                                    (0x00000100&((data)<<8))
#define  PCID_PCID_FAIL_tab_bist_fail_5(data)                                    (0x00000080&((data)<<7))
#define  PCID_PCID_FAIL_tab_bist_fail_4(data)                                    (0x00000040&((data)<<6))
#define  PCID_PCID_FAIL_tab_bist_fail_3(data)                                    (0x00000020&((data)<<5))
#define  PCID_PCID_FAIL_tab_bist_fail_2(data)                                    (0x00000010&((data)<<4))
#define  PCID_PCID_FAIL_tab_bist_fail_1(data)                                    (0x00000008&((data)<<3))
#define  PCID_PCID_FAIL_tab_bist_fail_0(data)                                    (0x00000004&((data)<<2))
#define  PCID_PCID_FAIL_lb_bist_fail_1(data)                                     (0x00000002&((data)<<1))
#define  PCID_PCID_FAIL_lb_bist_fail_0(data)                                     (0x00000001&(data))
#define  PCID_PCID_FAIL_get_tab_drf_fail_11(data)                                ((0x20000000&(data))>>29)
#define  PCID_PCID_FAIL_get_tab_drf_fail_10(data)                                ((0x10000000&(data))>>28)
#define  PCID_PCID_FAIL_get_tab_drf_fail_9(data)                                 ((0x08000000&(data))>>27)
#define  PCID_PCID_FAIL_get_tab_drf_fail_8(data)                                 ((0x04000000&(data))>>26)
#define  PCID_PCID_FAIL_get_tab_drf_fail_7(data)                                 ((0x02000000&(data))>>25)
#define  PCID_PCID_FAIL_get_tab_drf_fail_6(data)                                 ((0x01000000&(data))>>24)
#define  PCID_PCID_FAIL_get_tab_drf_fail_5(data)                                 ((0x00800000&(data))>>23)
#define  PCID_PCID_FAIL_get_tab_drf_fail_4(data)                                 ((0x00400000&(data))>>22)
#define  PCID_PCID_FAIL_get_tab_drf_fail_3(data)                                 ((0x00200000&(data))>>21)
#define  PCID_PCID_FAIL_get_tab_drf_fail_2(data)                                 ((0x00100000&(data))>>20)
#define  PCID_PCID_FAIL_get_tab_drf_fail_1(data)                                 ((0x00080000&(data))>>19)
#define  PCID_PCID_FAIL_get_tab_drf_fail_0(data)                                 ((0x00040000&(data))>>18)
#define  PCID_PCID_FAIL_get_lb_drf_fail_1(data)                                  ((0x00020000&(data))>>17)
#define  PCID_PCID_FAIL_get_lb_drf_fail_0(data)                                  ((0x00010000&(data))>>16)
#define  PCID_PCID_FAIL_get_tab_bist_fail_11(data)                               ((0x00002000&(data))>>13)
#define  PCID_PCID_FAIL_get_tab_bist_fail_10(data)                               ((0x00001000&(data))>>12)
#define  PCID_PCID_FAIL_get_tab_bist_fail_9(data)                                ((0x00000800&(data))>>11)
#define  PCID_PCID_FAIL_get_tab_bist_fail_8(data)                                ((0x00000400&(data))>>10)
#define  PCID_PCID_FAIL_get_tab_bist_fail_7(data)                                ((0x00000200&(data))>>9)
#define  PCID_PCID_FAIL_get_tab_bist_fail_6(data)                                ((0x00000100&(data))>>8)
#define  PCID_PCID_FAIL_get_tab_bist_fail_5(data)                                ((0x00000080&(data))>>7)
#define  PCID_PCID_FAIL_get_tab_bist_fail_4(data)                                ((0x00000040&(data))>>6)
#define  PCID_PCID_FAIL_get_tab_bist_fail_3(data)                                ((0x00000020&(data))>>5)
#define  PCID_PCID_FAIL_get_tab_bist_fail_2(data)                                ((0x00000010&(data))>>4)
#define  PCID_PCID_FAIL_get_tab_bist_fail_1(data)                                ((0x00000008&(data))>>3)
#define  PCID_PCID_FAIL_get_tab_bist_fail_0(data)                                ((0x00000004&(data))>>2)
#define  PCID_PCID_FAIL_get_lb_bist_fail_1(data)                                 ((0x00000002&(data))>>1)
#define  PCID_PCID_FAIL_get_lb_bist_fail_0(data)                                 (0x00000001&(data))

#define  PCID_PCID_TESTRWM                                                      0x1802EFC0
#define  PCID_PCID_TESTRWM_reg_addr                                              "0xB802EFC0"
#define  PCID_PCID_TESTRWM_reg                                                   0xB802EFC0
#define  PCID_PCID_TESTRWM_inst_addr                                             "0x001B"
#define  set_PCID_PCID_TESTRWM_reg(data)                                         (*((volatile unsigned int*)PCID_PCID_TESTRWM_reg)=data)
#define  get_PCID_PCID_TESTRWM_reg                                               (*((volatile unsigned int*)PCID_PCID_TESTRWM_reg))
#define  PCID_PCID_TESTRWM_pcid_lb_testrwm_shift                                 (0)
#define  PCID_PCID_TESTRWM_pcid_lb_testrwm_mask                                  (0x00000001)
#define  PCID_PCID_TESTRWM_pcid_lb_testrwm(data)                                 (0x00000001&(data))
#define  PCID_PCID_TESTRWM_get_pcid_lb_testrwm(data)                             (0x00000001&(data))

#define  PCID_PCID_LUT_ADDR                                                     0x1802EFD0
#define  PCID_PCID_LUT_ADDR_reg_addr                                             "0xB802EFD0"
#define  PCID_PCID_LUT_ADDR_reg                                                  0xB802EFD0
#define  PCID_PCID_LUT_ADDR_inst_addr                                            "0x001C"
#define  set_PCID_PCID_LUT_ADDR_reg(data)                                        (*((volatile unsigned int*)PCID_PCID_LUT_ADDR_reg)=data)
#define  get_PCID_PCID_LUT_ADDR_reg                                              (*((volatile unsigned int*)PCID_PCID_LUT_ADDR_reg))
#define  PCID_PCID_LUT_ADDR_pcid_lut_ax_en_shift                                 (16)
#define  PCID_PCID_LUT_ADDR_pcid_lut_adr_mode_shift                              (14)
#define  PCID_PCID_LUT_ADDR_pcid_lut_sel_shift                                   (12)
#define  PCID_PCID_LUT_ADDR_pcid_lut_row_addr_shift                              (6)
#define  PCID_PCID_LUT_ADDR_pcid_lut_column_addr_shift                           (0)
#define  PCID_PCID_LUT_ADDR_pcid_lut_ax_en_mask                                  (0x00010000)
#define  PCID_PCID_LUT_ADDR_pcid_lut_adr_mode_mask                               (0x00004000)
#define  PCID_PCID_LUT_ADDR_pcid_lut_sel_mask                                    (0x00003000)
#define  PCID_PCID_LUT_ADDR_pcid_lut_row_addr_mask                               (0x00000FC0)
#define  PCID_PCID_LUT_ADDR_pcid_lut_column_addr_mask                            (0x0000003F)
#define  PCID_PCID_LUT_ADDR_pcid_lut_ax_en(data)                                 (0x00010000&((data)<<16))
#define  PCID_PCID_LUT_ADDR_pcid_lut_adr_mode(data)                              (0x00004000&((data)<<14))
#define  PCID_PCID_LUT_ADDR_pcid_lut_sel(data)                                   (0x00003000&((data)<<12))
#define  PCID_PCID_LUT_ADDR_pcid_lut_row_addr(data)                              (0x00000FC0&((data)<<6))
#define  PCID_PCID_LUT_ADDR_pcid_lut_column_addr(data)                           (0x0000003F&(data))
#define  PCID_PCID_LUT_ADDR_get_pcid_lut_ax_en(data)                             ((0x00010000&(data))>>16)
#define  PCID_PCID_LUT_ADDR_get_pcid_lut_adr_mode(data)                          ((0x00004000&(data))>>14)
#define  PCID_PCID_LUT_ADDR_get_pcid_lut_sel(data)                               ((0x00003000&(data))>>12)
#define  PCID_PCID_LUT_ADDR_get_pcid_lut_row_addr(data)                          ((0x00000FC0&(data))>>6)
#define  PCID_PCID_LUT_ADDR_get_pcid_lut_column_addr(data)                       (0x0000003F&(data))

#define  PCID_PCID_LUT_DATA                                                     0x1802EFD4
#define  PCID_PCID_LUT_DATA_reg_addr                                             "0xB802EFD4"
#define  PCID_PCID_LUT_DATA_reg                                                  0xB802EFD4
#define  PCID_PCID_LUT_DATA_inst_addr                                            "0x001D"
#define  set_PCID_PCID_LUT_DATA_reg(data)                                        (*((volatile unsigned int*)PCID_PCID_LUT_DATA_reg)=data)
#define  get_PCID_PCID_LUT_DATA_reg                                              (*((volatile unsigned int*)PCID_PCID_LUT_DATA_reg))
#define  PCID_PCID_LUT_DATA_pcid_lut_data_shift                                  (0)
#define  PCID_PCID_LUT_DATA_pcid_lut_data_mask                                   (0xFFFFFFFF)
#define  PCID_PCID_LUT_DATA_pcid_lut_data(data)                                  (0xFFFFFFFF&(data))
#define  PCID_PCID_LUT_DATA_get_pcid_lut_data(data)                              (0xFFFFFFFF&(data))

#define  PCID_PCID_AccessData_CTRL                                              0x1802EFD8
#define  PCID_PCID_AccessData_CTRL_reg_addr                                      "0xB802EFD8"
#define  PCID_PCID_AccessData_CTRL_reg                                           0xB802EFD8
#define  PCID_PCID_AccessData_CTRL_inst_addr                                     "0x001E"
#define  set_PCID_PCID_AccessData_CTRL_reg(data)                                 (*((volatile unsigned int*)PCID_PCID_AccessData_CTRL_reg)=data)
#define  get_PCID_PCID_AccessData_CTRL_reg                                       (*((volatile unsigned int*)PCID_PCID_AccessData_CTRL_reg))
#define  PCID_PCID_AccessData_CTRL_access_location_sel_shift                     (3)
#define  PCID_PCID_AccessData_CTRL_access_cross_bar_en_shift                     (2)
#define  PCID_PCID_AccessData_CTRL_access_write_en_shift                         (1)
#define  PCID_PCID_AccessData_CTRL_access_read_en_shift                          (0)
#define  PCID_PCID_AccessData_CTRL_access_location_sel_mask                      (0x00000008)
#define  PCID_PCID_AccessData_CTRL_access_cross_bar_en_mask                      (0x00000004)
#define  PCID_PCID_AccessData_CTRL_access_write_en_mask                          (0x00000002)
#define  PCID_PCID_AccessData_CTRL_access_read_en_mask                           (0x00000001)
#define  PCID_PCID_AccessData_CTRL_access_location_sel(data)                     (0x00000008&((data)<<3))
#define  PCID_PCID_AccessData_CTRL_access_cross_bar_en(data)                     (0x00000004&((data)<<2))
#define  PCID_PCID_AccessData_CTRL_access_write_en(data)                         (0x00000002&((data)<<1))
#define  PCID_PCID_AccessData_CTRL_access_read_en(data)                          (0x00000001&(data))
#define  PCID_PCID_AccessData_CTRL_get_access_location_sel(data)                 ((0x00000008&(data))>>3)
#define  PCID_PCID_AccessData_CTRL_get_access_cross_bar_en(data)                 ((0x00000004&(data))>>2)
#define  PCID_PCID_AccessData_CTRL_get_access_write_en(data)                     ((0x00000002&(data))>>1)
#define  PCID_PCID_AccessData_CTRL_get_access_read_en(data)                      (0x00000001&(data))

#define  PCID_PCID_AccessData_PosCtrl                                           0x1802EFDC
#define  PCID_PCID_AccessData_PosCtrl_reg_addr                                   "0xB802EFDC"
#define  PCID_PCID_AccessData_PosCtrl_reg                                        0xB802EFDC
#define  PCID_PCID_AccessData_PosCtrl_inst_addr                                  "0x001F"
#define  set_PCID_PCID_AccessData_PosCtrl_reg(data)                              (*((volatile unsigned int*)PCID_PCID_AccessData_PosCtrl_reg)=data)
#define  get_PCID_PCID_AccessData_PosCtrl_reg                                    (*((volatile unsigned int*)PCID_PCID_AccessData_PosCtrl_reg))
#define  PCID_PCID_AccessData_PosCtrl_access_starty_shift                        (16)
#define  PCID_PCID_AccessData_PosCtrl_access_startx_shift                        (0)
#define  PCID_PCID_AccessData_PosCtrl_access_starty_mask                         (0x0FFF0000)
#define  PCID_PCID_AccessData_PosCtrl_access_startx_mask                         (0x00000FFF)
#define  PCID_PCID_AccessData_PosCtrl_access_starty(data)                        (0x0FFF0000&((data)<<16))
#define  PCID_PCID_AccessData_PosCtrl_access_startx(data)                        (0x00000FFF&(data))
#define  PCID_PCID_AccessData_PosCtrl_get_access_starty(data)                    ((0x0FFF0000&(data))>>16)
#define  PCID_PCID_AccessData_PosCtrl_get_access_startx(data)                    (0x00000FFF&(data))

#define  PCID_PCID_AccessData_R                                                 0x1802EFE0
#define  PCID_PCID_AccessData_R_reg_addr                                         "0xB802EFE0"
#define  PCID_PCID_AccessData_R_reg                                              0xB802EFE0
#define  PCID_PCID_AccessData_R_inst_addr                                        "0x0020"
#define  set_PCID_PCID_AccessData_R_reg(data)                                    (*((volatile unsigned int*)PCID_PCID_AccessData_R_reg)=data)
#define  get_PCID_PCID_AccessData_R_reg                                          (*((volatile unsigned int*)PCID_PCID_AccessData_R_reg))
#define  PCID_PCID_AccessData_R_access_read_r_shift                              (16)
#define  PCID_PCID_AccessData_R_access_write_r_shift                             (0)
#define  PCID_PCID_AccessData_R_access_read_r_mask                               (0x0FFF0000)
#define  PCID_PCID_AccessData_R_access_write_r_mask                              (0x00000FFF)
#define  PCID_PCID_AccessData_R_access_read_r(data)                              (0x0FFF0000&((data)<<16))
#define  PCID_PCID_AccessData_R_access_write_r(data)                             (0x00000FFF&(data))
#define  PCID_PCID_AccessData_R_get_access_read_r(data)                          ((0x0FFF0000&(data))>>16)
#define  PCID_PCID_AccessData_R_get_access_write_r(data)                         (0x00000FFF&(data))

#define  PCID_PCID_AccessData_G                                                 0x1802EFE4
#define  PCID_PCID_AccessData_G_reg_addr                                         "0xB802EFE4"
#define  PCID_PCID_AccessData_G_reg                                              0xB802EFE4
#define  PCID_PCID_AccessData_G_inst_addr                                        "0x0021"
#define  set_PCID_PCID_AccessData_G_reg(data)                                    (*((volatile unsigned int*)PCID_PCID_AccessData_G_reg)=data)
#define  get_PCID_PCID_AccessData_G_reg                                          (*((volatile unsigned int*)PCID_PCID_AccessData_G_reg))
#define  PCID_PCID_AccessData_G_access_read_g_shift                              (16)
#define  PCID_PCID_AccessData_G_access_write_g_shift                             (0)
#define  PCID_PCID_AccessData_G_access_read_g_mask                               (0x0FFF0000)
#define  PCID_PCID_AccessData_G_access_write_g_mask                              (0x00000FFF)
#define  PCID_PCID_AccessData_G_access_read_g(data)                              (0x0FFF0000&((data)<<16))
#define  PCID_PCID_AccessData_G_access_write_g(data)                             (0x00000FFF&(data))
#define  PCID_PCID_AccessData_G_get_access_read_g(data)                          ((0x0FFF0000&(data))>>16)
#define  PCID_PCID_AccessData_G_get_access_write_g(data)                         (0x00000FFF&(data))

#define  PCID_PCID_AccessData_B                                                 0x1802EFE8
#define  PCID_PCID_AccessData_B_reg_addr                                         "0xB802EFE8"
#define  PCID_PCID_AccessData_B_reg                                              0xB802EFE8
#define  PCID_PCID_AccessData_B_inst_addr                                        "0x0022"
#define  set_PCID_PCID_AccessData_B_reg(data)                                    (*((volatile unsigned int*)PCID_PCID_AccessData_B_reg)=data)
#define  get_PCID_PCID_AccessData_B_reg                                          (*((volatile unsigned int*)PCID_PCID_AccessData_B_reg))
#define  PCID_PCID_AccessData_B_access_read_b_shift                              (16)
#define  PCID_PCID_AccessData_B_access_write_b_shift                             (0)
#define  PCID_PCID_AccessData_B_access_read_b_mask                               (0x0FFF0000)
#define  PCID_PCID_AccessData_B_access_write_b_mask                              (0x00000FFF)
#define  PCID_PCID_AccessData_B_access_read_b(data)                              (0x0FFF0000&((data)<<16))
#define  PCID_PCID_AccessData_B_access_write_b(data)                             (0x00000FFF&(data))
#define  PCID_PCID_AccessData_B_get_access_read_b(data)                          ((0x0FFF0000&(data))>>16)
#define  PCID_PCID_AccessData_B_get_access_write_b(data)                         (0x00000FFF&(data))

#define  PCID_PCID_RegionalWeight_Ctrl                                          0x1802EE00
#define  PCID_PCID_RegionalWeight_Ctrl_reg_addr                                  "0xB802EE00"
#define  PCID_PCID_RegionalWeight_Ctrl_reg                                       0xB802EE00
#define  PCID_PCID_RegionalWeight_Ctrl_inst_addr                                 "0x0023"
#define  set_PCID_PCID_RegionalWeight_Ctrl_reg(data)                             (*((volatile unsigned int*)PCID_PCID_RegionalWeight_Ctrl_reg)=data)
#define  get_PCID_PCID_RegionalWeight_Ctrl_reg                                   (*((volatile unsigned int*)PCID_PCID_RegionalWeight_Ctrl_reg))
#define  PCID_PCID_RegionalWeight_Ctrl_rw_start_y_shift                          (20)
#define  PCID_PCID_RegionalWeight_Ctrl_rw_start_x_shift                          (8)
#define  PCID_PCID_RegionalWeight_Ctrl_rw_shift_sel_shift                        (2)
#define  PCID_PCID_RegionalWeight_Ctrl_rw_input_size_shift                       (1)
#define  PCID_PCID_RegionalWeight_Ctrl_regional_weight_en_shift                  (0)
#define  PCID_PCID_RegionalWeight_Ctrl_rw_start_y_mask                           (0xFFF00000)
#define  PCID_PCID_RegionalWeight_Ctrl_rw_start_x_mask                           (0x000FFF00)
#define  PCID_PCID_RegionalWeight_Ctrl_rw_shift_sel_mask                         (0x0000000C)
#define  PCID_PCID_RegionalWeight_Ctrl_rw_input_size_mask                        (0x00000002)
#define  PCID_PCID_RegionalWeight_Ctrl_regional_weight_en_mask                   (0x00000001)
#define  PCID_PCID_RegionalWeight_Ctrl_rw_start_y(data)                          (0xFFF00000&((data)<<20))
#define  PCID_PCID_RegionalWeight_Ctrl_rw_start_x(data)                          (0x000FFF00&((data)<<8))
#define  PCID_PCID_RegionalWeight_Ctrl_rw_shift_sel(data)                        (0x0000000C&((data)<<2))
#define  PCID_PCID_RegionalWeight_Ctrl_rw_input_size(data)                       (0x00000002&((data)<<1))
#define  PCID_PCID_RegionalWeight_Ctrl_regional_weight_en(data)                  (0x00000001&(data))
#define  PCID_PCID_RegionalWeight_Ctrl_get_rw_start_y(data)                      ((0xFFF00000&(data))>>20)
#define  PCID_PCID_RegionalWeight_Ctrl_get_rw_start_x(data)                      ((0x000FFF00&(data))>>8)
#define  PCID_PCID_RegionalWeight_Ctrl_get_rw_shift_sel(data)                    ((0x0000000C&(data))>>2)
#define  PCID_PCID_RegionalWeight_Ctrl_get_rw_input_size(data)                   ((0x00000002&(data))>>1)
#define  PCID_PCID_RegionalWeight_Ctrl_get_regional_weight_en(data)              (0x00000001&(data))

#define  PCID_PCID_RegionalWeight_Hor_0                                         0x1802EE04
#define  PCID_PCID_RegionalWeight_Hor_0_reg_addr                                 "0xB802EE04"
#define  PCID_PCID_RegionalWeight_Hor_0_reg                                      0xB802EE04
#define  PCID_PCID_RegionalWeight_Hor_0_inst_addr                                "0x0024"
#define  set_PCID_PCID_RegionalWeight_Hor_0_reg(data)                            (*((volatile unsigned int*)PCID_PCID_RegionalWeight_Hor_0_reg)=data)
#define  get_PCID_PCID_RegionalWeight_Hor_0_reg                                  (*((volatile unsigned int*)PCID_PCID_RegionalWeight_Hor_0_reg))
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w7_shift                          (28)
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w6_shift                          (24)
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w5_shift                          (20)
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w4_shift                          (16)
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w3_shift                          (12)
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w2_shift                          (8)
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w1_shift                          (4)
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w0_shift                          (0)
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w7_mask                           (0xF0000000)
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w6_mask                           (0x0F000000)
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w5_mask                           (0x00F00000)
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w4_mask                           (0x000F0000)
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w3_mask                           (0x0000F000)
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w2_mask                           (0x00000F00)
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w1_mask                           (0x000000F0)
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w0_mask                           (0x0000000F)
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w7(data)                          (0xF0000000&((data)<<28))
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w6(data)                          (0x0F000000&((data)<<24))
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w5(data)                          (0x00F00000&((data)<<20))
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w4(data)                          (0x000F0000&((data)<<16))
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w3(data)                          (0x0000F000&((data)<<12))
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w2(data)                          (0x00000F00&((data)<<8))
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w1(data)                          (0x000000F0&((data)<<4))
#define  PCID_PCID_RegionalWeight_Hor_0_rw_hor_w0(data)                          (0x0000000F&(data))
#define  PCID_PCID_RegionalWeight_Hor_0_get_rw_hor_w7(data)                      ((0xF0000000&(data))>>28)
#define  PCID_PCID_RegionalWeight_Hor_0_get_rw_hor_w6(data)                      ((0x0F000000&(data))>>24)
#define  PCID_PCID_RegionalWeight_Hor_0_get_rw_hor_w5(data)                      ((0x00F00000&(data))>>20)
#define  PCID_PCID_RegionalWeight_Hor_0_get_rw_hor_w4(data)                      ((0x000F0000&(data))>>16)
#define  PCID_PCID_RegionalWeight_Hor_0_get_rw_hor_w3(data)                      ((0x0000F000&(data))>>12)
#define  PCID_PCID_RegionalWeight_Hor_0_get_rw_hor_w2(data)                      ((0x00000F00&(data))>>8)
#define  PCID_PCID_RegionalWeight_Hor_0_get_rw_hor_w1(data)                      ((0x000000F0&(data))>>4)
#define  PCID_PCID_RegionalWeight_Hor_0_get_rw_hor_w0(data)                      (0x0000000F&(data))

#define  PCID_PCID_RegionalWeight_Hor_1                                         0x1802EE08
#define  PCID_PCID_RegionalWeight_Hor_1_reg_addr                                 "0xB802EE08"
#define  PCID_PCID_RegionalWeight_Hor_1_reg                                      0xB802EE08
#define  PCID_PCID_RegionalWeight_Hor_1_inst_addr                                "0x0025"
#define  set_PCID_PCID_RegionalWeight_Hor_1_reg(data)                            (*((volatile unsigned int*)PCID_PCID_RegionalWeight_Hor_1_reg)=data)
#define  get_PCID_PCID_RegionalWeight_Hor_1_reg                                  (*((volatile unsigned int*)PCID_PCID_RegionalWeight_Hor_1_reg))
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w15_shift                         (28)
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w14_shift                         (24)
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w13_shift                         (20)
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w12_shift                         (16)
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w11_shift                         (12)
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w10_shift                         (8)
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w9_shift                          (4)
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w8_shift                          (0)
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w15_mask                          (0xF0000000)
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w14_mask                          (0x0F000000)
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w13_mask                          (0x00F00000)
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w12_mask                          (0x000F0000)
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w11_mask                          (0x0000F000)
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w10_mask                          (0x00000F00)
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w9_mask                           (0x000000F0)
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w8_mask                           (0x0000000F)
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w15(data)                         (0xF0000000&((data)<<28))
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w14(data)                         (0x0F000000&((data)<<24))
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w13(data)                         (0x00F00000&((data)<<20))
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w12(data)                         (0x000F0000&((data)<<16))
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w11(data)                         (0x0000F000&((data)<<12))
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w10(data)                         (0x00000F00&((data)<<8))
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w9(data)                          (0x000000F0&((data)<<4))
#define  PCID_PCID_RegionalWeight_Hor_1_rw_hor_w8(data)                          (0x0000000F&(data))
#define  PCID_PCID_RegionalWeight_Hor_1_get_rw_hor_w15(data)                     ((0xF0000000&(data))>>28)
#define  PCID_PCID_RegionalWeight_Hor_1_get_rw_hor_w14(data)                     ((0x0F000000&(data))>>24)
#define  PCID_PCID_RegionalWeight_Hor_1_get_rw_hor_w13(data)                     ((0x00F00000&(data))>>20)
#define  PCID_PCID_RegionalWeight_Hor_1_get_rw_hor_w12(data)                     ((0x000F0000&(data))>>16)
#define  PCID_PCID_RegionalWeight_Hor_1_get_rw_hor_w11(data)                     ((0x0000F000&(data))>>12)
#define  PCID_PCID_RegionalWeight_Hor_1_get_rw_hor_w10(data)                     ((0x00000F00&(data))>>8)
#define  PCID_PCID_RegionalWeight_Hor_1_get_rw_hor_w9(data)                      ((0x000000F0&(data))>>4)
#define  PCID_PCID_RegionalWeight_Hor_1_get_rw_hor_w8(data)                      (0x0000000F&(data))

#define  PCID_PCID_RegionalWeight_Hor_2                                         0x1802EE0C
#define  PCID_PCID_RegionalWeight_Hor_2_reg_addr                                 "0xB802EE0C"
#define  PCID_PCID_RegionalWeight_Hor_2_reg                                      0xB802EE0C
#define  PCID_PCID_RegionalWeight_Hor_2_inst_addr                                "0x0026"
#define  set_PCID_PCID_RegionalWeight_Hor_2_reg(data)                            (*((volatile unsigned int*)PCID_PCID_RegionalWeight_Hor_2_reg)=data)
#define  get_PCID_PCID_RegionalWeight_Hor_2_reg                                  (*((volatile unsigned int*)PCID_PCID_RegionalWeight_Hor_2_reg))
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w23_shift                         (28)
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w22_shift                         (24)
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w21_shift                         (20)
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w20_shift                         (16)
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w19_shift                         (12)
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w18_shift                         (8)
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w17_shift                         (4)
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w16_shift                         (0)
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w23_mask                          (0xF0000000)
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w22_mask                          (0x0F000000)
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w21_mask                          (0x00F00000)
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w20_mask                          (0x000F0000)
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w19_mask                          (0x0000F000)
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w18_mask                          (0x00000F00)
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w17_mask                          (0x000000F0)
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w16_mask                          (0x0000000F)
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w23(data)                         (0xF0000000&((data)<<28))
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w22(data)                         (0x0F000000&((data)<<24))
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w21(data)                         (0x00F00000&((data)<<20))
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w20(data)                         (0x000F0000&((data)<<16))
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w19(data)                         (0x0000F000&((data)<<12))
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w18(data)                         (0x00000F00&((data)<<8))
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w17(data)                         (0x000000F0&((data)<<4))
#define  PCID_PCID_RegionalWeight_Hor_2_rw_hor_w16(data)                         (0x0000000F&(data))
#define  PCID_PCID_RegionalWeight_Hor_2_get_rw_hor_w23(data)                     ((0xF0000000&(data))>>28)
#define  PCID_PCID_RegionalWeight_Hor_2_get_rw_hor_w22(data)                     ((0x0F000000&(data))>>24)
#define  PCID_PCID_RegionalWeight_Hor_2_get_rw_hor_w21(data)                     ((0x00F00000&(data))>>20)
#define  PCID_PCID_RegionalWeight_Hor_2_get_rw_hor_w20(data)                     ((0x000F0000&(data))>>16)
#define  PCID_PCID_RegionalWeight_Hor_2_get_rw_hor_w19(data)                     ((0x0000F000&(data))>>12)
#define  PCID_PCID_RegionalWeight_Hor_2_get_rw_hor_w18(data)                     ((0x00000F00&(data))>>8)
#define  PCID_PCID_RegionalWeight_Hor_2_get_rw_hor_w17(data)                     ((0x000000F0&(data))>>4)
#define  PCID_PCID_RegionalWeight_Hor_2_get_rw_hor_w16(data)                     (0x0000000F&(data))

#define  PCID_PCID_RegionalWeight_Hor_3                                         0x1802EE10
#define  PCID_PCID_RegionalWeight_Hor_3_reg_addr                                 "0xB802EE10"
#define  PCID_PCID_RegionalWeight_Hor_3_reg                                      0xB802EE10
#define  PCID_PCID_RegionalWeight_Hor_3_inst_addr                                "0x0027"
#define  set_PCID_PCID_RegionalWeight_Hor_3_reg(data)                            (*((volatile unsigned int*)PCID_PCID_RegionalWeight_Hor_3_reg)=data)
#define  get_PCID_PCID_RegionalWeight_Hor_3_reg                                  (*((volatile unsigned int*)PCID_PCID_RegionalWeight_Hor_3_reg))
#define  PCID_PCID_RegionalWeight_Hor_3_rw_hor_w24_shift                         (0)
#define  PCID_PCID_RegionalWeight_Hor_3_rw_hor_w24_mask                          (0x0000000F)
#define  PCID_PCID_RegionalWeight_Hor_3_rw_hor_w24(data)                         (0x0000000F&(data))
#define  PCID_PCID_RegionalWeight_Hor_3_get_rw_hor_w24(data)                     (0x0000000F&(data))

#define  PCID_PCID_RegionalWeight_Ver_0                                         0x1802EE14
#define  PCID_PCID_RegionalWeight_Ver_0_reg_addr                                 "0xB802EE14"
#define  PCID_PCID_RegionalWeight_Ver_0_reg                                      0xB802EE14
#define  PCID_PCID_RegionalWeight_Ver_0_inst_addr                                "0x0028"
#define  set_PCID_PCID_RegionalWeight_Ver_0_reg(data)                            (*((volatile unsigned int*)PCID_PCID_RegionalWeight_Ver_0_reg)=data)
#define  get_PCID_PCID_RegionalWeight_Ver_0_reg                                  (*((volatile unsigned int*)PCID_PCID_RegionalWeight_Ver_0_reg))
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w7_shift                          (28)
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w6_shift                          (24)
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w5_shift                          (20)
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w4_shift                          (16)
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w3_shift                          (12)
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w2_shift                          (8)
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w1_shift                          (4)
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w0_shift                          (0)
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w7_mask                           (0xF0000000)
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w6_mask                           (0x0F000000)
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w5_mask                           (0x00F00000)
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w4_mask                           (0x000F0000)
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w3_mask                           (0x0000F000)
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w2_mask                           (0x00000F00)
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w1_mask                           (0x000000F0)
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w0_mask                           (0x0000000F)
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w7(data)                          (0xF0000000&((data)<<28))
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w6(data)                          (0x0F000000&((data)<<24))
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w5(data)                          (0x00F00000&((data)<<20))
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w4(data)                          (0x000F0000&((data)<<16))
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w3(data)                          (0x0000F000&((data)<<12))
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w2(data)                          (0x00000F00&((data)<<8))
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w1(data)                          (0x000000F0&((data)<<4))
#define  PCID_PCID_RegionalWeight_Ver_0_rw_ver_w0(data)                          (0x0000000F&(data))
#define  PCID_PCID_RegionalWeight_Ver_0_get_rw_ver_w7(data)                      ((0xF0000000&(data))>>28)
#define  PCID_PCID_RegionalWeight_Ver_0_get_rw_ver_w6(data)                      ((0x0F000000&(data))>>24)
#define  PCID_PCID_RegionalWeight_Ver_0_get_rw_ver_w5(data)                      ((0x00F00000&(data))>>20)
#define  PCID_PCID_RegionalWeight_Ver_0_get_rw_ver_w4(data)                      ((0x000F0000&(data))>>16)
#define  PCID_PCID_RegionalWeight_Ver_0_get_rw_ver_w3(data)                      ((0x0000F000&(data))>>12)
#define  PCID_PCID_RegionalWeight_Ver_0_get_rw_ver_w2(data)                      ((0x00000F00&(data))>>8)
#define  PCID_PCID_RegionalWeight_Ver_0_get_rw_ver_w1(data)                      ((0x000000F0&(data))>>4)
#define  PCID_PCID_RegionalWeight_Ver_0_get_rw_ver_w0(data)                      (0x0000000F&(data))

#define  PCID_PCID_RegionalWeight_Ver_1                                         0x1802EE18
#define  PCID_PCID_RegionalWeight_Ver_1_reg_addr                                 "0xB802EE18"
#define  PCID_PCID_RegionalWeight_Ver_1_reg                                      0xB802EE18
#define  PCID_PCID_RegionalWeight_Ver_1_inst_addr                                "0x0029"
#define  set_PCID_PCID_RegionalWeight_Ver_1_reg(data)                            (*((volatile unsigned int*)PCID_PCID_RegionalWeight_Ver_1_reg)=data)
#define  get_PCID_PCID_RegionalWeight_Ver_1_reg                                  (*((volatile unsigned int*)PCID_PCID_RegionalWeight_Ver_1_reg))
#define  PCID_PCID_RegionalWeight_Ver_1_rw_ver_w9_shift                          (4)
#define  PCID_PCID_RegionalWeight_Ver_1_rw_ver_w8_shift                          (0)
#define  PCID_PCID_RegionalWeight_Ver_1_rw_ver_w9_mask                           (0x000000F0)
#define  PCID_PCID_RegionalWeight_Ver_1_rw_ver_w8_mask                           (0x0000000F)
#define  PCID_PCID_RegionalWeight_Ver_1_rw_ver_w9(data)                          (0x000000F0&((data)<<4))
#define  PCID_PCID_RegionalWeight_Ver_1_rw_ver_w8(data)                          (0x0000000F&(data))
#define  PCID_PCID_RegionalWeight_Ver_1_get_rw_ver_w9(data)                      ((0x000000F0&(data))>>4)
#define  PCID_PCID_RegionalWeight_Ver_1_get_rw_ver_w8(data)                      (0x0000000F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======PCID register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802ef40_31_2:30;
        RBus_UInt32  intp_bit_sel:1;
        RBus_UInt32  boundary_mode:1;
    };
}pcid_pcid_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcid_tab2_xtr_en:1;
        RBus_UInt32  pcid_tab1_xtr_en:1;
        RBus_UInt32  pcid_thd_mode:1;
        RBus_UInt32  pcid_thd_en:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  pcid_tab1_b_thd:8;
        RBus_UInt32  pcid_tab1_g_thd:8;
        RBus_UInt32  pcid_tab1_r_thd:8;
    };
}pcid_pcid_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802ef48_31_24:8;
        RBus_UInt32  pcid_tab2_b_thd:8;
        RBus_UInt32  pcid_tab2_g_thd:8;
        RBus_UInt32  pcid_tab2_r_thd:8;
    };
}pcid_pcid_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line1_odd_b_color_select:2;
        RBus_UInt32  line1_odd_g_color_select:2;
        RBus_UInt32  line1_odd_r_color_select:2;
        RBus_UInt32  line1_odd_b_point_select:2;
        RBus_UInt32  line1_odd_g_point_select:2;
        RBus_UInt32  line1_odd_r_point_select:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  line1_odd_b_line_select:1;
        RBus_UInt32  line1_odd_g_line_select:1;
        RBus_UInt32  line1_odd_r_line_select:1;
        RBus_UInt32  line1_even_b_color_select:2;
        RBus_UInt32  line1_even_g_color_select:2;
        RBus_UInt32  line1_even_r_color_select:2;
        RBus_UInt32  line1_even_b_point_select:2;
        RBus_UInt32  line1_even_g_point_select:2;
        RBus_UInt32  line1_even_r_point_select:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  line1_even_b_line_select:1;
        RBus_UInt32  line1_even_g_line_select:1;
        RBus_UInt32  line1_even_r_line_select:1;
    };
}pcid_pcid_line_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line2_odd_b_color_select:2;
        RBus_UInt32  line2_odd_g_color_select:2;
        RBus_UInt32  line2_odd_r_color_select:2;
        RBus_UInt32  line2_odd_b_point_select:2;
        RBus_UInt32  line2_odd_g_point_select:2;
        RBus_UInt32  line2_odd_r_point_select:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  line2_odd_b_line_select:1;
        RBus_UInt32  line2_odd_g_line_select:1;
        RBus_UInt32  line2_odd_r_line_select:1;
        RBus_UInt32  line2_even_b_color_select:2;
        RBus_UInt32  line2_even_g_color_select:2;
        RBus_UInt32  line2_even_r_color_select:2;
        RBus_UInt32  line2_even_b_point_select:2;
        RBus_UInt32  line2_even_g_point_select:2;
        RBus_UInt32  line2_even_r_point_select:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  line2_even_b_line_select:1;
        RBus_UInt32  line2_even_g_line_select:1;
        RBus_UInt32  line2_even_r_line_select:1;
    };
}pcid_pcid_line_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line3_odd_b_color_select:2;
        RBus_UInt32  line3_odd_g_color_select:2;
        RBus_UInt32  line3_odd_r_color_select:2;
        RBus_UInt32  line3_odd_b_point_select:2;
        RBus_UInt32  line3_odd_g_point_select:2;
        RBus_UInt32  line3_odd_r_point_select:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  line3_odd_b_line_select:1;
        RBus_UInt32  line3_odd_g_line_select:1;
        RBus_UInt32  line3_odd_r_line_select:1;
        RBus_UInt32  line3_even_b_color_select:2;
        RBus_UInt32  line3_even_g_color_select:2;
        RBus_UInt32  line3_even_r_color_select:2;
        RBus_UInt32  line3_even_b_point_select:2;
        RBus_UInt32  line3_even_g_point_select:2;
        RBus_UInt32  line3_even_r_point_select:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  line3_even_b_line_select:1;
        RBus_UInt32  line3_even_g_line_select:1;
        RBus_UInt32  line3_even_r_line_select:1;
    };
}pcid_pcid_line_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line4_odd_b_color_select:2;
        RBus_UInt32  line4_odd_g_color_select:2;
        RBus_UInt32  line4_odd_r_color_select:2;
        RBus_UInt32  line4_odd_b_point_select:2;
        RBus_UInt32  line4_odd_g_point_select:2;
        RBus_UInt32  line4_odd_r_point_select:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  line4_odd_b_line_select:1;
        RBus_UInt32  line4_odd_g_line_select:1;
        RBus_UInt32  line4_odd_r_line_select:1;
        RBus_UInt32  line4_even_b_color_select:2;
        RBus_UInt32  line4_even_g_color_select:2;
        RBus_UInt32  line4_even_r_color_select:2;
        RBus_UInt32  line4_even_b_point_select:2;
        RBus_UInt32  line4_even_g_point_select:2;
        RBus_UInt32  line4_even_r_point_select:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  line4_even_b_line_select:1;
        RBus_UInt32  line4_even_g_line_select:1;
        RBus_UInt32  line4_even_r_line_select:1;
    };
}pcid_pcid_line_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_po_line2:16;
        RBus_UInt32  r_po_line1:16;
    };
}pcid_pcid2_polarity_r_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_po_line4:16;
        RBus_UInt32  r_po_line3:16;
    };
}pcid_pcid2_polarity_r_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_po_line6:16;
        RBus_UInt32  r_po_line5:16;
    };
}pcid_pcid2_polarity_r_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_po_line8:16;
        RBus_UInt32  r_po_line7:16;
    };
}pcid_pcid2_polarity_r_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g_po_line2:16;
        RBus_UInt32  g_po_line1:16;
    };
}pcid_pcid2_polarity_g_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g_po_line4:16;
        RBus_UInt32  g_po_line3:16;
    };
}pcid_pcid2_polarity_g_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g_po_line6:16;
        RBus_UInt32  g_po_line5:16;
    };
}pcid_pcid2_polarity_g_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g_po_line8:16;
        RBus_UInt32  g_po_line7:16;
    };
}pcid_pcid2_polarity_g_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b_po_line2:16;
        RBus_UInt32  b_po_line1:16;
    };
}pcid_pcid2_polarity_b_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b_po_line4:16;
        RBus_UInt32  b_po_line3:16;
    };
}pcid_pcid2_polarity_b_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b_po_line6:16;
        RBus_UInt32  b_po_line5:16;
    };
}pcid_pcid2_polarity_b_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b_po_line8:16;
        RBus_UInt32  b_po_line7:16;
    };
}pcid_pcid2_polarity_b_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802efa0_31_12:20;
        RBus_UInt32  valc_dbg_region:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  valc_dbg_sel:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  valc_hpf_clip:2;
        RBus_UInt32  valc_en:1;
    };
}pcid_pcid_valc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_hpf_w15:4;
        RBus_UInt32  valc_hpf_w14:4;
        RBus_UInt32  valc_hpf_w13:4;
        RBus_UInt32  valc_hpf_w12:4;
        RBus_UInt32  valc_hpf_w11:4;
        RBus_UInt32  valc_hpf_w10:4;
        RBus_UInt32  valc_hpf_w9:4;
        RBus_UInt32  valc_hpf_w8:4;
    };
}pcid_pcid_valc_hpf_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_hpf_w7:4;
        RBus_UInt32  valc_hpf_w6:4;
        RBus_UInt32  valc_hpf_w5:4;
        RBus_UInt32  valc_hpf_w4:4;
        RBus_UInt32  valc_hpf_w3:4;
        RBus_UInt32  valc_hpf_w2:4;
        RBus_UInt32  valc_hpf_w1:4;
        RBus_UInt32  valc_hpf_w0:4;
    };
}pcid_pcid_valc_hpf_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_sat_w15:4;
        RBus_UInt32  valc_sat_w14:4;
        RBus_UInt32  valc_sat_w13:4;
        RBus_UInt32  valc_sat_w12:4;
        RBus_UInt32  valc_sat_w11:4;
        RBus_UInt32  valc_sat_w10:4;
        RBus_UInt32  valc_sat_w9:4;
        RBus_UInt32  valc_sat_w8:4;
    };
}pcid_pcid_valc_sat_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_sat_w7:4;
        RBus_UInt32  valc_sat_w6:4;
        RBus_UInt32  valc_sat_w5:4;
        RBus_UInt32  valc_sat_w4:4;
        RBus_UInt32  valc_sat_w3:4;
        RBus_UInt32  valc_sat_w2:4;
        RBus_UInt32  valc_sat_w1:4;
        RBus_UInt32  valc_sat_w0:4;
    };
}pcid_pcid_valc_sat_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pcid_tab_test1_2:1;
        RBus_UInt32  pcid_tab_test1_1:1;
        RBus_UInt32  pcid_tab_test1_0:1;
        RBus_UInt32  pcid_tab_rm_2:4;
        RBus_UInt32  pcid_tab_rm_1:4;
        RBus_UInt32  pcid_tab_rm_0:4;
        RBus_UInt32  res2:11;
        RBus_UInt32  pcid_lb_test1:1;
        RBus_UInt32  pcid_lb_rm:4;
    };
}pcid_pcid_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  pcid_tab_ls_2:1;
        RBus_UInt32  pcid_tab_ls_1:1;
        RBus_UInt32  pcid_tab_ls_0:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  pcid_lb_ls:1;
        RBus_UInt32  res3:9;
        RBus_UInt32  pcid_tab_rme_2:1;
        RBus_UInt32  pcid_tab_rme_1:1;
        RBus_UInt32  pcid_tab_rme_0:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  pcid_lb_rme:1;
    };
}pcid_pcid_rme_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  tab_drf_fail_11:1;
        RBus_UInt32  tab_drf_fail_10:1;
        RBus_UInt32  tab_drf_fail_9:1;
        RBus_UInt32  tab_drf_fail_8:1;
        RBus_UInt32  tab_drf_fail_7:1;
        RBus_UInt32  tab_drf_fail_6:1;
        RBus_UInt32  tab_drf_fail_5:1;
        RBus_UInt32  tab_drf_fail_4:1;
        RBus_UInt32  tab_drf_fail_3:1;
        RBus_UInt32  tab_drf_fail_2:1;
        RBus_UInt32  tab_drf_fail_1:1;
        RBus_UInt32  tab_drf_fail_0:1;
        RBus_UInt32  lb_drf_fail_1:1;
        RBus_UInt32  lb_drf_fail_0:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  tab_bist_fail_11:1;
        RBus_UInt32  tab_bist_fail_10:1;
        RBus_UInt32  tab_bist_fail_9:1;
        RBus_UInt32  tab_bist_fail_8:1;
        RBus_UInt32  tab_bist_fail_7:1;
        RBus_UInt32  tab_bist_fail_6:1;
        RBus_UInt32  tab_bist_fail_5:1;
        RBus_UInt32  tab_bist_fail_4:1;
        RBus_UInt32  tab_bist_fail_3:1;
        RBus_UInt32  tab_bist_fail_2:1;
        RBus_UInt32  tab_bist_fail_1:1;
        RBus_UInt32  tab_bist_fail_0:1;
        RBus_UInt32  lb_bist_fail_1:1;
        RBus_UInt32  lb_bist_fail_0:1;
    };
}pcid_pcid_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  pcid_lb_testrwm:1;
    };
}pcid_pcid_testrwm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  pcid_lut_ax_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pcid_lut_adr_mode:1;
        RBus_UInt32  pcid_lut_sel:2;
        RBus_UInt32  pcid_lut_row_addr:6;
        RBus_UInt32  pcid_lut_column_addr:6;
    };
}pcid_pcid_lut_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcid_lut_data:32;
    };
}pcid_pcid_lut_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  access_location_sel:1;
        RBus_UInt32  access_cross_bar_en:1;
        RBus_UInt32  access_write_en:1;
        RBus_UInt32  access_read_en:1;
    };
}pcid_pcid_accessdata_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  access_starty:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  access_startx:12;
    };
}pcid_pcid_accessdata_posctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_r:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  access_write_r:12;
    };
}pcid_pcid_accessdata_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_g:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  access_write_g:12;
    };
}pcid_pcid_accessdata_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_b:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  access_write_b:12;
    };
}pcid_pcid_accessdata_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rw_start_y:12;
        RBus_UInt32  rw_start_x:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  rw_shift_sel:2;
        RBus_UInt32  rw_input_size:1;
        RBus_UInt32  regional_weight_en:1;
    };
}pcid_pcid_regionalweight_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rw_hor_w7:4;
        RBus_UInt32  rw_hor_w6:4;
        RBus_UInt32  rw_hor_w5:4;
        RBus_UInt32  rw_hor_w4:4;
        RBus_UInt32  rw_hor_w3:4;
        RBus_UInt32  rw_hor_w2:4;
        RBus_UInt32  rw_hor_w1:4;
        RBus_UInt32  rw_hor_w0:4;
    };
}pcid_pcid_regionalweight_hor_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rw_hor_w15:4;
        RBus_UInt32  rw_hor_w14:4;
        RBus_UInt32  rw_hor_w13:4;
        RBus_UInt32  rw_hor_w12:4;
        RBus_UInt32  rw_hor_w11:4;
        RBus_UInt32  rw_hor_w10:4;
        RBus_UInt32  rw_hor_w9:4;
        RBus_UInt32  rw_hor_w8:4;
    };
}pcid_pcid_regionalweight_hor_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rw_hor_w23:4;
        RBus_UInt32  rw_hor_w22:4;
        RBus_UInt32  rw_hor_w21:4;
        RBus_UInt32  rw_hor_w20:4;
        RBus_UInt32  rw_hor_w19:4;
        RBus_UInt32  rw_hor_w18:4;
        RBus_UInt32  rw_hor_w17:4;
        RBus_UInt32  rw_hor_w16:4;
    };
}pcid_pcid_regionalweight_hor_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  rw_hor_w24:4;
    };
}pcid_pcid_regionalweight_hor_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rw_ver_w7:4;
        RBus_UInt32  rw_ver_w6:4;
        RBus_UInt32  rw_ver_w5:4;
        RBus_UInt32  rw_ver_w4:4;
        RBus_UInt32  rw_ver_w3:4;
        RBus_UInt32  rw_ver_w2:4;
        RBus_UInt32  rw_ver_w1:4;
        RBus_UInt32  rw_ver_w0:4;
    };
}pcid_pcid_regionalweight_ver_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rw_ver_w9:4;
        RBus_UInt32  rw_ver_w8:4;
    };
}pcid_pcid_regionalweight_ver_1_RBUS;

#else //apply LITTLE_ENDIAN

//======PCID register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  boundary_mode:1;
        RBus_UInt32  intp_bit_sel:1;
        RBus_UInt32  dummy1802ef40_31_2:30;
    };
}pcid_pcid_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcid_tab1_r_thd:8;
        RBus_UInt32  pcid_tab1_g_thd:8;
        RBus_UInt32  pcid_tab1_b_thd:8;
        RBus_UInt32  res1:4;
        RBus_UInt32  pcid_thd_en:1;
        RBus_UInt32  pcid_thd_mode:1;
        RBus_UInt32  pcid_tab1_xtr_en:1;
        RBus_UInt32  pcid_tab2_xtr_en:1;
    };
}pcid_pcid_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcid_tab2_r_thd:8;
        RBus_UInt32  pcid_tab2_g_thd:8;
        RBus_UInt32  pcid_tab2_b_thd:8;
        RBus_UInt32  dummy1802ef48_31_24:8;
    };
}pcid_pcid_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line1_even_r_line_select:1;
        RBus_UInt32  line1_even_g_line_select:1;
        RBus_UInt32  line1_even_b_line_select:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  line1_even_r_point_select:2;
        RBus_UInt32  line1_even_g_point_select:2;
        RBus_UInt32  line1_even_b_point_select:2;
        RBus_UInt32  line1_even_r_color_select:2;
        RBus_UInt32  line1_even_g_color_select:2;
        RBus_UInt32  line1_even_b_color_select:2;
        RBus_UInt32  line1_odd_r_line_select:1;
        RBus_UInt32  line1_odd_g_line_select:1;
        RBus_UInt32  line1_odd_b_line_select:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  line1_odd_r_point_select:2;
        RBus_UInt32  line1_odd_g_point_select:2;
        RBus_UInt32  line1_odd_b_point_select:2;
        RBus_UInt32  line1_odd_r_color_select:2;
        RBus_UInt32  line1_odd_g_color_select:2;
        RBus_UInt32  line1_odd_b_color_select:2;
    };
}pcid_pcid_line_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line2_even_r_line_select:1;
        RBus_UInt32  line2_even_g_line_select:1;
        RBus_UInt32  line2_even_b_line_select:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  line2_even_r_point_select:2;
        RBus_UInt32  line2_even_g_point_select:2;
        RBus_UInt32  line2_even_b_point_select:2;
        RBus_UInt32  line2_even_r_color_select:2;
        RBus_UInt32  line2_even_g_color_select:2;
        RBus_UInt32  line2_even_b_color_select:2;
        RBus_UInt32  line2_odd_r_line_select:1;
        RBus_UInt32  line2_odd_g_line_select:1;
        RBus_UInt32  line2_odd_b_line_select:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  line2_odd_r_point_select:2;
        RBus_UInt32  line2_odd_g_point_select:2;
        RBus_UInt32  line2_odd_b_point_select:2;
        RBus_UInt32  line2_odd_r_color_select:2;
        RBus_UInt32  line2_odd_g_color_select:2;
        RBus_UInt32  line2_odd_b_color_select:2;
    };
}pcid_pcid_line_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line3_even_r_line_select:1;
        RBus_UInt32  line3_even_g_line_select:1;
        RBus_UInt32  line3_even_b_line_select:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  line3_even_r_point_select:2;
        RBus_UInt32  line3_even_g_point_select:2;
        RBus_UInt32  line3_even_b_point_select:2;
        RBus_UInt32  line3_even_r_color_select:2;
        RBus_UInt32  line3_even_g_color_select:2;
        RBus_UInt32  line3_even_b_color_select:2;
        RBus_UInt32  line3_odd_r_line_select:1;
        RBus_UInt32  line3_odd_g_line_select:1;
        RBus_UInt32  line3_odd_b_line_select:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  line3_odd_r_point_select:2;
        RBus_UInt32  line3_odd_g_point_select:2;
        RBus_UInt32  line3_odd_b_point_select:2;
        RBus_UInt32  line3_odd_r_color_select:2;
        RBus_UInt32  line3_odd_g_color_select:2;
        RBus_UInt32  line3_odd_b_color_select:2;
    };
}pcid_pcid_line_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line4_even_r_line_select:1;
        RBus_UInt32  line4_even_g_line_select:1;
        RBus_UInt32  line4_even_b_line_select:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  line4_even_r_point_select:2;
        RBus_UInt32  line4_even_g_point_select:2;
        RBus_UInt32  line4_even_b_point_select:2;
        RBus_UInt32  line4_even_r_color_select:2;
        RBus_UInt32  line4_even_g_color_select:2;
        RBus_UInt32  line4_even_b_color_select:2;
        RBus_UInt32  line4_odd_r_line_select:1;
        RBus_UInt32  line4_odd_g_line_select:1;
        RBus_UInt32  line4_odd_b_line_select:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  line4_odd_r_point_select:2;
        RBus_UInt32  line4_odd_g_point_select:2;
        RBus_UInt32  line4_odd_b_point_select:2;
        RBus_UInt32  line4_odd_r_color_select:2;
        RBus_UInt32  line4_odd_g_color_select:2;
        RBus_UInt32  line4_odd_b_color_select:2;
    };
}pcid_pcid_line_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_po_line1:16;
        RBus_UInt32  r_po_line2:16;
    };
}pcid_pcid2_polarity_r_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_po_line3:16;
        RBus_UInt32  r_po_line4:16;
    };
}pcid_pcid2_polarity_r_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_po_line5:16;
        RBus_UInt32  r_po_line6:16;
    };
}pcid_pcid2_polarity_r_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_po_line7:16;
        RBus_UInt32  r_po_line8:16;
    };
}pcid_pcid2_polarity_r_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g_po_line1:16;
        RBus_UInt32  g_po_line2:16;
    };
}pcid_pcid2_polarity_g_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g_po_line3:16;
        RBus_UInt32  g_po_line4:16;
    };
}pcid_pcid2_polarity_g_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g_po_line5:16;
        RBus_UInt32  g_po_line6:16;
    };
}pcid_pcid2_polarity_g_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g_po_line7:16;
        RBus_UInt32  g_po_line8:16;
    };
}pcid_pcid2_polarity_g_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b_po_line1:16;
        RBus_UInt32  b_po_line2:16;
    };
}pcid_pcid2_polarity_b_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b_po_line3:16;
        RBus_UInt32  b_po_line4:16;
    };
}pcid_pcid2_polarity_b_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b_po_line5:16;
        RBus_UInt32  b_po_line6:16;
    };
}pcid_pcid2_polarity_b_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b_po_line7:16;
        RBus_UInt32  b_po_line8:16;
    };
}pcid_pcid2_polarity_b_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_en:1;
        RBus_UInt32  valc_hpf_clip:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  valc_dbg_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  valc_dbg_region:4;
        RBus_UInt32  dummy1802efa0_31_12:20;
    };
}pcid_pcid_valc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_hpf_w8:4;
        RBus_UInt32  valc_hpf_w9:4;
        RBus_UInt32  valc_hpf_w10:4;
        RBus_UInt32  valc_hpf_w11:4;
        RBus_UInt32  valc_hpf_w12:4;
        RBus_UInt32  valc_hpf_w13:4;
        RBus_UInt32  valc_hpf_w14:4;
        RBus_UInt32  valc_hpf_w15:4;
    };
}pcid_pcid_valc_hpf_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_hpf_w0:4;
        RBus_UInt32  valc_hpf_w1:4;
        RBus_UInt32  valc_hpf_w2:4;
        RBus_UInt32  valc_hpf_w3:4;
        RBus_UInt32  valc_hpf_w4:4;
        RBus_UInt32  valc_hpf_w5:4;
        RBus_UInt32  valc_hpf_w6:4;
        RBus_UInt32  valc_hpf_w7:4;
    };
}pcid_pcid_valc_hpf_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_sat_w8:4;
        RBus_UInt32  valc_sat_w9:4;
        RBus_UInt32  valc_sat_w10:4;
        RBus_UInt32  valc_sat_w11:4;
        RBus_UInt32  valc_sat_w12:4;
        RBus_UInt32  valc_sat_w13:4;
        RBus_UInt32  valc_sat_w14:4;
        RBus_UInt32  valc_sat_w15:4;
    };
}pcid_pcid_valc_sat_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_sat_w0:4;
        RBus_UInt32  valc_sat_w1:4;
        RBus_UInt32  valc_sat_w2:4;
        RBus_UInt32  valc_sat_w3:4;
        RBus_UInt32  valc_sat_w4:4;
        RBus_UInt32  valc_sat_w5:4;
        RBus_UInt32  valc_sat_w6:4;
        RBus_UInt32  valc_sat_w7:4;
    };
}pcid_pcid_valc_sat_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcid_lb_rm:4;
        RBus_UInt32  pcid_lb_test1:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  pcid_tab_rm_0:4;
        RBus_UInt32  pcid_tab_rm_1:4;
        RBus_UInt32  pcid_tab_rm_2:4;
        RBus_UInt32  pcid_tab_test1_0:1;
        RBus_UInt32  pcid_tab_test1_1:1;
        RBus_UInt32  pcid_tab_test1_2:1;
        RBus_UInt32  res2:1;
    };
}pcid_pcid_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcid_lb_rme:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  pcid_tab_rme_0:1;
        RBus_UInt32  pcid_tab_rme_1:1;
        RBus_UInt32  pcid_tab_rme_2:1;
        RBus_UInt32  res2:9;
        RBus_UInt32  pcid_lb_ls:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pcid_tab_ls_0:1;
        RBus_UInt32  pcid_tab_ls_1:1;
        RBus_UInt32  pcid_tab_ls_2:1;
        RBus_UInt32  res4:9;
    };
}pcid_pcid_rme_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lb_bist_fail_0:1;
        RBus_UInt32  lb_bist_fail_1:1;
        RBus_UInt32  tab_bist_fail_0:1;
        RBus_UInt32  tab_bist_fail_1:1;
        RBus_UInt32  tab_bist_fail_2:1;
        RBus_UInt32  tab_bist_fail_3:1;
        RBus_UInt32  tab_bist_fail_4:1;
        RBus_UInt32  tab_bist_fail_5:1;
        RBus_UInt32  tab_bist_fail_6:1;
        RBus_UInt32  tab_bist_fail_7:1;
        RBus_UInt32  tab_bist_fail_8:1;
        RBus_UInt32  tab_bist_fail_9:1;
        RBus_UInt32  tab_bist_fail_10:1;
        RBus_UInt32  tab_bist_fail_11:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  lb_drf_fail_0:1;
        RBus_UInt32  lb_drf_fail_1:1;
        RBus_UInt32  tab_drf_fail_0:1;
        RBus_UInt32  tab_drf_fail_1:1;
        RBus_UInt32  tab_drf_fail_2:1;
        RBus_UInt32  tab_drf_fail_3:1;
        RBus_UInt32  tab_drf_fail_4:1;
        RBus_UInt32  tab_drf_fail_5:1;
        RBus_UInt32  tab_drf_fail_6:1;
        RBus_UInt32  tab_drf_fail_7:1;
        RBus_UInt32  tab_drf_fail_8:1;
        RBus_UInt32  tab_drf_fail_9:1;
        RBus_UInt32  tab_drf_fail_10:1;
        RBus_UInt32  tab_drf_fail_11:1;
        RBus_UInt32  res2:2;
    };
}pcid_pcid_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcid_lb_testrwm:1;
        RBus_UInt32  res1:31;
    };
}pcid_pcid_testrwm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcid_lut_column_addr:6;
        RBus_UInt32  pcid_lut_row_addr:6;
        RBus_UInt32  pcid_lut_sel:2;
        RBus_UInt32  pcid_lut_adr_mode:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pcid_lut_ax_en:1;
        RBus_UInt32  res2:15;
    };
}pcid_pcid_lut_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcid_lut_data:32;
    };
}pcid_pcid_lut_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_read_en:1;
        RBus_UInt32  access_write_en:1;
        RBus_UInt32  access_cross_bar_en:1;
        RBus_UInt32  access_location_sel:1;
        RBus_UInt32  res1:28;
    };
}pcid_pcid_accessdata_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_startx:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  access_starty:12;
        RBus_UInt32  res2:4;
    };
}pcid_pcid_accessdata_posctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_write_r:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_r:12;
        RBus_UInt32  res2:4;
    };
}pcid_pcid_accessdata_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_write_g:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_g:12;
        RBus_UInt32  res2:4;
    };
}pcid_pcid_accessdata_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_write_b:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_b:12;
        RBus_UInt32  res2:4;
    };
}pcid_pcid_accessdata_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regional_weight_en:1;
        RBus_UInt32  rw_input_size:1;
        RBus_UInt32  rw_shift_sel:2;
        RBus_UInt32  res1:4;
        RBus_UInt32  rw_start_x:12;
        RBus_UInt32  rw_start_y:12;
    };
}pcid_pcid_regionalweight_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rw_hor_w0:4;
        RBus_UInt32  rw_hor_w1:4;
        RBus_UInt32  rw_hor_w2:4;
        RBus_UInt32  rw_hor_w3:4;
        RBus_UInt32  rw_hor_w4:4;
        RBus_UInt32  rw_hor_w5:4;
        RBus_UInt32  rw_hor_w6:4;
        RBus_UInt32  rw_hor_w7:4;
    };
}pcid_pcid_regionalweight_hor_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rw_hor_w8:4;
        RBus_UInt32  rw_hor_w9:4;
        RBus_UInt32  rw_hor_w10:4;
        RBus_UInt32  rw_hor_w11:4;
        RBus_UInt32  rw_hor_w12:4;
        RBus_UInt32  rw_hor_w13:4;
        RBus_UInt32  rw_hor_w14:4;
        RBus_UInt32  rw_hor_w15:4;
    };
}pcid_pcid_regionalweight_hor_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rw_hor_w16:4;
        RBus_UInt32  rw_hor_w17:4;
        RBus_UInt32  rw_hor_w18:4;
        RBus_UInt32  rw_hor_w19:4;
        RBus_UInt32  rw_hor_w20:4;
        RBus_UInt32  rw_hor_w21:4;
        RBus_UInt32  rw_hor_w22:4;
        RBus_UInt32  rw_hor_w23:4;
    };
}pcid_pcid_regionalweight_hor_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rw_hor_w24:4;
        RBus_UInt32  res1:28;
    };
}pcid_pcid_regionalweight_hor_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rw_ver_w0:4;
        RBus_UInt32  rw_ver_w1:4;
        RBus_UInt32  rw_ver_w2:4;
        RBus_UInt32  rw_ver_w3:4;
        RBus_UInt32  rw_ver_w4:4;
        RBus_UInt32  rw_ver_w5:4;
        RBus_UInt32  rw_ver_w6:4;
        RBus_UInt32  rw_ver_w7:4;
    };
}pcid_pcid_regionalweight_ver_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rw_ver_w8:4;
        RBus_UInt32  rw_ver_w9:4;
        RBus_UInt32  res1:24;
    };
}pcid_pcid_regionalweight_ver_1_RBUS;




#endif 


#endif 
