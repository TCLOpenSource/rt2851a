/**
* @file Mac7p-DesignSpec-D-Domain_DCC
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_COLOR_DCC_REG_H_
#define _RBUS_COLOR_DCC_REG_H_

#include "rbus_types.h"



//  COLOR_DCC Register Address
#define  COLOR_DCC_D_DCC_CTRL                                                   0x1802E400
#define  COLOR_DCC_D_DCC_CTRL_reg_addr                                           "0xB802E400"
#define  COLOR_DCC_D_DCC_CTRL_reg                                                0xB802E400
#define  COLOR_DCC_D_DCC_CTRL_inst_addr                                          "0x0000"
#define  set_COLOR_DCC_D_DCC_CTRL_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_CTRL_reg)=data)
#define  get_COLOR_DCC_D_DCC_CTRL_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_CTRL_reg))
#define  COLOR_DCC_D_DCC_CTRL_dummy_31_22_shift                                  (22)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_5_inside_ratio_msb_shift               (21)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_4_inside_ratio_msb_shift               (20)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_3_inside_ratio_msb_shift               (19)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_2_inside_ratio_msb_shift               (18)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_1_inside_ratio_msb_shift               (17)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_0_inside_ratio_msb_shift               (16)
#define  COLOR_DCC_D_DCC_CTRL_dummy_15_10_shift                                  (10)
#define  COLOR_DCC_D_DCC_CTRL_dcc_user_curve_en_shift                            (9)
#define  COLOR_DCC_D_DCC_CTRL_y_mapping_mode_shift                               (8)
#define  COLOR_DCC_D_DCC_CTRL_y_mapping_blending_wt_shift                        (3)
#define  COLOR_DCC_D_DCC_CTRL_main_table_segment_shift                           (2)
#define  COLOR_DCC_D_DCC_CTRL_main_table_sel_shift                               (1)
#define  COLOR_DCC_D_DCC_CTRL_dummy_31_22_mask                                   (0xFFC00000)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_5_inside_ratio_msb_mask                (0x00200000)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_4_inside_ratio_msb_mask                (0x00100000)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_3_inside_ratio_msb_mask                (0x00080000)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_2_inside_ratio_msb_mask                (0x00040000)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_1_inside_ratio_msb_mask                (0x00020000)
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_0_inside_ratio_msb_mask                (0x00010000)
#define  COLOR_DCC_D_DCC_CTRL_dummy_15_10_mask                                   (0x0000FC00)
#define  COLOR_DCC_D_DCC_CTRL_dcc_user_curve_en_mask                             (0x00000200)
#define  COLOR_DCC_D_DCC_CTRL_y_mapping_mode_mask                                (0x00000100)
#define  COLOR_DCC_D_DCC_CTRL_y_mapping_blending_wt_mask                         (0x000000F8)
#define  COLOR_DCC_D_DCC_CTRL_main_table_segment_mask                            (0x00000004)
#define  COLOR_DCC_D_DCC_CTRL_main_table_sel_mask                                (0x00000002)
#define  COLOR_DCC_D_DCC_CTRL_dummy_31_22(data)                                  (0xFFC00000&((data)<<22))
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_5_inside_ratio_msb(data)               (0x00200000&((data)<<21))
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_4_inside_ratio_msb(data)               (0x00100000&((data)<<20))
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_3_inside_ratio_msb(data)               (0x00080000&((data)<<19))
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_2_inside_ratio_msb(data)               (0x00040000&((data)<<18))
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_1_inside_ratio_msb(data)               (0x00020000&((data)<<17))
#define  COLOR_DCC_D_DCC_CTRL_ai_blending_0_inside_ratio_msb(data)               (0x00010000&((data)<<16))
#define  COLOR_DCC_D_DCC_CTRL_dummy_15_10(data)                                  (0x0000FC00&((data)<<10))
#define  COLOR_DCC_D_DCC_CTRL_dcc_user_curve_en(data)                            (0x00000200&((data)<<9))
#define  COLOR_DCC_D_DCC_CTRL_y_mapping_mode(data)                               (0x00000100&((data)<<8))
#define  COLOR_DCC_D_DCC_CTRL_y_mapping_blending_wt(data)                        (0x000000F8&((data)<<3))
#define  COLOR_DCC_D_DCC_CTRL_main_table_segment(data)                           (0x00000004&((data)<<2))
#define  COLOR_DCC_D_DCC_CTRL_main_table_sel(data)                               (0x00000002&((data)<<1))
#define  COLOR_DCC_D_DCC_CTRL_get_dummy_31_22(data)                              ((0xFFC00000&(data))>>22)
#define  COLOR_DCC_D_DCC_CTRL_get_ai_blending_5_inside_ratio_msb(data)           ((0x00200000&(data))>>21)
#define  COLOR_DCC_D_DCC_CTRL_get_ai_blending_4_inside_ratio_msb(data)           ((0x00100000&(data))>>20)
#define  COLOR_DCC_D_DCC_CTRL_get_ai_blending_3_inside_ratio_msb(data)           ((0x00080000&(data))>>19)
#define  COLOR_DCC_D_DCC_CTRL_get_ai_blending_2_inside_ratio_msb(data)           ((0x00040000&(data))>>18)
#define  COLOR_DCC_D_DCC_CTRL_get_ai_blending_1_inside_ratio_msb(data)           ((0x00020000&(data))>>17)
#define  COLOR_DCC_D_DCC_CTRL_get_ai_blending_0_inside_ratio_msb(data)           ((0x00010000&(data))>>16)
#define  COLOR_DCC_D_DCC_CTRL_get_dummy_15_10(data)                              ((0x0000FC00&(data))>>10)
#define  COLOR_DCC_D_DCC_CTRL_get_dcc_user_curve_en(data)                        ((0x00000200&(data))>>9)
#define  COLOR_DCC_D_DCC_CTRL_get_y_mapping_mode(data)                           ((0x00000100&(data))>>8)
#define  COLOR_DCC_D_DCC_CTRL_get_y_mapping_blending_wt(data)                    ((0x000000F8&(data))>>3)
#define  COLOR_DCC_D_DCC_CTRL_get_main_table_segment(data)                       ((0x00000004&(data))>>2)
#define  COLOR_DCC_D_DCC_CTRL_get_main_table_sel(data)                           ((0x00000002&(data))>>1)

#define  COLOR_DCC_DCC_CTRL_LUMA                                                0x1802E404
#define  COLOR_DCC_DCC_CTRL_LUMA_reg_addr                                        "0xB802E404"
#define  COLOR_DCC_DCC_CTRL_LUMA_reg                                             0xB802E404
#define  COLOR_DCC_DCC_CTRL_LUMA_inst_addr                                       "0x0001"
#define  set_COLOR_DCC_DCC_CTRL_LUMA_reg(data)                                   (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_LUMA_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_LUMA_reg                                         (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_LUMA_reg))
#define  COLOR_DCC_DCC_CTRL_LUMA_luma_offset_main_shift                          (16)
#define  COLOR_DCC_DCC_CTRL_LUMA_luma_offset_main_mask                           (0x00FF0000)
#define  COLOR_DCC_DCC_CTRL_LUMA_luma_offset_main(data)                          (0x00FF0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_LUMA_get_luma_offset_main(data)                      ((0x00FF0000&(data))>>16)

#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0                                      0x1802E408
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_reg_addr                              "0xB802E408"
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_reg                                   0xB802E408
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_inst_addr                             "0x0002"
#define  set_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_reg(data)                         (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_reg)=data)
#define  get_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_reg                               (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_reg))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_chroma_gain_limit_en_shift            (31)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_chroma_gain_limit_seg3_shift          (24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_chroma_gain_limit_seg2_shift          (16)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_chroma_gain_limit_seg1_shift          (8)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_chroma_gain_limit_seg0_shift          (0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_chroma_gain_limit_en_mask             (0x80000000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_chroma_gain_limit_seg3_mask           (0x3F000000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_chroma_gain_limit_seg2_mask           (0x003F0000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_chroma_gain_limit_seg1_mask           (0x00003F00)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_chroma_gain_limit_seg0_mask           (0x0000003F)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_chroma_gain_limit_en(data)            (0x80000000&((data)<<31))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_chroma_gain_limit_seg3(data)          (0x3F000000&((data)<<24))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_chroma_gain_limit_seg2(data)          (0x003F0000&((data)<<16))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_chroma_gain_limit_seg1(data)          (0x00003F00&((data)<<8))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_chroma_gain_limit_seg0(data)          (0x0000003F&(data))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_get_chroma_gain_limit_en(data)        ((0x80000000&(data))>>31)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_get_chroma_gain_limit_seg3(data)      ((0x3F000000&(data))>>24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_get_chroma_gain_limit_seg2(data)      ((0x003F0000&(data))>>16)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_get_chroma_gain_limit_seg1(data)      ((0x00003F00&(data))>>8)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_0_get_chroma_gain_limit_seg0(data)      (0x0000003F&(data))

#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1                                      0x1802E40C
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_reg_addr                              "0xB802E40C"
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_reg                                   0xB802E40C
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_inst_addr                             "0x0003"
#define  set_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_reg(data)                         (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_reg)=data)
#define  get_COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_reg                               (*((volatile unsigned int*)COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_reg))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_chroma_gain_limit_seg7_shift          (24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_chroma_gain_limit_seg6_shift          (16)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_chroma_gain_limit_seg5_shift          (8)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_chroma_gain_limit_seg4_shift          (0)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_chroma_gain_limit_seg7_mask           (0x3F000000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_chroma_gain_limit_seg6_mask           (0x003F0000)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_chroma_gain_limit_seg5_mask           (0x00003F00)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_chroma_gain_limit_seg4_mask           (0x0000003F)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_chroma_gain_limit_seg7(data)          (0x3F000000&((data)<<24))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_chroma_gain_limit_seg6(data)          (0x003F0000&((data)<<16))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_chroma_gain_limit_seg5(data)          (0x00003F00&((data)<<8))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_chroma_gain_limit_seg4(data)          (0x0000003F&(data))
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_get_chroma_gain_limit_seg7(data)      ((0x3F000000&(data))>>24)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_get_chroma_gain_limit_seg6(data)      ((0x003F0000&(data))>>16)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_get_chroma_gain_limit_seg5(data)      ((0x00003F00&(data))>>8)
#define  COLOR_DCC_DCC_CHROMA_GAIN_LIMIT_1_get_chroma_gain_limit_seg4(data)      (0x0000003F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN                                         0x1802E410
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_reg_addr                                 "0xB802E410"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_reg                                      0xB802E410
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_inst_addr                                "0x0004"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_reg(data)                            (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_reg                                  (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_tab0_seg0_shift              (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_tab1_seg0_shift              (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_v_tab_select_main_shift   (11)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_u_tab_select_main_shift   (10)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_below_tab_select_main_shift (9)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_above_tab_select_main_shift (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_base_shift                   (4)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_lookup_mode_shift            (2)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_mode_shift                   (1)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_en_shift                     (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_tab0_seg0_mask               (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_tab1_seg0_mask               (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_v_tab_select_main_mask    (0x00000800)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_u_tab_select_main_mask    (0x00000400)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_below_tab_select_main_mask (0x00000200)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_above_tab_select_main_mask (0x00000100)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_base_mask                    (0x00000070)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_lookup_mode_mask             (0x00000004)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_mode_mask                    (0x00000002)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_en_mask                      (0x00000001)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_tab0_seg0(data)              (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_tab1_seg0(data)              (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_v_tab_select_main(data)   (0x00000800&((data)<<11))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_saturation_byy_u_tab_select_main(data)   (0x00000400&((data)<<10))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_below_tab_select_main(data) (0x00000200&((data)<<9))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_enhance_above_tab_select_main(data) (0x00000100&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_base(data)                   (0x00000070&((data)<<4))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_lookup_mode(data)            (0x00000004&((data)<<2))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_mode(data)                   (0x00000002&((data)<<1))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_chroma_gain_en(data)                     (0x00000001&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_gain_tab0_seg0(data)          ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_gain_tab1_seg0(data)          ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_saturation_byy_v_tab_select_main(data) ((0x00000800&(data))>>11)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_saturation_byy_u_tab_select_main(data) ((0x00000400&(data))>>10)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_enhance_below_tab_select_main(data) ((0x00000200&(data))>>9)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_enhance_above_tab_select_main(data) ((0x00000100&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_gain_base(data)               ((0x00000070&(data))>>4)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_gain_lookup_mode(data)        ((0x00000004&(data))>>2)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_gain_mode(data)               ((0x00000002&(data))>>1)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_get_chroma_gain_en(data)                 (0x00000001&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0                                  0x1802E414
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_reg_addr                          "0xB802E414"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_reg                               0xB802E414
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_inst_addr                         "0x0005"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_chroma_gain_tab0_seg4_shift       (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_chroma_gain_tab0_seg3_shift       (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_chroma_gain_tab0_seg2_shift       (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_chroma_gain_tab0_seg1_shift       (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_chroma_gain_tab0_seg4_mask        (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_chroma_gain_tab0_seg3_mask        (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_chroma_gain_tab0_seg2_mask        (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_chroma_gain_tab0_seg1_mask        (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_chroma_gain_tab0_seg4(data)       (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_chroma_gain_tab0_seg3(data)       (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_chroma_gain_tab0_seg2(data)       (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_chroma_gain_tab0_seg1(data)       (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_get_chroma_gain_tab0_seg4(data)   ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_get_chroma_gain_tab0_seg3(data)   ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_get_chroma_gain_tab0_seg2(data)   ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_0_get_chroma_gain_tab0_seg1(data)   (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1                                  0x1802E418
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_reg_addr                          "0xB802E418"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_reg                               0xB802E418
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_inst_addr                         "0x0006"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_chroma_gain_tab0_seg8_shift       (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_chroma_gain_tab0_seg7_shift       (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_chroma_gain_tab0_seg6_shift       (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_chroma_gain_tab0_seg5_shift       (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_chroma_gain_tab0_seg8_mask        (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_chroma_gain_tab0_seg7_mask        (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_chroma_gain_tab0_seg6_mask        (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_chroma_gain_tab0_seg5_mask        (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_chroma_gain_tab0_seg8(data)       (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_chroma_gain_tab0_seg7(data)       (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_chroma_gain_tab0_seg6(data)       (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_chroma_gain_tab0_seg5(data)       (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_get_chroma_gain_tab0_seg8(data)   ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_get_chroma_gain_tab0_seg7(data)   ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_get_chroma_gain_tab0_seg6(data)   ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_1_get_chroma_gain_tab0_seg5(data)   (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2                                  0x1802E41C
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_reg_addr                          "0xB802E41C"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_reg                               0xB802E41C
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_inst_addr                         "0x0007"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_chroma_gain_tab0_seg12_shift      (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_chroma_gain_tab0_seg11_shift      (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_chroma_gain_tab0_seg10_shift      (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_chroma_gain_tab0_seg9_shift       (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_chroma_gain_tab0_seg12_mask       (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_chroma_gain_tab0_seg11_mask       (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_chroma_gain_tab0_seg10_mask       (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_chroma_gain_tab0_seg9_mask        (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_chroma_gain_tab0_seg12(data)      (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_chroma_gain_tab0_seg11(data)      (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_chroma_gain_tab0_seg10(data)      (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_chroma_gain_tab0_seg9(data)       (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_get_chroma_gain_tab0_seg12(data)  ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_get_chroma_gain_tab0_seg11(data)  ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_get_chroma_gain_tab0_seg10(data)  ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_2_get_chroma_gain_tab0_seg9(data)   (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3                                  0x1802E420
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_reg_addr                          "0xB802E420"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_reg                               0xB802E420
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_inst_addr                         "0x0008"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_chroma_gain_tab0_seg16_shift      (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_chroma_gain_tab0_seg15_shift      (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_chroma_gain_tab0_seg14_shift      (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_chroma_gain_tab0_seg13_shift      (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_chroma_gain_tab0_seg16_mask       (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_chroma_gain_tab0_seg15_mask       (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_chroma_gain_tab0_seg14_mask       (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_chroma_gain_tab0_seg13_mask       (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_chroma_gain_tab0_seg16(data)      (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_chroma_gain_tab0_seg15(data)      (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_chroma_gain_tab0_seg14(data)      (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_chroma_gain_tab0_seg13(data)      (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_get_chroma_gain_tab0_seg16(data)  ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_get_chroma_gain_tab0_seg15(data)  ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_get_chroma_gain_tab0_seg14(data)  ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_3_get_chroma_gain_tab0_seg13(data)  (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4                                  0x1802E424
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_reg_addr                          "0xB802E424"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_reg                               0xB802E424
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_inst_addr                         "0x0009"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_chroma_gain_tab0_seg20_shift      (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_chroma_gain_tab0_seg19_shift      (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_chroma_gain_tab0_seg18_shift      (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_chroma_gain_tab0_seg17_shift      (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_chroma_gain_tab0_seg20_mask       (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_chroma_gain_tab0_seg19_mask       (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_chroma_gain_tab0_seg18_mask       (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_chroma_gain_tab0_seg17_mask       (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_chroma_gain_tab0_seg20(data)      (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_chroma_gain_tab0_seg19(data)      (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_chroma_gain_tab0_seg18(data)      (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_chroma_gain_tab0_seg17(data)      (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_get_chroma_gain_tab0_seg20(data)  ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_get_chroma_gain_tab0_seg19(data)  ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_get_chroma_gain_tab0_seg18(data)  ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_4_get_chroma_gain_tab0_seg17(data)  (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5                                  0x1802E428
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_reg_addr                          "0xB802E428"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_reg                               0xB802E428
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_inst_addr                         "0x000A"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_chroma_gain_tab0_seg24_shift      (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_chroma_gain_tab0_seg23_shift      (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_chroma_gain_tab0_seg22_shift      (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_chroma_gain_tab0_seg21_shift      (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_chroma_gain_tab0_seg24_mask       (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_chroma_gain_tab0_seg23_mask       (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_chroma_gain_tab0_seg22_mask       (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_chroma_gain_tab0_seg21_mask       (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_chroma_gain_tab0_seg24(data)      (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_chroma_gain_tab0_seg23(data)      (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_chroma_gain_tab0_seg22(data)      (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_chroma_gain_tab0_seg21(data)      (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_get_chroma_gain_tab0_seg24(data)  ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_get_chroma_gain_tab0_seg23(data)  ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_get_chroma_gain_tab0_seg22(data)  ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_5_get_chroma_gain_tab0_seg21(data)  (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6                                  0x1802E42C
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_reg_addr                          "0xB802E42C"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_reg                               0xB802E42C
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_inst_addr                         "0x000B"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_chroma_gain_tab0_seg28_shift      (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_chroma_gain_tab0_seg27_shift      (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_chroma_gain_tab0_seg26_shift      (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_chroma_gain_tab0_seg25_shift      (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_chroma_gain_tab0_seg28_mask       (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_chroma_gain_tab0_seg27_mask       (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_chroma_gain_tab0_seg26_mask       (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_chroma_gain_tab0_seg25_mask       (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_chroma_gain_tab0_seg28(data)      (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_chroma_gain_tab0_seg27(data)      (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_chroma_gain_tab0_seg26(data)      (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_chroma_gain_tab0_seg25(data)      (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_get_chroma_gain_tab0_seg28(data)  ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_get_chroma_gain_tab0_seg27(data)  ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_get_chroma_gain_tab0_seg26(data)  ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_6_get_chroma_gain_tab0_seg25(data)  (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7                                  0x1802E430
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_reg_addr                          "0xB802E430"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_reg                               0xB802E430
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_inst_addr                         "0x000C"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_chroma_gain_tab0_seg32_shift      (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_chroma_gain_tab0_seg31_shift      (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_chroma_gain_tab0_seg30_shift      (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_chroma_gain_tab0_seg29_shift      (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_chroma_gain_tab0_seg32_mask       (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_chroma_gain_tab0_seg31_mask       (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_chroma_gain_tab0_seg30_mask       (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_chroma_gain_tab0_seg29_mask       (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_chroma_gain_tab0_seg32(data)      (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_chroma_gain_tab0_seg31(data)      (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_chroma_gain_tab0_seg30(data)      (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_chroma_gain_tab0_seg29(data)      (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_get_chroma_gain_tab0_seg32(data)  ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_get_chroma_gain_tab0_seg31(data)  ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_get_chroma_gain_tab0_seg30(data)  ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_7_get_chroma_gain_tab0_seg29(data)  (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8                                  0x1802E500
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_reg_addr                          "0xB802E500"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_reg                               0xB802E500
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_inst_addr                         "0x000D"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_chroma_gain_tab0_seg36_shift      (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_chroma_gain_tab0_seg35_shift      (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_chroma_gain_tab0_seg34_shift      (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_chroma_gain_tab0_seg33_shift      (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_chroma_gain_tab0_seg36_mask       (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_chroma_gain_tab0_seg35_mask       (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_chroma_gain_tab0_seg34_mask       (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_chroma_gain_tab0_seg33_mask       (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_chroma_gain_tab0_seg36(data)      (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_chroma_gain_tab0_seg35(data)      (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_chroma_gain_tab0_seg34(data)      (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_chroma_gain_tab0_seg33(data)      (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_get_chroma_gain_tab0_seg36(data)  ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_get_chroma_gain_tab0_seg35(data)  ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_get_chroma_gain_tab0_seg34(data)  ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_8_get_chroma_gain_tab0_seg33(data)  (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9                                  0x1802E504
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_reg_addr                          "0xB802E504"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_reg                               0xB802E504
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_inst_addr                         "0x000E"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_chroma_gain_tab0_seg40_shift      (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_chroma_gain_tab0_seg39_shift      (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_chroma_gain_tab0_seg38_shift      (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_chroma_gain_tab0_seg37_shift      (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_chroma_gain_tab0_seg40_mask       (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_chroma_gain_tab0_seg39_mask       (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_chroma_gain_tab0_seg38_mask       (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_chroma_gain_tab0_seg37_mask       (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_chroma_gain_tab0_seg40(data)      (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_chroma_gain_tab0_seg39(data)      (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_chroma_gain_tab0_seg38(data)      (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_chroma_gain_tab0_seg37(data)      (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_get_chroma_gain_tab0_seg40(data)  ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_get_chroma_gain_tab0_seg39(data)  ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_get_chroma_gain_tab0_seg38(data)  ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_9_get_chroma_gain_tab0_seg37(data)  (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10                                 0x1802E508
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_reg_addr                         "0xB802E508"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_reg                              0xB802E508
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_inst_addr                        "0x000F"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_reg                          (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_chroma_gain_tab0_seg44_shift     (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_chroma_gain_tab0_seg43_shift     (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_chroma_gain_tab0_seg42_shift     (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_chroma_gain_tab0_seg41_shift     (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_chroma_gain_tab0_seg44_mask      (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_chroma_gain_tab0_seg43_mask      (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_chroma_gain_tab0_seg42_mask      (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_chroma_gain_tab0_seg41_mask      (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_chroma_gain_tab0_seg44(data)     (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_chroma_gain_tab0_seg43(data)     (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_chroma_gain_tab0_seg42(data)     (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_chroma_gain_tab0_seg41(data)     (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_get_chroma_gain_tab0_seg44(data) ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_get_chroma_gain_tab0_seg43(data) ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_get_chroma_gain_tab0_seg42(data) ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_10_get_chroma_gain_tab0_seg41(data) (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11                                 0x1802E50C
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_reg_addr                         "0xB802E50C"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_reg                              0xB802E50C
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_inst_addr                        "0x0010"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_reg                          (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_chroma_gain_tab0_seg48_shift     (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_chroma_gain_tab0_seg47_shift     (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_chroma_gain_tab0_seg46_shift     (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_chroma_gain_tab0_seg45_shift     (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_chroma_gain_tab0_seg48_mask      (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_chroma_gain_tab0_seg47_mask      (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_chroma_gain_tab0_seg46_mask      (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_chroma_gain_tab0_seg45_mask      (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_chroma_gain_tab0_seg48(data)     (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_chroma_gain_tab0_seg47(data)     (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_chroma_gain_tab0_seg46(data)     (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_chroma_gain_tab0_seg45(data)     (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_get_chroma_gain_tab0_seg48(data) ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_get_chroma_gain_tab0_seg47(data) ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_get_chroma_gain_tab0_seg46(data) ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_11_get_chroma_gain_tab0_seg45(data) (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12                                 0x1802E510
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_reg_addr                         "0xB802E510"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_reg                              0xB802E510
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_inst_addr                        "0x0011"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_reg                          (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_chroma_gain_tab0_seg52_shift     (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_chroma_gain_tab0_seg51_shift     (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_chroma_gain_tab0_seg50_shift     (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_chroma_gain_tab0_seg49_shift     (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_chroma_gain_tab0_seg52_mask      (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_chroma_gain_tab0_seg51_mask      (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_chroma_gain_tab0_seg50_mask      (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_chroma_gain_tab0_seg49_mask      (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_chroma_gain_tab0_seg52(data)     (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_chroma_gain_tab0_seg51(data)     (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_chroma_gain_tab0_seg50(data)     (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_chroma_gain_tab0_seg49(data)     (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_get_chroma_gain_tab0_seg52(data) ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_get_chroma_gain_tab0_seg51(data) ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_get_chroma_gain_tab0_seg50(data) ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_12_get_chroma_gain_tab0_seg49(data) (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13                                 0x1802E514
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_reg_addr                         "0xB802E514"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_reg                              0xB802E514
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_inst_addr                        "0x0012"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_reg                          (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_chroma_gain_tab0_seg56_shift     (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_chroma_gain_tab0_seg55_shift     (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_chroma_gain_tab0_seg54_shift     (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_chroma_gain_tab0_seg53_shift     (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_chroma_gain_tab0_seg56_mask      (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_chroma_gain_tab0_seg55_mask      (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_chroma_gain_tab0_seg54_mask      (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_chroma_gain_tab0_seg53_mask      (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_chroma_gain_tab0_seg56(data)     (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_chroma_gain_tab0_seg55(data)     (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_chroma_gain_tab0_seg54(data)     (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_chroma_gain_tab0_seg53(data)     (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_get_chroma_gain_tab0_seg56(data) ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_get_chroma_gain_tab0_seg55(data) ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_get_chroma_gain_tab0_seg54(data) ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_13_get_chroma_gain_tab0_seg53(data) (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14                                 0x1802E518
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_reg_addr                         "0xB802E518"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_reg                              0xB802E518
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_inst_addr                        "0x0013"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_reg                          (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_chroma_gain_tab0_seg60_shift     (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_chroma_gain_tab0_seg59_shift     (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_chroma_gain_tab0_seg58_shift     (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_chroma_gain_tab0_seg57_shift     (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_chroma_gain_tab0_seg60_mask      (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_chroma_gain_tab0_seg59_mask      (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_chroma_gain_tab0_seg58_mask      (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_chroma_gain_tab0_seg57_mask      (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_chroma_gain_tab0_seg60(data)     (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_chroma_gain_tab0_seg59(data)     (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_chroma_gain_tab0_seg58(data)     (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_chroma_gain_tab0_seg57(data)     (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_get_chroma_gain_tab0_seg60(data) ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_get_chroma_gain_tab0_seg59(data) ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_get_chroma_gain_tab0_seg58(data) ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_14_get_chroma_gain_tab0_seg57(data) (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15                                 0x1802E51C
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_reg_addr                         "0xB802E51C"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_reg                              0xB802E51C
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_inst_addr                        "0x0014"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_reg                          (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_chroma_gain_tab0_seg64_shift     (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_chroma_gain_tab0_seg63_shift     (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_chroma_gain_tab0_seg62_shift     (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_chroma_gain_tab0_seg61_shift     (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_chroma_gain_tab0_seg64_mask      (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_chroma_gain_tab0_seg63_mask      (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_chroma_gain_tab0_seg62_mask      (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_chroma_gain_tab0_seg61_mask      (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_chroma_gain_tab0_seg64(data)     (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_chroma_gain_tab0_seg63(data)     (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_chroma_gain_tab0_seg62(data)     (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_chroma_gain_tab0_seg61(data)     (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_get_chroma_gain_tab0_seg64(data) ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_get_chroma_gain_tab0_seg63(data) ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_get_chroma_gain_tab0_seg62(data) ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB0_15_get_chroma_gain_tab0_seg61(data) (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0                                  0x1802E434
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_reg_addr                          "0xB802E434"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_reg                               0xB802E434
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_inst_addr                         "0x0015"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_chroma_gain_tab1_seg4_shift       (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_chroma_gain_tab1_seg3_shift       (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_chroma_gain_tab1_seg2_shift       (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_chroma_gain_tab1_seg1_shift       (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_chroma_gain_tab1_seg4_mask        (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_chroma_gain_tab1_seg3_mask        (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_chroma_gain_tab1_seg2_mask        (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_chroma_gain_tab1_seg1_mask        (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_chroma_gain_tab1_seg4(data)       (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_chroma_gain_tab1_seg3(data)       (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_chroma_gain_tab1_seg2(data)       (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_chroma_gain_tab1_seg1(data)       (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_get_chroma_gain_tab1_seg4(data)   ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_get_chroma_gain_tab1_seg3(data)   ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_get_chroma_gain_tab1_seg2(data)   ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_0_get_chroma_gain_tab1_seg1(data)   (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1                                  0x1802E438
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_reg_addr                          "0xB802E438"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_reg                               0xB802E438
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_inst_addr                         "0x0016"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_chroma_gain_tab1_seg8_shift       (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_chroma_gain_tab1_seg7_shift       (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_chroma_gain_tab1_seg6_shift       (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_chroma_gain_tab1_seg5_shift       (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_chroma_gain_tab1_seg8_mask        (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_chroma_gain_tab1_seg7_mask        (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_chroma_gain_tab1_seg6_mask        (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_chroma_gain_tab1_seg5_mask        (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_chroma_gain_tab1_seg8(data)       (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_chroma_gain_tab1_seg7(data)       (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_chroma_gain_tab1_seg6(data)       (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_chroma_gain_tab1_seg5(data)       (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_get_chroma_gain_tab1_seg8(data)   ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_get_chroma_gain_tab1_seg7(data)   ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_get_chroma_gain_tab1_seg6(data)   ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_1_get_chroma_gain_tab1_seg5(data)   (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2                                  0x1802E43C
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_reg_addr                          "0xB802E43C"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_reg                               0xB802E43C
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_inst_addr                         "0x0017"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_chroma_gain_tab1_seg12_shift      (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_chroma_gain_tab1_seg11_shift      (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_chroma_gain_tab1_seg10_shift      (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_chroma_gain_tab1_seg9_shift       (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_chroma_gain_tab1_seg12_mask       (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_chroma_gain_tab1_seg11_mask       (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_chroma_gain_tab1_seg10_mask       (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_chroma_gain_tab1_seg9_mask        (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_chroma_gain_tab1_seg12(data)      (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_chroma_gain_tab1_seg11(data)      (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_chroma_gain_tab1_seg10(data)      (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_chroma_gain_tab1_seg9(data)       (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_get_chroma_gain_tab1_seg12(data)  ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_get_chroma_gain_tab1_seg11(data)  ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_get_chroma_gain_tab1_seg10(data)  ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_2_get_chroma_gain_tab1_seg9(data)   (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3                                  0x1802E440
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_reg_addr                          "0xB802E440"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_reg                               0xB802E440
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_inst_addr                         "0x0018"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_chroma_gain_tab1_seg16_shift      (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_chroma_gain_tab1_seg15_shift      (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_chroma_gain_tab1_seg14_shift      (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_chroma_gain_tab1_seg13_shift      (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_chroma_gain_tab1_seg16_mask       (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_chroma_gain_tab1_seg15_mask       (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_chroma_gain_tab1_seg14_mask       (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_chroma_gain_tab1_seg13_mask       (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_chroma_gain_tab1_seg16(data)      (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_chroma_gain_tab1_seg15(data)      (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_chroma_gain_tab1_seg14(data)      (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_chroma_gain_tab1_seg13(data)      (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_get_chroma_gain_tab1_seg16(data)  ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_get_chroma_gain_tab1_seg15(data)  ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_get_chroma_gain_tab1_seg14(data)  ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_3_get_chroma_gain_tab1_seg13(data)  (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4                                  0x1802E444
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_reg_addr                          "0xB802E444"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_reg                               0xB802E444
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_inst_addr                         "0x0019"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_chroma_gain_tab1_seg20_shift      (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_chroma_gain_tab1_seg19_shift      (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_chroma_gain_tab1_seg18_shift      (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_chroma_gain_tab1_seg17_shift      (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_chroma_gain_tab1_seg20_mask       (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_chroma_gain_tab1_seg19_mask       (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_chroma_gain_tab1_seg18_mask       (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_chroma_gain_tab1_seg17_mask       (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_chroma_gain_tab1_seg20(data)      (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_chroma_gain_tab1_seg19(data)      (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_chroma_gain_tab1_seg18(data)      (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_chroma_gain_tab1_seg17(data)      (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_get_chroma_gain_tab1_seg20(data)  ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_get_chroma_gain_tab1_seg19(data)  ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_get_chroma_gain_tab1_seg18(data)  ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_4_get_chroma_gain_tab1_seg17(data)  (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5                                  0x1802E448
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_reg_addr                          "0xB802E448"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_reg                               0xB802E448
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_inst_addr                         "0x001A"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_chroma_gain_tab1_seg24_shift      (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_chroma_gain_tab1_seg23_shift      (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_chroma_gain_tab1_seg22_shift      (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_chroma_gain_tab1_seg21_shift      (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_chroma_gain_tab1_seg24_mask       (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_chroma_gain_tab1_seg23_mask       (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_chroma_gain_tab1_seg22_mask       (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_chroma_gain_tab1_seg21_mask       (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_chroma_gain_tab1_seg24(data)      (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_chroma_gain_tab1_seg23(data)      (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_chroma_gain_tab1_seg22(data)      (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_chroma_gain_tab1_seg21(data)      (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_get_chroma_gain_tab1_seg24(data)  ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_get_chroma_gain_tab1_seg23(data)  ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_get_chroma_gain_tab1_seg22(data)  ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_5_get_chroma_gain_tab1_seg21(data)  (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6                                  0x1802E44C
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_reg_addr                          "0xB802E44C"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_reg                               0xB802E44C
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_inst_addr                         "0x001B"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_chroma_gain_tab1_seg28_shift      (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_chroma_gain_tab1_seg27_shift      (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_chroma_gain_tab1_seg26_shift      (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_chroma_gain_tab1_seg25_shift      (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_chroma_gain_tab1_seg28_mask       (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_chroma_gain_tab1_seg27_mask       (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_chroma_gain_tab1_seg26_mask       (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_chroma_gain_tab1_seg25_mask       (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_chroma_gain_tab1_seg28(data)      (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_chroma_gain_tab1_seg27(data)      (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_chroma_gain_tab1_seg26(data)      (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_chroma_gain_tab1_seg25(data)      (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_get_chroma_gain_tab1_seg28(data)  ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_get_chroma_gain_tab1_seg27(data)  ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_get_chroma_gain_tab1_seg26(data)  ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_6_get_chroma_gain_tab1_seg25(data)  (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7                                  0x1802E450
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_reg_addr                          "0xB802E450"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_reg                               0xB802E450
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_inst_addr                         "0x001C"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_chroma_gain_tab1_seg32_shift      (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_chroma_gain_tab1_seg31_shift      (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_chroma_gain_tab1_seg30_shift      (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_chroma_gain_tab1_seg29_shift      (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_chroma_gain_tab1_seg32_mask       (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_chroma_gain_tab1_seg31_mask       (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_chroma_gain_tab1_seg30_mask       (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_chroma_gain_tab1_seg29_mask       (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_chroma_gain_tab1_seg32(data)      (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_chroma_gain_tab1_seg31(data)      (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_chroma_gain_tab1_seg30(data)      (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_chroma_gain_tab1_seg29(data)      (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_get_chroma_gain_tab1_seg32(data)  ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_get_chroma_gain_tab1_seg31(data)  ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_get_chroma_gain_tab1_seg30(data)  ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_7_get_chroma_gain_tab1_seg29(data)  (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8                                  0x1802E520
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_reg_addr                          "0xB802E520"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_reg                               0xB802E520
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_inst_addr                         "0x001D"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_chroma_gain_tab1_seg36_shift      (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_chroma_gain_tab1_seg35_shift      (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_chroma_gain_tab1_seg34_shift      (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_chroma_gain_tab1_seg33_shift      (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_chroma_gain_tab1_seg36_mask       (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_chroma_gain_tab1_seg35_mask       (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_chroma_gain_tab1_seg34_mask       (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_chroma_gain_tab1_seg33_mask       (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_chroma_gain_tab1_seg36(data)      (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_chroma_gain_tab1_seg35(data)      (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_chroma_gain_tab1_seg34(data)      (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_chroma_gain_tab1_seg33(data)      (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_get_chroma_gain_tab1_seg36(data)  ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_get_chroma_gain_tab1_seg35(data)  ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_get_chroma_gain_tab1_seg34(data)  ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_8_get_chroma_gain_tab1_seg33(data)  (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9                                  0x1802E524
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_reg_addr                          "0xB802E524"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_reg                               0xB802E524
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_inst_addr                         "0x001E"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_reg                           (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_chroma_gain_tab1_seg40_shift      (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_chroma_gain_tab1_seg39_shift      (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_chroma_gain_tab1_seg38_shift      (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_chroma_gain_tab1_seg37_shift      (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_chroma_gain_tab1_seg40_mask       (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_chroma_gain_tab1_seg39_mask       (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_chroma_gain_tab1_seg38_mask       (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_chroma_gain_tab1_seg37_mask       (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_chroma_gain_tab1_seg40(data)      (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_chroma_gain_tab1_seg39(data)      (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_chroma_gain_tab1_seg38(data)      (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_chroma_gain_tab1_seg37(data)      (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_get_chroma_gain_tab1_seg40(data)  ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_get_chroma_gain_tab1_seg39(data)  ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_get_chroma_gain_tab1_seg38(data)  ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_9_get_chroma_gain_tab1_seg37(data)  (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10                                 0x1802E528
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_reg_addr                         "0xB802E528"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_reg                              0xB802E528
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_inst_addr                        "0x001F"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_reg                          (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_chroma_gain_tab1_seg44_shift     (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_chroma_gain_tab1_seg43_shift     (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_chroma_gain_tab1_seg42_shift     (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_chroma_gain_tab1_seg41_shift     (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_chroma_gain_tab1_seg44_mask      (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_chroma_gain_tab1_seg43_mask      (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_chroma_gain_tab1_seg42_mask      (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_chroma_gain_tab1_seg41_mask      (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_chroma_gain_tab1_seg44(data)     (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_chroma_gain_tab1_seg43(data)     (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_chroma_gain_tab1_seg42(data)     (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_chroma_gain_tab1_seg41(data)     (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_get_chroma_gain_tab1_seg44(data) ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_get_chroma_gain_tab1_seg43(data) ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_get_chroma_gain_tab1_seg42(data) ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_10_get_chroma_gain_tab1_seg41(data) (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11                                 0x1802E52C
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_reg_addr                         "0xB802E52C"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_reg                              0xB802E52C
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_inst_addr                        "0x0020"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_reg                          (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_chroma_gain_tab1_seg48_shift     (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_chroma_gain_tab1_seg47_shift     (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_chroma_gain_tab1_seg46_shift     (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_chroma_gain_tab1_seg45_shift     (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_chroma_gain_tab1_seg48_mask      (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_chroma_gain_tab1_seg47_mask      (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_chroma_gain_tab1_seg46_mask      (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_chroma_gain_tab1_seg45_mask      (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_chroma_gain_tab1_seg48(data)     (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_chroma_gain_tab1_seg47(data)     (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_chroma_gain_tab1_seg46(data)     (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_chroma_gain_tab1_seg45(data)     (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_get_chroma_gain_tab1_seg48(data) ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_get_chroma_gain_tab1_seg47(data) ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_get_chroma_gain_tab1_seg46(data) ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_11_get_chroma_gain_tab1_seg45(data) (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12                                 0x1802E530
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_reg_addr                         "0xB802E530"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_reg                              0xB802E530
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_inst_addr                        "0x0021"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_reg                          (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_chroma_gain_tab1_seg52_shift     (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_chroma_gain_tab1_seg51_shift     (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_chroma_gain_tab1_seg50_shift     (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_chroma_gain_tab1_seg49_shift     (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_chroma_gain_tab1_seg52_mask      (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_chroma_gain_tab1_seg51_mask      (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_chroma_gain_tab1_seg50_mask      (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_chroma_gain_tab1_seg49_mask      (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_chroma_gain_tab1_seg52(data)     (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_chroma_gain_tab1_seg51(data)     (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_chroma_gain_tab1_seg50(data)     (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_chroma_gain_tab1_seg49(data)     (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_get_chroma_gain_tab1_seg52(data) ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_get_chroma_gain_tab1_seg51(data) ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_get_chroma_gain_tab1_seg50(data) ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_12_get_chroma_gain_tab1_seg49(data) (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13                                 0x1802E534
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_reg_addr                         "0xB802E534"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_reg                              0xB802E534
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_inst_addr                        "0x0022"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_reg                          (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_chroma_gain_tab1_seg56_shift     (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_chroma_gain_tab1_seg55_shift     (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_chroma_gain_tab1_seg54_shift     (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_chroma_gain_tab1_seg53_shift     (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_chroma_gain_tab1_seg56_mask      (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_chroma_gain_tab1_seg55_mask      (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_chroma_gain_tab1_seg54_mask      (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_chroma_gain_tab1_seg53_mask      (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_chroma_gain_tab1_seg56(data)     (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_chroma_gain_tab1_seg55(data)     (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_chroma_gain_tab1_seg54(data)     (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_chroma_gain_tab1_seg53(data)     (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_get_chroma_gain_tab1_seg56(data) ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_get_chroma_gain_tab1_seg55(data) ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_get_chroma_gain_tab1_seg54(data) ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_13_get_chroma_gain_tab1_seg53(data) (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14                                 0x1802E538
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_reg_addr                         "0xB802E538"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_reg                              0xB802E538
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_inst_addr                        "0x0023"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_reg                          (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_chroma_gain_tab1_seg60_shift     (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_chroma_gain_tab1_seg59_shift     (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_chroma_gain_tab1_seg58_shift     (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_chroma_gain_tab1_seg57_shift     (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_chroma_gain_tab1_seg60_mask      (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_chroma_gain_tab1_seg59_mask      (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_chroma_gain_tab1_seg58_mask      (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_chroma_gain_tab1_seg57_mask      (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_chroma_gain_tab1_seg60(data)     (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_chroma_gain_tab1_seg59(data)     (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_chroma_gain_tab1_seg58(data)     (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_chroma_gain_tab1_seg57(data)     (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_get_chroma_gain_tab1_seg60(data) ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_get_chroma_gain_tab1_seg59(data) ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_get_chroma_gain_tab1_seg58(data) ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_14_get_chroma_gain_tab1_seg57(data) (0x0000007F&(data))

#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15                                 0x1802E53C
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_reg_addr                         "0xB802E53C"
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_reg                              0xB802E53C
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_inst_addr                        "0x0024"
#define  set_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_reg)=data)
#define  get_COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_reg                          (*((volatile unsigned int*)COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_reg))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_chroma_gain_tab1_seg64_shift     (24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_chroma_gain_tab1_seg63_shift     (16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_chroma_gain_tab1_seg62_shift     (8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_chroma_gain_tab1_seg61_shift     (0)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_chroma_gain_tab1_seg64_mask      (0x7F000000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_chroma_gain_tab1_seg63_mask      (0x007F0000)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_chroma_gain_tab1_seg62_mask      (0x00007F00)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_chroma_gain_tab1_seg61_mask      (0x0000007F)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_chroma_gain_tab1_seg64(data)     (0x7F000000&((data)<<24))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_chroma_gain_tab1_seg63(data)     (0x007F0000&((data)<<16))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_chroma_gain_tab1_seg62(data)     (0x00007F00&((data)<<8))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_chroma_gain_tab1_seg61(data)     (0x0000007F&(data))
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_get_chroma_gain_tab1_seg64(data) ((0x7F000000&(data))>>24)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_get_chroma_gain_tab1_seg63(data) ((0x007F0000&(data))>>16)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_get_chroma_gain_tab1_seg62(data) ((0x00007F00&(data))>>8)
#define  COLOR_DCC_DCC_CTRL_CHROMA_GAIN_TAB1_15_get_chroma_gain_tab1_seg61(data) (0x0000007F&(data))

#define  COLOR_DCC_SRAM_TAB_CTL_0                                               0x1802E454
#define  COLOR_DCC_SRAM_TAB_CTL_0_reg_addr                                       "0xB802E454"
#define  COLOR_DCC_SRAM_TAB_CTL_0_reg                                            0xB802E454
#define  COLOR_DCC_SRAM_TAB_CTL_0_inst_addr                                      "0x0025"
#define  set_COLOR_DCC_SRAM_TAB_CTL_0_reg(data)                                  (*((volatile unsigned int*)COLOR_DCC_SRAM_TAB_CTL_0_reg)=data)
#define  get_COLOR_DCC_SRAM_TAB_CTL_0_reg                                        (*((volatile unsigned int*)COLOR_DCC_SRAM_TAB_CTL_0_reg))
#define  COLOR_DCC_SRAM_TAB_CTL_0_sram_tab_acc_index_cur_shift                   (10)
#define  COLOR_DCC_SRAM_TAB_CTL_0_sram_tab_acc_index_shift                       (4)
#define  COLOR_DCC_SRAM_TAB_CTL_0_sram_tab_rw_sel_shift                          (2)
#define  COLOR_DCC_SRAM_TAB_CTL_0_sram_tab_acc_sel_shift                         (1)
#define  COLOR_DCC_SRAM_TAB_CTL_0_sram_tab_acc_ready_shift                       (0)
#define  COLOR_DCC_SRAM_TAB_CTL_0_sram_tab_acc_index_cur_mask                    (0x0000FC00)
#define  COLOR_DCC_SRAM_TAB_CTL_0_sram_tab_acc_index_mask                        (0x000003F0)
#define  COLOR_DCC_SRAM_TAB_CTL_0_sram_tab_rw_sel_mask                           (0x0000000C)
#define  COLOR_DCC_SRAM_TAB_CTL_0_sram_tab_acc_sel_mask                          (0x00000002)
#define  COLOR_DCC_SRAM_TAB_CTL_0_sram_tab_acc_ready_mask                        (0x00000001)
#define  COLOR_DCC_SRAM_TAB_CTL_0_sram_tab_acc_index_cur(data)                   (0x0000FC00&((data)<<10))
#define  COLOR_DCC_SRAM_TAB_CTL_0_sram_tab_acc_index(data)                       (0x000003F0&((data)<<4))
#define  COLOR_DCC_SRAM_TAB_CTL_0_sram_tab_rw_sel(data)                          (0x0000000C&((data)<<2))
#define  COLOR_DCC_SRAM_TAB_CTL_0_sram_tab_acc_sel(data)                         (0x00000002&((data)<<1))
#define  COLOR_DCC_SRAM_TAB_CTL_0_sram_tab_acc_ready(data)                       (0x00000001&(data))
#define  COLOR_DCC_SRAM_TAB_CTL_0_get_sram_tab_acc_index_cur(data)               ((0x0000FC00&(data))>>10)
#define  COLOR_DCC_SRAM_TAB_CTL_0_get_sram_tab_acc_index(data)                   ((0x000003F0&(data))>>4)
#define  COLOR_DCC_SRAM_TAB_CTL_0_get_sram_tab_rw_sel(data)                      ((0x0000000C&(data))>>2)
#define  COLOR_DCC_SRAM_TAB_CTL_0_get_sram_tab_acc_sel(data)                     ((0x00000002&(data))>>1)
#define  COLOR_DCC_SRAM_TAB_CTL_0_get_sram_tab_acc_ready(data)                   (0x00000001&(data))

#define  COLOR_DCC_SRAM_TAB_PORT                                                0x1802E458
#define  COLOR_DCC_SRAM_TAB_PORT_reg_addr                                        "0xB802E458"
#define  COLOR_DCC_SRAM_TAB_PORT_reg                                             0xB802E458
#define  COLOR_DCC_SRAM_TAB_PORT_inst_addr                                       "0x0026"
#define  set_COLOR_DCC_SRAM_TAB_PORT_reg(data)                                   (*((volatile unsigned int*)COLOR_DCC_SRAM_TAB_PORT_reg)=data)
#define  get_COLOR_DCC_SRAM_TAB_PORT_reg                                         (*((volatile unsigned int*)COLOR_DCC_SRAM_TAB_PORT_reg))
#define  COLOR_DCC_SRAM_TAB_PORT_sram_tab_base_shift                             (16)
#define  COLOR_DCC_SRAM_TAB_PORT_sram_tab_g0_shift                               (8)
#define  COLOR_DCC_SRAM_TAB_PORT_sram_tab_g1_shift                               (0)
#define  COLOR_DCC_SRAM_TAB_PORT_sram_tab_base_mask                              (0x03FF0000)
#define  COLOR_DCC_SRAM_TAB_PORT_sram_tab_g0_mask                                (0x0000FF00)
#define  COLOR_DCC_SRAM_TAB_PORT_sram_tab_g1_mask                                (0x000000FF)
#define  COLOR_DCC_SRAM_TAB_PORT_sram_tab_base(data)                             (0x03FF0000&((data)<<16))
#define  COLOR_DCC_SRAM_TAB_PORT_sram_tab_g0(data)                               (0x0000FF00&((data)<<8))
#define  COLOR_DCC_SRAM_TAB_PORT_sram_tab_g1(data)                               (0x000000FF&(data))
#define  COLOR_DCC_SRAM_TAB_PORT_get_sram_tab_base(data)                         ((0x03FF0000&(data))>>16)
#define  COLOR_DCC_SRAM_TAB_PORT_get_sram_tab_g0(data)                           ((0x0000FF00&(data))>>8)
#define  COLOR_DCC_SRAM_TAB_PORT_get_sram_tab_g1(data)                           (0x000000FF&(data))

#define  COLOR_DCC_SRAM_USER_TAB_CTL_0                                          0x1802E540
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_reg_addr                                  "0xB802E540"
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_reg                                       0xB802E540
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_inst_addr                                 "0x0027"
#define  set_COLOR_DCC_SRAM_USER_TAB_CTL_0_reg(data)                             (*((volatile unsigned int*)COLOR_DCC_SRAM_USER_TAB_CTL_0_reg)=data)
#define  get_COLOR_DCC_SRAM_USER_TAB_CTL_0_reg                                   (*((volatile unsigned int*)COLOR_DCC_SRAM_USER_TAB_CTL_0_reg))
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_index_cur_shift         (10)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_index_shift             (4)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_rw_sel_shift                (2)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_sel_shift               (1)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_ready_shift             (0)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_index_cur_mask          (0x0000FC00)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_index_mask              (0x000003F0)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_rw_sel_mask                 (0x0000000C)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_sel_mask                (0x00000002)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_ready_mask              (0x00000001)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_index_cur(data)         (0x0000FC00&((data)<<10))
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_index(data)             (0x000003F0&((data)<<4))
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_rw_sel(data)                (0x0000000C&((data)<<2))
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_sel(data)               (0x00000002&((data)<<1))
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_sram_user_tab_acc_ready(data)             (0x00000001&(data))
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_get_sram_user_tab_acc_index_cur(data)     ((0x0000FC00&(data))>>10)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_get_sram_user_tab_acc_index(data)         ((0x000003F0&(data))>>4)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_get_sram_user_tab_rw_sel(data)            ((0x0000000C&(data))>>2)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_get_sram_user_tab_acc_sel(data)           ((0x00000002&(data))>>1)
#define  COLOR_DCC_SRAM_USER_TAB_CTL_0_get_sram_user_tab_acc_ready(data)         (0x00000001&(data))

#define  COLOR_DCC_SRAM_USER_TAB_PORT                                           0x1802E544
#define  COLOR_DCC_SRAM_USER_TAB_PORT_reg_addr                                   "0xB802E544"
#define  COLOR_DCC_SRAM_USER_TAB_PORT_reg                                        0xB802E544
#define  COLOR_DCC_SRAM_USER_TAB_PORT_inst_addr                                  "0x0028"
#define  set_COLOR_DCC_SRAM_USER_TAB_PORT_reg(data)                              (*((volatile unsigned int*)COLOR_DCC_SRAM_USER_TAB_PORT_reg)=data)
#define  get_COLOR_DCC_SRAM_USER_TAB_PORT_reg                                    (*((volatile unsigned int*)COLOR_DCC_SRAM_USER_TAB_PORT_reg))
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_base_shift                   (16)
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_g0_shift                     (8)
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_g1_shift                     (0)
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_base_mask                    (0x03FF0000)
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_g0_mask                      (0x0000FF00)
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_g1_mask                      (0x000000FF)
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_base(data)                   (0x03FF0000&((data)<<16))
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_g0(data)                     (0x0000FF00&((data)<<8))
#define  COLOR_DCC_SRAM_USER_TAB_PORT_sram_user_tab_g1(data)                     (0x000000FF&(data))
#define  COLOR_DCC_SRAM_USER_TAB_PORT_get_sram_user_tab_base(data)               ((0x03FF0000&(data))>>16)
#define  COLOR_DCC_SRAM_USER_TAB_PORT_get_sram_user_tab_g0(data)                 ((0x0000FF00&(data))>>8)
#define  COLOR_DCC_SRAM_USER_TAB_PORT_get_sram_user_tab_g1(data)                 (0x000000FF&(data))

#define  COLOR_DCC_D_DCC_DB_CTRL                                                0x1802E45C
#define  COLOR_DCC_D_DCC_DB_CTRL_reg_addr                                        "0xB802E45C"
#define  COLOR_DCC_D_DCC_DB_CTRL_reg                                             0xB802E45C
#define  COLOR_DCC_D_DCC_DB_CTRL_inst_addr                                       "0x0029"
#define  set_COLOR_DCC_D_DCC_DB_CTRL_reg(data)                                   (*((volatile unsigned int*)COLOR_DCC_D_DCC_DB_CTRL_reg)=data)
#define  get_COLOR_DCC_D_DCC_DB_CTRL_reg                                         (*((volatile unsigned int*)COLOR_DCC_D_DCC_DB_CTRL_reg))
#define  COLOR_DCC_D_DCC_DB_CTRL_db_en_shift                                     (2)
#define  COLOR_DCC_D_DCC_DB_CTRL_db_read_level_shift                             (1)
#define  COLOR_DCC_D_DCC_DB_CTRL_db_apply_shift                                  (0)
#define  COLOR_DCC_D_DCC_DB_CTRL_db_en_mask                                      (0x00000004)
#define  COLOR_DCC_D_DCC_DB_CTRL_db_read_level_mask                              (0x00000002)
#define  COLOR_DCC_D_DCC_DB_CTRL_db_apply_mask                                   (0x00000001)
#define  COLOR_DCC_D_DCC_DB_CTRL_db_en(data)                                     (0x00000004&((data)<<2))
#define  COLOR_DCC_D_DCC_DB_CTRL_db_read_level(data)                             (0x00000002&((data)<<1))
#define  COLOR_DCC_D_DCC_DB_CTRL_db_apply(data)                                  (0x00000001&(data))
#define  COLOR_DCC_D_DCC_DB_CTRL_get_db_en(data)                                 ((0x00000004&(data))>>2)
#define  COLOR_DCC_D_DCC_DB_CTRL_get_db_read_level(data)                         ((0x00000002&(data))>>1)
#define  COLOR_DCC_D_DCC_DB_CTRL_get_db_apply(data)                              (0x00000001&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_EN                                           0x1802E460
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_reg_addr                                   "0xB802E460"
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_reg                                        0xB802E460
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_inst_addr                                  "0x002A"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_EN_reg(data)                              (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_EN_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_EN_reg                                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_EN_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_region_ratio_blending_en_shift             (19)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_debug_mode_en_shift             (18)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_debug_mode_sel_shift            (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_0_enhance_en_shift              (14)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_1_enhance_en_shift              (13)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_2_enhance_en_shift              (12)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_3_enhance_en_shift              (11)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_4_enhance_en_shift              (10)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_5_enhance_en_shift              (9)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_mode_shift                      (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_ratio_lpf_en_shift                         (7)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg0_en_shift                   (4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg1_en_shift                   (3)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg2_en_shift                   (2)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg3_en_shift                   (1)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_en_shift                        (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_region_ratio_blending_en_mask              (0x00080000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_debug_mode_en_mask              (0x00040000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_debug_mode_sel_mask             (0x00030000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_0_enhance_en_mask               (0x00004000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_1_enhance_en_mask               (0x00002000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_2_enhance_en_mask               (0x00001000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_3_enhance_en_mask               (0x00000800)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_4_enhance_en_mask               (0x00000400)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_5_enhance_en_mask               (0x00000200)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_mode_mask                       (0x00000100)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_ratio_lpf_en_mask                          (0x00000080)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg0_en_mask                    (0x00000010)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg1_en_mask                    (0x00000008)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg2_en_mask                    (0x00000004)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg3_en_mask                    (0x00000002)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_en_mask                         (0x00000001)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_region_ratio_blending_en(data)             (0x00080000&((data)<<19))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_debug_mode_en(data)             (0x00040000&((data)<<18))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_debug_mode_sel(data)            (0x00030000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_0_enhance_en(data)              (0x00004000&((data)<<14))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_1_enhance_en(data)              (0x00002000&((data)<<13))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_2_enhance_en(data)              (0x00001000&((data)<<12))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_3_enhance_en(data)              (0x00000800&((data)<<11))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_4_enhance_en(data)              (0x00000400&((data)<<10))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_5_enhance_en(data)              (0x00000200&((data)<<9))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_mode(data)                      (0x00000100&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_ratio_lpf_en(data)                         (0x00000080&((data)<<7))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg0_en(data)                   (0x00000010&((data)<<4))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg1_en(data)                   (0x00000008&((data)<<3))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg2_en(data)                   (0x00000004&((data)<<2))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_reg3_en(data)                   (0x00000002&((data)<<1))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_y_blending_en(data)                        (0x00000001&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_region_ratio_blending_en(data)         ((0x00080000&(data))>>19)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_debug_mode_en(data)         ((0x00040000&(data))>>18)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_debug_mode_sel(data)        ((0x00030000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_0_enhance_en(data)          ((0x00004000&(data))>>14)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_1_enhance_en(data)          ((0x00002000&(data))>>13)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_2_enhance_en(data)          ((0x00001000&(data))>>12)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_3_enhance_en(data)          ((0x00000800&(data))>>11)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_4_enhance_en(data)          ((0x00000400&(data))>>10)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_5_enhance_en(data)          ((0x00000200&(data))>>9)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_mode(data)                  ((0x00000100&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_ratio_lpf_en(data)                     ((0x00000080&(data))>>7)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_reg0_en(data)               ((0x00000010&(data))>>4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_reg1_en(data)               ((0x00000008&(data))>>3)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_reg2_en(data)               ((0x00000004&(data))>>2)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_reg3_en(data)               ((0x00000002&(data))>>1)
#define  COLOR_DCC_D_DCC_SKIN_TONE_EN_get_y_blending_en(data)                    (0x00000001&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0                                 0x1802E464
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_reg_addr                         "0xB802E464"
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_reg                              0xB802E464
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_inst_addr                        "0x002B"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_y_blending_0_y_center_shift      (20)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_y_blending_0_u_center_shift      (10)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_y_blending_0_v_center_shift      (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_y_blending_0_y_center_mask       (0x3FF00000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_y_blending_0_u_center_mask       (0x000FFC00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_y_blending_0_v_center_mask       (0x000003FF)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_y_blending_0_y_center(data)      (0x3FF00000&((data)<<20))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_y_blending_0_u_center(data)      (0x000FFC00&((data)<<10))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_y_blending_0_v_center(data)      (0x000003FF&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_get_y_blending_0_y_center(data)  ((0x3FF00000&(data))>>20)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_get_y_blending_0_u_center(data)  ((0x000FFC00&(data))>>10)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_get_y_blending_0_v_center(data)  (0x000003FF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0                                  0x1802E468
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_reg_addr                          "0xB802E468"
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_reg                               0xB802E468
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_inst_addr                         "0x002C"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_reg                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_y_range_shift        (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_u_range_shift        (4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_v_range_shift        (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_y_range_mask         (0x00000F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_u_range_mask         (0x000000F0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_v_range_mask         (0x0000000F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_y_range(data)        (0x00000F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_u_range(data)        (0x000000F0&((data)<<4))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_y_blending_0_v_range(data)        (0x0000000F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_get_y_blending_0_y_range(data)    ((0x00000F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_get_y_blending_0_u_range(data)    ((0x000000F0&(data))>>4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_get_y_blending_0_v_range(data)    (0x0000000F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1                                 0x1802E46C
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_reg_addr                         "0xB802E46C"
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_reg                              0xB802E46C
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_inst_addr                        "0x002D"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_y_blending_1_y_center_shift      (20)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_y_blending_1_u_center_shift      (10)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_y_blending_1_v_center_shift      (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_y_blending_1_y_center_mask       (0x3FF00000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_y_blending_1_u_center_mask       (0x000FFC00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_y_blending_1_v_center_mask       (0x000003FF)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_y_blending_1_y_center(data)      (0x3FF00000&((data)<<20))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_y_blending_1_u_center(data)      (0x000FFC00&((data)<<10))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_y_blending_1_v_center(data)      (0x000003FF&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_get_y_blending_1_y_center(data)  ((0x3FF00000&(data))>>20)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_get_y_blending_1_u_center(data)  ((0x000FFC00&(data))>>10)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_1_get_y_blending_1_v_center(data)  (0x000003FF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1                                  0x1802E470
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_reg_addr                          "0xB802E470"
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_reg                               0xB802E470
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_inst_addr                         "0x002E"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_reg                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_y_range_shift        (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_u_range_shift        (4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_v_range_shift        (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_y_range_mask         (0x00000F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_u_range_mask         (0x000000F0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_v_range_mask         (0x0000000F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_y_range(data)        (0x00000F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_u_range(data)        (0x000000F0&((data)<<4))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_y_blending_1_v_range(data)        (0x0000000F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_get_y_blending_1_y_range(data)    ((0x00000F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_get_y_blending_1_u_range(data)    ((0x000000F0&(data))>>4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_1_get_y_blending_1_v_range(data)    (0x0000000F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2                                 0x1802E474
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_reg_addr                         "0xB802E474"
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_reg                              0xB802E474
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_inst_addr                        "0x002F"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_y_blending_2_y_center_shift      (20)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_y_blending_2_u_center_shift      (10)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_y_blending_2_v_center_shift      (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_y_blending_2_y_center_mask       (0x3FF00000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_y_blending_2_u_center_mask       (0x000FFC00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_y_blending_2_v_center_mask       (0x000003FF)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_y_blending_2_y_center(data)      (0x3FF00000&((data)<<20))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_y_blending_2_u_center(data)      (0x000FFC00&((data)<<10))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_y_blending_2_v_center(data)      (0x000003FF&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_get_y_blending_2_y_center(data)  ((0x3FF00000&(data))>>20)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_get_y_blending_2_u_center(data)  ((0x000FFC00&(data))>>10)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_2_get_y_blending_2_v_center(data)  (0x000003FF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2                                  0x1802E478
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_reg_addr                          "0xB802E478"
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_reg                               0xB802E478
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_inst_addr                         "0x0030"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_reg                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_y_range_shift        (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_u_range_shift        (4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_v_range_shift        (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_y_range_mask         (0x00000F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_u_range_mask         (0x000000F0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_v_range_mask         (0x0000000F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_y_range(data)        (0x00000F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_u_range(data)        (0x000000F0&((data)<<4))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_y_blending_2_v_range(data)        (0x0000000F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_get_y_blending_2_y_range(data)    ((0x00000F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_get_y_blending_2_u_range(data)    ((0x000000F0&(data))>>4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_2_get_y_blending_2_v_range(data)    (0x0000000F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3                                 0x1802E47C
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_reg_addr                         "0xB802E47C"
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_reg                              0xB802E47C
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_inst_addr                        "0x0031"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_y_blending_3_y_center_shift      (20)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_y_blending_3_u_center_shift      (10)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_y_blending_3_v_center_shift      (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_y_blending_3_y_center_mask       (0x3FF00000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_y_blending_3_u_center_mask       (0x000FFC00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_y_blending_3_v_center_mask       (0x000003FF)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_y_blending_3_y_center(data)      (0x3FF00000&((data)<<20))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_y_blending_3_u_center(data)      (0x000FFC00&((data)<<10))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_y_blending_3_v_center(data)      (0x000003FF&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_get_y_blending_3_y_center(data)  ((0x3FF00000&(data))>>20)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_get_y_blending_3_u_center(data)  ((0x000FFC00&(data))>>10)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_3_get_y_blending_3_v_center(data)  (0x000003FF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3                                  0x1802E480
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_reg_addr                          "0xB802E480"
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_reg                               0xB802E480
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_inst_addr                         "0x0032"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_reg(data)                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_reg                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_y_range_shift        (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_u_range_shift        (4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_v_range_shift        (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_y_range_mask         (0x00000F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_u_range_mask         (0x000000F0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_v_range_mask         (0x0000000F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_y_range(data)        (0x00000F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_u_range(data)        (0x000000F0&((data)<<4))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_y_blending_3_v_range(data)        (0x0000000F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_get_y_blending_3_y_range(data)    ((0x00000F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_get_y_blending_3_u_range(data)    ((0x000000F0&(data))>>4)
#define  COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_3_get_y_blending_3_v_range(data)    (0x0000000F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0                                   0x1802E484
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_reg_addr                           "0xB802E484"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_reg                                0xB802E484
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_inst_addr                          "0x0033"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_reg(data)                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_reg                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_0_shift         (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_1_shift         (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_2_shift         (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_3_shift         (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_0_mask          (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_1_mask          (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_2_mask          (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_3_mask          (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_0(data)         (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_1(data)         (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_2(data)         (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_y_blending_0_ratio_3(data)         (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_get_y_blending_0_ratio_0(data)     ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_get_y_blending_0_ratio_1(data)     ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_get_y_blending_0_ratio_2(data)     ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_get_y_blending_0_ratio_3(data)     (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1                                   0x1802E488
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_reg_addr                           "0xB802E488"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_reg                                0xB802E488
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_inst_addr                          "0x0034"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_reg(data)                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_reg                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_4_shift         (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_5_shift         (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_6_shift         (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_7_shift         (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_4_mask          (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_5_mask          (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_6_mask          (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_7_mask          (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_4(data)         (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_5(data)         (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_6(data)         (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_y_blending_0_ratio_7(data)         (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_get_y_blending_0_ratio_4(data)     ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_get_y_blending_0_ratio_5(data)     ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_get_y_blending_0_ratio_6(data)     ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_get_y_blending_0_ratio_7(data)     (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0                                   0x1802E48C
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_reg_addr                           "0xB802E48C"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_reg                                0xB802E48C
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_inst_addr                          "0x0035"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_reg(data)                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_reg                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_0_shift         (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_1_shift         (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_2_shift         (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_3_shift         (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_0_mask          (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_1_mask          (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_2_mask          (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_3_mask          (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_0(data)         (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_1(data)         (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_2(data)         (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_y_blending_1_ratio_3(data)         (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_get_y_blending_1_ratio_0(data)     ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_get_y_blending_1_ratio_1(data)     ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_get_y_blending_1_ratio_2(data)     ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_0_get_y_blending_1_ratio_3(data)     (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1                                   0x1802E490
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_reg_addr                           "0xB802E490"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_reg                                0xB802E490
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_inst_addr                          "0x0036"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_reg(data)                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_reg                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_4_shift         (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_5_shift         (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_6_shift         (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_7_shift         (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_4_mask          (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_5_mask          (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_6_mask          (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_7_mask          (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_4(data)         (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_5(data)         (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_6(data)         (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_y_blending_1_ratio_7(data)         (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_get_y_blending_1_ratio_4(data)     ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_get_y_blending_1_ratio_5(data)     ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_get_y_blending_1_ratio_6(data)     ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT1_1_get_y_blending_1_ratio_7(data)     (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0                                   0x1802E494
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_reg_addr                           "0xB802E494"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_reg                                0xB802E494
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_inst_addr                          "0x0037"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_reg(data)                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_reg                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_0_shift         (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_1_shift         (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_2_shift         (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_3_shift         (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_0_mask          (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_1_mask          (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_2_mask          (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_3_mask          (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_0(data)         (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_1(data)         (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_2(data)         (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_y_blending_2_ratio_3(data)         (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_get_y_blending_2_ratio_0(data)     ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_get_y_blending_2_ratio_1(data)     ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_get_y_blending_2_ratio_2(data)     ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_0_get_y_blending_2_ratio_3(data)     (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1                                   0x1802E498
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_reg_addr                           "0xB802E498"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_reg                                0xB802E498
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_inst_addr                          "0x0038"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_reg(data)                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_reg                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_4_shift         (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_5_shift         (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_6_shift         (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_7_shift         (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_4_mask          (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_5_mask          (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_6_mask          (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_7_mask          (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_4(data)         (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_5(data)         (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_6(data)         (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_y_blending_2_ratio_7(data)         (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_get_y_blending_2_ratio_4(data)     ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_get_y_blending_2_ratio_5(data)     ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_get_y_blending_2_ratio_6(data)     ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT2_1_get_y_blending_2_ratio_7(data)     (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0                                   0x1802E49C
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_reg_addr                           "0xB802E49C"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_reg                                0xB802E49C
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_inst_addr                          "0x0039"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_reg(data)                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_reg                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_0_shift         (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_1_shift         (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_2_shift         (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_3_shift         (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_0_mask          (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_1_mask          (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_2_mask          (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_3_mask          (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_0(data)         (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_1(data)         (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_2(data)         (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_y_blending_3_ratio_3(data)         (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_get_y_blending_3_ratio_0(data)     ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_get_y_blending_3_ratio_1(data)     ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_get_y_blending_3_ratio_2(data)     ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_0_get_y_blending_3_ratio_3(data)     (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1                                   0x1802E4A0
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_reg_addr                           "0xB802E4A0"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_reg                                0xB802E4A0
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_inst_addr                          "0x003A"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_reg(data)                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_reg                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_4_shift         (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_5_shift         (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_6_shift         (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_7_shift         (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_4_mask          (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_5_mask          (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_6_mask          (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_7_mask          (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_4(data)         (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_5(data)         (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_6(data)         (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_y_blending_3_ratio_7(data)         (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_get_y_blending_3_ratio_4(data)     ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_get_y_blending_3_ratio_5(data)     ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_get_y_blending_3_ratio_6(data)     ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT3_1_get_y_blending_3_ratio_7(data)     (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0                                 0x1802E4A4
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_reg_addr                         "0xB802E4A4"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_reg                              0xB802E4A4
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_inst_addr                        "0x003B"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_0_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_1_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_2_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_3_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_0_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_1_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_2_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_3_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_0(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_1(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_2(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_c_blending_0_ratio_3(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_get_c_blending_0_ratio_0(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_get_c_blending_0_ratio_1(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_get_c_blending_0_ratio_2(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_get_c_blending_0_ratio_3(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1                                 0x1802E4A8
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_reg_addr                         "0xB802E4A8"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_reg                              0xB802E4A8
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_inst_addr                        "0x003C"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_4_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_5_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_6_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_7_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_4_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_5_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_6_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_7_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_4(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_5(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_6(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_c_blending_0_ratio_7(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_get_c_blending_0_ratio_4(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_get_c_blending_0_ratio_5(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_get_c_blending_0_ratio_6(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_get_c_blending_0_ratio_7(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0                                 0x1802E4AC
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_reg_addr                         "0xB802E4AC"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_reg                              0xB802E4AC
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_inst_addr                        "0x003D"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_0_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_1_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_2_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_3_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_0_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_1_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_2_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_3_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_0(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_1(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_2(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_c_blending_1_ratio_3(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_get_c_blending_1_ratio_0(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_get_c_blending_1_ratio_1(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_get_c_blending_1_ratio_2(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_get_c_blending_1_ratio_3(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1                                 0x1802E4B0
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_reg_addr                         "0xB802E4B0"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_reg                              0xB802E4B0
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_inst_addr                        "0x003E"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_4_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_5_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_6_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_7_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_4_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_5_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_6_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_7_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_4(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_5(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_6(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_c_blending_1_ratio_7(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_get_c_blending_1_ratio_4(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_get_c_blending_1_ratio_5(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_get_c_blending_1_ratio_6(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_get_c_blending_1_ratio_7(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0                                 0x1802E4B4
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_reg_addr                         "0xB802E4B4"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_reg                              0xB802E4B4
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_inst_addr                        "0x003F"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_0_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_1_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_2_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_3_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_0_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_1_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_2_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_3_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_0(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_1(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_2(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_c_blending_2_ratio_3(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_get_c_blending_2_ratio_0(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_get_c_blending_2_ratio_1(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_get_c_blending_2_ratio_2(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_get_c_blending_2_ratio_3(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1                                 0x1802E4B8
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_reg_addr                         "0xB802E4B8"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_reg                              0xB802E4B8
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_inst_addr                        "0x0040"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_4_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_5_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_6_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_7_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_4_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_5_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_6_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_7_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_4(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_5(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_6(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_c_blending_2_ratio_7(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_get_c_blending_2_ratio_4(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_get_c_blending_2_ratio_5(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_get_c_blending_2_ratio_6(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_get_c_blending_2_ratio_7(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0                                 0x1802E4BC
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_reg_addr                         "0xB802E4BC"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_reg                              0xB802E4BC
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_inst_addr                        "0x0041"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_0_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_1_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_2_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_3_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_0_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_1_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_2_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_3_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_0(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_1(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_2(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_c_blending_3_ratio_3(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_get_c_blending_3_ratio_0(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_get_c_blending_3_ratio_1(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_get_c_blending_3_ratio_2(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_get_c_blending_3_ratio_3(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1                                 0x1802E4C0
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_reg_addr                         "0xB802E4C0"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_reg                              0xB802E4C0
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_inst_addr                        "0x0042"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_4_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_5_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_6_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_7_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_4_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_5_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_6_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_7_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_4(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_5(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_6(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_c_blending_3_ratio_7(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_get_c_blending_3_ratio_4(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_get_c_blending_3_ratio_5(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_get_c_blending_3_ratio_6(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_get_c_blending_3_ratio_7(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_CDS_SKIN_0                                             0x1802E4C4
#define  COLOR_DCC_D_DCC_CDS_SKIN_0_reg_addr                                     "0xB802E4C4"
#define  COLOR_DCC_D_DCC_CDS_SKIN_0_reg                                          0xB802E4C4
#define  COLOR_DCC_D_DCC_CDS_SKIN_0_inst_addr                                    "0x0043"
#define  set_COLOR_DCC_D_DCC_CDS_SKIN_0_reg(data)                                (*((volatile unsigned int*)COLOR_DCC_D_DCC_CDS_SKIN_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_CDS_SKIN_0_reg                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_CDS_SKIN_0_reg))
#define  COLOR_DCC_D_DCC_CDS_SKIN_0_cds_skin_en_shift                            (0)
#define  COLOR_DCC_D_DCC_CDS_SKIN_0_cds_skin_en_mask                             (0x00000001)
#define  COLOR_DCC_D_DCC_CDS_SKIN_0_cds_skin_en(data)                            (0x00000001&(data))
#define  COLOR_DCC_D_DCC_CDS_SKIN_0_get_cds_skin_en(data)                        (0x00000001&(data))

#define  COLOR_DCC_D_DCC_CDS_SKIN_1                                             0x1802E4C8
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_reg_addr                                     "0xB802E4C8"
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_reg                                          0xB802E4C8
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_inst_addr                                    "0x0044"
#define  set_COLOR_DCC_D_DCC_CDS_SKIN_1_reg(data)                                (*((volatile unsigned int*)COLOR_DCC_D_DCC_CDS_SKIN_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_CDS_SKIN_1_reg                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_CDS_SKIN_1_reg))
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_cds_uv_range_2_shift                         (20)
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_cds_uv_range_1_shift                         (10)
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_cds_uv_range_0_shift                         (0)
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_cds_uv_range_2_mask                          (0x3FF00000)
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_cds_uv_range_1_mask                          (0x000FFC00)
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_cds_uv_range_0_mask                          (0x000003FF)
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_cds_uv_range_2(data)                         (0x3FF00000&((data)<<20))
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_cds_uv_range_1(data)                         (0x000FFC00&((data)<<10))
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_cds_uv_range_0(data)                         (0x000003FF&(data))
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_get_cds_uv_range_2(data)                     ((0x3FF00000&(data))>>20)
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_get_cds_uv_range_1(data)                     ((0x000FFC00&(data))>>10)
#define  COLOR_DCC_D_DCC_CDS_SKIN_1_get_cds_uv_range_0(data)                     (0x000003FF&(data))

#define  COLOR_DCC_D_DCC_CDS_SKIN_2                                             0x1802E4CC
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_reg_addr                                     "0xB802E4CC"
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_reg                                          0xB802E4CC
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_inst_addr                                    "0x0045"
#define  set_COLOR_DCC_D_DCC_CDS_SKIN_2_reg(data)                                (*((volatile unsigned int*)COLOR_DCC_D_DCC_CDS_SKIN_2_reg)=data)
#define  get_COLOR_DCC_D_DCC_CDS_SKIN_2_reg                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_CDS_SKIN_2_reg))
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_cds_uv_range_5_shift                         (20)
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_cds_uv_range_4_shift                         (10)
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_cds_uv_range_3_shift                         (0)
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_cds_uv_range_5_mask                          (0x3FF00000)
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_cds_uv_range_4_mask                          (0x000FFC00)
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_cds_uv_range_3_mask                          (0x000003FF)
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_cds_uv_range_5(data)                         (0x3FF00000&((data)<<20))
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_cds_uv_range_4(data)                         (0x000FFC00&((data)<<10))
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_cds_uv_range_3(data)                         (0x000003FF&(data))
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_get_cds_uv_range_5(data)                     ((0x3FF00000&(data))>>20)
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_get_cds_uv_range_4(data)                     ((0x000FFC00&(data))>>10)
#define  COLOR_DCC_D_DCC_CDS_SKIN_2_get_cds_uv_range_3(data)                     (0x000003FF&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0                                 0x1802E4D0
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_reg_addr                         "0xB802E4D0"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_reg                              0xB802E4D0
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_inst_addr                        "0x0046"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_0_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_1_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_2_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_3_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_0_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_1_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_2_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_3_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_0(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_1(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_2(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_c_blending_4_ratio_3(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_get_c_blending_4_ratio_0(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_get_c_blending_4_ratio_1(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_get_c_blending_4_ratio_2(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_get_c_blending_4_ratio_3(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1                                 0x1802E4D4
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_reg_addr                         "0xB802E4D4"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_reg                              0xB802E4D4
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_inst_addr                        "0x0047"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_4_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_5_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_6_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_7_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_4_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_5_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_6_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_7_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_4(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_5(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_6(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_c_blending_4_ratio_7(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_get_c_blending_4_ratio_4(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_get_c_blending_4_ratio_5(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_get_c_blending_4_ratio_6(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_get_c_blending_4_ratio_7(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0                                 0x1802E4D8
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_reg_addr                         "0xB802E4D8"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_reg                              0xB802E4D8
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_inst_addr                        "0x0048"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_0_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_1_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_2_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_3_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_0_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_1_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_2_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_3_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_0(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_1(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_2(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_c_blending_5_ratio_3(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_get_c_blending_5_ratio_0(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_get_c_blending_5_ratio_1(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_get_c_blending_5_ratio_2(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_get_c_blending_5_ratio_3(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1                                 0x1802E4DC
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_reg_addr                         "0xB802E4DC"
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_reg                              0xB802E4DC
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_inst_addr                        "0x0049"
#define  set_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_reg(data)                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_reg                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_reg))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_4_shift       (24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_5_shift       (16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_6_shift       (8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_7_shift       (0)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_4_mask        (0x3F000000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_5_mask        (0x003F0000)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_6_mask        (0x00003F00)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_7_mask        (0x0000003F)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_4(data)       (0x3F000000&((data)<<24))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_5(data)       (0x003F0000&((data)<<16))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_6(data)       (0x00003F00&((data)<<8))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_c_blending_5_ratio_7(data)       (0x0000003F&(data))
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_get_c_blending_5_ratio_4(data)   ((0x3F000000&(data))>>24)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_get_c_blending_5_ratio_5(data)   ((0x003F0000&(data))>>16)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_get_c_blending_5_ratio_6(data)   ((0x00003F00&(data))>>8)
#define  COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_get_c_blending_5_ratio_7(data)   (0x0000003F&(data))

#define  COLOR_DCC_D_DCC_AI_0                                                   0x1802E4E0
#define  COLOR_DCC_D_DCC_AI_0_reg_addr                                           "0xB802E4E0"
#define  COLOR_DCC_D_DCC_AI_0_reg                                                0xB802E4E0
#define  COLOR_DCC_D_DCC_AI_0_inst_addr                                          "0x004A"
#define  set_COLOR_DCC_D_DCC_AI_0_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_0_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_0_reg))
#define  COLOR_DCC_D_DCC_AI_0_ai_ros_en_shift                                    (30)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_5_inside_ratio_shift                   (25)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_4_inside_ratio_shift                   (20)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_3_inside_ratio_shift                   (15)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_2_inside_ratio_shift                   (10)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_1_inside_ratio_shift                   (5)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_inside_ratio_shift                   (0)
#define  COLOR_DCC_D_DCC_AI_0_ai_ros_en_mask                                     (0x40000000)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_5_inside_ratio_mask                    (0x3E000000)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_4_inside_ratio_mask                    (0x01F00000)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_3_inside_ratio_mask                    (0x000F8000)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_2_inside_ratio_mask                    (0x00007C00)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_1_inside_ratio_mask                    (0x000003E0)
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_inside_ratio_mask                    (0x0000001F)
#define  COLOR_DCC_D_DCC_AI_0_ai_ros_en(data)                                    (0x40000000&((data)<<30))
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_5_inside_ratio(data)                   (0x3E000000&((data)<<25))
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_4_inside_ratio(data)                   (0x01F00000&((data)<<20))
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_3_inside_ratio(data)                   (0x000F8000&((data)<<15))
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_2_inside_ratio(data)                   (0x00007C00&((data)<<10))
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_1_inside_ratio(data)                   (0x000003E0&((data)<<5))
#define  COLOR_DCC_D_DCC_AI_0_ai_blending_0_inside_ratio(data)                   (0x0000001F&(data))
#define  COLOR_DCC_D_DCC_AI_0_get_ai_ros_en(data)                                ((0x40000000&(data))>>30)
#define  COLOR_DCC_D_DCC_AI_0_get_ai_blending_5_inside_ratio(data)               ((0x3E000000&(data))>>25)
#define  COLOR_DCC_D_DCC_AI_0_get_ai_blending_4_inside_ratio(data)               ((0x01F00000&(data))>>20)
#define  COLOR_DCC_D_DCC_AI_0_get_ai_blending_3_inside_ratio(data)               ((0x000F8000&(data))>>15)
#define  COLOR_DCC_D_DCC_AI_0_get_ai_blending_2_inside_ratio(data)               ((0x00007C00&(data))>>10)
#define  COLOR_DCC_D_DCC_AI_0_get_ai_blending_1_inside_ratio(data)               ((0x000003E0&(data))>>5)
#define  COLOR_DCC_D_DCC_AI_0_get_ai_blending_0_inside_ratio(data)               (0x0000001F&(data))

#define  COLOR_DCC_D_DCC_AI_1                                                   0x1802E4E8
#define  COLOR_DCC_D_DCC_AI_1_reg_addr                                           "0xB802E4E8"
#define  COLOR_DCC_D_DCC_AI_1_reg                                                0xB802E4E8
#define  COLOR_DCC_D_DCC_AI_1_inst_addr                                          "0x004B"
#define  set_COLOR_DCC_D_DCC_AI_1_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_1_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_1_reg))
#define  COLOR_DCC_D_DCC_AI_1_ai_face0_region_en_shift                           (28)
#define  COLOR_DCC_D_DCC_AI_1_ai_edge_pix_num_0_shift                            (26)
#define  COLOR_DCC_D_DCC_AI_1_ai_shrink_pix_num_0_shift                          (20)
#define  COLOR_DCC_D_DCC_AI_1_ai_center_v_0_shift                                (10)
#define  COLOR_DCC_D_DCC_AI_1_ai_center_u_0_shift                                (0)
#define  COLOR_DCC_D_DCC_AI_1_ai_face0_region_en_mask                            (0x10000000)
#define  COLOR_DCC_D_DCC_AI_1_ai_edge_pix_num_0_mask                             (0x0C000000)
#define  COLOR_DCC_D_DCC_AI_1_ai_shrink_pix_num_0_mask                           (0x03F00000)
#define  COLOR_DCC_D_DCC_AI_1_ai_center_v_0_mask                                 (0x000FFC00)
#define  COLOR_DCC_D_DCC_AI_1_ai_center_u_0_mask                                 (0x000003FF)
#define  COLOR_DCC_D_DCC_AI_1_ai_face0_region_en(data)                           (0x10000000&((data)<<28))
#define  COLOR_DCC_D_DCC_AI_1_ai_edge_pix_num_0(data)                            (0x0C000000&((data)<<26))
#define  COLOR_DCC_D_DCC_AI_1_ai_shrink_pix_num_0(data)                          (0x03F00000&((data)<<20))
#define  COLOR_DCC_D_DCC_AI_1_ai_center_v_0(data)                                (0x000FFC00&((data)<<10))
#define  COLOR_DCC_D_DCC_AI_1_ai_center_u_0(data)                                (0x000003FF&(data))
#define  COLOR_DCC_D_DCC_AI_1_get_ai_face0_region_en(data)                       ((0x10000000&(data))>>28)
#define  COLOR_DCC_D_DCC_AI_1_get_ai_edge_pix_num_0(data)                        ((0x0C000000&(data))>>26)
#define  COLOR_DCC_D_DCC_AI_1_get_ai_shrink_pix_num_0(data)                      ((0x03F00000&(data))>>20)
#define  COLOR_DCC_D_DCC_AI_1_get_ai_center_v_0(data)                            ((0x000FFC00&(data))>>10)
#define  COLOR_DCC_D_DCC_AI_1_get_ai_center_u_0(data)                            (0x000003FF&(data))

#define  COLOR_DCC_D_DCC_AI_2                                                   0x1802E4EC
#define  COLOR_DCC_D_DCC_AI_2_reg_addr                                           "0xB802E4EC"
#define  COLOR_DCC_D_DCC_AI_2_reg                                                0xB802E4EC
#define  COLOR_DCC_D_DCC_AI_2_inst_addr                                          "0x004C"
#define  set_COLOR_DCC_D_DCC_AI_2_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_2_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_2_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_2_reg))
#define  COLOR_DCC_D_DCC_AI_2_ai_face1_region_en_shift                           (28)
#define  COLOR_DCC_D_DCC_AI_2_ai_edge_pix_num_1_shift                            (26)
#define  COLOR_DCC_D_DCC_AI_2_ai_shrink_pix_num_1_shift                          (20)
#define  COLOR_DCC_D_DCC_AI_2_ai_center_v_1_shift                                (10)
#define  COLOR_DCC_D_DCC_AI_2_ai_center_u_1_shift                                (0)
#define  COLOR_DCC_D_DCC_AI_2_ai_face1_region_en_mask                            (0x10000000)
#define  COLOR_DCC_D_DCC_AI_2_ai_edge_pix_num_1_mask                             (0x0C000000)
#define  COLOR_DCC_D_DCC_AI_2_ai_shrink_pix_num_1_mask                           (0x03F00000)
#define  COLOR_DCC_D_DCC_AI_2_ai_center_v_1_mask                                 (0x000FFC00)
#define  COLOR_DCC_D_DCC_AI_2_ai_center_u_1_mask                                 (0x000003FF)
#define  COLOR_DCC_D_DCC_AI_2_ai_face1_region_en(data)                           (0x10000000&((data)<<28))
#define  COLOR_DCC_D_DCC_AI_2_ai_edge_pix_num_1(data)                            (0x0C000000&((data)<<26))
#define  COLOR_DCC_D_DCC_AI_2_ai_shrink_pix_num_1(data)                          (0x03F00000&((data)<<20))
#define  COLOR_DCC_D_DCC_AI_2_ai_center_v_1(data)                                (0x000FFC00&((data)<<10))
#define  COLOR_DCC_D_DCC_AI_2_ai_center_u_1(data)                                (0x000003FF&(data))
#define  COLOR_DCC_D_DCC_AI_2_get_ai_face1_region_en(data)                       ((0x10000000&(data))>>28)
#define  COLOR_DCC_D_DCC_AI_2_get_ai_edge_pix_num_1(data)                        ((0x0C000000&(data))>>26)
#define  COLOR_DCC_D_DCC_AI_2_get_ai_shrink_pix_num_1(data)                      ((0x03F00000&(data))>>20)
#define  COLOR_DCC_D_DCC_AI_2_get_ai_center_v_1(data)                            ((0x000FFC00&(data))>>10)
#define  COLOR_DCC_D_DCC_AI_2_get_ai_center_u_1(data)                            (0x000003FF&(data))

#define  COLOR_DCC_D_DCC_AI_3                                                   0x1802E54C
#define  COLOR_DCC_D_DCC_AI_3_reg_addr                                           "0xB802E54C"
#define  COLOR_DCC_D_DCC_AI_3_reg                                                0xB802E54C
#define  COLOR_DCC_D_DCC_AI_3_inst_addr                                          "0x004D"
#define  set_COLOR_DCC_D_DCC_AI_3_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_3_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_3_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_3_reg))
#define  COLOR_DCC_D_DCC_AI_3_ai_face2_region_en_shift                           (28)
#define  COLOR_DCC_D_DCC_AI_3_ai_edge_pix_num_2_shift                            (26)
#define  COLOR_DCC_D_DCC_AI_3_ai_shrink_pix_num_2_shift                          (20)
#define  COLOR_DCC_D_DCC_AI_3_ai_center_v_2_shift                                (10)
#define  COLOR_DCC_D_DCC_AI_3_ai_center_u_2_shift                                (0)
#define  COLOR_DCC_D_DCC_AI_3_ai_face2_region_en_mask                            (0x10000000)
#define  COLOR_DCC_D_DCC_AI_3_ai_edge_pix_num_2_mask                             (0x0C000000)
#define  COLOR_DCC_D_DCC_AI_3_ai_shrink_pix_num_2_mask                           (0x03F00000)
#define  COLOR_DCC_D_DCC_AI_3_ai_center_v_2_mask                                 (0x000FFC00)
#define  COLOR_DCC_D_DCC_AI_3_ai_center_u_2_mask                                 (0x000003FF)
#define  COLOR_DCC_D_DCC_AI_3_ai_face2_region_en(data)                           (0x10000000&((data)<<28))
#define  COLOR_DCC_D_DCC_AI_3_ai_edge_pix_num_2(data)                            (0x0C000000&((data)<<26))
#define  COLOR_DCC_D_DCC_AI_3_ai_shrink_pix_num_2(data)                          (0x03F00000&((data)<<20))
#define  COLOR_DCC_D_DCC_AI_3_ai_center_v_2(data)                                (0x000FFC00&((data)<<10))
#define  COLOR_DCC_D_DCC_AI_3_ai_center_u_2(data)                                (0x000003FF&(data))
#define  COLOR_DCC_D_DCC_AI_3_get_ai_face2_region_en(data)                       ((0x10000000&(data))>>28)
#define  COLOR_DCC_D_DCC_AI_3_get_ai_edge_pix_num_2(data)                        ((0x0C000000&(data))>>26)
#define  COLOR_DCC_D_DCC_AI_3_get_ai_shrink_pix_num_2(data)                      ((0x03F00000&(data))>>20)
#define  COLOR_DCC_D_DCC_AI_3_get_ai_center_v_2(data)                            ((0x000FFC00&(data))>>10)
#define  COLOR_DCC_D_DCC_AI_3_get_ai_center_u_2(data)                            (0x000003FF&(data))

#define  COLOR_DCC_D_DCC_AI_4                                                   0x1802E550
#define  COLOR_DCC_D_DCC_AI_4_reg_addr                                           "0xB802E550"
#define  COLOR_DCC_D_DCC_AI_4_reg                                                0xB802E550
#define  COLOR_DCC_D_DCC_AI_4_inst_addr                                          "0x004E"
#define  set_COLOR_DCC_D_DCC_AI_4_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_4_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_4_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_4_reg))
#define  COLOR_DCC_D_DCC_AI_4_ai_face3_region_en_shift                           (28)
#define  COLOR_DCC_D_DCC_AI_4_ai_edge_pix_num_3_shift                            (26)
#define  COLOR_DCC_D_DCC_AI_4_ai_shrink_pix_num_3_shift                          (20)
#define  COLOR_DCC_D_DCC_AI_4_ai_center_v_3_shift                                (10)
#define  COLOR_DCC_D_DCC_AI_4_ai_center_u_3_shift                                (0)
#define  COLOR_DCC_D_DCC_AI_4_ai_face3_region_en_mask                            (0x10000000)
#define  COLOR_DCC_D_DCC_AI_4_ai_edge_pix_num_3_mask                             (0x0C000000)
#define  COLOR_DCC_D_DCC_AI_4_ai_shrink_pix_num_3_mask                           (0x03F00000)
#define  COLOR_DCC_D_DCC_AI_4_ai_center_v_3_mask                                 (0x000FFC00)
#define  COLOR_DCC_D_DCC_AI_4_ai_center_u_3_mask                                 (0x000003FF)
#define  COLOR_DCC_D_DCC_AI_4_ai_face3_region_en(data)                           (0x10000000&((data)<<28))
#define  COLOR_DCC_D_DCC_AI_4_ai_edge_pix_num_3(data)                            (0x0C000000&((data)<<26))
#define  COLOR_DCC_D_DCC_AI_4_ai_shrink_pix_num_3(data)                          (0x03F00000&((data)<<20))
#define  COLOR_DCC_D_DCC_AI_4_ai_center_v_3(data)                                (0x000FFC00&((data)<<10))
#define  COLOR_DCC_D_DCC_AI_4_ai_center_u_3(data)                                (0x000003FF&(data))
#define  COLOR_DCC_D_DCC_AI_4_get_ai_face3_region_en(data)                       ((0x10000000&(data))>>28)
#define  COLOR_DCC_D_DCC_AI_4_get_ai_edge_pix_num_3(data)                        ((0x0C000000&(data))>>26)
#define  COLOR_DCC_D_DCC_AI_4_get_ai_shrink_pix_num_3(data)                      ((0x03F00000&(data))>>20)
#define  COLOR_DCC_D_DCC_AI_4_get_ai_center_v_3(data)                            ((0x000FFC00&(data))>>10)
#define  COLOR_DCC_D_DCC_AI_4_get_ai_center_u_3(data)                            (0x000003FF&(data))

#define  COLOR_DCC_D_DCC_AI_5                                                   0x1802E554
#define  COLOR_DCC_D_DCC_AI_5_reg_addr                                           "0xB802E554"
#define  COLOR_DCC_D_DCC_AI_5_reg                                                0xB802E554
#define  COLOR_DCC_D_DCC_AI_5_inst_addr                                          "0x004F"
#define  set_COLOR_DCC_D_DCC_AI_5_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_5_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_5_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_5_reg))
#define  COLOR_DCC_D_DCC_AI_5_ai_face4_region_en_shift                           (28)
#define  COLOR_DCC_D_DCC_AI_5_ai_edge_pix_num_4_shift                            (26)
#define  COLOR_DCC_D_DCC_AI_5_ai_shrink_pix_num_4_shift                          (20)
#define  COLOR_DCC_D_DCC_AI_5_ai_center_v_4_shift                                (10)
#define  COLOR_DCC_D_DCC_AI_5_ai_center_u_4_shift                                (0)
#define  COLOR_DCC_D_DCC_AI_5_ai_face4_region_en_mask                            (0x10000000)
#define  COLOR_DCC_D_DCC_AI_5_ai_edge_pix_num_4_mask                             (0x0C000000)
#define  COLOR_DCC_D_DCC_AI_5_ai_shrink_pix_num_4_mask                           (0x03F00000)
#define  COLOR_DCC_D_DCC_AI_5_ai_center_v_4_mask                                 (0x000FFC00)
#define  COLOR_DCC_D_DCC_AI_5_ai_center_u_4_mask                                 (0x000003FF)
#define  COLOR_DCC_D_DCC_AI_5_ai_face4_region_en(data)                           (0x10000000&((data)<<28))
#define  COLOR_DCC_D_DCC_AI_5_ai_edge_pix_num_4(data)                            (0x0C000000&((data)<<26))
#define  COLOR_DCC_D_DCC_AI_5_ai_shrink_pix_num_4(data)                          (0x03F00000&((data)<<20))
#define  COLOR_DCC_D_DCC_AI_5_ai_center_v_4(data)                                (0x000FFC00&((data)<<10))
#define  COLOR_DCC_D_DCC_AI_5_ai_center_u_4(data)                                (0x000003FF&(data))
#define  COLOR_DCC_D_DCC_AI_5_get_ai_face4_region_en(data)                       ((0x10000000&(data))>>28)
#define  COLOR_DCC_D_DCC_AI_5_get_ai_edge_pix_num_4(data)                        ((0x0C000000&(data))>>26)
#define  COLOR_DCC_D_DCC_AI_5_get_ai_shrink_pix_num_4(data)                      ((0x03F00000&(data))>>20)
#define  COLOR_DCC_D_DCC_AI_5_get_ai_center_v_4(data)                            ((0x000FFC00&(data))>>10)
#define  COLOR_DCC_D_DCC_AI_5_get_ai_center_u_4(data)                            (0x000003FF&(data))

#define  COLOR_DCC_D_DCC_AI_6                                                   0x1802E558
#define  COLOR_DCC_D_DCC_AI_6_reg_addr                                           "0xB802E558"
#define  COLOR_DCC_D_DCC_AI_6_reg                                                0xB802E558
#define  COLOR_DCC_D_DCC_AI_6_inst_addr                                          "0x0050"
#define  set_COLOR_DCC_D_DCC_AI_6_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_6_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_6_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_6_reg))
#define  COLOR_DCC_D_DCC_AI_6_ai_face5_region_en_shift                           (28)
#define  COLOR_DCC_D_DCC_AI_6_ai_edge_pix_num_5_shift                            (26)
#define  COLOR_DCC_D_DCC_AI_6_ai_shrink_pix_num_5_shift                          (20)
#define  COLOR_DCC_D_DCC_AI_6_ai_center_v_5_shift                                (10)
#define  COLOR_DCC_D_DCC_AI_6_ai_center_u_5_shift                                (0)
#define  COLOR_DCC_D_DCC_AI_6_ai_face5_region_en_mask                            (0x10000000)
#define  COLOR_DCC_D_DCC_AI_6_ai_edge_pix_num_5_mask                             (0x0C000000)
#define  COLOR_DCC_D_DCC_AI_6_ai_shrink_pix_num_5_mask                           (0x03F00000)
#define  COLOR_DCC_D_DCC_AI_6_ai_center_v_5_mask                                 (0x000FFC00)
#define  COLOR_DCC_D_DCC_AI_6_ai_center_u_5_mask                                 (0x000003FF)
#define  COLOR_DCC_D_DCC_AI_6_ai_face5_region_en(data)                           (0x10000000&((data)<<28))
#define  COLOR_DCC_D_DCC_AI_6_ai_edge_pix_num_5(data)                            (0x0C000000&((data)<<26))
#define  COLOR_DCC_D_DCC_AI_6_ai_shrink_pix_num_5(data)                          (0x03F00000&((data)<<20))
#define  COLOR_DCC_D_DCC_AI_6_ai_center_v_5(data)                                (0x000FFC00&((data)<<10))
#define  COLOR_DCC_D_DCC_AI_6_ai_center_u_5(data)                                (0x000003FF&(data))
#define  COLOR_DCC_D_DCC_AI_6_get_ai_face5_region_en(data)                       ((0x10000000&(data))>>28)
#define  COLOR_DCC_D_DCC_AI_6_get_ai_edge_pix_num_5(data)                        ((0x0C000000&(data))>>26)
#define  COLOR_DCC_D_DCC_AI_6_get_ai_shrink_pix_num_5(data)                      ((0x03F00000&(data))>>20)
#define  COLOR_DCC_D_DCC_AI_6_get_ai_center_v_5(data)                            ((0x000FFC00&(data))>>10)
#define  COLOR_DCC_D_DCC_AI_6_get_ai_center_u_5(data)                            (0x000003FF&(data))

#define  COLOR_DCC_D_DCC_AI_7                                                   0x1802E55C
#define  COLOR_DCC_D_DCC_AI_7_reg_addr                                           "0xB802E55C"
#define  COLOR_DCC_D_DCC_AI_7_reg                                                0xB802E55C
#define  COLOR_DCC_D_DCC_AI_7_inst_addr                                          "0x0051"
#define  set_COLOR_DCC_D_DCC_AI_7_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_7_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_7_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_7_reg))
#define  COLOR_DCC_D_DCC_AI_7_ai_region_end_i_0_shift                            (16)
#define  COLOR_DCC_D_DCC_AI_7_ai_region_start_i_0_shift                          (0)
#define  COLOR_DCC_D_DCC_AI_7_ai_region_end_i_0_mask                             (0x0FFF0000)
#define  COLOR_DCC_D_DCC_AI_7_ai_region_start_i_0_mask                           (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_7_ai_region_end_i_0(data)                            (0x0FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_7_ai_region_start_i_0(data)                          (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_7_get_ai_region_end_i_0(data)                        ((0x0FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_7_get_ai_region_start_i_0(data)                      (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_8                                                   0x1802E560
#define  COLOR_DCC_D_DCC_AI_8_reg_addr                                           "0xB802E560"
#define  COLOR_DCC_D_DCC_AI_8_reg                                                0xB802E560
#define  COLOR_DCC_D_DCC_AI_8_inst_addr                                          "0x0052"
#define  set_COLOR_DCC_D_DCC_AI_8_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_8_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_8_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_8_reg))
#define  COLOR_DCC_D_DCC_AI_8_ai_region_end_i_1_shift                            (16)
#define  COLOR_DCC_D_DCC_AI_8_ai_region_start_i_1_shift                          (0)
#define  COLOR_DCC_D_DCC_AI_8_ai_region_end_i_1_mask                             (0x0FFF0000)
#define  COLOR_DCC_D_DCC_AI_8_ai_region_start_i_1_mask                           (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_8_ai_region_end_i_1(data)                            (0x0FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_8_ai_region_start_i_1(data)                          (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_8_get_ai_region_end_i_1(data)                        ((0x0FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_8_get_ai_region_start_i_1(data)                      (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_9                                                   0x1802E568
#define  COLOR_DCC_D_DCC_AI_9_reg_addr                                           "0xB802E568"
#define  COLOR_DCC_D_DCC_AI_9_reg                                                0xB802E568
#define  COLOR_DCC_D_DCC_AI_9_inst_addr                                          "0x0053"
#define  set_COLOR_DCC_D_DCC_AI_9_reg(data)                                      (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_9_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_9_reg                                            (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_9_reg))
#define  COLOR_DCC_D_DCC_AI_9_ai_region_end_i_2_shift                            (16)
#define  COLOR_DCC_D_DCC_AI_9_ai_region_start_i_2_shift                          (0)
#define  COLOR_DCC_D_DCC_AI_9_ai_region_end_i_2_mask                             (0x0FFF0000)
#define  COLOR_DCC_D_DCC_AI_9_ai_region_start_i_2_mask                           (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_9_ai_region_end_i_2(data)                            (0x0FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_9_ai_region_start_i_2(data)                          (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_9_get_ai_region_end_i_2(data)                        ((0x0FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_9_get_ai_region_start_i_2(data)                      (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_10                                                  0x1802E56C
#define  COLOR_DCC_D_DCC_AI_10_reg_addr                                          "0xB802E56C"
#define  COLOR_DCC_D_DCC_AI_10_reg                                               0xB802E56C
#define  COLOR_DCC_D_DCC_AI_10_inst_addr                                         "0x0054"
#define  set_COLOR_DCC_D_DCC_AI_10_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_10_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_10_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_10_reg))
#define  COLOR_DCC_D_DCC_AI_10_ai_region_end_i_3_shift                           (16)
#define  COLOR_DCC_D_DCC_AI_10_ai_region_start_i_3_shift                         (0)
#define  COLOR_DCC_D_DCC_AI_10_ai_region_end_i_3_mask                            (0x0FFF0000)
#define  COLOR_DCC_D_DCC_AI_10_ai_region_start_i_3_mask                          (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_10_ai_region_end_i_3(data)                           (0x0FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_10_ai_region_start_i_3(data)                         (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_10_get_ai_region_end_i_3(data)                       ((0x0FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_10_get_ai_region_start_i_3(data)                     (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_11                                                  0x1802E570
#define  COLOR_DCC_D_DCC_AI_11_reg_addr                                          "0xB802E570"
#define  COLOR_DCC_D_DCC_AI_11_reg                                               0xB802E570
#define  COLOR_DCC_D_DCC_AI_11_inst_addr                                         "0x0055"
#define  set_COLOR_DCC_D_DCC_AI_11_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_11_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_11_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_11_reg))
#define  COLOR_DCC_D_DCC_AI_11_ai_region_end_i_4_shift                           (16)
#define  COLOR_DCC_D_DCC_AI_11_ai_region_start_i_4_shift                         (0)
#define  COLOR_DCC_D_DCC_AI_11_ai_region_end_i_4_mask                            (0x0FFF0000)
#define  COLOR_DCC_D_DCC_AI_11_ai_region_start_i_4_mask                          (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_11_ai_region_end_i_4(data)                           (0x0FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_11_ai_region_start_i_4(data)                         (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_11_get_ai_region_end_i_4(data)                       ((0x0FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_11_get_ai_region_start_i_4(data)                     (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_12                                                  0x1802E574
#define  COLOR_DCC_D_DCC_AI_12_reg_addr                                          "0xB802E574"
#define  COLOR_DCC_D_DCC_AI_12_reg                                               0xB802E574
#define  COLOR_DCC_D_DCC_AI_12_inst_addr                                         "0x0056"
#define  set_COLOR_DCC_D_DCC_AI_12_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_12_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_12_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_12_reg))
#define  COLOR_DCC_D_DCC_AI_12_ai_region_end_i_5_shift                           (16)
#define  COLOR_DCC_D_DCC_AI_12_ai_region_start_i_5_shift                         (0)
#define  COLOR_DCC_D_DCC_AI_12_ai_region_end_i_5_mask                            (0x0FFF0000)
#define  COLOR_DCC_D_DCC_AI_12_ai_region_start_i_5_mask                          (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_12_ai_region_end_i_5(data)                           (0x0FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_12_ai_region_start_i_5(data)                         (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_12_get_ai_region_end_i_5(data)                       ((0x0FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_12_get_ai_region_start_i_5(data)                     (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_13                                                  0x1802E5E4
#define  COLOR_DCC_D_DCC_AI_13_reg_addr                                          "0xB802E5E4"
#define  COLOR_DCC_D_DCC_AI_13_reg                                               0xB802E5E4
#define  COLOR_DCC_D_DCC_AI_13_inst_addr                                         "0x0057"
#define  set_COLOR_DCC_D_DCC_AI_13_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_13_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_13_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_13_reg))
#define  COLOR_DCC_D_DCC_AI_13_ai_region_end_j_0_shift                           (16)
#define  COLOR_DCC_D_DCC_AI_13_ai_region_start_j_0_shift                         (0)
#define  COLOR_DCC_D_DCC_AI_13_ai_region_end_j_0_mask                            (0x0FFF0000)
#define  COLOR_DCC_D_DCC_AI_13_ai_region_start_j_0_mask                          (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_13_ai_region_end_j_0(data)                           (0x0FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_13_ai_region_start_j_0(data)                         (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_13_get_ai_region_end_j_0(data)                       ((0x0FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_13_get_ai_region_start_j_0(data)                     (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_14                                                  0x1802E5E8
#define  COLOR_DCC_D_DCC_AI_14_reg_addr                                          "0xB802E5E8"
#define  COLOR_DCC_D_DCC_AI_14_reg                                               0xB802E5E8
#define  COLOR_DCC_D_DCC_AI_14_inst_addr                                         "0x0058"
#define  set_COLOR_DCC_D_DCC_AI_14_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_14_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_14_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_14_reg))
#define  COLOR_DCC_D_DCC_AI_14_ai_region_end_j_1_shift                           (16)
#define  COLOR_DCC_D_DCC_AI_14_ai_region_start_j_1_shift                         (0)
#define  COLOR_DCC_D_DCC_AI_14_ai_region_end_j_1_mask                            (0x0FFF0000)
#define  COLOR_DCC_D_DCC_AI_14_ai_region_start_j_1_mask                          (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_14_ai_region_end_j_1(data)                           (0x0FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_14_ai_region_start_j_1(data)                         (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_14_get_ai_region_end_j_1(data)                       ((0x0FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_14_get_ai_region_start_j_1(data)                     (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_15                                                  0x1802E5EC
#define  COLOR_DCC_D_DCC_AI_15_reg_addr                                          "0xB802E5EC"
#define  COLOR_DCC_D_DCC_AI_15_reg                                               0xB802E5EC
#define  COLOR_DCC_D_DCC_AI_15_inst_addr                                         "0x0059"
#define  set_COLOR_DCC_D_DCC_AI_15_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_15_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_15_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_15_reg))
#define  COLOR_DCC_D_DCC_AI_15_ai_region_end_j_2_shift                           (16)
#define  COLOR_DCC_D_DCC_AI_15_ai_region_start_j_2_shift                         (0)
#define  COLOR_DCC_D_DCC_AI_15_ai_region_end_j_2_mask                            (0x0FFF0000)
#define  COLOR_DCC_D_DCC_AI_15_ai_region_start_j_2_mask                          (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_15_ai_region_end_j_2(data)                           (0x0FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_15_ai_region_start_j_2(data)                         (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_15_get_ai_region_end_j_2(data)                       ((0x0FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_15_get_ai_region_start_j_2(data)                     (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_16                                                  0x1802E5F0
#define  COLOR_DCC_D_DCC_AI_16_reg_addr                                          "0xB802E5F0"
#define  COLOR_DCC_D_DCC_AI_16_reg                                               0xB802E5F0
#define  COLOR_DCC_D_DCC_AI_16_inst_addr                                         "0x005A"
#define  set_COLOR_DCC_D_DCC_AI_16_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_16_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_16_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_16_reg))
#define  COLOR_DCC_D_DCC_AI_16_ai_region_end_j_3_shift                           (16)
#define  COLOR_DCC_D_DCC_AI_16_ai_region_start_j_3_shift                         (0)
#define  COLOR_DCC_D_DCC_AI_16_ai_region_end_j_3_mask                            (0x0FFF0000)
#define  COLOR_DCC_D_DCC_AI_16_ai_region_start_j_3_mask                          (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_16_ai_region_end_j_3(data)                           (0x0FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_16_ai_region_start_j_3(data)                         (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_16_get_ai_region_end_j_3(data)                       ((0x0FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_16_get_ai_region_start_j_3(data)                     (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_17                                                  0x1802E5F4
#define  COLOR_DCC_D_DCC_AI_17_reg_addr                                          "0xB802E5F4"
#define  COLOR_DCC_D_DCC_AI_17_reg                                               0xB802E5F4
#define  COLOR_DCC_D_DCC_AI_17_inst_addr                                         "0x005B"
#define  set_COLOR_DCC_D_DCC_AI_17_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_17_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_17_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_17_reg))
#define  COLOR_DCC_D_DCC_AI_17_ai_region_end_j_4_shift                           (16)
#define  COLOR_DCC_D_DCC_AI_17_ai_region_start_j_4_shift                         (0)
#define  COLOR_DCC_D_DCC_AI_17_ai_region_end_j_4_mask                            (0x0FFF0000)
#define  COLOR_DCC_D_DCC_AI_17_ai_region_start_j_4_mask                          (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_17_ai_region_end_j_4(data)                           (0x0FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_17_ai_region_start_j_4(data)                         (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_17_get_ai_region_end_j_4(data)                       ((0x0FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_17_get_ai_region_start_j_4(data)                     (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_18                                                  0x1802E5F8
#define  COLOR_DCC_D_DCC_AI_18_reg_addr                                          "0xB802E5F8"
#define  COLOR_DCC_D_DCC_AI_18_reg                                               0xB802E5F8
#define  COLOR_DCC_D_DCC_AI_18_inst_addr                                         "0x005C"
#define  set_COLOR_DCC_D_DCC_AI_18_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_18_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_18_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_18_reg))
#define  COLOR_DCC_D_DCC_AI_18_ai_region_end_j_5_shift                           (16)
#define  COLOR_DCC_D_DCC_AI_18_ai_region_start_j_5_shift                         (0)
#define  COLOR_DCC_D_DCC_AI_18_ai_region_end_j_5_mask                            (0x0FFF0000)
#define  COLOR_DCC_D_DCC_AI_18_ai_region_start_j_5_mask                          (0x00000FFF)
#define  COLOR_DCC_D_DCC_AI_18_ai_region_end_j_5(data)                           (0x0FFF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_18_ai_region_start_j_5(data)                         (0x00000FFF&(data))
#define  COLOR_DCC_D_DCC_AI_18_get_ai_region_end_j_5(data)                       ((0x0FFF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_18_get_ai_region_start_j_5(data)                     (0x00000FFF&(data))

#define  COLOR_DCC_D_DCC_AI_19                                                  0x1802E578
#define  COLOR_DCC_D_DCC_AI_19_reg_addr                                          "0xB802E578"
#define  COLOR_DCC_D_DCC_AI_19_reg                                               0xB802E578
#define  COLOR_DCC_D_DCC_AI_19_inst_addr                                         "0x005D"
#define  set_COLOR_DCC_D_DCC_AI_19_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_19_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_19_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_19_reg))
#define  COLOR_DCC_D_DCC_AI_19_ai_region_jld_0_shift                             (24)
#define  COLOR_DCC_D_DCC_AI_19_ai_region_jlu_0_shift                             (16)
#define  COLOR_DCC_D_DCC_AI_19_ai_region_ild_0_shift                             (8)
#define  COLOR_DCC_D_DCC_AI_19_ai_region_ilu_0_shift                             (0)
#define  COLOR_DCC_D_DCC_AI_19_ai_region_jld_0_mask                              (0xFF000000)
#define  COLOR_DCC_D_DCC_AI_19_ai_region_jlu_0_mask                              (0x00FF0000)
#define  COLOR_DCC_D_DCC_AI_19_ai_region_ild_0_mask                              (0x0000FF00)
#define  COLOR_DCC_D_DCC_AI_19_ai_region_ilu_0_mask                              (0x000000FF)
#define  COLOR_DCC_D_DCC_AI_19_ai_region_jld_0(data)                             (0xFF000000&((data)<<24))
#define  COLOR_DCC_D_DCC_AI_19_ai_region_jlu_0(data)                             (0x00FF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_19_ai_region_ild_0(data)                             (0x0000FF00&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_19_ai_region_ilu_0(data)                             (0x000000FF&(data))
#define  COLOR_DCC_D_DCC_AI_19_get_ai_region_jld_0(data)                         ((0xFF000000&(data))>>24)
#define  COLOR_DCC_D_DCC_AI_19_get_ai_region_jlu_0(data)                         ((0x00FF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_19_get_ai_region_ild_0(data)                         ((0x0000FF00&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_19_get_ai_region_ilu_0(data)                         (0x000000FF&(data))

#define  COLOR_DCC_D_DCC_AI_20                                                  0x1802E57C
#define  COLOR_DCC_D_DCC_AI_20_reg_addr                                          "0xB802E57C"
#define  COLOR_DCC_D_DCC_AI_20_reg                                               0xB802E57C
#define  COLOR_DCC_D_DCC_AI_20_inst_addr                                         "0x005E"
#define  set_COLOR_DCC_D_DCC_AI_20_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_20_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_20_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_20_reg))
#define  COLOR_DCC_D_DCC_AI_20_ai_region_jrd_0_shift                             (24)
#define  COLOR_DCC_D_DCC_AI_20_ai_region_jru_0_shift                             (16)
#define  COLOR_DCC_D_DCC_AI_20_ai_region_ird_0_shift                             (8)
#define  COLOR_DCC_D_DCC_AI_20_ai_region_iru_0_shift                             (0)
#define  COLOR_DCC_D_DCC_AI_20_ai_region_jrd_0_mask                              (0xFF000000)
#define  COLOR_DCC_D_DCC_AI_20_ai_region_jru_0_mask                              (0x00FF0000)
#define  COLOR_DCC_D_DCC_AI_20_ai_region_ird_0_mask                              (0x0000FF00)
#define  COLOR_DCC_D_DCC_AI_20_ai_region_iru_0_mask                              (0x000000FF)
#define  COLOR_DCC_D_DCC_AI_20_ai_region_jrd_0(data)                             (0xFF000000&((data)<<24))
#define  COLOR_DCC_D_DCC_AI_20_ai_region_jru_0(data)                             (0x00FF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_20_ai_region_ird_0(data)                             (0x0000FF00&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_20_ai_region_iru_0(data)                             (0x000000FF&(data))
#define  COLOR_DCC_D_DCC_AI_20_get_ai_region_jrd_0(data)                         ((0xFF000000&(data))>>24)
#define  COLOR_DCC_D_DCC_AI_20_get_ai_region_jru_0(data)                         ((0x00FF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_20_get_ai_region_ird_0(data)                         ((0x0000FF00&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_20_get_ai_region_iru_0(data)                         (0x000000FF&(data))

#define  COLOR_DCC_D_DCC_AI_21                                                  0x1802E580
#define  COLOR_DCC_D_DCC_AI_21_reg_addr                                          "0xB802E580"
#define  COLOR_DCC_D_DCC_AI_21_reg                                               0xB802E580
#define  COLOR_DCC_D_DCC_AI_21_inst_addr                                         "0x005F"
#define  set_COLOR_DCC_D_DCC_AI_21_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_21_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_21_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_21_reg))
#define  COLOR_DCC_D_DCC_AI_21_ai_region_jrdm_0_shift                            (14)
#define  COLOR_DCC_D_DCC_AI_21_ai_region_jrum_0_shift                            (12)
#define  COLOR_DCC_D_DCC_AI_21_ai_region_irdm_0_shift                            (10)
#define  COLOR_DCC_D_DCC_AI_21_ai_region_irum_0_shift                            (8)
#define  COLOR_DCC_D_DCC_AI_21_ai_region_jldm_0_shift                            (6)
#define  COLOR_DCC_D_DCC_AI_21_ai_region_jlum_0_shift                            (4)
#define  COLOR_DCC_D_DCC_AI_21_ai_region_ildm_0_shift                            (2)
#define  COLOR_DCC_D_DCC_AI_21_ai_region_ilum_0_shift                            (0)
#define  COLOR_DCC_D_DCC_AI_21_ai_region_jrdm_0_mask                             (0x0000C000)
#define  COLOR_DCC_D_DCC_AI_21_ai_region_jrum_0_mask                             (0x00003000)
#define  COLOR_DCC_D_DCC_AI_21_ai_region_irdm_0_mask                             (0x00000C00)
#define  COLOR_DCC_D_DCC_AI_21_ai_region_irum_0_mask                             (0x00000300)
#define  COLOR_DCC_D_DCC_AI_21_ai_region_jldm_0_mask                             (0x000000C0)
#define  COLOR_DCC_D_DCC_AI_21_ai_region_jlum_0_mask                             (0x00000030)
#define  COLOR_DCC_D_DCC_AI_21_ai_region_ildm_0_mask                             (0x0000000C)
#define  COLOR_DCC_D_DCC_AI_21_ai_region_ilum_0_mask                             (0x00000003)
#define  COLOR_DCC_D_DCC_AI_21_ai_region_jrdm_0(data)                            (0x0000C000&((data)<<14))
#define  COLOR_DCC_D_DCC_AI_21_ai_region_jrum_0(data)                            (0x00003000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_21_ai_region_irdm_0(data)                            (0x00000C00&((data)<<10))
#define  COLOR_DCC_D_DCC_AI_21_ai_region_irum_0(data)                            (0x00000300&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_21_ai_region_jldm_0(data)                            (0x000000C0&((data)<<6))
#define  COLOR_DCC_D_DCC_AI_21_ai_region_jlum_0(data)                            (0x00000030&((data)<<4))
#define  COLOR_DCC_D_DCC_AI_21_ai_region_ildm_0(data)                            (0x0000000C&((data)<<2))
#define  COLOR_DCC_D_DCC_AI_21_ai_region_ilum_0(data)                            (0x00000003&(data))
#define  COLOR_DCC_D_DCC_AI_21_get_ai_region_jrdm_0(data)                        ((0x0000C000&(data))>>14)
#define  COLOR_DCC_D_DCC_AI_21_get_ai_region_jrum_0(data)                        ((0x00003000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_21_get_ai_region_irdm_0(data)                        ((0x00000C00&(data))>>10)
#define  COLOR_DCC_D_DCC_AI_21_get_ai_region_irum_0(data)                        ((0x00000300&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_21_get_ai_region_jldm_0(data)                        ((0x000000C0&(data))>>6)
#define  COLOR_DCC_D_DCC_AI_21_get_ai_region_jlum_0(data)                        ((0x00000030&(data))>>4)
#define  COLOR_DCC_D_DCC_AI_21_get_ai_region_ildm_0(data)                        ((0x0000000C&(data))>>2)
#define  COLOR_DCC_D_DCC_AI_21_get_ai_region_ilum_0(data)                        (0x00000003&(data))

#define  COLOR_DCC_D_DCC_AI_22                                                  0x1802E584
#define  COLOR_DCC_D_DCC_AI_22_reg_addr                                          "0xB802E584"
#define  COLOR_DCC_D_DCC_AI_22_reg                                               0xB802E584
#define  COLOR_DCC_D_DCC_AI_22_inst_addr                                         "0x0060"
#define  set_COLOR_DCC_D_DCC_AI_22_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_22_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_22_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_22_reg))
#define  COLOR_DCC_D_DCC_AI_22_ai_region_jld_1_shift                             (24)
#define  COLOR_DCC_D_DCC_AI_22_ai_region_jlu_1_shift                             (16)
#define  COLOR_DCC_D_DCC_AI_22_ai_region_ild_1_shift                             (8)
#define  COLOR_DCC_D_DCC_AI_22_ai_region_ilu_1_shift                             (0)
#define  COLOR_DCC_D_DCC_AI_22_ai_region_jld_1_mask                              (0xFF000000)
#define  COLOR_DCC_D_DCC_AI_22_ai_region_jlu_1_mask                              (0x00FF0000)
#define  COLOR_DCC_D_DCC_AI_22_ai_region_ild_1_mask                              (0x0000FF00)
#define  COLOR_DCC_D_DCC_AI_22_ai_region_ilu_1_mask                              (0x000000FF)
#define  COLOR_DCC_D_DCC_AI_22_ai_region_jld_1(data)                             (0xFF000000&((data)<<24))
#define  COLOR_DCC_D_DCC_AI_22_ai_region_jlu_1(data)                             (0x00FF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_22_ai_region_ild_1(data)                             (0x0000FF00&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_22_ai_region_ilu_1(data)                             (0x000000FF&(data))
#define  COLOR_DCC_D_DCC_AI_22_get_ai_region_jld_1(data)                         ((0xFF000000&(data))>>24)
#define  COLOR_DCC_D_DCC_AI_22_get_ai_region_jlu_1(data)                         ((0x00FF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_22_get_ai_region_ild_1(data)                         ((0x0000FF00&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_22_get_ai_region_ilu_1(data)                         (0x000000FF&(data))

#define  COLOR_DCC_D_DCC_AI_23                                                  0x1802E588
#define  COLOR_DCC_D_DCC_AI_23_reg_addr                                          "0xB802E588"
#define  COLOR_DCC_D_DCC_AI_23_reg                                               0xB802E588
#define  COLOR_DCC_D_DCC_AI_23_inst_addr                                         "0x0061"
#define  set_COLOR_DCC_D_DCC_AI_23_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_23_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_23_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_23_reg))
#define  COLOR_DCC_D_DCC_AI_23_ai_region_jrd_1_shift                             (24)
#define  COLOR_DCC_D_DCC_AI_23_ai_region_jru_1_shift                             (16)
#define  COLOR_DCC_D_DCC_AI_23_ai_region_ird_1_shift                             (8)
#define  COLOR_DCC_D_DCC_AI_23_ai_region_iru_1_shift                             (0)
#define  COLOR_DCC_D_DCC_AI_23_ai_region_jrd_1_mask                              (0xFF000000)
#define  COLOR_DCC_D_DCC_AI_23_ai_region_jru_1_mask                              (0x00FF0000)
#define  COLOR_DCC_D_DCC_AI_23_ai_region_ird_1_mask                              (0x0000FF00)
#define  COLOR_DCC_D_DCC_AI_23_ai_region_iru_1_mask                              (0x000000FF)
#define  COLOR_DCC_D_DCC_AI_23_ai_region_jrd_1(data)                             (0xFF000000&((data)<<24))
#define  COLOR_DCC_D_DCC_AI_23_ai_region_jru_1(data)                             (0x00FF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_23_ai_region_ird_1(data)                             (0x0000FF00&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_23_ai_region_iru_1(data)                             (0x000000FF&(data))
#define  COLOR_DCC_D_DCC_AI_23_get_ai_region_jrd_1(data)                         ((0xFF000000&(data))>>24)
#define  COLOR_DCC_D_DCC_AI_23_get_ai_region_jru_1(data)                         ((0x00FF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_23_get_ai_region_ird_1(data)                         ((0x0000FF00&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_23_get_ai_region_iru_1(data)                         (0x000000FF&(data))

#define  COLOR_DCC_D_DCC_AI_24                                                  0x1802E58C
#define  COLOR_DCC_D_DCC_AI_24_reg_addr                                          "0xB802E58C"
#define  COLOR_DCC_D_DCC_AI_24_reg                                               0xB802E58C
#define  COLOR_DCC_D_DCC_AI_24_inst_addr                                         "0x0062"
#define  set_COLOR_DCC_D_DCC_AI_24_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_24_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_24_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_24_reg))
#define  COLOR_DCC_D_DCC_AI_24_ai_region_jrdm_1_shift                            (14)
#define  COLOR_DCC_D_DCC_AI_24_ai_region_jrum_1_shift                            (12)
#define  COLOR_DCC_D_DCC_AI_24_ai_region_irdm_1_shift                            (10)
#define  COLOR_DCC_D_DCC_AI_24_ai_region_irum_1_shift                            (8)
#define  COLOR_DCC_D_DCC_AI_24_ai_region_jldm_1_shift                            (6)
#define  COLOR_DCC_D_DCC_AI_24_ai_region_jlum_1_shift                            (4)
#define  COLOR_DCC_D_DCC_AI_24_ai_region_ildm_1_shift                            (2)
#define  COLOR_DCC_D_DCC_AI_24_ai_region_ilum_1_shift                            (0)
#define  COLOR_DCC_D_DCC_AI_24_ai_region_jrdm_1_mask                             (0x0000C000)
#define  COLOR_DCC_D_DCC_AI_24_ai_region_jrum_1_mask                             (0x00003000)
#define  COLOR_DCC_D_DCC_AI_24_ai_region_irdm_1_mask                             (0x00000C00)
#define  COLOR_DCC_D_DCC_AI_24_ai_region_irum_1_mask                             (0x00000300)
#define  COLOR_DCC_D_DCC_AI_24_ai_region_jldm_1_mask                             (0x000000C0)
#define  COLOR_DCC_D_DCC_AI_24_ai_region_jlum_1_mask                             (0x00000030)
#define  COLOR_DCC_D_DCC_AI_24_ai_region_ildm_1_mask                             (0x0000000C)
#define  COLOR_DCC_D_DCC_AI_24_ai_region_ilum_1_mask                             (0x00000003)
#define  COLOR_DCC_D_DCC_AI_24_ai_region_jrdm_1(data)                            (0x0000C000&((data)<<14))
#define  COLOR_DCC_D_DCC_AI_24_ai_region_jrum_1(data)                            (0x00003000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_24_ai_region_irdm_1(data)                            (0x00000C00&((data)<<10))
#define  COLOR_DCC_D_DCC_AI_24_ai_region_irum_1(data)                            (0x00000300&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_24_ai_region_jldm_1(data)                            (0x000000C0&((data)<<6))
#define  COLOR_DCC_D_DCC_AI_24_ai_region_jlum_1(data)                            (0x00000030&((data)<<4))
#define  COLOR_DCC_D_DCC_AI_24_ai_region_ildm_1(data)                            (0x0000000C&((data)<<2))
#define  COLOR_DCC_D_DCC_AI_24_ai_region_ilum_1(data)                            (0x00000003&(data))
#define  COLOR_DCC_D_DCC_AI_24_get_ai_region_jrdm_1(data)                        ((0x0000C000&(data))>>14)
#define  COLOR_DCC_D_DCC_AI_24_get_ai_region_jrum_1(data)                        ((0x00003000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_24_get_ai_region_irdm_1(data)                        ((0x00000C00&(data))>>10)
#define  COLOR_DCC_D_DCC_AI_24_get_ai_region_irum_1(data)                        ((0x00000300&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_24_get_ai_region_jldm_1(data)                        ((0x000000C0&(data))>>6)
#define  COLOR_DCC_D_DCC_AI_24_get_ai_region_jlum_1(data)                        ((0x00000030&(data))>>4)
#define  COLOR_DCC_D_DCC_AI_24_get_ai_region_ildm_1(data)                        ((0x0000000C&(data))>>2)
#define  COLOR_DCC_D_DCC_AI_24_get_ai_region_ilum_1(data)                        (0x00000003&(data))

#define  COLOR_DCC_D_DCC_AI_25                                                  0x1802E590
#define  COLOR_DCC_D_DCC_AI_25_reg_addr                                          "0xB802E590"
#define  COLOR_DCC_D_DCC_AI_25_reg                                               0xB802E590
#define  COLOR_DCC_D_DCC_AI_25_inst_addr                                         "0x0063"
#define  set_COLOR_DCC_D_DCC_AI_25_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_25_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_25_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_25_reg))
#define  COLOR_DCC_D_DCC_AI_25_ai_region_jld_2_shift                             (24)
#define  COLOR_DCC_D_DCC_AI_25_ai_region_jlu_2_shift                             (16)
#define  COLOR_DCC_D_DCC_AI_25_ai_region_ild_2_shift                             (8)
#define  COLOR_DCC_D_DCC_AI_25_ai_region_ilu_2_shift                             (0)
#define  COLOR_DCC_D_DCC_AI_25_ai_region_jld_2_mask                              (0xFF000000)
#define  COLOR_DCC_D_DCC_AI_25_ai_region_jlu_2_mask                              (0x00FF0000)
#define  COLOR_DCC_D_DCC_AI_25_ai_region_ild_2_mask                              (0x0000FF00)
#define  COLOR_DCC_D_DCC_AI_25_ai_region_ilu_2_mask                              (0x000000FF)
#define  COLOR_DCC_D_DCC_AI_25_ai_region_jld_2(data)                             (0xFF000000&((data)<<24))
#define  COLOR_DCC_D_DCC_AI_25_ai_region_jlu_2(data)                             (0x00FF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_25_ai_region_ild_2(data)                             (0x0000FF00&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_25_ai_region_ilu_2(data)                             (0x000000FF&(data))
#define  COLOR_DCC_D_DCC_AI_25_get_ai_region_jld_2(data)                         ((0xFF000000&(data))>>24)
#define  COLOR_DCC_D_DCC_AI_25_get_ai_region_jlu_2(data)                         ((0x00FF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_25_get_ai_region_ild_2(data)                         ((0x0000FF00&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_25_get_ai_region_ilu_2(data)                         (0x000000FF&(data))

#define  COLOR_DCC_D_DCC_AI_26                                                  0x1802E594
#define  COLOR_DCC_D_DCC_AI_26_reg_addr                                          "0xB802E594"
#define  COLOR_DCC_D_DCC_AI_26_reg                                               0xB802E594
#define  COLOR_DCC_D_DCC_AI_26_inst_addr                                         "0x0064"
#define  set_COLOR_DCC_D_DCC_AI_26_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_26_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_26_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_26_reg))
#define  COLOR_DCC_D_DCC_AI_26_ai_region_jrd_2_shift                             (24)
#define  COLOR_DCC_D_DCC_AI_26_ai_region_jru_2_shift                             (16)
#define  COLOR_DCC_D_DCC_AI_26_ai_region_ird_2_shift                             (8)
#define  COLOR_DCC_D_DCC_AI_26_ai_region_iru_2_shift                             (0)
#define  COLOR_DCC_D_DCC_AI_26_ai_region_jrd_2_mask                              (0xFF000000)
#define  COLOR_DCC_D_DCC_AI_26_ai_region_jru_2_mask                              (0x00FF0000)
#define  COLOR_DCC_D_DCC_AI_26_ai_region_ird_2_mask                              (0x0000FF00)
#define  COLOR_DCC_D_DCC_AI_26_ai_region_iru_2_mask                              (0x000000FF)
#define  COLOR_DCC_D_DCC_AI_26_ai_region_jrd_2(data)                             (0xFF000000&((data)<<24))
#define  COLOR_DCC_D_DCC_AI_26_ai_region_jru_2(data)                             (0x00FF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_26_ai_region_ird_2(data)                             (0x0000FF00&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_26_ai_region_iru_2(data)                             (0x000000FF&(data))
#define  COLOR_DCC_D_DCC_AI_26_get_ai_region_jrd_2(data)                         ((0xFF000000&(data))>>24)
#define  COLOR_DCC_D_DCC_AI_26_get_ai_region_jru_2(data)                         ((0x00FF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_26_get_ai_region_ird_2(data)                         ((0x0000FF00&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_26_get_ai_region_iru_2(data)                         (0x000000FF&(data))

#define  COLOR_DCC_D_DCC_AI_27                                                  0x1802E598
#define  COLOR_DCC_D_DCC_AI_27_reg_addr                                          "0xB802E598"
#define  COLOR_DCC_D_DCC_AI_27_reg                                               0xB802E598
#define  COLOR_DCC_D_DCC_AI_27_inst_addr                                         "0x0065"
#define  set_COLOR_DCC_D_DCC_AI_27_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_27_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_27_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_27_reg))
#define  COLOR_DCC_D_DCC_AI_27_ai_region_jrdm_2_shift                            (14)
#define  COLOR_DCC_D_DCC_AI_27_ai_region_jrum_2_shift                            (12)
#define  COLOR_DCC_D_DCC_AI_27_ai_region_irdm_2_shift                            (10)
#define  COLOR_DCC_D_DCC_AI_27_ai_region_irum_2_shift                            (8)
#define  COLOR_DCC_D_DCC_AI_27_ai_region_jldm_2_shift                            (6)
#define  COLOR_DCC_D_DCC_AI_27_ai_region_jlum_2_shift                            (4)
#define  COLOR_DCC_D_DCC_AI_27_ai_region_ildm_2_shift                            (2)
#define  COLOR_DCC_D_DCC_AI_27_ai_region_ilum_2_shift                            (0)
#define  COLOR_DCC_D_DCC_AI_27_ai_region_jrdm_2_mask                             (0x0000C000)
#define  COLOR_DCC_D_DCC_AI_27_ai_region_jrum_2_mask                             (0x00003000)
#define  COLOR_DCC_D_DCC_AI_27_ai_region_irdm_2_mask                             (0x00000C00)
#define  COLOR_DCC_D_DCC_AI_27_ai_region_irum_2_mask                             (0x00000300)
#define  COLOR_DCC_D_DCC_AI_27_ai_region_jldm_2_mask                             (0x000000C0)
#define  COLOR_DCC_D_DCC_AI_27_ai_region_jlum_2_mask                             (0x00000030)
#define  COLOR_DCC_D_DCC_AI_27_ai_region_ildm_2_mask                             (0x0000000C)
#define  COLOR_DCC_D_DCC_AI_27_ai_region_ilum_2_mask                             (0x00000003)
#define  COLOR_DCC_D_DCC_AI_27_ai_region_jrdm_2(data)                            (0x0000C000&((data)<<14))
#define  COLOR_DCC_D_DCC_AI_27_ai_region_jrum_2(data)                            (0x00003000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_27_ai_region_irdm_2(data)                            (0x00000C00&((data)<<10))
#define  COLOR_DCC_D_DCC_AI_27_ai_region_irum_2(data)                            (0x00000300&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_27_ai_region_jldm_2(data)                            (0x000000C0&((data)<<6))
#define  COLOR_DCC_D_DCC_AI_27_ai_region_jlum_2(data)                            (0x00000030&((data)<<4))
#define  COLOR_DCC_D_DCC_AI_27_ai_region_ildm_2(data)                            (0x0000000C&((data)<<2))
#define  COLOR_DCC_D_DCC_AI_27_ai_region_ilum_2(data)                            (0x00000003&(data))
#define  COLOR_DCC_D_DCC_AI_27_get_ai_region_jrdm_2(data)                        ((0x0000C000&(data))>>14)
#define  COLOR_DCC_D_DCC_AI_27_get_ai_region_jrum_2(data)                        ((0x00003000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_27_get_ai_region_irdm_2(data)                        ((0x00000C00&(data))>>10)
#define  COLOR_DCC_D_DCC_AI_27_get_ai_region_irum_2(data)                        ((0x00000300&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_27_get_ai_region_jldm_2(data)                        ((0x000000C0&(data))>>6)
#define  COLOR_DCC_D_DCC_AI_27_get_ai_region_jlum_2(data)                        ((0x00000030&(data))>>4)
#define  COLOR_DCC_D_DCC_AI_27_get_ai_region_ildm_2(data)                        ((0x0000000C&(data))>>2)
#define  COLOR_DCC_D_DCC_AI_27_get_ai_region_ilum_2(data)                        (0x00000003&(data))

#define  COLOR_DCC_D_DCC_AI_28                                                  0x1802E59C
#define  COLOR_DCC_D_DCC_AI_28_reg_addr                                          "0xB802E59C"
#define  COLOR_DCC_D_DCC_AI_28_reg                                               0xB802E59C
#define  COLOR_DCC_D_DCC_AI_28_inst_addr                                         "0x0066"
#define  set_COLOR_DCC_D_DCC_AI_28_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_28_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_28_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_28_reg))
#define  COLOR_DCC_D_DCC_AI_28_ai_region_jld_3_shift                             (24)
#define  COLOR_DCC_D_DCC_AI_28_ai_region_jlu_3_shift                             (16)
#define  COLOR_DCC_D_DCC_AI_28_ai_region_ild_3_shift                             (8)
#define  COLOR_DCC_D_DCC_AI_28_ai_region_ilu_3_shift                             (0)
#define  COLOR_DCC_D_DCC_AI_28_ai_region_jld_3_mask                              (0xFF000000)
#define  COLOR_DCC_D_DCC_AI_28_ai_region_jlu_3_mask                              (0x00FF0000)
#define  COLOR_DCC_D_DCC_AI_28_ai_region_ild_3_mask                              (0x0000FF00)
#define  COLOR_DCC_D_DCC_AI_28_ai_region_ilu_3_mask                              (0x000000FF)
#define  COLOR_DCC_D_DCC_AI_28_ai_region_jld_3(data)                             (0xFF000000&((data)<<24))
#define  COLOR_DCC_D_DCC_AI_28_ai_region_jlu_3(data)                             (0x00FF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_28_ai_region_ild_3(data)                             (0x0000FF00&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_28_ai_region_ilu_3(data)                             (0x000000FF&(data))
#define  COLOR_DCC_D_DCC_AI_28_get_ai_region_jld_3(data)                         ((0xFF000000&(data))>>24)
#define  COLOR_DCC_D_DCC_AI_28_get_ai_region_jlu_3(data)                         ((0x00FF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_28_get_ai_region_ild_3(data)                         ((0x0000FF00&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_28_get_ai_region_ilu_3(data)                         (0x000000FF&(data))

#define  COLOR_DCC_D_DCC_AI_29                                                  0x1802E5A0
#define  COLOR_DCC_D_DCC_AI_29_reg_addr                                          "0xB802E5A0"
#define  COLOR_DCC_D_DCC_AI_29_reg                                               0xB802E5A0
#define  COLOR_DCC_D_DCC_AI_29_inst_addr                                         "0x0067"
#define  set_COLOR_DCC_D_DCC_AI_29_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_29_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_29_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_29_reg))
#define  COLOR_DCC_D_DCC_AI_29_ai_region_jrd_3_shift                             (24)
#define  COLOR_DCC_D_DCC_AI_29_ai_region_jru_3_shift                             (16)
#define  COLOR_DCC_D_DCC_AI_29_ai_region_ird_3_shift                             (8)
#define  COLOR_DCC_D_DCC_AI_29_ai_region_iru_3_shift                             (0)
#define  COLOR_DCC_D_DCC_AI_29_ai_region_jrd_3_mask                              (0xFF000000)
#define  COLOR_DCC_D_DCC_AI_29_ai_region_jru_3_mask                              (0x00FF0000)
#define  COLOR_DCC_D_DCC_AI_29_ai_region_ird_3_mask                              (0x0000FF00)
#define  COLOR_DCC_D_DCC_AI_29_ai_region_iru_3_mask                              (0x000000FF)
#define  COLOR_DCC_D_DCC_AI_29_ai_region_jrd_3(data)                             (0xFF000000&((data)<<24))
#define  COLOR_DCC_D_DCC_AI_29_ai_region_jru_3(data)                             (0x00FF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_29_ai_region_ird_3(data)                             (0x0000FF00&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_29_ai_region_iru_3(data)                             (0x000000FF&(data))
#define  COLOR_DCC_D_DCC_AI_29_get_ai_region_jrd_3(data)                         ((0xFF000000&(data))>>24)
#define  COLOR_DCC_D_DCC_AI_29_get_ai_region_jru_3(data)                         ((0x00FF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_29_get_ai_region_ird_3(data)                         ((0x0000FF00&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_29_get_ai_region_iru_3(data)                         (0x000000FF&(data))

#define  COLOR_DCC_D_DCC_AI_30                                                  0x1802E5A4
#define  COLOR_DCC_D_DCC_AI_30_reg_addr                                          "0xB802E5A4"
#define  COLOR_DCC_D_DCC_AI_30_reg                                               0xB802E5A4
#define  COLOR_DCC_D_DCC_AI_30_inst_addr                                         "0x0068"
#define  set_COLOR_DCC_D_DCC_AI_30_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_30_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_30_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_30_reg))
#define  COLOR_DCC_D_DCC_AI_30_ai_region_jrdm_3_shift                            (14)
#define  COLOR_DCC_D_DCC_AI_30_ai_region_jrum_3_shift                            (12)
#define  COLOR_DCC_D_DCC_AI_30_ai_region_irdm_3_shift                            (10)
#define  COLOR_DCC_D_DCC_AI_30_ai_region_irum_3_shift                            (8)
#define  COLOR_DCC_D_DCC_AI_30_ai_region_jldm_3_shift                            (6)
#define  COLOR_DCC_D_DCC_AI_30_ai_region_jlum_3_shift                            (4)
#define  COLOR_DCC_D_DCC_AI_30_ai_region_ildm_3_shift                            (2)
#define  COLOR_DCC_D_DCC_AI_30_ai_region_ilum_3_shift                            (0)
#define  COLOR_DCC_D_DCC_AI_30_ai_region_jrdm_3_mask                             (0x0000C000)
#define  COLOR_DCC_D_DCC_AI_30_ai_region_jrum_3_mask                             (0x00003000)
#define  COLOR_DCC_D_DCC_AI_30_ai_region_irdm_3_mask                             (0x00000C00)
#define  COLOR_DCC_D_DCC_AI_30_ai_region_irum_3_mask                             (0x00000300)
#define  COLOR_DCC_D_DCC_AI_30_ai_region_jldm_3_mask                             (0x000000C0)
#define  COLOR_DCC_D_DCC_AI_30_ai_region_jlum_3_mask                             (0x00000030)
#define  COLOR_DCC_D_DCC_AI_30_ai_region_ildm_3_mask                             (0x0000000C)
#define  COLOR_DCC_D_DCC_AI_30_ai_region_ilum_3_mask                             (0x00000003)
#define  COLOR_DCC_D_DCC_AI_30_ai_region_jrdm_3(data)                            (0x0000C000&((data)<<14))
#define  COLOR_DCC_D_DCC_AI_30_ai_region_jrum_3(data)                            (0x00003000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_30_ai_region_irdm_3(data)                            (0x00000C00&((data)<<10))
#define  COLOR_DCC_D_DCC_AI_30_ai_region_irum_3(data)                            (0x00000300&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_30_ai_region_jldm_3(data)                            (0x000000C0&((data)<<6))
#define  COLOR_DCC_D_DCC_AI_30_ai_region_jlum_3(data)                            (0x00000030&((data)<<4))
#define  COLOR_DCC_D_DCC_AI_30_ai_region_ildm_3(data)                            (0x0000000C&((data)<<2))
#define  COLOR_DCC_D_DCC_AI_30_ai_region_ilum_3(data)                            (0x00000003&(data))
#define  COLOR_DCC_D_DCC_AI_30_get_ai_region_jrdm_3(data)                        ((0x0000C000&(data))>>14)
#define  COLOR_DCC_D_DCC_AI_30_get_ai_region_jrum_3(data)                        ((0x00003000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_30_get_ai_region_irdm_3(data)                        ((0x00000C00&(data))>>10)
#define  COLOR_DCC_D_DCC_AI_30_get_ai_region_irum_3(data)                        ((0x00000300&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_30_get_ai_region_jldm_3(data)                        ((0x000000C0&(data))>>6)
#define  COLOR_DCC_D_DCC_AI_30_get_ai_region_jlum_3(data)                        ((0x00000030&(data))>>4)
#define  COLOR_DCC_D_DCC_AI_30_get_ai_region_ildm_3(data)                        ((0x0000000C&(data))>>2)
#define  COLOR_DCC_D_DCC_AI_30_get_ai_region_ilum_3(data)                        (0x00000003&(data))

#define  COLOR_DCC_D_DCC_AI_31                                                  0x1802E5A8
#define  COLOR_DCC_D_DCC_AI_31_reg_addr                                          "0xB802E5A8"
#define  COLOR_DCC_D_DCC_AI_31_reg                                               0xB802E5A8
#define  COLOR_DCC_D_DCC_AI_31_inst_addr                                         "0x0069"
#define  set_COLOR_DCC_D_DCC_AI_31_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_31_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_31_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_31_reg))
#define  COLOR_DCC_D_DCC_AI_31_ai_region_jld_4_shift                             (24)
#define  COLOR_DCC_D_DCC_AI_31_ai_region_jlu_4_shift                             (16)
#define  COLOR_DCC_D_DCC_AI_31_ai_region_ild_4_shift                             (8)
#define  COLOR_DCC_D_DCC_AI_31_ai_region_ilu_4_shift                             (0)
#define  COLOR_DCC_D_DCC_AI_31_ai_region_jld_4_mask                              (0xFF000000)
#define  COLOR_DCC_D_DCC_AI_31_ai_region_jlu_4_mask                              (0x00FF0000)
#define  COLOR_DCC_D_DCC_AI_31_ai_region_ild_4_mask                              (0x0000FF00)
#define  COLOR_DCC_D_DCC_AI_31_ai_region_ilu_4_mask                              (0x000000FF)
#define  COLOR_DCC_D_DCC_AI_31_ai_region_jld_4(data)                             (0xFF000000&((data)<<24))
#define  COLOR_DCC_D_DCC_AI_31_ai_region_jlu_4(data)                             (0x00FF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_31_ai_region_ild_4(data)                             (0x0000FF00&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_31_ai_region_ilu_4(data)                             (0x000000FF&(data))
#define  COLOR_DCC_D_DCC_AI_31_get_ai_region_jld_4(data)                         ((0xFF000000&(data))>>24)
#define  COLOR_DCC_D_DCC_AI_31_get_ai_region_jlu_4(data)                         ((0x00FF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_31_get_ai_region_ild_4(data)                         ((0x0000FF00&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_31_get_ai_region_ilu_4(data)                         (0x000000FF&(data))

#define  COLOR_DCC_D_DCC_AI_32                                                  0x1802E5AC
#define  COLOR_DCC_D_DCC_AI_32_reg_addr                                          "0xB802E5AC"
#define  COLOR_DCC_D_DCC_AI_32_reg                                               0xB802E5AC
#define  COLOR_DCC_D_DCC_AI_32_inst_addr                                         "0x006A"
#define  set_COLOR_DCC_D_DCC_AI_32_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_32_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_32_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_32_reg))
#define  COLOR_DCC_D_DCC_AI_32_ai_region_jrd_4_shift                             (24)
#define  COLOR_DCC_D_DCC_AI_32_ai_region_jru_4_shift                             (16)
#define  COLOR_DCC_D_DCC_AI_32_ai_region_ird_4_shift                             (8)
#define  COLOR_DCC_D_DCC_AI_32_ai_region_iru_4_shift                             (0)
#define  COLOR_DCC_D_DCC_AI_32_ai_region_jrd_4_mask                              (0xFF000000)
#define  COLOR_DCC_D_DCC_AI_32_ai_region_jru_4_mask                              (0x00FF0000)
#define  COLOR_DCC_D_DCC_AI_32_ai_region_ird_4_mask                              (0x0000FF00)
#define  COLOR_DCC_D_DCC_AI_32_ai_region_iru_4_mask                              (0x000000FF)
#define  COLOR_DCC_D_DCC_AI_32_ai_region_jrd_4(data)                             (0xFF000000&((data)<<24))
#define  COLOR_DCC_D_DCC_AI_32_ai_region_jru_4(data)                             (0x00FF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_32_ai_region_ird_4(data)                             (0x0000FF00&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_32_ai_region_iru_4(data)                             (0x000000FF&(data))
#define  COLOR_DCC_D_DCC_AI_32_get_ai_region_jrd_4(data)                         ((0xFF000000&(data))>>24)
#define  COLOR_DCC_D_DCC_AI_32_get_ai_region_jru_4(data)                         ((0x00FF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_32_get_ai_region_ird_4(data)                         ((0x0000FF00&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_32_get_ai_region_iru_4(data)                         (0x000000FF&(data))

#define  COLOR_DCC_D_DCC_AI_33                                                  0x1802E5B0
#define  COLOR_DCC_D_DCC_AI_33_reg_addr                                          "0xB802E5B0"
#define  COLOR_DCC_D_DCC_AI_33_reg                                               0xB802E5B0
#define  COLOR_DCC_D_DCC_AI_33_inst_addr                                         "0x006B"
#define  set_COLOR_DCC_D_DCC_AI_33_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_33_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_33_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_33_reg))
#define  COLOR_DCC_D_DCC_AI_33_ai_region_jrdm_4_shift                            (14)
#define  COLOR_DCC_D_DCC_AI_33_ai_region_jrum_4_shift                            (12)
#define  COLOR_DCC_D_DCC_AI_33_ai_region_irdm_4_shift                            (10)
#define  COLOR_DCC_D_DCC_AI_33_ai_region_irum_4_shift                            (8)
#define  COLOR_DCC_D_DCC_AI_33_ai_region_jldm_4_shift                            (6)
#define  COLOR_DCC_D_DCC_AI_33_ai_region_jlum_4_shift                            (4)
#define  COLOR_DCC_D_DCC_AI_33_ai_region_ildm_4_shift                            (2)
#define  COLOR_DCC_D_DCC_AI_33_ai_region_ilum_4_shift                            (0)
#define  COLOR_DCC_D_DCC_AI_33_ai_region_jrdm_4_mask                             (0x0000C000)
#define  COLOR_DCC_D_DCC_AI_33_ai_region_jrum_4_mask                             (0x00003000)
#define  COLOR_DCC_D_DCC_AI_33_ai_region_irdm_4_mask                             (0x00000C00)
#define  COLOR_DCC_D_DCC_AI_33_ai_region_irum_4_mask                             (0x00000300)
#define  COLOR_DCC_D_DCC_AI_33_ai_region_jldm_4_mask                             (0x000000C0)
#define  COLOR_DCC_D_DCC_AI_33_ai_region_jlum_4_mask                             (0x00000030)
#define  COLOR_DCC_D_DCC_AI_33_ai_region_ildm_4_mask                             (0x0000000C)
#define  COLOR_DCC_D_DCC_AI_33_ai_region_ilum_4_mask                             (0x00000003)
#define  COLOR_DCC_D_DCC_AI_33_ai_region_jrdm_4(data)                            (0x0000C000&((data)<<14))
#define  COLOR_DCC_D_DCC_AI_33_ai_region_jrum_4(data)                            (0x00003000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_33_ai_region_irdm_4(data)                            (0x00000C00&((data)<<10))
#define  COLOR_DCC_D_DCC_AI_33_ai_region_irum_4(data)                            (0x00000300&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_33_ai_region_jldm_4(data)                            (0x000000C0&((data)<<6))
#define  COLOR_DCC_D_DCC_AI_33_ai_region_jlum_4(data)                            (0x00000030&((data)<<4))
#define  COLOR_DCC_D_DCC_AI_33_ai_region_ildm_4(data)                            (0x0000000C&((data)<<2))
#define  COLOR_DCC_D_DCC_AI_33_ai_region_ilum_4(data)                            (0x00000003&(data))
#define  COLOR_DCC_D_DCC_AI_33_get_ai_region_jrdm_4(data)                        ((0x0000C000&(data))>>14)
#define  COLOR_DCC_D_DCC_AI_33_get_ai_region_jrum_4(data)                        ((0x00003000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_33_get_ai_region_irdm_4(data)                        ((0x00000C00&(data))>>10)
#define  COLOR_DCC_D_DCC_AI_33_get_ai_region_irum_4(data)                        ((0x00000300&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_33_get_ai_region_jldm_4(data)                        ((0x000000C0&(data))>>6)
#define  COLOR_DCC_D_DCC_AI_33_get_ai_region_jlum_4(data)                        ((0x00000030&(data))>>4)
#define  COLOR_DCC_D_DCC_AI_33_get_ai_region_ildm_4(data)                        ((0x0000000C&(data))>>2)
#define  COLOR_DCC_D_DCC_AI_33_get_ai_region_ilum_4(data)                        (0x00000003&(data))

#define  COLOR_DCC_D_DCC_AI_34                                                  0x1802E5B4
#define  COLOR_DCC_D_DCC_AI_34_reg_addr                                          "0xB802E5B4"
#define  COLOR_DCC_D_DCC_AI_34_reg                                               0xB802E5B4
#define  COLOR_DCC_D_DCC_AI_34_inst_addr                                         "0x006C"
#define  set_COLOR_DCC_D_DCC_AI_34_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_34_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_34_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_34_reg))
#define  COLOR_DCC_D_DCC_AI_34_ai_region_jld_5_shift                             (24)
#define  COLOR_DCC_D_DCC_AI_34_ai_region_jlu_5_shift                             (16)
#define  COLOR_DCC_D_DCC_AI_34_ai_region_ild_5_shift                             (8)
#define  COLOR_DCC_D_DCC_AI_34_ai_region_ilu_5_shift                             (0)
#define  COLOR_DCC_D_DCC_AI_34_ai_region_jld_5_mask                              (0xFF000000)
#define  COLOR_DCC_D_DCC_AI_34_ai_region_jlu_5_mask                              (0x00FF0000)
#define  COLOR_DCC_D_DCC_AI_34_ai_region_ild_5_mask                              (0x0000FF00)
#define  COLOR_DCC_D_DCC_AI_34_ai_region_ilu_5_mask                              (0x000000FF)
#define  COLOR_DCC_D_DCC_AI_34_ai_region_jld_5(data)                             (0xFF000000&((data)<<24))
#define  COLOR_DCC_D_DCC_AI_34_ai_region_jlu_5(data)                             (0x00FF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_34_ai_region_ild_5(data)                             (0x0000FF00&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_34_ai_region_ilu_5(data)                             (0x000000FF&(data))
#define  COLOR_DCC_D_DCC_AI_34_get_ai_region_jld_5(data)                         ((0xFF000000&(data))>>24)
#define  COLOR_DCC_D_DCC_AI_34_get_ai_region_jlu_5(data)                         ((0x00FF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_34_get_ai_region_ild_5(data)                         ((0x0000FF00&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_34_get_ai_region_ilu_5(data)                         (0x000000FF&(data))

#define  COLOR_DCC_D_DCC_AI_35                                                  0x1802E5B8
#define  COLOR_DCC_D_DCC_AI_35_reg_addr                                          "0xB802E5B8"
#define  COLOR_DCC_D_DCC_AI_35_reg                                               0xB802E5B8
#define  COLOR_DCC_D_DCC_AI_35_inst_addr                                         "0x006D"
#define  set_COLOR_DCC_D_DCC_AI_35_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_35_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_35_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_35_reg))
#define  COLOR_DCC_D_DCC_AI_35_ai_region_jrd_5_shift                             (24)
#define  COLOR_DCC_D_DCC_AI_35_ai_region_jru_5_shift                             (16)
#define  COLOR_DCC_D_DCC_AI_35_ai_region_ird_5_shift                             (8)
#define  COLOR_DCC_D_DCC_AI_35_ai_region_iru_5_shift                             (0)
#define  COLOR_DCC_D_DCC_AI_35_ai_region_jrd_5_mask                              (0xFF000000)
#define  COLOR_DCC_D_DCC_AI_35_ai_region_jru_5_mask                              (0x00FF0000)
#define  COLOR_DCC_D_DCC_AI_35_ai_region_ird_5_mask                              (0x0000FF00)
#define  COLOR_DCC_D_DCC_AI_35_ai_region_iru_5_mask                              (0x000000FF)
#define  COLOR_DCC_D_DCC_AI_35_ai_region_jrd_5(data)                             (0xFF000000&((data)<<24))
#define  COLOR_DCC_D_DCC_AI_35_ai_region_jru_5(data)                             (0x00FF0000&((data)<<16))
#define  COLOR_DCC_D_DCC_AI_35_ai_region_ird_5(data)                             (0x0000FF00&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_35_ai_region_iru_5(data)                             (0x000000FF&(data))
#define  COLOR_DCC_D_DCC_AI_35_get_ai_region_jrd_5(data)                         ((0xFF000000&(data))>>24)
#define  COLOR_DCC_D_DCC_AI_35_get_ai_region_jru_5(data)                         ((0x00FF0000&(data))>>16)
#define  COLOR_DCC_D_DCC_AI_35_get_ai_region_ird_5(data)                         ((0x0000FF00&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_35_get_ai_region_iru_5(data)                         (0x000000FF&(data))

#define  COLOR_DCC_D_DCC_AI_36                                                  0x1802E5BC
#define  COLOR_DCC_D_DCC_AI_36_reg_addr                                          "0xB802E5BC"
#define  COLOR_DCC_D_DCC_AI_36_reg                                               0xB802E5BC
#define  COLOR_DCC_D_DCC_AI_36_inst_addr                                         "0x006E"
#define  set_COLOR_DCC_D_DCC_AI_36_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_36_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_36_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_36_reg))
#define  COLOR_DCC_D_DCC_AI_36_ai_region_jrdm_5_shift                            (14)
#define  COLOR_DCC_D_DCC_AI_36_ai_region_jrum_5_shift                            (12)
#define  COLOR_DCC_D_DCC_AI_36_ai_region_irdm_5_shift                            (10)
#define  COLOR_DCC_D_DCC_AI_36_ai_region_irum_5_shift                            (8)
#define  COLOR_DCC_D_DCC_AI_36_ai_region_jldm_5_shift                            (6)
#define  COLOR_DCC_D_DCC_AI_36_ai_region_jlum_5_shift                            (4)
#define  COLOR_DCC_D_DCC_AI_36_ai_region_ildm_5_shift                            (2)
#define  COLOR_DCC_D_DCC_AI_36_ai_region_ilum_5_shift                            (0)
#define  COLOR_DCC_D_DCC_AI_36_ai_region_jrdm_5_mask                             (0x0000C000)
#define  COLOR_DCC_D_DCC_AI_36_ai_region_jrum_5_mask                             (0x00003000)
#define  COLOR_DCC_D_DCC_AI_36_ai_region_irdm_5_mask                             (0x00000C00)
#define  COLOR_DCC_D_DCC_AI_36_ai_region_irum_5_mask                             (0x00000300)
#define  COLOR_DCC_D_DCC_AI_36_ai_region_jldm_5_mask                             (0x000000C0)
#define  COLOR_DCC_D_DCC_AI_36_ai_region_jlum_5_mask                             (0x00000030)
#define  COLOR_DCC_D_DCC_AI_36_ai_region_ildm_5_mask                             (0x0000000C)
#define  COLOR_DCC_D_DCC_AI_36_ai_region_ilum_5_mask                             (0x00000003)
#define  COLOR_DCC_D_DCC_AI_36_ai_region_jrdm_5(data)                            (0x0000C000&((data)<<14))
#define  COLOR_DCC_D_DCC_AI_36_ai_region_jrum_5(data)                            (0x00003000&((data)<<12))
#define  COLOR_DCC_D_DCC_AI_36_ai_region_irdm_5(data)                            (0x00000C00&((data)<<10))
#define  COLOR_DCC_D_DCC_AI_36_ai_region_irum_5(data)                            (0x00000300&((data)<<8))
#define  COLOR_DCC_D_DCC_AI_36_ai_region_jldm_5(data)                            (0x000000C0&((data)<<6))
#define  COLOR_DCC_D_DCC_AI_36_ai_region_jlum_5(data)                            (0x00000030&((data)<<4))
#define  COLOR_DCC_D_DCC_AI_36_ai_region_ildm_5(data)                            (0x0000000C&((data)<<2))
#define  COLOR_DCC_D_DCC_AI_36_ai_region_ilum_5(data)                            (0x00000003&(data))
#define  COLOR_DCC_D_DCC_AI_36_get_ai_region_jrdm_5(data)                        ((0x0000C000&(data))>>14)
#define  COLOR_DCC_D_DCC_AI_36_get_ai_region_jrum_5(data)                        ((0x00003000&(data))>>12)
#define  COLOR_DCC_D_DCC_AI_36_get_ai_region_irdm_5(data)                        ((0x00000C00&(data))>>10)
#define  COLOR_DCC_D_DCC_AI_36_get_ai_region_irum_5(data)                        ((0x00000300&(data))>>8)
#define  COLOR_DCC_D_DCC_AI_36_get_ai_region_jldm_5(data)                        ((0x000000C0&(data))>>6)
#define  COLOR_DCC_D_DCC_AI_36_get_ai_region_jlum_5(data)                        ((0x00000030&(data))>>4)
#define  COLOR_DCC_D_DCC_AI_36_get_ai_region_ildm_5(data)                        ((0x0000000C&(data))>>2)
#define  COLOR_DCC_D_DCC_AI_36_get_ai_region_ilum_5(data)                        (0x00000003&(data))

#define  COLOR_DCC_D_DCC_AI_37                                                  0x1802E5E0
#define  COLOR_DCC_D_DCC_AI_37_reg_addr                                          "0xB802E5E0"
#define  COLOR_DCC_D_DCC_AI_37_reg                                               0xB802E5E0
#define  COLOR_DCC_D_DCC_AI_37_inst_addr                                         "0x006F"
#define  set_COLOR_DCC_D_DCC_AI_37_reg(data)                                     (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_37_reg)=data)
#define  get_COLOR_DCC_D_DCC_AI_37_reg                                           (*((volatile unsigned int*)COLOR_DCC_D_DCC_AI_37_reg))
#define  COLOR_DCC_D_DCC_AI_37_ai_detect_value_shift                             (9)
#define  COLOR_DCC_D_DCC_AI_37_ai_control_value_shift                            (1)
#define  COLOR_DCC_D_DCC_AI_37_ai_adjust_en_shift                                (0)
#define  COLOR_DCC_D_DCC_AI_37_ai_detect_value_mask                              (0x0001FE00)
#define  COLOR_DCC_D_DCC_AI_37_ai_control_value_mask                             (0x000001FE)
#define  COLOR_DCC_D_DCC_AI_37_ai_adjust_en_mask                                 (0x00000001)
#define  COLOR_DCC_D_DCC_AI_37_ai_detect_value(data)                             (0x0001FE00&((data)<<9))
#define  COLOR_DCC_D_DCC_AI_37_ai_control_value(data)                            (0x000001FE&((data)<<1))
#define  COLOR_DCC_D_DCC_AI_37_ai_adjust_en(data)                                (0x00000001&(data))
#define  COLOR_DCC_D_DCC_AI_37_get_ai_detect_value(data)                         ((0x0001FE00&(data))>>9)
#define  COLOR_DCC_D_DCC_AI_37_get_ai_control_value(data)                        ((0x000001FE&(data))>>1)
#define  COLOR_DCC_D_DCC_AI_37_get_ai_adjust_en(data)                            (0x00000001&(data))

#define  COLOR_DCC_D_DCC_FWUSED_0                                               0x1802E4F0
#define  COLOR_DCC_D_DCC_FWUSED_0_reg_addr                                       "0xB802E4F0"
#define  COLOR_DCC_D_DCC_FWUSED_0_reg                                            0xB802E4F0
#define  COLOR_DCC_D_DCC_FWUSED_0_inst_addr                                      "0x0070"
#define  set_COLOR_DCC_D_DCC_FWUSED_0_reg(data)                                  (*((volatile unsigned int*)COLOR_DCC_D_DCC_FWUSED_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_FWUSED_0_reg                                        (*((volatile unsigned int*)COLOR_DCC_D_DCC_FWUSED_0_reg))
#define  COLOR_DCC_D_DCC_FWUSED_0_fw_0_shift                                     (0)
#define  COLOR_DCC_D_DCC_FWUSED_0_fw_0_mask                                      (0xFFFFFFFF)
#define  COLOR_DCC_D_DCC_FWUSED_0_fw_0(data)                                     (0xFFFFFFFF&(data))
#define  COLOR_DCC_D_DCC_FWUSED_0_get_fw_0(data)                                 (0xFFFFFFFF&(data))

#define  COLOR_DCC_D_DCC_FWUSED_1                                               0x1802E4F4
#define  COLOR_DCC_D_DCC_FWUSED_1_reg_addr                                       "0xB802E4F4"
#define  COLOR_DCC_D_DCC_FWUSED_1_reg                                            0xB802E4F4
#define  COLOR_DCC_D_DCC_FWUSED_1_inst_addr                                      "0x0071"
#define  set_COLOR_DCC_D_DCC_FWUSED_1_reg(data)                                  (*((volatile unsigned int*)COLOR_DCC_D_DCC_FWUSED_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_FWUSED_1_reg                                        (*((volatile unsigned int*)COLOR_DCC_D_DCC_FWUSED_1_reg))
#define  COLOR_DCC_D_DCC_FWUSED_1_fw_1_shift                                     (0)
#define  COLOR_DCC_D_DCC_FWUSED_1_fw_1_mask                                      (0xFFFFFFFF)
#define  COLOR_DCC_D_DCC_FWUSED_1_fw_1(data)                                     (0xFFFFFFFF&(data))
#define  COLOR_DCC_D_DCC_FWUSED_1_get_fw_1(data)                                 (0xFFFFFFFF&(data))

#define  COLOR_DCC_D_DCC_FWUSED_2                                               0x1802E4F8
#define  COLOR_DCC_D_DCC_FWUSED_2_reg_addr                                       "0xB802E4F8"
#define  COLOR_DCC_D_DCC_FWUSED_2_reg                                            0xB802E4F8
#define  COLOR_DCC_D_DCC_FWUSED_2_inst_addr                                      "0x0072"
#define  set_COLOR_DCC_D_DCC_FWUSED_2_reg(data)                                  (*((volatile unsigned int*)COLOR_DCC_D_DCC_FWUSED_2_reg)=data)
#define  get_COLOR_DCC_D_DCC_FWUSED_2_reg                                        (*((volatile unsigned int*)COLOR_DCC_D_DCC_FWUSED_2_reg))
#define  COLOR_DCC_D_DCC_FWUSED_2_fw_2_shift                                     (0)
#define  COLOR_DCC_D_DCC_FWUSED_2_fw_2_mask                                      (0xFFFFFFFF)
#define  COLOR_DCC_D_DCC_FWUSED_2_fw_2(data)                                     (0xFFFFFFFF&(data))
#define  COLOR_DCC_D_DCC_FWUSED_2_get_fw_2(data)                                 (0xFFFFFFFF&(data))

#define  COLOR_DCC_D_DCC_FWUSED_3                                               0x1802E4FC
#define  COLOR_DCC_D_DCC_FWUSED_3_reg_addr                                       "0xB802E4FC"
#define  COLOR_DCC_D_DCC_FWUSED_3_reg                                            0xB802E4FC
#define  COLOR_DCC_D_DCC_FWUSED_3_inst_addr                                      "0x0073"
#define  set_COLOR_DCC_D_DCC_FWUSED_3_reg(data)                                  (*((volatile unsigned int*)COLOR_DCC_D_DCC_FWUSED_3_reg)=data)
#define  get_COLOR_DCC_D_DCC_FWUSED_3_reg                                        (*((volatile unsigned int*)COLOR_DCC_D_DCC_FWUSED_3_reg))
#define  COLOR_DCC_D_DCC_FWUSED_3_fw_3_shift                                     (0)
#define  COLOR_DCC_D_DCC_FWUSED_3_fw_3_mask                                      (0xFFFFFFFF)
#define  COLOR_DCC_D_DCC_FWUSED_3_fw_3(data)                                     (0xFFFFFFFF&(data))
#define  COLOR_DCC_D_DCC_FWUSED_3_get_fw_3(data)                                 (0xFFFFFFFF&(data))

#define  COLOR_DCC_D_DCC_Bist_0                                                 0x1802E4E4
#define  COLOR_DCC_D_DCC_Bist_0_reg_addr                                         "0xB802E4E4"
#define  COLOR_DCC_D_DCC_Bist_0_reg                                              0xB802E4E4
#define  COLOR_DCC_D_DCC_Bist_0_inst_addr                                        "0x0074"
#define  set_COLOR_DCC_D_DCC_Bist_0_reg(data)                                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_Bist_0_reg)=data)
#define  get_COLOR_DCC_D_DCC_Bist_0_reg                                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_Bist_0_reg))
#define  COLOR_DCC_D_DCC_Bist_0_test_1_shift                                     (31)
#define  COLOR_DCC_D_DCC_Bist_0_test_0_shift                                     (30)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_1_shift                                (29)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_0_shift                                (28)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_1_shift                            (25)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_0_shift                            (24)
#define  COLOR_DCC_D_DCC_Bist_0_rme_1_shift                                      (21)
#define  COLOR_DCC_D_DCC_Bist_0_rme_0_shift                                      (20)
#define  COLOR_DCC_D_DCC_Bist_0_rm_1_shift                                       (8)
#define  COLOR_DCC_D_DCC_Bist_0_rm_0_shift                                       (4)
#define  COLOR_DCC_D_DCC_Bist_0_ls_1_shift                                       (1)
#define  COLOR_DCC_D_DCC_Bist_0_ls_0_shift                                       (0)
#define  COLOR_DCC_D_DCC_Bist_0_test_1_mask                                      (0x80000000)
#define  COLOR_DCC_D_DCC_Bist_0_test_0_mask                                      (0x40000000)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_1_mask                                 (0x20000000)
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_0_mask                                 (0x10000000)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_1_mask                             (0x02000000)
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_0_mask                             (0x01000000)
#define  COLOR_DCC_D_DCC_Bist_0_rme_1_mask                                       (0x00200000)
#define  COLOR_DCC_D_DCC_Bist_0_rme_0_mask                                       (0x00100000)
#define  COLOR_DCC_D_DCC_Bist_0_rm_1_mask                                        (0x00000F00)
#define  COLOR_DCC_D_DCC_Bist_0_rm_0_mask                                        (0x000000F0)
#define  COLOR_DCC_D_DCC_Bist_0_ls_1_mask                                        (0x00000002)
#define  COLOR_DCC_D_DCC_Bist_0_ls_0_mask                                        (0x00000001)
#define  COLOR_DCC_D_DCC_Bist_0_test_1(data)                                     (0x80000000&((data)<<31))
#define  COLOR_DCC_D_DCC_Bist_0_test_0(data)                                     (0x40000000&((data)<<30))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_1(data)                                (0x20000000&((data)<<29))
#define  COLOR_DCC_D_DCC_Bist_0_bist_fail_0(data)                                (0x10000000&((data)<<28))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_1(data)                            (0x02000000&((data)<<25))
#define  COLOR_DCC_D_DCC_Bist_0_drf_bist_fail_0(data)                            (0x01000000&((data)<<24))
#define  COLOR_DCC_D_DCC_Bist_0_rme_1(data)                                      (0x00200000&((data)<<21))
#define  COLOR_DCC_D_DCC_Bist_0_rme_0(data)                                      (0x00100000&((data)<<20))
#define  COLOR_DCC_D_DCC_Bist_0_rm_1(data)                                       (0x00000F00&((data)<<8))
#define  COLOR_DCC_D_DCC_Bist_0_rm_0(data)                                       (0x000000F0&((data)<<4))
#define  COLOR_DCC_D_DCC_Bist_0_ls_1(data)                                       (0x00000002&((data)<<1))
#define  COLOR_DCC_D_DCC_Bist_0_ls_0(data)                                       (0x00000001&(data))
#define  COLOR_DCC_D_DCC_Bist_0_get_test_1(data)                                 ((0x80000000&(data))>>31)
#define  COLOR_DCC_D_DCC_Bist_0_get_test_0(data)                                 ((0x40000000&(data))>>30)
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_1(data)                            ((0x20000000&(data))>>29)
#define  COLOR_DCC_D_DCC_Bist_0_get_bist_fail_0(data)                            ((0x10000000&(data))>>28)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_1(data)                        ((0x02000000&(data))>>25)
#define  COLOR_DCC_D_DCC_Bist_0_get_drf_bist_fail_0(data)                        ((0x01000000&(data))>>24)
#define  COLOR_DCC_D_DCC_Bist_0_get_rme_1(data)                                  ((0x00200000&(data))>>21)
#define  COLOR_DCC_D_DCC_Bist_0_get_rme_0(data)                                  ((0x00100000&(data))>>20)
#define  COLOR_DCC_D_DCC_Bist_0_get_rm_1(data)                                   ((0x00000F00&(data))>>8)
#define  COLOR_DCC_D_DCC_Bist_0_get_rm_0(data)                                   ((0x000000F0&(data))>>4)
#define  COLOR_DCC_D_DCC_Bist_0_get_ls_1(data)                                   ((0x00000002&(data))>>1)
#define  COLOR_DCC_D_DCC_Bist_0_get_ls_0(data)                                   (0x00000001&(data))

#define  COLOR_DCC_D_DCC_Bist_1                                                 0x1802E548
#define  COLOR_DCC_D_DCC_Bist_1_reg_addr                                         "0xB802E548"
#define  COLOR_DCC_D_DCC_Bist_1_reg                                              0xB802E548
#define  COLOR_DCC_D_DCC_Bist_1_inst_addr                                        "0x0075"
#define  set_COLOR_DCC_D_DCC_Bist_1_reg(data)                                    (*((volatile unsigned int*)COLOR_DCC_D_DCC_Bist_1_reg)=data)
#define  get_COLOR_DCC_D_DCC_Bist_1_reg                                          (*((volatile unsigned int*)COLOR_DCC_D_DCC_Bist_1_reg))
#define  COLOR_DCC_D_DCC_Bist_1_test_3_shift                                     (31)
#define  COLOR_DCC_D_DCC_Bist_1_test_2_shift                                     (30)
#define  COLOR_DCC_D_DCC_Bist_1_bist_fail_3_shift                                (29)
#define  COLOR_DCC_D_DCC_Bist_1_bist_fail_2_shift                                (28)
#define  COLOR_DCC_D_DCC_Bist_1_drf_bist_fail_3_shift                            (25)
#define  COLOR_DCC_D_DCC_Bist_1_drf_bist_fail_2_shift                            (24)
#define  COLOR_DCC_D_DCC_Bist_1_rme_3_shift                                      (21)
#define  COLOR_DCC_D_DCC_Bist_1_rme_2_shift                                      (20)
#define  COLOR_DCC_D_DCC_Bist_1_rm_3_shift                                       (8)
#define  COLOR_DCC_D_DCC_Bist_1_rm_2_shift                                       (4)
#define  COLOR_DCC_D_DCC_Bist_1_ls_3_shift                                       (1)
#define  COLOR_DCC_D_DCC_Bist_1_ls_2_shift                                       (0)
#define  COLOR_DCC_D_DCC_Bist_1_test_3_mask                                      (0x80000000)
#define  COLOR_DCC_D_DCC_Bist_1_test_2_mask                                      (0x40000000)
#define  COLOR_DCC_D_DCC_Bist_1_bist_fail_3_mask                                 (0x20000000)
#define  COLOR_DCC_D_DCC_Bist_1_bist_fail_2_mask                                 (0x10000000)
#define  COLOR_DCC_D_DCC_Bist_1_drf_bist_fail_3_mask                             (0x02000000)
#define  COLOR_DCC_D_DCC_Bist_1_drf_bist_fail_2_mask                             (0x01000000)
#define  COLOR_DCC_D_DCC_Bist_1_rme_3_mask                                       (0x00200000)
#define  COLOR_DCC_D_DCC_Bist_1_rme_2_mask                                       (0x00100000)
#define  COLOR_DCC_D_DCC_Bist_1_rm_3_mask                                        (0x00000F00)
#define  COLOR_DCC_D_DCC_Bist_1_rm_2_mask                                        (0x000000F0)
#define  COLOR_DCC_D_DCC_Bist_1_ls_3_mask                                        (0x00000002)
#define  COLOR_DCC_D_DCC_Bist_1_ls_2_mask                                        (0x00000001)
#define  COLOR_DCC_D_DCC_Bist_1_test_3(data)                                     (0x80000000&((data)<<31))
#define  COLOR_DCC_D_DCC_Bist_1_test_2(data)                                     (0x40000000&((data)<<30))
#define  COLOR_DCC_D_DCC_Bist_1_bist_fail_3(data)                                (0x20000000&((data)<<29))
#define  COLOR_DCC_D_DCC_Bist_1_bist_fail_2(data)                                (0x10000000&((data)<<28))
#define  COLOR_DCC_D_DCC_Bist_1_drf_bist_fail_3(data)                            (0x02000000&((data)<<25))
#define  COLOR_DCC_D_DCC_Bist_1_drf_bist_fail_2(data)                            (0x01000000&((data)<<24))
#define  COLOR_DCC_D_DCC_Bist_1_rme_3(data)                                      (0x00200000&((data)<<21))
#define  COLOR_DCC_D_DCC_Bist_1_rme_2(data)                                      (0x00100000&((data)<<20))
#define  COLOR_DCC_D_DCC_Bist_1_rm_3(data)                                       (0x00000F00&((data)<<8))
#define  COLOR_DCC_D_DCC_Bist_1_rm_2(data)                                       (0x000000F0&((data)<<4))
#define  COLOR_DCC_D_DCC_Bist_1_ls_3(data)                                       (0x00000002&((data)<<1))
#define  COLOR_DCC_D_DCC_Bist_1_ls_2(data)                                       (0x00000001&(data))
#define  COLOR_DCC_D_DCC_Bist_1_get_test_3(data)                                 ((0x80000000&(data))>>31)
#define  COLOR_DCC_D_DCC_Bist_1_get_test_2(data)                                 ((0x40000000&(data))>>30)
#define  COLOR_DCC_D_DCC_Bist_1_get_bist_fail_3(data)                            ((0x20000000&(data))>>29)
#define  COLOR_DCC_D_DCC_Bist_1_get_bist_fail_2(data)                            ((0x10000000&(data))>>28)
#define  COLOR_DCC_D_DCC_Bist_1_get_drf_bist_fail_3(data)                        ((0x02000000&(data))>>25)
#define  COLOR_DCC_D_DCC_Bist_1_get_drf_bist_fail_2(data)                        ((0x01000000&(data))>>24)
#define  COLOR_DCC_D_DCC_Bist_1_get_rme_3(data)                                  ((0x00200000&(data))>>21)
#define  COLOR_DCC_D_DCC_Bist_1_get_rme_2(data)                                  ((0x00100000&(data))>>20)
#define  COLOR_DCC_D_DCC_Bist_1_get_rm_3(data)                                   ((0x00000F00&(data))>>8)
#define  COLOR_DCC_D_DCC_Bist_1_get_rm_2(data)                                   ((0x000000F0&(data))>>4)
#define  COLOR_DCC_D_DCC_Bist_1_get_ls_3(data)                                   ((0x00000002&(data))>>1)
#define  COLOR_DCC_D_DCC_Bist_1_get_ls_2(data)                                   (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======COLOR_DCC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802e400_31_22:10;
        RBus_UInt32  ai_blending_5_inside_ratio_msb:1;
        RBus_UInt32  ai_blending_4_inside_ratio_msb:1;
        RBus_UInt32  ai_blending_3_inside_ratio_msb:1;
        RBus_UInt32  ai_blending_2_inside_ratio_msb:1;
        RBus_UInt32  ai_blending_1_inside_ratio_msb:1;
        RBus_UInt32  ai_blending_0_inside_ratio_msb:1;
        RBus_UInt32  dummy1802e400_15_10:6;
        RBus_UInt32  dcc_user_curve_en:1;
        RBus_UInt32  y_mapping_mode:1;
        RBus_UInt32  y_mapping_blending_wt:5;
        RBus_UInt32  main_table_segment:1;
        RBus_UInt32  main_table_sel:1;
        RBus_UInt32  res1:1;
    };
}color_dcc_d_dcc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  luma_offset_main:8;
        RBus_UInt32  res2:16;
    };
}color_dcc_dcc_ctrl_luma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_limit_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_limit_seg3:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  chroma_gain_limit_seg2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  chroma_gain_limit_seg1:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  chroma_gain_limit_seg0:6;
    };
}color_dcc_dcc_chroma_gain_limit_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  chroma_gain_limit_seg7:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  chroma_gain_limit_seg6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  chroma_gain_limit_seg5:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  chroma_gain_limit_seg4:6;
    };
}color_dcc_dcc_chroma_gain_limit_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg0:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg0:7;
        RBus_UInt32  res3:4;
        RBus_UInt32  saturation_byy_v_tab_select_main:1;
        RBus_UInt32  saturation_byy_u_tab_select_main:1;
        RBus_UInt32  chroma_enhance_below_tab_select_main:1;
        RBus_UInt32  chroma_enhance_above_tab_select_main:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_base:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  chroma_gain_lookup_mode:1;
        RBus_UInt32  chroma_gain_mode:1;
        RBus_UInt32  chroma_gain_en:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg4:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg3:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg2:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab0_seg1:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg8:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg7:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg6:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab0_seg5:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg12:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg11:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg10:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab0_seg9:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg16:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg15:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg14:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab0_seg13:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg20:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg19:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg18:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab0_seg17:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg24:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg23:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg22:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab0_seg21:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg28:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg27:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg26:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab0_seg25:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg32:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg31:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg30:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab0_seg29:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg36:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg35:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg34:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab0_seg33:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg40:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg39:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg38:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab0_seg37:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg44:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg43:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg42:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab0_seg41:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg48:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg47:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg46:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab0_seg45:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg52:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg51:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg50:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab0_seg49:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg56:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg55:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg54:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab0_seg53:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg60:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg59:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg58:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab0_seg57:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg64:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg63:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg62:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab0_seg61:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg4:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg3:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg2:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab1_seg1:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg8:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg7:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg6:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab1_seg5:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg12:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg11:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg10:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab1_seg9:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg16:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg15:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg14:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab1_seg13:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg20:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg19:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg18:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab1_seg17:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg24:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg23:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg22:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab1_seg21:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg28:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg27:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg26:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab1_seg25:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg32:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg31:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg30:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab1_seg29:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg36:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg35:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg34:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab1_seg33:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg40:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg39:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg38:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab1_seg37:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg44:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg43:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg42:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab1_seg41:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg48:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg47:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg46:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab1_seg45:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg52:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg51:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg50:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab1_seg49:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg56:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg55:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg54:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab1_seg53:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg60:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg59:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg58:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab1_seg57:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg64:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg63:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg62:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab1_seg61:7;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  sram_tab_acc_index_cur:6;
        RBus_UInt32  sram_tab_acc_index:6;
        RBus_UInt32  sram_tab_rw_sel:2;
        RBus_UInt32  sram_tab_acc_sel:1;
        RBus_UInt32  sram_tab_acc_ready:1;
    };
}color_dcc_sram_tab_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  sram_tab_base:10;
        RBus_UInt32  sram_tab_g0:8;
        RBus_UInt32  sram_tab_g1:8;
    };
}color_dcc_sram_tab_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  sram_user_tab_acc_index_cur:6;
        RBus_UInt32  sram_user_tab_acc_index:6;
        RBus_UInt32  sram_user_tab_rw_sel:2;
        RBus_UInt32  sram_user_tab_acc_sel:1;
        RBus_UInt32  sram_user_tab_acc_ready:1;
    };
}color_dcc_sram_user_tab_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  sram_user_tab_base:10;
        RBus_UInt32  sram_user_tab_g0:8;
        RBus_UInt32  sram_user_tab_g1:8;
    };
}color_dcc_sram_user_tab_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_read_level:1;
        RBus_UInt32  db_apply:1;
    };
}color_dcc_d_dcc_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  region_ratio_blending_en:1;
        RBus_UInt32  y_blending_debug_mode_en:1;
        RBus_UInt32  y_blending_debug_mode_sel:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  y_blending_0_enhance_en:1;
        RBus_UInt32  y_blending_1_enhance_en:1;
        RBus_UInt32  y_blending_2_enhance_en:1;
        RBus_UInt32  y_blending_3_enhance_en:1;
        RBus_UInt32  y_blending_4_enhance_en:1;
        RBus_UInt32  y_blending_5_enhance_en:1;
        RBus_UInt32  y_blending_mode:1;
        RBus_UInt32  ratio_lpf_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_reg0_en:1;
        RBus_UInt32  y_blending_reg1_en:1;
        RBus_UInt32  y_blending_reg2_en:1;
        RBus_UInt32  y_blending_reg3_en:1;
        RBus_UInt32  y_blending_en:1;
    };
}color_dcc_d_dcc_skin_tone_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_0_y_center:10;
        RBus_UInt32  y_blending_0_u_center:10;
        RBus_UInt32  y_blending_0_v_center:10;
    };
}color_dcc_d_dcc_skin_tone_yuv_center_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  y_blending_0_y_range:4;
        RBus_UInt32  y_blending_0_u_range:4;
        RBus_UInt32  y_blending_0_v_range:4;
    };
}color_dcc_d_dcc_skin_tone_yuv_range_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_1_y_center:10;
        RBus_UInt32  y_blending_1_u_center:10;
        RBus_UInt32  y_blending_1_v_center:10;
    };
}color_dcc_d_dcc_skin_tone_yuv_center_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  y_blending_1_y_range:4;
        RBus_UInt32  y_blending_1_u_range:4;
        RBus_UInt32  y_blending_1_v_range:4;
    };
}color_dcc_d_dcc_skin_tone_yuv_range_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_2_y_center:10;
        RBus_UInt32  y_blending_2_u_center:10;
        RBus_UInt32  y_blending_2_v_center:10;
    };
}color_dcc_d_dcc_skin_tone_yuv_center_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  y_blending_2_y_range:4;
        RBus_UInt32  y_blending_2_u_range:4;
        RBus_UInt32  y_blending_2_v_range:4;
    };
}color_dcc_d_dcc_skin_tone_yuv_range_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_3_y_center:10;
        RBus_UInt32  y_blending_3_u_center:10;
        RBus_UInt32  y_blending_3_v_center:10;
    };
}color_dcc_d_dcc_skin_tone_yuv_center_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  y_blending_3_y_range:4;
        RBus_UInt32  y_blending_3_u_range:4;
        RBus_UInt32  y_blending_3_v_range:4;
    };
}color_dcc_d_dcc_skin_tone_yuv_range_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_0_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_0_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_0_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  y_blending_0_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment0_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_0_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_0_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_0_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  y_blending_0_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_1_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_1_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_1_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  y_blending_1_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_1_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_1_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_1_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  y_blending_1_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_2_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_2_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_2_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  y_blending_2_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_2_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_2_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_2_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  y_blending_2_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment2_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_3_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_3_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_3_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  y_blending_3_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment3_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_3_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_3_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_3_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  y_blending_3_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment3_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_0_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_0_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_0_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_0_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c0_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_0_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_0_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_0_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_0_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_1_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_1_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_1_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_1_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_1_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_1_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_1_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_1_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_2_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_2_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_2_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_2_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_2_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_2_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_2_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_2_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c2_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_3_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_3_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_3_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_3_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c3_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_3_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_3_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_3_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_3_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c3_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  cds_skin_en:1;
    };
}color_dcc_d_dcc_cds_skin_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  cds_uv_range_2:10;
        RBus_UInt32  cds_uv_range_1:10;
        RBus_UInt32  cds_uv_range_0:10;
    };
}color_dcc_d_dcc_cds_skin_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  cds_uv_range_5:10;
        RBus_UInt32  cds_uv_range_4:10;
        RBus_UInt32  cds_uv_range_3:10;
    };
}color_dcc_d_dcc_cds_skin_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_4_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_4_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_4_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_4_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c4_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_4_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_4_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_4_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_4_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c4_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_5_ratio_0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_5_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_5_ratio_2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_5_ratio_3:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c5_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_5_ratio_4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_5_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_5_ratio_6:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  c_blending_5_ratio_7:6;
    };
}color_dcc_d_dcc_skin_tone_segment_c5_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  ai_ros_en:1;
        RBus_UInt32  ai_blending_5_inside_ratio:5;
        RBus_UInt32  ai_blending_4_inside_ratio:5;
        RBus_UInt32  ai_blending_3_inside_ratio:5;
        RBus_UInt32  ai_blending_2_inside_ratio:5;
        RBus_UInt32  ai_blending_1_inside_ratio:5;
        RBus_UInt32  ai_blending_0_inside_ratio:5;
    };
}color_dcc_d_dcc_ai_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ai_face0_region_en:1;
        RBus_UInt32  ai_edge_pix_num_0:2;
        RBus_UInt32  ai_shrink_pix_num_0:6;
        RBus_UInt32  ai_center_v_0:10;
        RBus_UInt32  ai_center_u_0:10;
    };
}color_dcc_d_dcc_ai_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ai_face1_region_en:1;
        RBus_UInt32  ai_edge_pix_num_1:2;
        RBus_UInt32  ai_shrink_pix_num_1:6;
        RBus_UInt32  ai_center_v_1:10;
        RBus_UInt32  ai_center_u_1:10;
    };
}color_dcc_d_dcc_ai_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ai_face2_region_en:1;
        RBus_UInt32  ai_edge_pix_num_2:2;
        RBus_UInt32  ai_shrink_pix_num_2:6;
        RBus_UInt32  ai_center_v_2:10;
        RBus_UInt32  ai_center_u_2:10;
    };
}color_dcc_d_dcc_ai_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ai_face3_region_en:1;
        RBus_UInt32  ai_edge_pix_num_3:2;
        RBus_UInt32  ai_shrink_pix_num_3:6;
        RBus_UInt32  ai_center_v_3:10;
        RBus_UInt32  ai_center_u_3:10;
    };
}color_dcc_d_dcc_ai_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ai_face4_region_en:1;
        RBus_UInt32  ai_edge_pix_num_4:2;
        RBus_UInt32  ai_shrink_pix_num_4:6;
        RBus_UInt32  ai_center_v_4:10;
        RBus_UInt32  ai_center_u_4:10;
    };
}color_dcc_d_dcc_ai_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ai_face5_region_en:1;
        RBus_UInt32  ai_edge_pix_num_5:2;
        RBus_UInt32  ai_shrink_pix_num_5:6;
        RBus_UInt32  ai_center_v_5:10;
        RBus_UInt32  ai_center_u_5:10;
    };
}color_dcc_d_dcc_ai_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_i_0:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  ai_region_start_i_0:12;
    };
}color_dcc_d_dcc_ai_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_i_1:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  ai_region_start_i_1:12;
    };
}color_dcc_d_dcc_ai_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_i_2:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  ai_region_start_i_2:12;
    };
}color_dcc_d_dcc_ai_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_i_3:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  ai_region_start_i_3:12;
    };
}color_dcc_d_dcc_ai_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_i_4:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  ai_region_start_i_4:12;
    };
}color_dcc_d_dcc_ai_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_i_5:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  ai_region_start_i_5:12;
    };
}color_dcc_d_dcc_ai_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_j_0:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  ai_region_start_j_0:12;
    };
}color_dcc_d_dcc_ai_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_j_1:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  ai_region_start_j_1:12;
    };
}color_dcc_d_dcc_ai_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_j_2:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  ai_region_start_j_2:12;
    };
}color_dcc_d_dcc_ai_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_j_3:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  ai_region_start_j_3:12;
    };
}color_dcc_d_dcc_ai_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_j_4:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  ai_region_start_j_4:12;
    };
}color_dcc_d_dcc_ai_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_j_5:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  ai_region_start_j_5:12;
    };
}color_dcc_d_dcc_ai_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_jld_0:8;
        RBus_UInt32  ai_region_jlu_0:8;
        RBus_UInt32  ai_region_ild_0:8;
        RBus_UInt32  ai_region_ilu_0:8;
    };
}color_dcc_d_dcc_ai_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_jrd_0:8;
        RBus_UInt32  ai_region_jru_0:8;
        RBus_UInt32  ai_region_ird_0:8;
        RBus_UInt32  ai_region_iru_0:8;
    };
}color_dcc_d_dcc_ai_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ai_region_jrdm_0:2;
        RBus_UInt32  ai_region_jrum_0:2;
        RBus_UInt32  ai_region_irdm_0:2;
        RBus_UInt32  ai_region_irum_0:2;
        RBus_UInt32  ai_region_jldm_0:2;
        RBus_UInt32  ai_region_jlum_0:2;
        RBus_UInt32  ai_region_ildm_0:2;
        RBus_UInt32  ai_region_ilum_0:2;
    };
}color_dcc_d_dcc_ai_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_jld_1:8;
        RBus_UInt32  ai_region_jlu_1:8;
        RBus_UInt32  ai_region_ild_1:8;
        RBus_UInt32  ai_region_ilu_1:8;
    };
}color_dcc_d_dcc_ai_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_jrd_1:8;
        RBus_UInt32  ai_region_jru_1:8;
        RBus_UInt32  ai_region_ird_1:8;
        RBus_UInt32  ai_region_iru_1:8;
    };
}color_dcc_d_dcc_ai_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ai_region_jrdm_1:2;
        RBus_UInt32  ai_region_jrum_1:2;
        RBus_UInt32  ai_region_irdm_1:2;
        RBus_UInt32  ai_region_irum_1:2;
        RBus_UInt32  ai_region_jldm_1:2;
        RBus_UInt32  ai_region_jlum_1:2;
        RBus_UInt32  ai_region_ildm_1:2;
        RBus_UInt32  ai_region_ilum_1:2;
    };
}color_dcc_d_dcc_ai_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_jld_2:8;
        RBus_UInt32  ai_region_jlu_2:8;
        RBus_UInt32  ai_region_ild_2:8;
        RBus_UInt32  ai_region_ilu_2:8;
    };
}color_dcc_d_dcc_ai_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_jrd_2:8;
        RBus_UInt32  ai_region_jru_2:8;
        RBus_UInt32  ai_region_ird_2:8;
        RBus_UInt32  ai_region_iru_2:8;
    };
}color_dcc_d_dcc_ai_26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ai_region_jrdm_2:2;
        RBus_UInt32  ai_region_jrum_2:2;
        RBus_UInt32  ai_region_irdm_2:2;
        RBus_UInt32  ai_region_irum_2:2;
        RBus_UInt32  ai_region_jldm_2:2;
        RBus_UInt32  ai_region_jlum_2:2;
        RBus_UInt32  ai_region_ildm_2:2;
        RBus_UInt32  ai_region_ilum_2:2;
    };
}color_dcc_d_dcc_ai_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_jld_3:8;
        RBus_UInt32  ai_region_jlu_3:8;
        RBus_UInt32  ai_region_ild_3:8;
        RBus_UInt32  ai_region_ilu_3:8;
    };
}color_dcc_d_dcc_ai_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_jrd_3:8;
        RBus_UInt32  ai_region_jru_3:8;
        RBus_UInt32  ai_region_ird_3:8;
        RBus_UInt32  ai_region_iru_3:8;
    };
}color_dcc_d_dcc_ai_29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ai_region_jrdm_3:2;
        RBus_UInt32  ai_region_jrum_3:2;
        RBus_UInt32  ai_region_irdm_3:2;
        RBus_UInt32  ai_region_irum_3:2;
        RBus_UInt32  ai_region_jldm_3:2;
        RBus_UInt32  ai_region_jlum_3:2;
        RBus_UInt32  ai_region_ildm_3:2;
        RBus_UInt32  ai_region_ilum_3:2;
    };
}color_dcc_d_dcc_ai_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_jld_4:8;
        RBus_UInt32  ai_region_jlu_4:8;
        RBus_UInt32  ai_region_ild_4:8;
        RBus_UInt32  ai_region_ilu_4:8;
    };
}color_dcc_d_dcc_ai_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_jrd_4:8;
        RBus_UInt32  ai_region_jru_4:8;
        RBus_UInt32  ai_region_ird_4:8;
        RBus_UInt32  ai_region_iru_4:8;
    };
}color_dcc_d_dcc_ai_32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ai_region_jrdm_4:2;
        RBus_UInt32  ai_region_jrum_4:2;
        RBus_UInt32  ai_region_irdm_4:2;
        RBus_UInt32  ai_region_irum_4:2;
        RBus_UInt32  ai_region_jldm_4:2;
        RBus_UInt32  ai_region_jlum_4:2;
        RBus_UInt32  ai_region_ildm_4:2;
        RBus_UInt32  ai_region_ilum_4:2;
    };
}color_dcc_d_dcc_ai_33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_jld_5:8;
        RBus_UInt32  ai_region_jlu_5:8;
        RBus_UInt32  ai_region_ild_5:8;
        RBus_UInt32  ai_region_ilu_5:8;
    };
}color_dcc_d_dcc_ai_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_jrd_5:8;
        RBus_UInt32  ai_region_jru_5:8;
        RBus_UInt32  ai_region_ird_5:8;
        RBus_UInt32  ai_region_iru_5:8;
    };
}color_dcc_d_dcc_ai_35_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ai_region_jrdm_5:2;
        RBus_UInt32  ai_region_jrum_5:2;
        RBus_UInt32  ai_region_irdm_5:2;
        RBus_UInt32  ai_region_irum_5:2;
        RBus_UInt32  ai_region_jldm_5:2;
        RBus_UInt32  ai_region_jlum_5:2;
        RBus_UInt32  ai_region_ildm_5:2;
        RBus_UInt32  ai_region_ilum_5:2;
    };
}color_dcc_d_dcc_ai_36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  ai_detect_value:8;
        RBus_UInt32  ai_control_value:8;
        RBus_UInt32  ai_adjust_en:1;
    };
}color_dcc_d_dcc_ai_37_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_0:32;
    };
}color_dcc_d_dcc_fwused_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_1:32;
    };
}color_dcc_d_dcc_fwused_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_2:32;
    };
}color_dcc_d_dcc_fwused_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_3:32;
    };
}color_dcc_d_dcc_fwused_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_1:1;
        RBus_UInt32  test_0:1;
        RBus_UInt32  bist_fail_1:1;
        RBus_UInt32  bist_fail_0:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  drf_bist_fail_1:1;
        RBus_UInt32  drf_bist_fail_0:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  rme_1:1;
        RBus_UInt32  rme_0:1;
        RBus_UInt32  res3:8;
        RBus_UInt32  rm_1:4;
        RBus_UInt32  rm_0:4;
        RBus_UInt32  res4:2;
        RBus_UInt32  ls_1:1;
        RBus_UInt32  ls_0:1;
    };
}color_dcc_d_dcc_bist_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_3:1;
        RBus_UInt32  test_2:1;
        RBus_UInt32  bist_fail_3:1;
        RBus_UInt32  bist_fail_2:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  drf_bist_fail_3:1;
        RBus_UInt32  drf_bist_fail_2:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  rme_3:1;
        RBus_UInt32  rme_2:1;
        RBus_UInt32  res3:8;
        RBus_UInt32  rm_3:4;
        RBus_UInt32  rm_2:4;
        RBus_UInt32  res4:2;
        RBus_UInt32  ls_3:1;
        RBus_UInt32  ls_2:1;
    };
}color_dcc_d_dcc_bist_1_RBUS;

#else //apply LITTLE_ENDIAN

//======COLOR_DCC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  main_table_sel:1;
        RBus_UInt32  main_table_segment:1;
        RBus_UInt32  y_mapping_blending_wt:5;
        RBus_UInt32  y_mapping_mode:1;
        RBus_UInt32  dcc_user_curve_en:1;
        RBus_UInt32  dummy1802e400_15_10:6;
        RBus_UInt32  ai_blending_0_inside_ratio_msb:1;
        RBus_UInt32  ai_blending_1_inside_ratio_msb:1;
        RBus_UInt32  ai_blending_2_inside_ratio_msb:1;
        RBus_UInt32  ai_blending_3_inside_ratio_msb:1;
        RBus_UInt32  ai_blending_4_inside_ratio_msb:1;
        RBus_UInt32  ai_blending_5_inside_ratio_msb:1;
        RBus_UInt32  dummy1802e400_31_22:10;
    };
}color_dcc_d_dcc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  luma_offset_main:8;
        RBus_UInt32  res2:8;
    };
}color_dcc_dcc_ctrl_luma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_limit_seg0:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  chroma_gain_limit_seg1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  chroma_gain_limit_seg2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  chroma_gain_limit_seg3:6;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_limit_en:1;
    };
}color_dcc_dcc_chroma_gain_limit_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_limit_seg4:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  chroma_gain_limit_seg5:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  chroma_gain_limit_seg6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  chroma_gain_limit_seg7:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_dcc_chroma_gain_limit_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_en:1;
        RBus_UInt32  chroma_gain_mode:1;
        RBus_UInt32  chroma_gain_lookup_mode:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_base:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_enhance_above_tab_select_main:1;
        RBus_UInt32  chroma_enhance_below_tab_select_main:1;
        RBus_UInt32  saturation_byy_u_tab_select_main:1;
        RBus_UInt32  saturation_byy_v_tab_select_main:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  chroma_gain_tab1_seg0:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  chroma_gain_tab0_seg0:7;
        RBus_UInt32  res5:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab0_seg1:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg2:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg3:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg4:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab0_seg5:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg6:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg7:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg8:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab0_seg9:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg10:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg11:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg12:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab0_seg13:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg14:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg15:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg16:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab0_seg17:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg18:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg19:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg20:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab0_seg21:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg22:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg23:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg24:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab0_seg25:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg26:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg27:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg28:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab0_seg29:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg30:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg31:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg32:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab0_seg33:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg34:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg35:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg36:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab0_seg37:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg38:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg39:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg40:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab0_seg41:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg42:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg43:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg44:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab0_seg45:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg46:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg47:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg48:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab0_seg49:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg50:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg51:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg52:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab0_seg53:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg54:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg55:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg56:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab0_seg57:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg58:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg59:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg60:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab0_seg61:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab0_seg62:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab0_seg63:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab0_seg64:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab0_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab1_seg1:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg2:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg3:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg4:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab1_seg5:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg6:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg7:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg8:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab1_seg9:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg10:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg11:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg12:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab1_seg13:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg14:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg15:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg16:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab1_seg17:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg18:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg19:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg20:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab1_seg21:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg22:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg23:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg24:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab1_seg25:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg26:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg27:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg28:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab1_seg29:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg30:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg31:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg32:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab1_seg33:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg34:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg35:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg36:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab1_seg37:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg38:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg39:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg40:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab1_seg41:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg42:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg43:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg44:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab1_seg45:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg46:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg47:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg48:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab1_seg49:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg50:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg51:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg52:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab1_seg53:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg54:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg55:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg56:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab1_seg57:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg58:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg59:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg60:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_gain_tab1_seg61:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  chroma_gain_tab1_seg62:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  chroma_gain_tab1_seg63:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  chroma_gain_tab1_seg64:7;
        RBus_UInt32  res4:1;
    };
}color_dcc_dcc_ctrl_chroma_gain_tab1_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sram_tab_acc_ready:1;
        RBus_UInt32  sram_tab_acc_sel:1;
        RBus_UInt32  sram_tab_rw_sel:2;
        RBus_UInt32  sram_tab_acc_index:6;
        RBus_UInt32  sram_tab_acc_index_cur:6;
        RBus_UInt32  res1:16;
    };
}color_dcc_sram_tab_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sram_tab_g1:8;
        RBus_UInt32  sram_tab_g0:8;
        RBus_UInt32  sram_tab_base:10;
        RBus_UInt32  res1:6;
    };
}color_dcc_sram_tab_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sram_user_tab_acc_ready:1;
        RBus_UInt32  sram_user_tab_acc_sel:1;
        RBus_UInt32  sram_user_tab_rw_sel:2;
        RBus_UInt32  sram_user_tab_acc_index:6;
        RBus_UInt32  sram_user_tab_acc_index_cur:6;
        RBus_UInt32  res1:16;
    };
}color_dcc_sram_user_tab_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sram_user_tab_g1:8;
        RBus_UInt32  sram_user_tab_g0:8;
        RBus_UInt32  sram_user_tab_base:10;
        RBus_UInt32  res1:6;
    };
}color_dcc_sram_user_tab_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_apply:1;
        RBus_UInt32  db_read_level:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  res1:29;
    };
}color_dcc_d_dcc_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_en:1;
        RBus_UInt32  y_blending_reg3_en:1;
        RBus_UInt32  y_blending_reg2_en:1;
        RBus_UInt32  y_blending_reg1_en:1;
        RBus_UInt32  y_blending_reg0_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  ratio_lpf_en:1;
        RBus_UInt32  y_blending_mode:1;
        RBus_UInt32  y_blending_5_enhance_en:1;
        RBus_UInt32  y_blending_4_enhance_en:1;
        RBus_UInt32  y_blending_3_enhance_en:1;
        RBus_UInt32  y_blending_2_enhance_en:1;
        RBus_UInt32  y_blending_1_enhance_en:1;
        RBus_UInt32  y_blending_0_enhance_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  y_blending_debug_mode_sel:2;
        RBus_UInt32  y_blending_debug_mode_en:1;
        RBus_UInt32  region_ratio_blending_en:1;
        RBus_UInt32  res3:12;
    };
}color_dcc_d_dcc_skin_tone_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_0_v_center:10;
        RBus_UInt32  y_blending_0_u_center:10;
        RBus_UInt32  y_blending_0_y_center:10;
        RBus_UInt32  res1:2;
    };
}color_dcc_d_dcc_skin_tone_yuv_center_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_0_v_range:4;
        RBus_UInt32  y_blending_0_u_range:4;
        RBus_UInt32  y_blending_0_y_range:4;
        RBus_UInt32  res1:20;
    };
}color_dcc_d_dcc_skin_tone_yuv_range_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_1_v_center:10;
        RBus_UInt32  y_blending_1_u_center:10;
        RBus_UInt32  y_blending_1_y_center:10;
        RBus_UInt32  res1:2;
    };
}color_dcc_d_dcc_skin_tone_yuv_center_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_1_v_range:4;
        RBus_UInt32  y_blending_1_u_range:4;
        RBus_UInt32  y_blending_1_y_range:4;
        RBus_UInt32  res1:20;
    };
}color_dcc_d_dcc_skin_tone_yuv_range_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_2_v_center:10;
        RBus_UInt32  y_blending_2_u_center:10;
        RBus_UInt32  y_blending_2_y_center:10;
        RBus_UInt32  res1:2;
    };
}color_dcc_d_dcc_skin_tone_yuv_center_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_2_v_range:4;
        RBus_UInt32  y_blending_2_u_range:4;
        RBus_UInt32  y_blending_2_y_range:4;
        RBus_UInt32  res1:20;
    };
}color_dcc_d_dcc_skin_tone_yuv_range_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_3_v_center:10;
        RBus_UInt32  y_blending_3_u_center:10;
        RBus_UInt32  y_blending_3_y_center:10;
        RBus_UInt32  res1:2;
    };
}color_dcc_d_dcc_skin_tone_yuv_center_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_3_v_range:4;
        RBus_UInt32  y_blending_3_u_range:4;
        RBus_UInt32  y_blending_3_y_range:4;
        RBus_UInt32  res1:20;
    };
}color_dcc_d_dcc_skin_tone_yuv_range_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_0_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_0_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_0_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_0_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment0_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_0_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_0_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_0_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_0_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_1_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_1_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_1_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_1_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_1_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_1_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_1_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_1_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_2_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_2_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_2_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_2_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_2_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_2_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_2_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_2_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment2_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_3_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_3_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_3_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_3_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment3_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_blending_3_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  y_blending_3_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  y_blending_3_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  y_blending_3_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment3_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_0_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_0_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_0_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_0_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c0_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_0_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_0_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_0_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_0_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_1_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_1_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_1_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_1_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_1_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_1_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_1_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_1_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_2_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_2_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_2_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_2_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_2_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_2_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_2_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_2_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c2_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_3_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_3_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_3_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_3_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c3_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_3_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_3_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_3_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_3_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c3_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_skin_en:1;
        RBus_UInt32  res1:31;
    };
}color_dcc_d_dcc_cds_skin_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_uv_range_0:10;
        RBus_UInt32  cds_uv_range_1:10;
        RBus_UInt32  cds_uv_range_2:10;
        RBus_UInt32  res1:2;
    };
}color_dcc_d_dcc_cds_skin_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_uv_range_3:10;
        RBus_UInt32  cds_uv_range_4:10;
        RBus_UInt32  cds_uv_range_5:10;
        RBus_UInt32  res1:2;
    };
}color_dcc_d_dcc_cds_skin_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_4_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_4_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_4_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_4_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c4_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_4_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_4_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_4_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_4_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c4_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_5_ratio_3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_5_ratio_2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_5_ratio_1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_5_ratio_0:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c5_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_blending_5_ratio_7:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  c_blending_5_ratio_6:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  c_blending_5_ratio_5:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  c_blending_5_ratio_4:6;
        RBus_UInt32  res4:2;
    };
}color_dcc_d_dcc_skin_tone_segment_c5_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_blending_0_inside_ratio:5;
        RBus_UInt32  ai_blending_1_inside_ratio:5;
        RBus_UInt32  ai_blending_2_inside_ratio:5;
        RBus_UInt32  ai_blending_3_inside_ratio:5;
        RBus_UInt32  ai_blending_4_inside_ratio:5;
        RBus_UInt32  ai_blending_5_inside_ratio:5;
        RBus_UInt32  ai_ros_en:1;
        RBus_UInt32  res1:1;
    };
}color_dcc_d_dcc_ai_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_u_0:10;
        RBus_UInt32  ai_center_v_0:10;
        RBus_UInt32  ai_shrink_pix_num_0:6;
        RBus_UInt32  ai_edge_pix_num_0:2;
        RBus_UInt32  ai_face0_region_en:1;
        RBus_UInt32  res1:3;
    };
}color_dcc_d_dcc_ai_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_u_1:10;
        RBus_UInt32  ai_center_v_1:10;
        RBus_UInt32  ai_shrink_pix_num_1:6;
        RBus_UInt32  ai_edge_pix_num_1:2;
        RBus_UInt32  ai_face1_region_en:1;
        RBus_UInt32  res1:3;
    };
}color_dcc_d_dcc_ai_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_u_2:10;
        RBus_UInt32  ai_center_v_2:10;
        RBus_UInt32  ai_shrink_pix_num_2:6;
        RBus_UInt32  ai_edge_pix_num_2:2;
        RBus_UInt32  ai_face2_region_en:1;
        RBus_UInt32  res1:3;
    };
}color_dcc_d_dcc_ai_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_u_3:10;
        RBus_UInt32  ai_center_v_3:10;
        RBus_UInt32  ai_shrink_pix_num_3:6;
        RBus_UInt32  ai_edge_pix_num_3:2;
        RBus_UInt32  ai_face3_region_en:1;
        RBus_UInt32  res1:3;
    };
}color_dcc_d_dcc_ai_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_u_4:10;
        RBus_UInt32  ai_center_v_4:10;
        RBus_UInt32  ai_shrink_pix_num_4:6;
        RBus_UInt32  ai_edge_pix_num_4:2;
        RBus_UInt32  ai_face4_region_en:1;
        RBus_UInt32  res1:3;
    };
}color_dcc_d_dcc_ai_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_center_u_5:10;
        RBus_UInt32  ai_center_v_5:10;
        RBus_UInt32  ai_shrink_pix_num_5:6;
        RBus_UInt32  ai_edge_pix_num_5:2;
        RBus_UInt32  ai_face5_region_en:1;
        RBus_UInt32  res1:3;
    };
}color_dcc_d_dcc_ai_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_start_i_0:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_i_0:12;
        RBus_UInt32  res2:4;
    };
}color_dcc_d_dcc_ai_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_start_i_1:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_i_1:12;
        RBus_UInt32  res2:4;
    };
}color_dcc_d_dcc_ai_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_start_i_2:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_i_2:12;
        RBus_UInt32  res2:4;
    };
}color_dcc_d_dcc_ai_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_start_i_3:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_i_3:12;
        RBus_UInt32  res2:4;
    };
}color_dcc_d_dcc_ai_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_start_i_4:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_i_4:12;
        RBus_UInt32  res2:4;
    };
}color_dcc_d_dcc_ai_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_start_i_5:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_i_5:12;
        RBus_UInt32  res2:4;
    };
}color_dcc_d_dcc_ai_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_start_j_0:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_j_0:12;
        RBus_UInt32  res2:4;
    };
}color_dcc_d_dcc_ai_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_start_j_1:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_j_1:12;
        RBus_UInt32  res2:4;
    };
}color_dcc_d_dcc_ai_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_start_j_2:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_j_2:12;
        RBus_UInt32  res2:4;
    };
}color_dcc_d_dcc_ai_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_start_j_3:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_j_3:12;
        RBus_UInt32  res2:4;
    };
}color_dcc_d_dcc_ai_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_start_j_4:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_j_4:12;
        RBus_UInt32  res2:4;
    };
}color_dcc_d_dcc_ai_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_start_j_5:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ai_region_end_j_5:12;
        RBus_UInt32  res2:4;
    };
}color_dcc_d_dcc_ai_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_ilu_0:8;
        RBus_UInt32  ai_region_ild_0:8;
        RBus_UInt32  ai_region_jlu_0:8;
        RBus_UInt32  ai_region_jld_0:8;
    };
}color_dcc_d_dcc_ai_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_iru_0:8;
        RBus_UInt32  ai_region_ird_0:8;
        RBus_UInt32  ai_region_jru_0:8;
        RBus_UInt32  ai_region_jrd_0:8;
    };
}color_dcc_d_dcc_ai_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_ilum_0:2;
        RBus_UInt32  ai_region_ildm_0:2;
        RBus_UInt32  ai_region_jlum_0:2;
        RBus_UInt32  ai_region_jldm_0:2;
        RBus_UInt32  ai_region_irum_0:2;
        RBus_UInt32  ai_region_irdm_0:2;
        RBus_UInt32  ai_region_jrum_0:2;
        RBus_UInt32  ai_region_jrdm_0:2;
        RBus_UInt32  res1:16;
    };
}color_dcc_d_dcc_ai_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_ilu_1:8;
        RBus_UInt32  ai_region_ild_1:8;
        RBus_UInt32  ai_region_jlu_1:8;
        RBus_UInt32  ai_region_jld_1:8;
    };
}color_dcc_d_dcc_ai_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_iru_1:8;
        RBus_UInt32  ai_region_ird_1:8;
        RBus_UInt32  ai_region_jru_1:8;
        RBus_UInt32  ai_region_jrd_1:8;
    };
}color_dcc_d_dcc_ai_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_ilum_1:2;
        RBus_UInt32  ai_region_ildm_1:2;
        RBus_UInt32  ai_region_jlum_1:2;
        RBus_UInt32  ai_region_jldm_1:2;
        RBus_UInt32  ai_region_irum_1:2;
        RBus_UInt32  ai_region_irdm_1:2;
        RBus_UInt32  ai_region_jrum_1:2;
        RBus_UInt32  ai_region_jrdm_1:2;
        RBus_UInt32  res1:16;
    };
}color_dcc_d_dcc_ai_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_ilu_2:8;
        RBus_UInt32  ai_region_ild_2:8;
        RBus_UInt32  ai_region_jlu_2:8;
        RBus_UInt32  ai_region_jld_2:8;
    };
}color_dcc_d_dcc_ai_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_iru_2:8;
        RBus_UInt32  ai_region_ird_2:8;
        RBus_UInt32  ai_region_jru_2:8;
        RBus_UInt32  ai_region_jrd_2:8;
    };
}color_dcc_d_dcc_ai_26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_ilum_2:2;
        RBus_UInt32  ai_region_ildm_2:2;
        RBus_UInt32  ai_region_jlum_2:2;
        RBus_UInt32  ai_region_jldm_2:2;
        RBus_UInt32  ai_region_irum_2:2;
        RBus_UInt32  ai_region_irdm_2:2;
        RBus_UInt32  ai_region_jrum_2:2;
        RBus_UInt32  ai_region_jrdm_2:2;
        RBus_UInt32  res1:16;
    };
}color_dcc_d_dcc_ai_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_ilu_3:8;
        RBus_UInt32  ai_region_ild_3:8;
        RBus_UInt32  ai_region_jlu_3:8;
        RBus_UInt32  ai_region_jld_3:8;
    };
}color_dcc_d_dcc_ai_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_iru_3:8;
        RBus_UInt32  ai_region_ird_3:8;
        RBus_UInt32  ai_region_jru_3:8;
        RBus_UInt32  ai_region_jrd_3:8;
    };
}color_dcc_d_dcc_ai_29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_ilum_3:2;
        RBus_UInt32  ai_region_ildm_3:2;
        RBus_UInt32  ai_region_jlum_3:2;
        RBus_UInt32  ai_region_jldm_3:2;
        RBus_UInt32  ai_region_irum_3:2;
        RBus_UInt32  ai_region_irdm_3:2;
        RBus_UInt32  ai_region_jrum_3:2;
        RBus_UInt32  ai_region_jrdm_3:2;
        RBus_UInt32  res1:16;
    };
}color_dcc_d_dcc_ai_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_ilu_4:8;
        RBus_UInt32  ai_region_ild_4:8;
        RBus_UInt32  ai_region_jlu_4:8;
        RBus_UInt32  ai_region_jld_4:8;
    };
}color_dcc_d_dcc_ai_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_iru_4:8;
        RBus_UInt32  ai_region_ird_4:8;
        RBus_UInt32  ai_region_jru_4:8;
        RBus_UInt32  ai_region_jrd_4:8;
    };
}color_dcc_d_dcc_ai_32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_ilum_4:2;
        RBus_UInt32  ai_region_ildm_4:2;
        RBus_UInt32  ai_region_jlum_4:2;
        RBus_UInt32  ai_region_jldm_4:2;
        RBus_UInt32  ai_region_irum_4:2;
        RBus_UInt32  ai_region_irdm_4:2;
        RBus_UInt32  ai_region_jrum_4:2;
        RBus_UInt32  ai_region_jrdm_4:2;
        RBus_UInt32  res1:16;
    };
}color_dcc_d_dcc_ai_33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_ilu_5:8;
        RBus_UInt32  ai_region_ild_5:8;
        RBus_UInt32  ai_region_jlu_5:8;
        RBus_UInt32  ai_region_jld_5:8;
    };
}color_dcc_d_dcc_ai_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_iru_5:8;
        RBus_UInt32  ai_region_ird_5:8;
        RBus_UInt32  ai_region_jru_5:8;
        RBus_UInt32  ai_region_jrd_5:8;
    };
}color_dcc_d_dcc_ai_35_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_region_ilum_5:2;
        RBus_UInt32  ai_region_ildm_5:2;
        RBus_UInt32  ai_region_jlum_5:2;
        RBus_UInt32  ai_region_jldm_5:2;
        RBus_UInt32  ai_region_irum_5:2;
        RBus_UInt32  ai_region_irdm_5:2;
        RBus_UInt32  ai_region_jrum_5:2;
        RBus_UInt32  ai_region_jrdm_5:2;
        RBus_UInt32  res1:16;
    };
}color_dcc_d_dcc_ai_36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ai_adjust_en:1;
        RBus_UInt32  ai_control_value:8;
        RBus_UInt32  ai_detect_value:8;
        RBus_UInt32  res1:15;
    };
}color_dcc_d_dcc_ai_37_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_0:32;
    };
}color_dcc_d_dcc_fwused_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_1:32;
    };
}color_dcc_d_dcc_fwused_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_2:32;
    };
}color_dcc_d_dcc_fwused_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_3:32;
    };
}color_dcc_d_dcc_fwused_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ls_0:1;
        RBus_UInt32  ls_1:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  rm_0:4;
        RBus_UInt32  rm_1:4;
        RBus_UInt32  res2:8;
        RBus_UInt32  rme_0:1;
        RBus_UInt32  rme_1:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  drf_bist_fail_0:1;
        RBus_UInt32  drf_bist_fail_1:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  bist_fail_0:1;
        RBus_UInt32  bist_fail_1:1;
        RBus_UInt32  test_0:1;
        RBus_UInt32  test_1:1;
    };
}color_dcc_d_dcc_bist_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ls_2:1;
        RBus_UInt32  ls_3:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  rm_2:4;
        RBus_UInt32  rm_3:4;
        RBus_UInt32  res2:8;
        RBus_UInt32  rme_2:1;
        RBus_UInt32  rme_3:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  drf_bist_fail_2:1;
        RBus_UInt32  drf_bist_fail_3:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  bist_fail_2:1;
        RBus_UInt32  bist_fail_3:1;
        RBus_UInt32  test_2:1;
        RBus_UInt32  test_3:1;
    };
}color_dcc_d_dcc_bist_1_RBUS;




#endif 


#endif 
