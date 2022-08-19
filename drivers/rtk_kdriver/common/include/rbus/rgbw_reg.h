/**
* @file Mac7p-DesignSpec-D-Domain_rgbw
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_RGBW_REG_H_
#define _RBUS_RGBW_REG_H_

#include "rbus_types.h"



//  RGBW Register Address
#define  RGBW_D_RGBW_CPC_1                                                      0x1802E700
#define  RGBW_D_RGBW_CPC_1_reg_addr                                              "0xB802E700"
#define  RGBW_D_RGBW_CPC_1_reg                                                   0xB802E700
#define  RGBW_D_RGBW_CPC_1_inst_addr                                             "0x0000"
#define  set_RGBW_D_RGBW_CPC_1_reg(data)                                         (*((volatile unsigned int*)RGBW_D_RGBW_CPC_1_reg)=data)
#define  get_RGBW_D_RGBW_CPC_1_reg                                               (*((volatile unsigned int*)RGBW_D_RGBW_CPC_1_reg))
#define  RGBW_D_RGBW_CPC_1_pre_cur_bypass_shift                                  (31)
#define  RGBW_D_RGBW_CPC_1_ori_bypass_shift                                      (30)
#define  RGBW_D_RGBW_CPC_1_cpc_walpha_min_shift                                  (24)
#define  RGBW_D_RGBW_CPC_1_cpc_walpha_max_shift                                  (16)
#define  RGBW_D_RGBW_CPC_1_cpc_r_satalpha_shift                                  (8)
#define  RGBW_D_RGBW_CPC_1_cpc_g_satalpha_shift                                  (0)
#define  RGBW_D_RGBW_CPC_1_pre_cur_bypass_mask                                   (0x80000000)
#define  RGBW_D_RGBW_CPC_1_ori_bypass_mask                                       (0x40000000)
#define  RGBW_D_RGBW_CPC_1_cpc_walpha_min_mask                                   (0x1F000000)
#define  RGBW_D_RGBW_CPC_1_cpc_walpha_max_mask                                   (0x001F0000)
#define  RGBW_D_RGBW_CPC_1_cpc_r_satalpha_mask                                   (0x00001F00)
#define  RGBW_D_RGBW_CPC_1_cpc_g_satalpha_mask                                   (0x0000001F)
#define  RGBW_D_RGBW_CPC_1_pre_cur_bypass(data)                                  (0x80000000&((data)<<31))
#define  RGBW_D_RGBW_CPC_1_ori_bypass(data)                                      (0x40000000&((data)<<30))
#define  RGBW_D_RGBW_CPC_1_cpc_walpha_min(data)                                  (0x1F000000&((data)<<24))
#define  RGBW_D_RGBW_CPC_1_cpc_walpha_max(data)                                  (0x001F0000&((data)<<16))
#define  RGBW_D_RGBW_CPC_1_cpc_r_satalpha(data)                                  (0x00001F00&((data)<<8))
#define  RGBW_D_RGBW_CPC_1_cpc_g_satalpha(data)                                  (0x0000001F&(data))
#define  RGBW_D_RGBW_CPC_1_get_pre_cur_bypass(data)                              ((0x80000000&(data))>>31)
#define  RGBW_D_RGBW_CPC_1_get_ori_bypass(data)                                  ((0x40000000&(data))>>30)
#define  RGBW_D_RGBW_CPC_1_get_cpc_walpha_min(data)                              ((0x1F000000&(data))>>24)
#define  RGBW_D_RGBW_CPC_1_get_cpc_walpha_max(data)                              ((0x001F0000&(data))>>16)
#define  RGBW_D_RGBW_CPC_1_get_cpc_r_satalpha(data)                              ((0x00001F00&(data))>>8)
#define  RGBW_D_RGBW_CPC_1_get_cpc_g_satalpha(data)                              (0x0000001F&(data))

#define  RGBW_D_RGBW_CPC_2                                                      0x1802E704
#define  RGBW_D_RGBW_CPC_2_reg_addr                                              "0xB802E704"
#define  RGBW_D_RGBW_CPC_2_reg                                                   0xB802E704
#define  RGBW_D_RGBW_CPC_2_inst_addr                                             "0x0001"
#define  set_RGBW_D_RGBW_CPC_2_reg(data)                                         (*((volatile unsigned int*)RGBW_D_RGBW_CPC_2_reg)=data)
#define  get_RGBW_D_RGBW_CPC_2_reg                                               (*((volatile unsigned int*)RGBW_D_RGBW_CPC_2_reg))
#define  RGBW_D_RGBW_CPC_2_cpc_wlimit_shift                                      (24)
#define  RGBW_D_RGBW_CPC_2_cpc_b_satalpha_shift                                  (16)
#define  RGBW_D_RGBW_CPC_2_cpc_satalpha_offset_shift                             (0)
#define  RGBW_D_RGBW_CPC_2_cpc_wlimit_mask                                       (0xFF000000)
#define  RGBW_D_RGBW_CPC_2_cpc_b_satalpha_mask                                   (0x001F0000)
#define  RGBW_D_RGBW_CPC_2_cpc_satalpha_offset_mask                              (0x000003FF)
#define  RGBW_D_RGBW_CPC_2_cpc_wlimit(data)                                      (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_CPC_2_cpc_b_satalpha(data)                                  (0x001F0000&((data)<<16))
#define  RGBW_D_RGBW_CPC_2_cpc_satalpha_offset(data)                             (0x000003FF&(data))
#define  RGBW_D_RGBW_CPC_2_get_cpc_wlimit(data)                                  ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_CPC_2_get_cpc_b_satalpha(data)                              ((0x001F0000&(data))>>16)
#define  RGBW_D_RGBW_CPC_2_get_cpc_satalpha_offset(data)                         (0x000003FF&(data))

#define  RGBW_D_RGBW_CPC_3                                                      0x1802E708
#define  RGBW_D_RGBW_CPC_3_reg_addr                                              "0xB802E708"
#define  RGBW_D_RGBW_CPC_3_reg                                                   0xB802E708
#define  RGBW_D_RGBW_CPC_3_inst_addr                                             "0x0002"
#define  set_RGBW_D_RGBW_CPC_3_reg(data)                                         (*((volatile unsigned int*)RGBW_D_RGBW_CPC_3_reg)=data)
#define  get_RGBW_D_RGBW_CPC_3_reg                                               (*((volatile unsigned int*)RGBW_D_RGBW_CPC_3_reg))
#define  RGBW_D_RGBW_CPC_3_cpc_saliency_hfreq_en_shift                           (31)
#define  RGBW_D_RGBW_CPC_3_cpc_saliency_alpha_shift                              (16)
#define  RGBW_D_RGBW_CPC_3_cpc_saliency_offset_shift                             (0)
#define  RGBW_D_RGBW_CPC_3_cpc_saliency_hfreq_en_mask                            (0x80000000)
#define  RGBW_D_RGBW_CPC_3_cpc_saliency_alpha_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_CPC_3_cpc_saliency_offset_mask                              (0x000003FF)
#define  RGBW_D_RGBW_CPC_3_cpc_saliency_hfreq_en(data)                           (0x80000000&((data)<<31))
#define  RGBW_D_RGBW_CPC_3_cpc_saliency_alpha(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_CPC_3_cpc_saliency_offset(data)                             (0x000003FF&(data))
#define  RGBW_D_RGBW_CPC_3_get_cpc_saliency_hfreq_en(data)                       ((0x80000000&(data))>>31)
#define  RGBW_D_RGBW_CPC_3_get_cpc_saliency_alpha(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_CPC_3_get_cpc_saliency_offset(data)                         (0x000003FF&(data))

#define  RGBW_D_RGBW_CPC_4                                                      0x1802E70C
#define  RGBW_D_RGBW_CPC_4_reg_addr                                              "0xB802E70C"
#define  RGBW_D_RGBW_CPC_4_reg                                                   0xB802E70C
#define  RGBW_D_RGBW_CPC_4_inst_addr                                             "0x0003"
#define  set_RGBW_D_RGBW_CPC_4_reg(data)                                         (*((volatile unsigned int*)RGBW_D_RGBW_CPC_4_reg)=data)
#define  get_RGBW_D_RGBW_CPC_4_reg                                               (*((volatile unsigned int*)RGBW_D_RGBW_CPC_4_reg))
#define  RGBW_D_RGBW_CPC_4_cpc_coef_a_shift                                      (24)
#define  RGBW_D_RGBW_CPC_4_cpc_coef_b_shift                                      (16)
#define  RGBW_D_RGBW_CPC_4_cpc_coef_c_shift                                      (8)
#define  RGBW_D_RGBW_CPC_4_cpc_coef_d_shift                                      (0)
#define  RGBW_D_RGBW_CPC_4_cpc_coef_a_mask                                       (0x1F000000)
#define  RGBW_D_RGBW_CPC_4_cpc_coef_b_mask                                       (0x001F0000)
#define  RGBW_D_RGBW_CPC_4_cpc_coef_c_mask                                       (0x00001F00)
#define  RGBW_D_RGBW_CPC_4_cpc_coef_d_mask                                       (0x0000001F)
#define  RGBW_D_RGBW_CPC_4_cpc_coef_a(data)                                      (0x1F000000&((data)<<24))
#define  RGBW_D_RGBW_CPC_4_cpc_coef_b(data)                                      (0x001F0000&((data)<<16))
#define  RGBW_D_RGBW_CPC_4_cpc_coef_c(data)                                      (0x00001F00&((data)<<8))
#define  RGBW_D_RGBW_CPC_4_cpc_coef_d(data)                                      (0x0000001F&(data))
#define  RGBW_D_RGBW_CPC_4_get_cpc_coef_a(data)                                  ((0x1F000000&(data))>>24)
#define  RGBW_D_RGBW_CPC_4_get_cpc_coef_b(data)                                  ((0x001F0000&(data))>>16)
#define  RGBW_D_RGBW_CPC_4_get_cpc_coef_c(data)                                  ((0x00001F00&(data))>>8)
#define  RGBW_D_RGBW_CPC_4_get_cpc_coef_d(data)                                  (0x0000001F&(data))

#define  RGBW_D_RGBW_BE_1                                                       0x1802E710
#define  RGBW_D_RGBW_BE_1_reg_addr                                               "0xB802E710"
#define  RGBW_D_RGBW_BE_1_reg                                                    0xB802E710
#define  RGBW_D_RGBW_BE_1_inst_addr                                              "0x0004"
#define  set_RGBW_D_RGBW_BE_1_reg(data)                                          (*((volatile unsigned int*)RGBW_D_RGBW_BE_1_reg)=data)
#define  get_RGBW_D_RGBW_BE_1_reg                                                (*((volatile unsigned int*)RGBW_D_RGBW_BE_1_reg))
#define  RGBW_D_RGBW_BE_1_brightness_gain_shift                                  (8)
#define  RGBW_D_RGBW_BE_1_brightness_offset_shift                                (0)
#define  RGBW_D_RGBW_BE_1_brightness_gain_mask                                   (0x0000FF00)
#define  RGBW_D_RGBW_BE_1_brightness_offset_mask                                 (0x000000FF)
#define  RGBW_D_RGBW_BE_1_brightness_gain(data)                                  (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_BE_1_brightness_offset(data)                                (0x000000FF&(data))
#define  RGBW_D_RGBW_BE_1_get_brightness_gain(data)                              ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_BE_1_get_brightness_offset(data)                            (0x000000FF&(data))

#define  RGBW_D_RGBW_BE_2_SEP_1                                                 0x1802EC00
#define  RGBW_D_RGBW_BE_2_SEP_1_reg_addr                                         "0xB802EC00"
#define  RGBW_D_RGBW_BE_2_SEP_1_reg                                              0xB802EC00
#define  RGBW_D_RGBW_BE_2_SEP_1_inst_addr                                        "0x0005"
#define  set_RGBW_D_RGBW_BE_2_SEP_1_reg(data)                                    (*((volatile unsigned int*)RGBW_D_RGBW_BE_2_SEP_1_reg)=data)
#define  get_RGBW_D_RGBW_BE_2_SEP_1_reg                                          (*((volatile unsigned int*)RGBW_D_RGBW_BE_2_SEP_1_reg))
#define  RGBW_D_RGBW_BE_2_SEP_1_enhance_strength_separate_shift                  (31)
#define  RGBW_D_RGBW_BE_2_SEP_1_enhance_strength_offset_r_shift                  (8)
#define  RGBW_D_RGBW_BE_2_SEP_1_enhance_strength_gain_r_shift                    (0)
#define  RGBW_D_RGBW_BE_2_SEP_1_enhance_strength_separate_mask                   (0x80000000)
#define  RGBW_D_RGBW_BE_2_SEP_1_enhance_strength_offset_r_mask                   (0x000FFF00)
#define  RGBW_D_RGBW_BE_2_SEP_1_enhance_strength_gain_r_mask                     (0x000000FF)
#define  RGBW_D_RGBW_BE_2_SEP_1_enhance_strength_separate(data)                  (0x80000000&((data)<<31))
#define  RGBW_D_RGBW_BE_2_SEP_1_enhance_strength_offset_r(data)                  (0x000FFF00&((data)<<8))
#define  RGBW_D_RGBW_BE_2_SEP_1_enhance_strength_gain_r(data)                    (0x000000FF&(data))
#define  RGBW_D_RGBW_BE_2_SEP_1_get_enhance_strength_separate(data)              ((0x80000000&(data))>>31)
#define  RGBW_D_RGBW_BE_2_SEP_1_get_enhance_strength_offset_r(data)              ((0x000FFF00&(data))>>8)
#define  RGBW_D_RGBW_BE_2_SEP_1_get_enhance_strength_gain_r(data)                (0x000000FF&(data))

#define  RGBW_D_RGBW_BE_2_SEP_2                                                 0x1802EC04
#define  RGBW_D_RGBW_BE_2_SEP_2_reg_addr                                         "0xB802EC04"
#define  RGBW_D_RGBW_BE_2_SEP_2_reg                                              0xB802EC04
#define  RGBW_D_RGBW_BE_2_SEP_2_inst_addr                                        "0x0006"
#define  set_RGBW_D_RGBW_BE_2_SEP_2_reg(data)                                    (*((volatile unsigned int*)RGBW_D_RGBW_BE_2_SEP_2_reg)=data)
#define  get_RGBW_D_RGBW_BE_2_SEP_2_reg                                          (*((volatile unsigned int*)RGBW_D_RGBW_BE_2_SEP_2_reg))
#define  RGBW_D_RGBW_BE_2_SEP_2_enhance_strength_offset_g_shift                  (20)
#define  RGBW_D_RGBW_BE_2_SEP_2_enhance_strength_gain_g_shift                    (12)
#define  RGBW_D_RGBW_BE_2_SEP_2_enhance_strength_offset_b_shift                  (0)
#define  RGBW_D_RGBW_BE_2_SEP_2_enhance_strength_offset_g_mask                   (0xFFF00000)
#define  RGBW_D_RGBW_BE_2_SEP_2_enhance_strength_gain_g_mask                     (0x000FF000)
#define  RGBW_D_RGBW_BE_2_SEP_2_enhance_strength_offset_b_mask                   (0x00000FFF)
#define  RGBW_D_RGBW_BE_2_SEP_2_enhance_strength_offset_g(data)                  (0xFFF00000&((data)<<20))
#define  RGBW_D_RGBW_BE_2_SEP_2_enhance_strength_gain_g(data)                    (0x000FF000&((data)<<12))
#define  RGBW_D_RGBW_BE_2_SEP_2_enhance_strength_offset_b(data)                  (0x00000FFF&(data))
#define  RGBW_D_RGBW_BE_2_SEP_2_get_enhance_strength_offset_g(data)              ((0xFFF00000&(data))>>20)
#define  RGBW_D_RGBW_BE_2_SEP_2_get_enhance_strength_gain_g(data)                ((0x000FF000&(data))>>12)
#define  RGBW_D_RGBW_BE_2_SEP_2_get_enhance_strength_offset_b(data)              (0x00000FFF&(data))

#define  RGBW_D_RGBW_BE_2_SEP_3                                                 0x1802EC08
#define  RGBW_D_RGBW_BE_2_SEP_3_reg_addr                                         "0xB802EC08"
#define  RGBW_D_RGBW_BE_2_SEP_3_reg                                              0xB802EC08
#define  RGBW_D_RGBW_BE_2_SEP_3_inst_addr                                        "0x0007"
#define  set_RGBW_D_RGBW_BE_2_SEP_3_reg(data)                                    (*((volatile unsigned int*)RGBW_D_RGBW_BE_2_SEP_3_reg)=data)
#define  get_RGBW_D_RGBW_BE_2_SEP_3_reg                                          (*((volatile unsigned int*)RGBW_D_RGBW_BE_2_SEP_3_reg))
#define  RGBW_D_RGBW_BE_2_SEP_3_enhance_strength_gain_b_shift                    (20)
#define  RGBW_D_RGBW_BE_2_SEP_3_enhance_strength_offset_w_shift                  (8)
#define  RGBW_D_RGBW_BE_2_SEP_3_enhance_strength_gain_w_shift                    (0)
#define  RGBW_D_RGBW_BE_2_SEP_3_enhance_strength_gain_b_mask                     (0x0FF00000)
#define  RGBW_D_RGBW_BE_2_SEP_3_enhance_strength_offset_w_mask                   (0x000FFF00)
#define  RGBW_D_RGBW_BE_2_SEP_3_enhance_strength_gain_w_mask                     (0x000000FF)
#define  RGBW_D_RGBW_BE_2_SEP_3_enhance_strength_gain_b(data)                    (0x0FF00000&((data)<<20))
#define  RGBW_D_RGBW_BE_2_SEP_3_enhance_strength_offset_w(data)                  (0x000FFF00&((data)<<8))
#define  RGBW_D_RGBW_BE_2_SEP_3_enhance_strength_gain_w(data)                    (0x000000FF&(data))
#define  RGBW_D_RGBW_BE_2_SEP_3_get_enhance_strength_gain_b(data)                ((0x0FF00000&(data))>>20)
#define  RGBW_D_RGBW_BE_2_SEP_3_get_enhance_strength_offset_w(data)              ((0x000FFF00&(data))>>8)
#define  RGBW_D_RGBW_BE_2_SEP_3_get_enhance_strength_gain_w(data)                (0x000000FF&(data))

#define  RGBW_D_RGBW_LOG_CURVE_1                                                0x1802E718
#define  RGBW_D_RGBW_LOG_CURVE_1_reg_addr                                        "0xB802E718"
#define  RGBW_D_RGBW_LOG_CURVE_1_reg                                             0xB802E718
#define  RGBW_D_RGBW_LOG_CURVE_1_inst_addr                                       "0x0008"
#define  set_RGBW_D_RGBW_LOG_CURVE_1_reg(data)                                   (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_1_reg)=data)
#define  get_RGBW_D_RGBW_LOG_CURVE_1_reg                                         (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_1_reg))
#define  RGBW_D_RGBW_LOG_CURVE_1_slogcurve_sub_0_shift                           (20)
#define  RGBW_D_RGBW_LOG_CURVE_1_slogcurve_sub_1_shift                           (10)
#define  RGBW_D_RGBW_LOG_CURVE_1_slogcurve_sub_2_shift                           (0)
#define  RGBW_D_RGBW_LOG_CURVE_1_slogcurve_sub_0_mask                            (0x3FF00000)
#define  RGBW_D_RGBW_LOG_CURVE_1_slogcurve_sub_1_mask                            (0x000FFC00)
#define  RGBW_D_RGBW_LOG_CURVE_1_slogcurve_sub_2_mask                            (0x000003FF)
#define  RGBW_D_RGBW_LOG_CURVE_1_slogcurve_sub_0(data)                           (0x3FF00000&((data)<<20))
#define  RGBW_D_RGBW_LOG_CURVE_1_slogcurve_sub_1(data)                           (0x000FFC00&((data)<<10))
#define  RGBW_D_RGBW_LOG_CURVE_1_slogcurve_sub_2(data)                           (0x000003FF&(data))
#define  RGBW_D_RGBW_LOG_CURVE_1_get_slogcurve_sub_0(data)                       ((0x3FF00000&(data))>>20)
#define  RGBW_D_RGBW_LOG_CURVE_1_get_slogcurve_sub_1(data)                       ((0x000FFC00&(data))>>10)
#define  RGBW_D_RGBW_LOG_CURVE_1_get_slogcurve_sub_2(data)                       (0x000003FF&(data))

#define  RGBW_D_RGBW_LOG_CURVE_2                                                0x1802E71C
#define  RGBW_D_RGBW_LOG_CURVE_2_reg_addr                                        "0xB802E71C"
#define  RGBW_D_RGBW_LOG_CURVE_2_reg                                             0xB802E71C
#define  RGBW_D_RGBW_LOG_CURVE_2_inst_addr                                       "0x0009"
#define  set_RGBW_D_RGBW_LOG_CURVE_2_reg(data)                                   (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_2_reg)=data)
#define  get_RGBW_D_RGBW_LOG_CURVE_2_reg                                         (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_2_reg))
#define  RGBW_D_RGBW_LOG_CURVE_2_slogcurve_sub_3_shift                           (20)
#define  RGBW_D_RGBW_LOG_CURVE_2_slogcurve_sub_4_shift                           (10)
#define  RGBW_D_RGBW_LOG_CURVE_2_slogcurve_sub_5_shift                           (0)
#define  RGBW_D_RGBW_LOG_CURVE_2_slogcurve_sub_3_mask                            (0x3FF00000)
#define  RGBW_D_RGBW_LOG_CURVE_2_slogcurve_sub_4_mask                            (0x000FFC00)
#define  RGBW_D_RGBW_LOG_CURVE_2_slogcurve_sub_5_mask                            (0x000003FF)
#define  RGBW_D_RGBW_LOG_CURVE_2_slogcurve_sub_3(data)                           (0x3FF00000&((data)<<20))
#define  RGBW_D_RGBW_LOG_CURVE_2_slogcurve_sub_4(data)                           (0x000FFC00&((data)<<10))
#define  RGBW_D_RGBW_LOG_CURVE_2_slogcurve_sub_5(data)                           (0x000003FF&(data))
#define  RGBW_D_RGBW_LOG_CURVE_2_get_slogcurve_sub_3(data)                       ((0x3FF00000&(data))>>20)
#define  RGBW_D_RGBW_LOG_CURVE_2_get_slogcurve_sub_4(data)                       ((0x000FFC00&(data))>>10)
#define  RGBW_D_RGBW_LOG_CURVE_2_get_slogcurve_sub_5(data)                       (0x000003FF&(data))

#define  RGBW_D_RGBW_LOG_CURVE_3                                                0x1802E720
#define  RGBW_D_RGBW_LOG_CURVE_3_reg_addr                                        "0xB802E720"
#define  RGBW_D_RGBW_LOG_CURVE_3_reg                                             0xB802E720
#define  RGBW_D_RGBW_LOG_CURVE_3_inst_addr                                       "0x000A"
#define  set_RGBW_D_RGBW_LOG_CURVE_3_reg(data)                                   (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_3_reg)=data)
#define  get_RGBW_D_RGBW_LOG_CURVE_3_reg                                         (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_3_reg))
#define  RGBW_D_RGBW_LOG_CURVE_3_slogcurve_sub_6_shift                           (20)
#define  RGBW_D_RGBW_LOG_CURVE_3_slogcurve_sub_7_shift                           (10)
#define  RGBW_D_RGBW_LOG_CURVE_3_slogcurve_2_shift                               (0)
#define  RGBW_D_RGBW_LOG_CURVE_3_slogcurve_sub_6_mask                            (0x3FF00000)
#define  RGBW_D_RGBW_LOG_CURVE_3_slogcurve_sub_7_mask                            (0x000FFC00)
#define  RGBW_D_RGBW_LOG_CURVE_3_slogcurve_2_mask                                (0x000003FF)
#define  RGBW_D_RGBW_LOG_CURVE_3_slogcurve_sub_6(data)                           (0x3FF00000&((data)<<20))
#define  RGBW_D_RGBW_LOG_CURVE_3_slogcurve_sub_7(data)                           (0x000FFC00&((data)<<10))
#define  RGBW_D_RGBW_LOG_CURVE_3_slogcurve_2(data)                               (0x000003FF&(data))
#define  RGBW_D_RGBW_LOG_CURVE_3_get_slogcurve_sub_6(data)                       ((0x3FF00000&(data))>>20)
#define  RGBW_D_RGBW_LOG_CURVE_3_get_slogcurve_sub_7(data)                       ((0x000FFC00&(data))>>10)
#define  RGBW_D_RGBW_LOG_CURVE_3_get_slogcurve_2(data)                           (0x000003FF&(data))

#define  RGBW_D_RGBW_LOG_CURVE_4                                                0x1802E724
#define  RGBW_D_RGBW_LOG_CURVE_4_reg_addr                                        "0xB802E724"
#define  RGBW_D_RGBW_LOG_CURVE_4_reg                                             0xB802E724
#define  RGBW_D_RGBW_LOG_CURVE_4_inst_addr                                       "0x000B"
#define  set_RGBW_D_RGBW_LOG_CURVE_4_reg(data)                                   (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_4_reg)=data)
#define  get_RGBW_D_RGBW_LOG_CURVE_4_reg                                         (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_4_reg))
#define  RGBW_D_RGBW_LOG_CURVE_4_slogcurve_3_shift                               (20)
#define  RGBW_D_RGBW_LOG_CURVE_4_slogcurve_4_shift                               (10)
#define  RGBW_D_RGBW_LOG_CURVE_4_slogcurve_5_shift                               (0)
#define  RGBW_D_RGBW_LOG_CURVE_4_slogcurve_3_mask                                (0x3FF00000)
#define  RGBW_D_RGBW_LOG_CURVE_4_slogcurve_4_mask                                (0x000FFC00)
#define  RGBW_D_RGBW_LOG_CURVE_4_slogcurve_5_mask                                (0x000003FF)
#define  RGBW_D_RGBW_LOG_CURVE_4_slogcurve_3(data)                               (0x3FF00000&((data)<<20))
#define  RGBW_D_RGBW_LOG_CURVE_4_slogcurve_4(data)                               (0x000FFC00&((data)<<10))
#define  RGBW_D_RGBW_LOG_CURVE_4_slogcurve_5(data)                               (0x000003FF&(data))
#define  RGBW_D_RGBW_LOG_CURVE_4_get_slogcurve_3(data)                           ((0x3FF00000&(data))>>20)
#define  RGBW_D_RGBW_LOG_CURVE_4_get_slogcurve_4(data)                           ((0x000FFC00&(data))>>10)
#define  RGBW_D_RGBW_LOG_CURVE_4_get_slogcurve_5(data)                           (0x000003FF&(data))

#define  RGBW_D_RGBW_LOG_CURVE_5                                                0x1802E728
#define  RGBW_D_RGBW_LOG_CURVE_5_reg_addr                                        "0xB802E728"
#define  RGBW_D_RGBW_LOG_CURVE_5_reg                                             0xB802E728
#define  RGBW_D_RGBW_LOG_CURVE_5_inst_addr                                       "0x000C"
#define  set_RGBW_D_RGBW_LOG_CURVE_5_reg(data)                                   (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_5_reg)=data)
#define  get_RGBW_D_RGBW_LOG_CURVE_5_reg                                         (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_5_reg))
#define  RGBW_D_RGBW_LOG_CURVE_5_slogcurve_6_shift                               (20)
#define  RGBW_D_RGBW_LOG_CURVE_5_slogcurve_7_shift                               (10)
#define  RGBW_D_RGBW_LOG_CURVE_5_slogcurve_8_shift                               (0)
#define  RGBW_D_RGBW_LOG_CURVE_5_slogcurve_6_mask                                (0x3FF00000)
#define  RGBW_D_RGBW_LOG_CURVE_5_slogcurve_7_mask                                (0x000FFC00)
#define  RGBW_D_RGBW_LOG_CURVE_5_slogcurve_8_mask                                (0x000003FF)
#define  RGBW_D_RGBW_LOG_CURVE_5_slogcurve_6(data)                               (0x3FF00000&((data)<<20))
#define  RGBW_D_RGBW_LOG_CURVE_5_slogcurve_7(data)                               (0x000FFC00&((data)<<10))
#define  RGBW_D_RGBW_LOG_CURVE_5_slogcurve_8(data)                               (0x000003FF&(data))
#define  RGBW_D_RGBW_LOG_CURVE_5_get_slogcurve_6(data)                           ((0x3FF00000&(data))>>20)
#define  RGBW_D_RGBW_LOG_CURVE_5_get_slogcurve_7(data)                           ((0x000FFC00&(data))>>10)
#define  RGBW_D_RGBW_LOG_CURVE_5_get_slogcurve_8(data)                           (0x000003FF&(data))

#define  RGBW_D_RGBW_LOG_CURVE_6                                                0x1802E72C
#define  RGBW_D_RGBW_LOG_CURVE_6_reg_addr                                        "0xB802E72C"
#define  RGBW_D_RGBW_LOG_CURVE_6_reg                                             0xB802E72C
#define  RGBW_D_RGBW_LOG_CURVE_6_inst_addr                                       "0x000D"
#define  set_RGBW_D_RGBW_LOG_CURVE_6_reg(data)                                   (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_6_reg)=data)
#define  get_RGBW_D_RGBW_LOG_CURVE_6_reg                                         (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_6_reg))
#define  RGBW_D_RGBW_LOG_CURVE_6_slogcurve_9_shift                               (20)
#define  RGBW_D_RGBW_LOG_CURVE_6_slogcurve_10_shift                              (10)
#define  RGBW_D_RGBW_LOG_CURVE_6_slogcurve_11_shift                              (0)
#define  RGBW_D_RGBW_LOG_CURVE_6_slogcurve_9_mask                                (0x3FF00000)
#define  RGBW_D_RGBW_LOG_CURVE_6_slogcurve_10_mask                               (0x000FFC00)
#define  RGBW_D_RGBW_LOG_CURVE_6_slogcurve_11_mask                               (0x000003FF)
#define  RGBW_D_RGBW_LOG_CURVE_6_slogcurve_9(data)                               (0x3FF00000&((data)<<20))
#define  RGBW_D_RGBW_LOG_CURVE_6_slogcurve_10(data)                              (0x000FFC00&((data)<<10))
#define  RGBW_D_RGBW_LOG_CURVE_6_slogcurve_11(data)                              (0x000003FF&(data))
#define  RGBW_D_RGBW_LOG_CURVE_6_get_slogcurve_9(data)                           ((0x3FF00000&(data))>>20)
#define  RGBW_D_RGBW_LOG_CURVE_6_get_slogcurve_10(data)                          ((0x000FFC00&(data))>>10)
#define  RGBW_D_RGBW_LOG_CURVE_6_get_slogcurve_11(data)                          (0x000003FF&(data))

#define  RGBW_D_RGBW_LOG_CURVE_7                                                0x1802E730
#define  RGBW_D_RGBW_LOG_CURVE_7_reg_addr                                        "0xB802E730"
#define  RGBW_D_RGBW_LOG_CURVE_7_reg                                             0xB802E730
#define  RGBW_D_RGBW_LOG_CURVE_7_inst_addr                                       "0x000E"
#define  set_RGBW_D_RGBW_LOG_CURVE_7_reg(data)                                   (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_7_reg)=data)
#define  get_RGBW_D_RGBW_LOG_CURVE_7_reg                                         (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_7_reg))
#define  RGBW_D_RGBW_LOG_CURVE_7_slogcurve_12_shift                              (20)
#define  RGBW_D_RGBW_LOG_CURVE_7_slogcurve_13_shift                              (10)
#define  RGBW_D_RGBW_LOG_CURVE_7_slogcurve_14_shift                              (0)
#define  RGBW_D_RGBW_LOG_CURVE_7_slogcurve_12_mask                               (0x3FF00000)
#define  RGBW_D_RGBW_LOG_CURVE_7_slogcurve_13_mask                               (0x000FFC00)
#define  RGBW_D_RGBW_LOG_CURVE_7_slogcurve_14_mask                               (0x000003FF)
#define  RGBW_D_RGBW_LOG_CURVE_7_slogcurve_12(data)                              (0x3FF00000&((data)<<20))
#define  RGBW_D_RGBW_LOG_CURVE_7_slogcurve_13(data)                              (0x000FFC00&((data)<<10))
#define  RGBW_D_RGBW_LOG_CURVE_7_slogcurve_14(data)                              (0x000003FF&(data))
#define  RGBW_D_RGBW_LOG_CURVE_7_get_slogcurve_12(data)                          ((0x3FF00000&(data))>>20)
#define  RGBW_D_RGBW_LOG_CURVE_7_get_slogcurve_13(data)                          ((0x000FFC00&(data))>>10)
#define  RGBW_D_RGBW_LOG_CURVE_7_get_slogcurve_14(data)                          (0x000003FF&(data))

#define  RGBW_D_RGBW_LOG_CURVE_8                                                0x1802E734
#define  RGBW_D_RGBW_LOG_CURVE_8_reg_addr                                        "0xB802E734"
#define  RGBW_D_RGBW_LOG_CURVE_8_reg                                             0xB802E734
#define  RGBW_D_RGBW_LOG_CURVE_8_inst_addr                                       "0x000F"
#define  set_RGBW_D_RGBW_LOG_CURVE_8_reg(data)                                   (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_8_reg)=data)
#define  get_RGBW_D_RGBW_LOG_CURVE_8_reg                                         (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_8_reg))
#define  RGBW_D_RGBW_LOG_CURVE_8_slogcurve_15_shift                              (20)
#define  RGBW_D_RGBW_LOG_CURVE_8_slogcurve_16_shift                              (10)
#define  RGBW_D_RGBW_LOG_CURVE_8_slogcurve_17_shift                              (0)
#define  RGBW_D_RGBW_LOG_CURVE_8_slogcurve_15_mask                               (0x3FF00000)
#define  RGBW_D_RGBW_LOG_CURVE_8_slogcurve_16_mask                               (0x000FFC00)
#define  RGBW_D_RGBW_LOG_CURVE_8_slogcurve_17_mask                               (0x000003FF)
#define  RGBW_D_RGBW_LOG_CURVE_8_slogcurve_15(data)                              (0x3FF00000&((data)<<20))
#define  RGBW_D_RGBW_LOG_CURVE_8_slogcurve_16(data)                              (0x000FFC00&((data)<<10))
#define  RGBW_D_RGBW_LOG_CURVE_8_slogcurve_17(data)                              (0x000003FF&(data))
#define  RGBW_D_RGBW_LOG_CURVE_8_get_slogcurve_15(data)                          ((0x3FF00000&(data))>>20)
#define  RGBW_D_RGBW_LOG_CURVE_8_get_slogcurve_16(data)                          ((0x000FFC00&(data))>>10)
#define  RGBW_D_RGBW_LOG_CURVE_8_get_slogcurve_17(data)                          (0x000003FF&(data))

#define  RGBW_D_RGBW_LOG_CURVE_9                                                0x1802E738
#define  RGBW_D_RGBW_LOG_CURVE_9_reg_addr                                        "0xB802E738"
#define  RGBW_D_RGBW_LOG_CURVE_9_reg                                             0xB802E738
#define  RGBW_D_RGBW_LOG_CURVE_9_inst_addr                                       "0x0010"
#define  set_RGBW_D_RGBW_LOG_CURVE_9_reg(data)                                   (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_9_reg)=data)
#define  get_RGBW_D_RGBW_LOG_CURVE_9_reg                                         (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_9_reg))
#define  RGBW_D_RGBW_LOG_CURVE_9_slogcurve_18_shift                              (20)
#define  RGBW_D_RGBW_LOG_CURVE_9_slogcurve_19_shift                              (10)
#define  RGBW_D_RGBW_LOG_CURVE_9_slogcurve_20_shift                              (0)
#define  RGBW_D_RGBW_LOG_CURVE_9_slogcurve_18_mask                               (0x3FF00000)
#define  RGBW_D_RGBW_LOG_CURVE_9_slogcurve_19_mask                               (0x000FFC00)
#define  RGBW_D_RGBW_LOG_CURVE_9_slogcurve_20_mask                               (0x000003FF)
#define  RGBW_D_RGBW_LOG_CURVE_9_slogcurve_18(data)                              (0x3FF00000&((data)<<20))
#define  RGBW_D_RGBW_LOG_CURVE_9_slogcurve_19(data)                              (0x000FFC00&((data)<<10))
#define  RGBW_D_RGBW_LOG_CURVE_9_slogcurve_20(data)                              (0x000003FF&(data))
#define  RGBW_D_RGBW_LOG_CURVE_9_get_slogcurve_18(data)                          ((0x3FF00000&(data))>>20)
#define  RGBW_D_RGBW_LOG_CURVE_9_get_slogcurve_19(data)                          ((0x000FFC00&(data))>>10)
#define  RGBW_D_RGBW_LOG_CURVE_9_get_slogcurve_20(data)                          (0x000003FF&(data))

#define  RGBW_D_RGBW_LOG_CURVE_10                                               0x1802E73C
#define  RGBW_D_RGBW_LOG_CURVE_10_reg_addr                                       "0xB802E73C"
#define  RGBW_D_RGBW_LOG_CURVE_10_reg                                            0xB802E73C
#define  RGBW_D_RGBW_LOG_CURVE_10_inst_addr                                      "0x0011"
#define  set_RGBW_D_RGBW_LOG_CURVE_10_reg(data)                                  (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_10_reg)=data)
#define  get_RGBW_D_RGBW_LOG_CURVE_10_reg                                        (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_10_reg))
#define  RGBW_D_RGBW_LOG_CURVE_10_slogcurve_21_shift                             (20)
#define  RGBW_D_RGBW_LOG_CURVE_10_slogcurve_22_shift                             (10)
#define  RGBW_D_RGBW_LOG_CURVE_10_slogcurve_23_shift                             (0)
#define  RGBW_D_RGBW_LOG_CURVE_10_slogcurve_21_mask                              (0x3FF00000)
#define  RGBW_D_RGBW_LOG_CURVE_10_slogcurve_22_mask                              (0x000FFC00)
#define  RGBW_D_RGBW_LOG_CURVE_10_slogcurve_23_mask                              (0x000003FF)
#define  RGBW_D_RGBW_LOG_CURVE_10_slogcurve_21(data)                             (0x3FF00000&((data)<<20))
#define  RGBW_D_RGBW_LOG_CURVE_10_slogcurve_22(data)                             (0x000FFC00&((data)<<10))
#define  RGBW_D_RGBW_LOG_CURVE_10_slogcurve_23(data)                             (0x000003FF&(data))
#define  RGBW_D_RGBW_LOG_CURVE_10_get_slogcurve_21(data)                         ((0x3FF00000&(data))>>20)
#define  RGBW_D_RGBW_LOG_CURVE_10_get_slogcurve_22(data)                         ((0x000FFC00&(data))>>10)
#define  RGBW_D_RGBW_LOG_CURVE_10_get_slogcurve_23(data)                         (0x000003FF&(data))

#define  RGBW_D_RGBW_LOG_CURVE_11                                               0x1802E740
#define  RGBW_D_RGBW_LOG_CURVE_11_reg_addr                                       "0xB802E740"
#define  RGBW_D_RGBW_LOG_CURVE_11_reg                                            0xB802E740
#define  RGBW_D_RGBW_LOG_CURVE_11_inst_addr                                      "0x0012"
#define  set_RGBW_D_RGBW_LOG_CURVE_11_reg(data)                                  (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_11_reg)=data)
#define  get_RGBW_D_RGBW_LOG_CURVE_11_reg                                        (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_11_reg))
#define  RGBW_D_RGBW_LOG_CURVE_11_slogcurve_24_shift                             (20)
#define  RGBW_D_RGBW_LOG_CURVE_11_slogcurve_25_shift                             (10)
#define  RGBW_D_RGBW_LOG_CURVE_11_slogcurve_26_shift                             (0)
#define  RGBW_D_RGBW_LOG_CURVE_11_slogcurve_24_mask                              (0x3FF00000)
#define  RGBW_D_RGBW_LOG_CURVE_11_slogcurve_25_mask                              (0x000FFC00)
#define  RGBW_D_RGBW_LOG_CURVE_11_slogcurve_26_mask                              (0x000003FF)
#define  RGBW_D_RGBW_LOG_CURVE_11_slogcurve_24(data)                             (0x3FF00000&((data)<<20))
#define  RGBW_D_RGBW_LOG_CURVE_11_slogcurve_25(data)                             (0x000FFC00&((data)<<10))
#define  RGBW_D_RGBW_LOG_CURVE_11_slogcurve_26(data)                             (0x000003FF&(data))
#define  RGBW_D_RGBW_LOG_CURVE_11_get_slogcurve_24(data)                         ((0x3FF00000&(data))>>20)
#define  RGBW_D_RGBW_LOG_CURVE_11_get_slogcurve_25(data)                         ((0x000FFC00&(data))>>10)
#define  RGBW_D_RGBW_LOG_CURVE_11_get_slogcurve_26(data)                         (0x000003FF&(data))

#define  RGBW_D_RGBW_LOG_CURVE_12                                               0x1802E744
#define  RGBW_D_RGBW_LOG_CURVE_12_reg_addr                                       "0xB802E744"
#define  RGBW_D_RGBW_LOG_CURVE_12_reg                                            0xB802E744
#define  RGBW_D_RGBW_LOG_CURVE_12_inst_addr                                      "0x0013"
#define  set_RGBW_D_RGBW_LOG_CURVE_12_reg(data)                                  (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_12_reg)=data)
#define  get_RGBW_D_RGBW_LOG_CURVE_12_reg                                        (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_12_reg))
#define  RGBW_D_RGBW_LOG_CURVE_12_slogcurve_27_shift                             (20)
#define  RGBW_D_RGBW_LOG_CURVE_12_slogcurve_28_shift                             (10)
#define  RGBW_D_RGBW_LOG_CURVE_12_slogcurve_29_shift                             (0)
#define  RGBW_D_RGBW_LOG_CURVE_12_slogcurve_27_mask                              (0x3FF00000)
#define  RGBW_D_RGBW_LOG_CURVE_12_slogcurve_28_mask                              (0x000FFC00)
#define  RGBW_D_RGBW_LOG_CURVE_12_slogcurve_29_mask                              (0x000003FF)
#define  RGBW_D_RGBW_LOG_CURVE_12_slogcurve_27(data)                             (0x3FF00000&((data)<<20))
#define  RGBW_D_RGBW_LOG_CURVE_12_slogcurve_28(data)                             (0x000FFC00&((data)<<10))
#define  RGBW_D_RGBW_LOG_CURVE_12_slogcurve_29(data)                             (0x000003FF&(data))
#define  RGBW_D_RGBW_LOG_CURVE_12_get_slogcurve_27(data)                         ((0x3FF00000&(data))>>20)
#define  RGBW_D_RGBW_LOG_CURVE_12_get_slogcurve_28(data)                         ((0x000FFC00&(data))>>10)
#define  RGBW_D_RGBW_LOG_CURVE_12_get_slogcurve_29(data)                         (0x000003FF&(data))

#define  RGBW_D_RGBW_LOG_CURVE_13                                               0x1802E748
#define  RGBW_D_RGBW_LOG_CURVE_13_reg_addr                                       "0xB802E748"
#define  RGBW_D_RGBW_LOG_CURVE_13_reg                                            0xB802E748
#define  RGBW_D_RGBW_LOG_CURVE_13_inst_addr                                      "0x0014"
#define  set_RGBW_D_RGBW_LOG_CURVE_13_reg(data)                                  (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_13_reg)=data)
#define  get_RGBW_D_RGBW_LOG_CURVE_13_reg                                        (*((volatile unsigned int*)RGBW_D_RGBW_LOG_CURVE_13_reg))
#define  RGBW_D_RGBW_LOG_CURVE_13_slogcurve_30_shift                             (20)
#define  RGBW_D_RGBW_LOG_CURVE_13_slogcurve_31_shift                             (10)
#define  RGBW_D_RGBW_LOG_CURVE_13_slogcurve_32_shift                             (0)
#define  RGBW_D_RGBW_LOG_CURVE_13_slogcurve_30_mask                              (0x3FF00000)
#define  RGBW_D_RGBW_LOG_CURVE_13_slogcurve_31_mask                              (0x000FFC00)
#define  RGBW_D_RGBW_LOG_CURVE_13_slogcurve_32_mask                              (0x000003FF)
#define  RGBW_D_RGBW_LOG_CURVE_13_slogcurve_30(data)                             (0x3FF00000&((data)<<20))
#define  RGBW_D_RGBW_LOG_CURVE_13_slogcurve_31(data)                             (0x000FFC00&((data)<<10))
#define  RGBW_D_RGBW_LOG_CURVE_13_slogcurve_32(data)                             (0x000003FF&(data))
#define  RGBW_D_RGBW_LOG_CURVE_13_get_slogcurve_30(data)                         ((0x3FF00000&(data))>>20)
#define  RGBW_D_RGBW_LOG_CURVE_13_get_slogcurve_31(data)                         ((0x000FFC00&(data))>>10)
#define  RGBW_D_RGBW_LOG_CURVE_13_get_slogcurve_32(data)                         (0x000003FF&(data))

#define  RGBW_D_RGBW_DEOVERSAT_1                                                0x1802EC10
#define  RGBW_D_RGBW_DEOVERSAT_1_reg_addr                                        "0xB802EC10"
#define  RGBW_D_RGBW_DEOVERSAT_1_reg                                             0xB802EC10
#define  RGBW_D_RGBW_DEOVERSAT_1_inst_addr                                       "0x0015"
#define  set_RGBW_D_RGBW_DEOVERSAT_1_reg(data)                                   (*((volatile unsigned int*)RGBW_D_RGBW_DEOVERSAT_1_reg)=data)
#define  get_RGBW_D_RGBW_DEOVERSAT_1_reg                                         (*((volatile unsigned int*)RGBW_D_RGBW_DEOVERSAT_1_reg))
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_en_shift                              (31)
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_alpha_shift                           (24)
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_strength_shift                        (16)
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_flatlpf_en_shift                      (15)
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_flatlpf_lowbd_shift                   (8)
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_flatlpf_slope_shift                   (0)
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_en_mask                               (0x80000000)
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_alpha_mask                            (0x1F000000)
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_strength_mask                         (0x001F0000)
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_flatlpf_en_mask                       (0x00008000)
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_flatlpf_lowbd_mask                    (0x00003F00)
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_flatlpf_slope_mask                    (0x0000001F)
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_en(data)                              (0x80000000&((data)<<31))
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_alpha(data)                           (0x1F000000&((data)<<24))
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_strength(data)                        (0x001F0000&((data)<<16))
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_flatlpf_en(data)                      (0x00008000&((data)<<15))
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_flatlpf_lowbd(data)                   (0x00003F00&((data)<<8))
#define  RGBW_D_RGBW_DEOVERSAT_1_deoversat_flatlpf_slope(data)                   (0x0000001F&(data))
#define  RGBW_D_RGBW_DEOVERSAT_1_get_deoversat_en(data)                          ((0x80000000&(data))>>31)
#define  RGBW_D_RGBW_DEOVERSAT_1_get_deoversat_alpha(data)                       ((0x1F000000&(data))>>24)
#define  RGBW_D_RGBW_DEOVERSAT_1_get_deoversat_strength(data)                    ((0x001F0000&(data))>>16)
#define  RGBW_D_RGBW_DEOVERSAT_1_get_deoversat_flatlpf_en(data)                  ((0x00008000&(data))>>15)
#define  RGBW_D_RGBW_DEOVERSAT_1_get_deoversat_flatlpf_lowbd(data)               ((0x00003F00&(data))>>8)
#define  RGBW_D_RGBW_DEOVERSAT_1_get_deoversat_flatlpf_slope(data)               (0x0000001F&(data))

#define  RGBW_D_RGBW_DEOVERSAT_2                                                0x1802EC14
#define  RGBW_D_RGBW_DEOVERSAT_2_reg_addr                                        "0xB802EC14"
#define  RGBW_D_RGBW_DEOVERSAT_2_reg                                             0xB802EC14
#define  RGBW_D_RGBW_DEOVERSAT_2_inst_addr                                       "0x0016"
#define  set_RGBW_D_RGBW_DEOVERSAT_2_reg(data)                                   (*((volatile unsigned int*)RGBW_D_RGBW_DEOVERSAT_2_reg)=data)
#define  get_RGBW_D_RGBW_DEOVERSAT_2_reg                                         (*((volatile unsigned int*)RGBW_D_RGBW_DEOVERSAT_2_reg))
#define  RGBW_D_RGBW_DEOVERSAT_2_deoversat_flatlpf_coef0_shift                   (24)
#define  RGBW_D_RGBW_DEOVERSAT_2_deoversat_flatlpf_coef1_shift                   (20)
#define  RGBW_D_RGBW_DEOVERSAT_2_deoversat_flatlpf_coef2_shift                   (16)
#define  RGBW_D_RGBW_DEOVERSAT_2_deoversat_flatlpf_coef3_shift                   (12)
#define  RGBW_D_RGBW_DEOVERSAT_2_ratioclip_en_shift                              (11)
#define  RGBW_D_RGBW_DEOVERSAT_2_ratioclip_strength_shift                        (0)
#define  RGBW_D_RGBW_DEOVERSAT_2_deoversat_flatlpf_coef0_mask                    (0x1F000000)
#define  RGBW_D_RGBW_DEOVERSAT_2_deoversat_flatlpf_coef1_mask                    (0x00F00000)
#define  RGBW_D_RGBW_DEOVERSAT_2_deoversat_flatlpf_coef2_mask                    (0x000F0000)
#define  RGBW_D_RGBW_DEOVERSAT_2_deoversat_flatlpf_coef3_mask                    (0x0000F000)
#define  RGBW_D_RGBW_DEOVERSAT_2_ratioclip_en_mask                               (0x00000800)
#define  RGBW_D_RGBW_DEOVERSAT_2_ratioclip_strength_mask                         (0x0000001F)
#define  RGBW_D_RGBW_DEOVERSAT_2_deoversat_flatlpf_coef0(data)                   (0x1F000000&((data)<<24))
#define  RGBW_D_RGBW_DEOVERSAT_2_deoversat_flatlpf_coef1(data)                   (0x00F00000&((data)<<20))
#define  RGBW_D_RGBW_DEOVERSAT_2_deoversat_flatlpf_coef2(data)                   (0x000F0000&((data)<<16))
#define  RGBW_D_RGBW_DEOVERSAT_2_deoversat_flatlpf_coef3(data)                   (0x0000F000&((data)<<12))
#define  RGBW_D_RGBW_DEOVERSAT_2_ratioclip_en(data)                              (0x00000800&((data)<<11))
#define  RGBW_D_RGBW_DEOVERSAT_2_ratioclip_strength(data)                        (0x0000001F&(data))
#define  RGBW_D_RGBW_DEOVERSAT_2_get_deoversat_flatlpf_coef0(data)               ((0x1F000000&(data))>>24)
#define  RGBW_D_RGBW_DEOVERSAT_2_get_deoversat_flatlpf_coef1(data)               ((0x00F00000&(data))>>20)
#define  RGBW_D_RGBW_DEOVERSAT_2_get_deoversat_flatlpf_coef2(data)               ((0x000F0000&(data))>>16)
#define  RGBW_D_RGBW_DEOVERSAT_2_get_deoversat_flatlpf_coef3(data)               ((0x0000F000&(data))>>12)
#define  RGBW_D_RGBW_DEOVERSAT_2_get_ratioclip_en(data)                          ((0x00000800&(data))>>11)
#define  RGBW_D_RGBW_DEOVERSAT_2_get_ratioclip_strength(data)                    (0x0000001F&(data))

#define  RGBW_D_RGBW_ADAPTWHITE_1                                               0x1802EC20
#define  RGBW_D_RGBW_ADAPTWHITE_1_reg_addr                                       "0xB802EC20"
#define  RGBW_D_RGBW_ADAPTWHITE_1_reg                                            0xB802EC20
#define  RGBW_D_RGBW_ADAPTWHITE_1_inst_addr                                      "0x0017"
#define  set_RGBW_D_RGBW_ADAPTWHITE_1_reg(data)                                  (*((volatile unsigned int*)RGBW_D_RGBW_ADAPTWHITE_1_reg)=data)
#define  get_RGBW_D_RGBW_ADAPTWHITE_1_reg                                        (*((volatile unsigned int*)RGBW_D_RGBW_ADAPTWHITE_1_reg))
#define  RGBW_D_RGBW_ADAPTWHITE_1_adaptwhite_en_shift                            (31)
#define  RGBW_D_RGBW_ADAPTWHITE_1_adaptwhite_alpha_shift                         (24)
#define  RGBW_D_RGBW_ADAPTWHITE_1_adaptwhite_cutweight_shift                     (0)
#define  RGBW_D_RGBW_ADAPTWHITE_1_adaptwhite_en_mask                             (0x80000000)
#define  RGBW_D_RGBW_ADAPTWHITE_1_adaptwhite_alpha_mask                          (0x1F000000)
#define  RGBW_D_RGBW_ADAPTWHITE_1_adaptwhite_cutweight_mask                      (0x000003FF)
#define  RGBW_D_RGBW_ADAPTWHITE_1_adaptwhite_en(data)                            (0x80000000&((data)<<31))
#define  RGBW_D_RGBW_ADAPTWHITE_1_adaptwhite_alpha(data)                         (0x1F000000&((data)<<24))
#define  RGBW_D_RGBW_ADAPTWHITE_1_adaptwhite_cutweight(data)                     (0x000003FF&(data))
#define  RGBW_D_RGBW_ADAPTWHITE_1_get_adaptwhite_en(data)                        ((0x80000000&(data))>>31)
#define  RGBW_D_RGBW_ADAPTWHITE_1_get_adaptwhite_alpha(data)                     ((0x1F000000&(data))>>24)
#define  RGBW_D_RGBW_ADAPTWHITE_1_get_adaptwhite_cutweight(data)                 (0x000003FF&(data))

#define  RGBW_D_RGBW_ADAPTWHITE_2                                               0x1802EC24
#define  RGBW_D_RGBW_ADAPTWHITE_2_reg_addr                                       "0xB802EC24"
#define  RGBW_D_RGBW_ADAPTWHITE_2_reg                                            0xB802EC24
#define  RGBW_D_RGBW_ADAPTWHITE_2_inst_addr                                      "0x0018"
#define  set_RGBW_D_RGBW_ADAPTWHITE_2_reg(data)                                  (*((volatile unsigned int*)RGBW_D_RGBW_ADAPTWHITE_2_reg)=data)
#define  get_RGBW_D_RGBW_ADAPTWHITE_2_reg                                        (*((volatile unsigned int*)RGBW_D_RGBW_ADAPTWHITE_2_reg))
#define  RGBW_D_RGBW_ADAPTWHITE_2_hist_en_shift                                  (31)
#define  RGBW_D_RGBW_ADAPTWHITE_2_hist_mode_sel_shift                            (30)
#define  RGBW_D_RGBW_ADAPTWHITE_2_hist_shift_sel_shift                           (24)
#define  RGBW_D_RGBW_ADAPTWHITE_2_hist_data_sel_shift                            (16)
#define  RGBW_D_RGBW_ADAPTWHITE_2_hist_sta0_shift                                (8)
#define  RGBW_D_RGBW_ADAPTWHITE_2_hist_en_mask                                   (0x80000000)
#define  RGBW_D_RGBW_ADAPTWHITE_2_hist_mode_sel_mask                             (0x40000000)
#define  RGBW_D_RGBW_ADAPTWHITE_2_hist_shift_sel_mask                            (0x0F000000)
#define  RGBW_D_RGBW_ADAPTWHITE_2_hist_data_sel_mask                             (0x001F0000)
#define  RGBW_D_RGBW_ADAPTWHITE_2_hist_sta0_mask                                 (0x0000FF00)
#define  RGBW_D_RGBW_ADAPTWHITE_2_hist_en(data)                                  (0x80000000&((data)<<31))
#define  RGBW_D_RGBW_ADAPTWHITE_2_hist_mode_sel(data)                            (0x40000000&((data)<<30))
#define  RGBW_D_RGBW_ADAPTWHITE_2_hist_shift_sel(data)                           (0x0F000000&((data)<<24))
#define  RGBW_D_RGBW_ADAPTWHITE_2_hist_data_sel(data)                            (0x001F0000&((data)<<16))
#define  RGBW_D_RGBW_ADAPTWHITE_2_hist_sta0(data)                                (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_ADAPTWHITE_2_get_hist_en(data)                              ((0x80000000&(data))>>31)
#define  RGBW_D_RGBW_ADAPTWHITE_2_get_hist_mode_sel(data)                        ((0x40000000&(data))>>30)
#define  RGBW_D_RGBW_ADAPTWHITE_2_get_hist_shift_sel(data)                       ((0x0F000000&(data))>>24)
#define  RGBW_D_RGBW_ADAPTWHITE_2_get_hist_data_sel(data)                        ((0x001F0000&(data))>>16)
#define  RGBW_D_RGBW_ADAPTWHITE_2_get_hist_sta0(data)                            ((0x0000FF00&(data))>>8)

#define  RGBW_D_RGBW_ADAPTWHITE_3                                               0x1802EC28
#define  RGBW_D_RGBW_ADAPTWHITE_3_reg_addr                                       "0xB802EC28"
#define  RGBW_D_RGBW_ADAPTWHITE_3_reg                                            0xB802EC28
#define  RGBW_D_RGBW_ADAPTWHITE_3_inst_addr                                      "0x0019"
#define  set_RGBW_D_RGBW_ADAPTWHITE_3_reg(data)                                  (*((volatile unsigned int*)RGBW_D_RGBW_ADAPTWHITE_3_reg)=data)
#define  get_RGBW_D_RGBW_ADAPTWHITE_3_reg                                        (*((volatile unsigned int*)RGBW_D_RGBW_ADAPTWHITE_3_reg))
#define  RGBW_D_RGBW_ADAPTWHITE_3_hist_sta1_shift                                (24)
#define  RGBW_D_RGBW_ADAPTWHITE_3_hist_sta2_shift                                (16)
#define  RGBW_D_RGBW_ADAPTWHITE_3_hist_sta3_shift                                (8)
#define  RGBW_D_RGBW_ADAPTWHITE_3_hist_sta4_shift                                (0)
#define  RGBW_D_RGBW_ADAPTWHITE_3_hist_sta1_mask                                 (0xFF000000)
#define  RGBW_D_RGBW_ADAPTWHITE_3_hist_sta2_mask                                 (0x00FF0000)
#define  RGBW_D_RGBW_ADAPTWHITE_3_hist_sta3_mask                                 (0x0000FF00)
#define  RGBW_D_RGBW_ADAPTWHITE_3_hist_sta4_mask                                 (0x000000FF)
#define  RGBW_D_RGBW_ADAPTWHITE_3_hist_sta1(data)                                (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_ADAPTWHITE_3_hist_sta2(data)                                (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_ADAPTWHITE_3_hist_sta3(data)                                (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_ADAPTWHITE_3_hist_sta4(data)                                (0x000000FF&(data))
#define  RGBW_D_RGBW_ADAPTWHITE_3_get_hist_sta1(data)                            ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_ADAPTWHITE_3_get_hist_sta2(data)                            ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_ADAPTWHITE_3_get_hist_sta3(data)                            ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_ADAPTWHITE_3_get_hist_sta4(data)                            (0x000000FF&(data))

#define  RGBW_D_RGBW_ADAPTWHITE_4                                               0x1802EC2C
#define  RGBW_D_RGBW_ADAPTWHITE_4_reg_addr                                       "0xB802EC2C"
#define  RGBW_D_RGBW_ADAPTWHITE_4_reg                                            0xB802EC2C
#define  RGBW_D_RGBW_ADAPTWHITE_4_inst_addr                                      "0x001A"
#define  set_RGBW_D_RGBW_ADAPTWHITE_4_reg(data)                                  (*((volatile unsigned int*)RGBW_D_RGBW_ADAPTWHITE_4_reg)=data)
#define  get_RGBW_D_RGBW_ADAPTWHITE_4_reg                                        (*((volatile unsigned int*)RGBW_D_RGBW_ADAPTWHITE_4_reg))
#define  RGBW_D_RGBW_ADAPTWHITE_4_hist_sta5_shift                                (24)
#define  RGBW_D_RGBW_ADAPTWHITE_4_hist_sta6_shift                                (16)
#define  RGBW_D_RGBW_ADAPTWHITE_4_hist_sta7_shift                                (8)
#define  RGBW_D_RGBW_ADAPTWHITE_4_hist_end7_shift                                (0)
#define  RGBW_D_RGBW_ADAPTWHITE_4_hist_sta5_mask                                 (0xFF000000)
#define  RGBW_D_RGBW_ADAPTWHITE_4_hist_sta6_mask                                 (0x00FF0000)
#define  RGBW_D_RGBW_ADAPTWHITE_4_hist_sta7_mask                                 (0x0000FF00)
#define  RGBW_D_RGBW_ADAPTWHITE_4_hist_end7_mask                                 (0x000000FF)
#define  RGBW_D_RGBW_ADAPTWHITE_4_hist_sta5(data)                                (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_ADAPTWHITE_4_hist_sta6(data)                                (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_ADAPTWHITE_4_hist_sta7(data)                                (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_ADAPTWHITE_4_hist_end7(data)                                (0x000000FF&(data))
#define  RGBW_D_RGBW_ADAPTWHITE_4_get_hist_sta5(data)                            ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_ADAPTWHITE_4_get_hist_sta6(data)                            ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_ADAPTWHITE_4_get_hist_sta7(data)                            ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_ADAPTWHITE_4_get_hist_end7(data)                            (0x000000FF&(data))

#define  RGBW_D_RGBW_ADAPTWHITE_HIST_1                                          0x1802EC30
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_1_reg_addr                                  "0xB802EC30"
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_1_reg                                       0xB802EC30
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_1_inst_addr                                 "0x001B"
#define  set_RGBW_D_RGBW_ADAPTWHITE_HIST_1_reg(data)                             (*((volatile unsigned int*)RGBW_D_RGBW_ADAPTWHITE_HIST_1_reg)=data)
#define  get_RGBW_D_RGBW_ADAPTWHITE_HIST_1_reg                                   (*((volatile unsigned int*)RGBW_D_RGBW_ADAPTWHITE_HIST_1_reg))
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_1_hist_bin0_shift                           (16)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_1_hist_bin1_shift                           (0)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_1_hist_bin0_mask                            (0xFFFF0000)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_1_hist_bin1_mask                            (0x0000FFFF)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_1_hist_bin0(data)                           (0xFFFF0000&((data)<<16))
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_1_hist_bin1(data)                           (0x0000FFFF&(data))
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_1_get_hist_bin0(data)                       ((0xFFFF0000&(data))>>16)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_1_get_hist_bin1(data)                       (0x0000FFFF&(data))

#define  RGBW_D_RGBW_ADAPTWHITE_HIST_2                                          0x1802EC34
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_2_reg_addr                                  "0xB802EC34"
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_2_reg                                       0xB802EC34
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_2_inst_addr                                 "0x001C"
#define  set_RGBW_D_RGBW_ADAPTWHITE_HIST_2_reg(data)                             (*((volatile unsigned int*)RGBW_D_RGBW_ADAPTWHITE_HIST_2_reg)=data)
#define  get_RGBW_D_RGBW_ADAPTWHITE_HIST_2_reg                                   (*((volatile unsigned int*)RGBW_D_RGBW_ADAPTWHITE_HIST_2_reg))
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_2_hist_bin2_shift                           (16)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_2_hist_bin3_shift                           (0)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_2_hist_bin2_mask                            (0xFFFF0000)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_2_hist_bin3_mask                            (0x0000FFFF)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_2_hist_bin2(data)                           (0xFFFF0000&((data)<<16))
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_2_hist_bin3(data)                           (0x0000FFFF&(data))
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_2_get_hist_bin2(data)                       ((0xFFFF0000&(data))>>16)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_2_get_hist_bin3(data)                       (0x0000FFFF&(data))

#define  RGBW_D_RGBW_ADAPTWHITE_HIST_3                                          0x1802EC38
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_3_reg_addr                                  "0xB802EC38"
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_3_reg                                       0xB802EC38
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_3_inst_addr                                 "0x001D"
#define  set_RGBW_D_RGBW_ADAPTWHITE_HIST_3_reg(data)                             (*((volatile unsigned int*)RGBW_D_RGBW_ADAPTWHITE_HIST_3_reg)=data)
#define  get_RGBW_D_RGBW_ADAPTWHITE_HIST_3_reg                                   (*((volatile unsigned int*)RGBW_D_RGBW_ADAPTWHITE_HIST_3_reg))
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_3_hist_bin4_shift                           (16)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_3_hist_bin5_shift                           (0)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_3_hist_bin4_mask                            (0xFFFF0000)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_3_hist_bin5_mask                            (0x0000FFFF)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_3_hist_bin4(data)                           (0xFFFF0000&((data)<<16))
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_3_hist_bin5(data)                           (0x0000FFFF&(data))
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_3_get_hist_bin4(data)                       ((0xFFFF0000&(data))>>16)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_3_get_hist_bin5(data)                       (0x0000FFFF&(data))

#define  RGBW_D_RGBW_ADAPTWHITE_HIST_4                                          0x1802EC3C
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_4_reg_addr                                  "0xB802EC3C"
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_4_reg                                       0xB802EC3C
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_4_inst_addr                                 "0x001E"
#define  set_RGBW_D_RGBW_ADAPTWHITE_HIST_4_reg(data)                             (*((volatile unsigned int*)RGBW_D_RGBW_ADAPTWHITE_HIST_4_reg)=data)
#define  get_RGBW_D_RGBW_ADAPTWHITE_HIST_4_reg                                   (*((volatile unsigned int*)RGBW_D_RGBW_ADAPTWHITE_HIST_4_reg))
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_4_hist_bin6_shift                           (16)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_4_hist_bin7_shift                           (0)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_4_hist_bin6_mask                            (0xFFFF0000)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_4_hist_bin7_mask                            (0x0000FFFF)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_4_hist_bin6(data)                           (0xFFFF0000&((data)<<16))
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_4_hist_bin7(data)                           (0x0000FFFF&(data))
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_4_get_hist_bin6(data)                       ((0xFFFF0000&(data))>>16)
#define  RGBW_D_RGBW_ADAPTWHITE_HIST_4_get_hist_bin7(data)                       (0x0000FFFF&(data))

#define  RGBW_D_RGBW_SPR_ORDER                                                  0x1802E750
#define  RGBW_D_RGBW_SPR_ORDER_reg_addr                                          "0xB802E750"
#define  RGBW_D_RGBW_SPR_ORDER_reg                                               0xB802E750
#define  RGBW_D_RGBW_SPR_ORDER_inst_addr                                         "0x001F"
#define  set_RGBW_D_RGBW_SPR_ORDER_reg(data)                                     (*((volatile unsigned int*)RGBW_D_RGBW_SPR_ORDER_reg)=data)
#define  get_RGBW_D_RGBW_SPR_ORDER_reg                                           (*((volatile unsigned int*)RGBW_D_RGBW_SPR_ORDER_reg))
#define  RGBW_D_RGBW_SPR_ORDER_spr_coef_mode_shift                               (31)
#define  RGBW_D_RGBW_SPR_ORDER_ss0_pos_shift                                     (27)
#define  RGBW_D_RGBW_SPR_ORDER_ss1_pos_shift                                     (26)
#define  RGBW_D_RGBW_SPR_ORDER_ss2_pos_shift                                     (25)
#define  RGBW_D_RGBW_SPR_ORDER_ss3_pos_shift                                     (24)
#define  RGBW_D_RGBW_SPR_ORDER_ss4_pos_shift                                     (23)
#define  RGBW_D_RGBW_SPR_ORDER_ss5_pos_shift                                     (22)
#define  RGBW_D_RGBW_SPR_ORDER_ss6_pos_shift                                     (21)
#define  RGBW_D_RGBW_SPR_ORDER_ss7_pos_shift                                     (20)
#define  RGBW_D_RGBW_SPR_ORDER_ss8_pos_shift                                     (19)
#define  RGBW_D_RGBW_SPR_ORDER_ss9_pos_shift                                     (18)
#define  RGBW_D_RGBW_SPR_ORDER_ss10_pos_shift                                    (17)
#define  RGBW_D_RGBW_SPR_ORDER_ss11_pos_shift                                    (16)
#define  RGBW_D_RGBW_SPR_ORDER_even_ch_w_shift                                   (14)
#define  RGBW_D_RGBW_SPR_ORDER_even_ch_b_shift                                   (12)
#define  RGBW_D_RGBW_SPR_ORDER_even_ch_g_shift                                   (10)
#define  RGBW_D_RGBW_SPR_ORDER_even_ch_r_shift                                   (8)
#define  RGBW_D_RGBW_SPR_ORDER_odd_ch_w_shift                                    (6)
#define  RGBW_D_RGBW_SPR_ORDER_odd_ch_b_shift                                    (4)
#define  RGBW_D_RGBW_SPR_ORDER_odd_ch_g_shift                                    (2)
#define  RGBW_D_RGBW_SPR_ORDER_odd_ch_r_shift                                    (0)
#define  RGBW_D_RGBW_SPR_ORDER_spr_coef_mode_mask                                (0x80000000)
#define  RGBW_D_RGBW_SPR_ORDER_ss0_pos_mask                                      (0x08000000)
#define  RGBW_D_RGBW_SPR_ORDER_ss1_pos_mask                                      (0x04000000)
#define  RGBW_D_RGBW_SPR_ORDER_ss2_pos_mask                                      (0x02000000)
#define  RGBW_D_RGBW_SPR_ORDER_ss3_pos_mask                                      (0x01000000)
#define  RGBW_D_RGBW_SPR_ORDER_ss4_pos_mask                                      (0x00800000)
#define  RGBW_D_RGBW_SPR_ORDER_ss5_pos_mask                                      (0x00400000)
#define  RGBW_D_RGBW_SPR_ORDER_ss6_pos_mask                                      (0x00200000)
#define  RGBW_D_RGBW_SPR_ORDER_ss7_pos_mask                                      (0x00100000)
#define  RGBW_D_RGBW_SPR_ORDER_ss8_pos_mask                                      (0x00080000)
#define  RGBW_D_RGBW_SPR_ORDER_ss9_pos_mask                                      (0x00040000)
#define  RGBW_D_RGBW_SPR_ORDER_ss10_pos_mask                                     (0x00020000)
#define  RGBW_D_RGBW_SPR_ORDER_ss11_pos_mask                                     (0x00010000)
#define  RGBW_D_RGBW_SPR_ORDER_even_ch_w_mask                                    (0x0000C000)
#define  RGBW_D_RGBW_SPR_ORDER_even_ch_b_mask                                    (0x00003000)
#define  RGBW_D_RGBW_SPR_ORDER_even_ch_g_mask                                    (0x00000C00)
#define  RGBW_D_RGBW_SPR_ORDER_even_ch_r_mask                                    (0x00000300)
#define  RGBW_D_RGBW_SPR_ORDER_odd_ch_w_mask                                     (0x000000C0)
#define  RGBW_D_RGBW_SPR_ORDER_odd_ch_b_mask                                     (0x00000030)
#define  RGBW_D_RGBW_SPR_ORDER_odd_ch_g_mask                                     (0x0000000C)
#define  RGBW_D_RGBW_SPR_ORDER_odd_ch_r_mask                                     (0x00000003)
#define  RGBW_D_RGBW_SPR_ORDER_spr_coef_mode(data)                               (0x80000000&((data)<<31))
#define  RGBW_D_RGBW_SPR_ORDER_ss0_pos(data)                                     (0x08000000&((data)<<27))
#define  RGBW_D_RGBW_SPR_ORDER_ss1_pos(data)                                     (0x04000000&((data)<<26))
#define  RGBW_D_RGBW_SPR_ORDER_ss2_pos(data)                                     (0x02000000&((data)<<25))
#define  RGBW_D_RGBW_SPR_ORDER_ss3_pos(data)                                     (0x01000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_ORDER_ss4_pos(data)                                     (0x00800000&((data)<<23))
#define  RGBW_D_RGBW_SPR_ORDER_ss5_pos(data)                                     (0x00400000&((data)<<22))
#define  RGBW_D_RGBW_SPR_ORDER_ss6_pos(data)                                     (0x00200000&((data)<<21))
#define  RGBW_D_RGBW_SPR_ORDER_ss7_pos(data)                                     (0x00100000&((data)<<20))
#define  RGBW_D_RGBW_SPR_ORDER_ss8_pos(data)                                     (0x00080000&((data)<<19))
#define  RGBW_D_RGBW_SPR_ORDER_ss9_pos(data)                                     (0x00040000&((data)<<18))
#define  RGBW_D_RGBW_SPR_ORDER_ss10_pos(data)                                    (0x00020000&((data)<<17))
#define  RGBW_D_RGBW_SPR_ORDER_ss11_pos(data)                                    (0x00010000&((data)<<16))
#define  RGBW_D_RGBW_SPR_ORDER_even_ch_w(data)                                   (0x0000C000&((data)<<14))
#define  RGBW_D_RGBW_SPR_ORDER_even_ch_b(data)                                   (0x00003000&((data)<<12))
#define  RGBW_D_RGBW_SPR_ORDER_even_ch_g(data)                                   (0x00000C00&((data)<<10))
#define  RGBW_D_RGBW_SPR_ORDER_even_ch_r(data)                                   (0x00000300&((data)<<8))
#define  RGBW_D_RGBW_SPR_ORDER_odd_ch_w(data)                                    (0x000000C0&((data)<<6))
#define  RGBW_D_RGBW_SPR_ORDER_odd_ch_b(data)                                    (0x00000030&((data)<<4))
#define  RGBW_D_RGBW_SPR_ORDER_odd_ch_g(data)                                    (0x0000000C&((data)<<2))
#define  RGBW_D_RGBW_SPR_ORDER_odd_ch_r(data)                                    (0x00000003&(data))
#define  RGBW_D_RGBW_SPR_ORDER_get_spr_coef_mode(data)                           ((0x80000000&(data))>>31)
#define  RGBW_D_RGBW_SPR_ORDER_get_ss0_pos(data)                                 ((0x08000000&(data))>>27)
#define  RGBW_D_RGBW_SPR_ORDER_get_ss1_pos(data)                                 ((0x04000000&(data))>>26)
#define  RGBW_D_RGBW_SPR_ORDER_get_ss2_pos(data)                                 ((0x02000000&(data))>>25)
#define  RGBW_D_RGBW_SPR_ORDER_get_ss3_pos(data)                                 ((0x01000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_ORDER_get_ss4_pos(data)                                 ((0x00800000&(data))>>23)
#define  RGBW_D_RGBW_SPR_ORDER_get_ss5_pos(data)                                 ((0x00400000&(data))>>22)
#define  RGBW_D_RGBW_SPR_ORDER_get_ss6_pos(data)                                 ((0x00200000&(data))>>21)
#define  RGBW_D_RGBW_SPR_ORDER_get_ss7_pos(data)                                 ((0x00100000&(data))>>20)
#define  RGBW_D_RGBW_SPR_ORDER_get_ss8_pos(data)                                 ((0x00080000&(data))>>19)
#define  RGBW_D_RGBW_SPR_ORDER_get_ss9_pos(data)                                 ((0x00040000&(data))>>18)
#define  RGBW_D_RGBW_SPR_ORDER_get_ss10_pos(data)                                ((0x00020000&(data))>>17)
#define  RGBW_D_RGBW_SPR_ORDER_get_ss11_pos(data)                                ((0x00010000&(data))>>16)
#define  RGBW_D_RGBW_SPR_ORDER_get_even_ch_w(data)                               ((0x0000C000&(data))>>14)
#define  RGBW_D_RGBW_SPR_ORDER_get_even_ch_b(data)                               ((0x00003000&(data))>>12)
#define  RGBW_D_RGBW_SPR_ORDER_get_even_ch_g(data)                               ((0x00000C00&(data))>>10)
#define  RGBW_D_RGBW_SPR_ORDER_get_even_ch_r(data)                               ((0x00000300&(data))>>8)
#define  RGBW_D_RGBW_SPR_ORDER_get_odd_ch_w(data)                                ((0x000000C0&(data))>>6)
#define  RGBW_D_RGBW_SPR_ORDER_get_odd_ch_b(data)                                ((0x00000030&(data))>>4)
#define  RGBW_D_RGBW_SPR_ORDER_get_odd_ch_g(data)                                ((0x0000000C&(data))>>2)
#define  RGBW_D_RGBW_SPR_ORDER_get_odd_ch_r(data)                                (0x00000003&(data))

#define  RGBW_D_RGBW_SPR_Ss0_COEF_0                                             0x1802E754
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_reg_addr                                     "0xB802E754"
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_reg                                          0xB802E754
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_inst_addr                                    "0x0020"
#define  set_RGBW_D_RGBW_SPR_Ss0_COEF_0_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss0_COEF_0_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss0_COEF_0_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss0_COEF_0_reg))
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_ss0_coef0_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_ss0_coef1_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_ss0_coef2_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_ss0_coef3_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_ss0_coef0_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_ss0_coef1_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_ss0_coef2_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_ss0_coef3_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_ss0_coef0(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_ss0_coef1(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_ss0_coef2(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_ss0_coef3(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_get_ss0_coef0(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_get_ss0_coef1(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_get_ss0_coef2(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_0_get_ss0_coef3(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss0_COEF_1                                             0x1802E758
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_reg_addr                                     "0xB802E758"
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_reg                                          0xB802E758
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_inst_addr                                    "0x0021"
#define  set_RGBW_D_RGBW_SPR_Ss0_COEF_1_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss0_COEF_1_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss0_COEF_1_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss0_COEF_1_reg))
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_ss0_coef4_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_ss0_coef5_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_ss0_coef6_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_ss0_coef7_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_ss0_coef4_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_ss0_coef5_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_ss0_coef6_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_ss0_coef7_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_ss0_coef4(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_ss0_coef5(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_ss0_coef6(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_ss0_coef7(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_get_ss0_coef4(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_get_ss0_coef5(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_get_ss0_coef6(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss0_COEF_1_get_ss0_coef7(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss1_COEF_0                                             0x1802E75C
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_reg_addr                                     "0xB802E75C"
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_reg                                          0xB802E75C
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_inst_addr                                    "0x0022"
#define  set_RGBW_D_RGBW_SPR_Ss1_COEF_0_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss1_COEF_0_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss1_COEF_0_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss1_COEF_0_reg))
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_ss1_coef0_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_ss1_coef1_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_ss1_coef2_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_ss1_coef3_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_ss1_coef0_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_ss1_coef1_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_ss1_coef2_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_ss1_coef3_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_ss1_coef0(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_ss1_coef1(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_ss1_coef2(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_ss1_coef3(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_get_ss1_coef0(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_get_ss1_coef1(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_get_ss1_coef2(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_0_get_ss1_coef3(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss1_COEF_1                                             0x1802E760
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_reg_addr                                     "0xB802E760"
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_reg                                          0xB802E760
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_inst_addr                                    "0x0023"
#define  set_RGBW_D_RGBW_SPR_Ss1_COEF_1_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss1_COEF_1_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss1_COEF_1_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss1_COEF_1_reg))
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_ss1_coef4_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_ss1_coef5_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_ss1_coef6_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_ss1_coef7_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_ss1_coef4_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_ss1_coef5_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_ss1_coef6_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_ss1_coef7_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_ss1_coef4(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_ss1_coef5(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_ss1_coef6(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_ss1_coef7(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_get_ss1_coef4(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_get_ss1_coef5(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_get_ss1_coef6(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss1_COEF_1_get_ss1_coef7(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss2_COEF_0                                             0x1802E764
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_reg_addr                                     "0xB802E764"
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_reg                                          0xB802E764
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_inst_addr                                    "0x0024"
#define  set_RGBW_D_RGBW_SPR_Ss2_COEF_0_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss2_COEF_0_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss2_COEF_0_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss2_COEF_0_reg))
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_ss2_coef0_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_ss2_coef1_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_ss2_coef2_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_ss2_coef3_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_ss2_coef0_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_ss2_coef1_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_ss2_coef2_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_ss2_coef3_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_ss2_coef0(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_ss2_coef1(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_ss2_coef2(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_ss2_coef3(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_get_ss2_coef0(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_get_ss2_coef1(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_get_ss2_coef2(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_0_get_ss2_coef3(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss2_COEF_1                                             0x1802E768
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_reg_addr                                     "0xB802E768"
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_reg                                          0xB802E768
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_inst_addr                                    "0x0025"
#define  set_RGBW_D_RGBW_SPR_Ss2_COEF_1_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss2_COEF_1_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss2_COEF_1_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss2_COEF_1_reg))
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_ss2_coef4_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_ss2_coef5_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_ss2_coef6_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_ss2_coef7_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_ss2_coef4_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_ss2_coef5_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_ss2_coef6_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_ss2_coef7_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_ss2_coef4(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_ss2_coef5(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_ss2_coef6(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_ss2_coef7(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_get_ss2_coef4(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_get_ss2_coef5(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_get_ss2_coef6(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss2_COEF_1_get_ss2_coef7(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss3_COEF_0                                             0x1802E76C
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_reg_addr                                     "0xB802E76C"
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_reg                                          0xB802E76C
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_inst_addr                                    "0x0026"
#define  set_RGBW_D_RGBW_SPR_Ss3_COEF_0_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss3_COEF_0_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss3_COEF_0_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss3_COEF_0_reg))
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_ss3_coef0_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_ss3_coef1_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_ss3_coef2_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_ss3_coef3_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_ss3_coef0_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_ss3_coef1_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_ss3_coef2_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_ss3_coef3_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_ss3_coef0(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_ss3_coef1(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_ss3_coef2(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_ss3_coef3(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_get_ss3_coef0(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_get_ss3_coef1(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_get_ss3_coef2(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_0_get_ss3_coef3(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss3_COEF_1                                             0x1802E770
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_reg_addr                                     "0xB802E770"
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_reg                                          0xB802E770
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_inst_addr                                    "0x0027"
#define  set_RGBW_D_RGBW_SPR_Ss3_COEF_1_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss3_COEF_1_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss3_COEF_1_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss3_COEF_1_reg))
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_ss3_coef4_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_ss3_coef5_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_ss3_coef6_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_ss3_coef7_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_ss3_coef4_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_ss3_coef5_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_ss3_coef6_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_ss3_coef7_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_ss3_coef4(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_ss3_coef5(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_ss3_coef6(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_ss3_coef7(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_get_ss3_coef4(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_get_ss3_coef5(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_get_ss3_coef6(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss3_COEF_1_get_ss3_coef7(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss4_COEF_0                                             0x1802E774
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_reg_addr                                     "0xB802E774"
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_reg                                          0xB802E774
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_inst_addr                                    "0x0028"
#define  set_RGBW_D_RGBW_SPR_Ss4_COEF_0_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss4_COEF_0_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss4_COEF_0_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss4_COEF_0_reg))
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_ss4_coef0_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_ss4_coef1_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_ss4_coef2_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_ss4_coef3_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_ss4_coef0_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_ss4_coef1_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_ss4_coef2_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_ss4_coef3_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_ss4_coef0(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_ss4_coef1(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_ss4_coef2(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_ss4_coef3(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_get_ss4_coef0(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_get_ss4_coef1(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_get_ss4_coef2(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_0_get_ss4_coef3(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss4_COEF_1                                             0x1802E778
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_reg_addr                                     "0xB802E778"
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_reg                                          0xB802E778
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_inst_addr                                    "0x0029"
#define  set_RGBW_D_RGBW_SPR_Ss4_COEF_1_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss4_COEF_1_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss4_COEF_1_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss4_COEF_1_reg))
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_ss4_coef4_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_ss4_coef5_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_ss4_coef6_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_ss4_coef7_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_ss4_coef4_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_ss4_coef5_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_ss4_coef6_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_ss4_coef7_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_ss4_coef4(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_ss4_coef5(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_ss4_coef6(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_ss4_coef7(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_get_ss4_coef4(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_get_ss4_coef5(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_get_ss4_coef6(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss4_COEF_1_get_ss4_coef7(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss5_COEF_0                                             0x1802E77C
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_reg_addr                                     "0xB802E77C"
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_reg                                          0xB802E77C
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_inst_addr                                    "0x002A"
#define  set_RGBW_D_RGBW_SPR_Ss5_COEF_0_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss5_COEF_0_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss5_COEF_0_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss5_COEF_0_reg))
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_ss5_coef0_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_ss5_coef1_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_ss5_coef2_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_ss5_coef3_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_ss5_coef0_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_ss5_coef1_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_ss5_coef2_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_ss5_coef3_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_ss5_coef0(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_ss5_coef1(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_ss5_coef2(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_ss5_coef3(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_get_ss5_coef0(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_get_ss5_coef1(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_get_ss5_coef2(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_0_get_ss5_coef3(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss5_COEF_1                                             0x1802E780
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_reg_addr                                     "0xB802E780"
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_reg                                          0xB802E780
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_inst_addr                                    "0x002B"
#define  set_RGBW_D_RGBW_SPR_Ss5_COEF_1_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss5_COEF_1_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss5_COEF_1_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss5_COEF_1_reg))
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_ss5_coef4_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_ss5_coef5_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_ss5_coef6_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_ss5_coef7_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_ss5_coef4_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_ss5_coef5_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_ss5_coef6_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_ss5_coef7_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_ss5_coef4(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_ss5_coef5(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_ss5_coef6(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_ss5_coef7(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_get_ss5_coef4(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_get_ss5_coef5(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_get_ss5_coef6(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss5_COEF_1_get_ss5_coef7(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss6_COEF_0                                             0x1802E784
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_reg_addr                                     "0xB802E784"
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_reg                                          0xB802E784
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_inst_addr                                    "0x002C"
#define  set_RGBW_D_RGBW_SPR_Ss6_COEF_0_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss6_COEF_0_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss6_COEF_0_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss6_COEF_0_reg))
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_ss6_coef0_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_ss6_coef1_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_ss6_coef2_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_ss6_coef3_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_ss6_coef0_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_ss6_coef1_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_ss6_coef2_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_ss6_coef3_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_ss6_coef0(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_ss6_coef1(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_ss6_coef2(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_ss6_coef3(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_get_ss6_coef0(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_get_ss6_coef1(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_get_ss6_coef2(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_0_get_ss6_coef3(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss6_COEF_1                                             0x1802E788
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_reg_addr                                     "0xB802E788"
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_reg                                          0xB802E788
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_inst_addr                                    "0x002D"
#define  set_RGBW_D_RGBW_SPR_Ss6_COEF_1_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss6_COEF_1_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss6_COEF_1_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss6_COEF_1_reg))
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_ss6_coef4_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_ss6_coef5_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_ss6_coef6_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_ss6_coef7_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_ss6_coef4_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_ss6_coef5_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_ss6_coef6_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_ss6_coef7_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_ss6_coef4(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_ss6_coef5(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_ss6_coef6(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_ss6_coef7(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_get_ss6_coef4(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_get_ss6_coef5(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_get_ss6_coef6(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss6_COEF_1_get_ss6_coef7(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss7_COEF_0                                             0x1802E78C
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_reg_addr                                     "0xB802E78C"
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_reg                                          0xB802E78C
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_inst_addr                                    "0x002E"
#define  set_RGBW_D_RGBW_SPR_Ss7_COEF_0_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss7_COEF_0_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss7_COEF_0_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss7_COEF_0_reg))
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_ss7_coef0_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_ss7_coef1_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_ss7_coef2_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_ss7_coef3_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_ss7_coef0_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_ss7_coef1_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_ss7_coef2_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_ss7_coef3_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_ss7_coef0(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_ss7_coef1(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_ss7_coef2(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_ss7_coef3(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_get_ss7_coef0(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_get_ss7_coef1(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_get_ss7_coef2(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_0_get_ss7_coef3(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss7_COEF_1                                             0x1802E790
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_reg_addr                                     "0xB802E790"
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_reg                                          0xB802E790
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_inst_addr                                    "0x002F"
#define  set_RGBW_D_RGBW_SPR_Ss7_COEF_1_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss7_COEF_1_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss7_COEF_1_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss7_COEF_1_reg))
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_ss7_coef4_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_ss7_coef5_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_ss7_coef6_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_ss7_coef7_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_ss7_coef4_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_ss7_coef5_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_ss7_coef6_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_ss7_coef7_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_ss7_coef4(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_ss7_coef5(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_ss7_coef6(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_ss7_coef7(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_get_ss7_coef4(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_get_ss7_coef5(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_get_ss7_coef6(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss7_COEF_1_get_ss7_coef7(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss8_COEF_0                                             0x1802E794
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_reg_addr                                     "0xB802E794"
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_reg                                          0xB802E794
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_inst_addr                                    "0x0030"
#define  set_RGBW_D_RGBW_SPR_Ss8_COEF_0_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss8_COEF_0_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss8_COEF_0_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss8_COEF_0_reg))
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_ss8_coef0_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_ss8_coef1_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_ss8_coef2_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_ss8_coef3_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_ss8_coef0_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_ss8_coef1_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_ss8_coef2_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_ss8_coef3_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_ss8_coef0(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_ss8_coef1(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_ss8_coef2(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_ss8_coef3(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_get_ss8_coef0(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_get_ss8_coef1(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_get_ss8_coef2(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_0_get_ss8_coef3(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss8_COEF_1                                             0x1802E798
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_reg_addr                                     "0xB802E798"
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_reg                                          0xB802E798
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_inst_addr                                    "0x0031"
#define  set_RGBW_D_RGBW_SPR_Ss8_COEF_1_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss8_COEF_1_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss8_COEF_1_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss8_COEF_1_reg))
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_ss8_coef4_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_ss8_coef5_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_ss8_coef6_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_ss8_coef7_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_ss8_coef4_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_ss8_coef5_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_ss8_coef6_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_ss8_coef7_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_ss8_coef4(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_ss8_coef5(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_ss8_coef6(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_ss8_coef7(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_get_ss8_coef4(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_get_ss8_coef5(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_get_ss8_coef6(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss8_COEF_1_get_ss8_coef7(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss9_COEF_0                                             0x1802E79C
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_reg_addr                                     "0xB802E79C"
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_reg                                          0xB802E79C
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_inst_addr                                    "0x0032"
#define  set_RGBW_D_RGBW_SPR_Ss9_COEF_0_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss9_COEF_0_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss9_COEF_0_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss9_COEF_0_reg))
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_ss9_coef0_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_ss9_coef1_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_ss9_coef2_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_ss9_coef3_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_ss9_coef0_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_ss9_coef1_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_ss9_coef2_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_ss9_coef3_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_ss9_coef0(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_ss9_coef1(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_ss9_coef2(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_ss9_coef3(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_get_ss9_coef0(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_get_ss9_coef1(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_get_ss9_coef2(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_0_get_ss9_coef3(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss9_COEF_1                                             0x1802E7A0
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_reg_addr                                     "0xB802E7A0"
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_reg                                          0xB802E7A0
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_inst_addr                                    "0x0033"
#define  set_RGBW_D_RGBW_SPR_Ss9_COEF_1_reg(data)                                (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss9_COEF_1_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss9_COEF_1_reg                                      (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss9_COEF_1_reg))
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_ss9_coef4_shift                              (24)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_ss9_coef5_shift                              (16)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_ss9_coef6_shift                              (8)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_ss9_coef7_shift                              (0)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_ss9_coef4_mask                               (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_ss9_coef5_mask                               (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_ss9_coef6_mask                               (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_ss9_coef7_mask                               (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_ss9_coef4(data)                              (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_ss9_coef5(data)                              (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_ss9_coef6(data)                              (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_ss9_coef7(data)                              (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_get_ss9_coef4(data)                          ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_get_ss9_coef5(data)                          ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_get_ss9_coef6(data)                          ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss9_COEF_1_get_ss9_coef7(data)                          (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss10_COEF_0                                            0x1802E7A4
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_reg_addr                                    "0xB802E7A4"
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_reg                                         0xB802E7A4
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_inst_addr                                   "0x0034"
#define  set_RGBW_D_RGBW_SPR_Ss10_COEF_0_reg(data)                               (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss10_COEF_0_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss10_COEF_0_reg                                     (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss10_COEF_0_reg))
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_ss10_coef0_shift                            (24)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_ss10_coef1_shift                            (16)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_ss10_coef2_shift                            (8)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_ss10_coef3_shift                            (0)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_ss10_coef0_mask                             (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_ss10_coef1_mask                             (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_ss10_coef2_mask                             (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_ss10_coef3_mask                             (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_ss10_coef0(data)                            (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_ss10_coef1(data)                            (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_ss10_coef2(data)                            (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_ss10_coef3(data)                            (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_get_ss10_coef0(data)                        ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_get_ss10_coef1(data)                        ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_get_ss10_coef2(data)                        ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_0_get_ss10_coef3(data)                        (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss10_COEF_1                                            0x1802E7A8
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_reg_addr                                    "0xB802E7A8"
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_reg                                         0xB802E7A8
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_inst_addr                                   "0x0035"
#define  set_RGBW_D_RGBW_SPR_Ss10_COEF_1_reg(data)                               (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss10_COEF_1_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss10_COEF_1_reg                                     (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss10_COEF_1_reg))
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_ss10_coef4_shift                            (24)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_ss10_coef5_shift                            (16)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_ss10_coef6_shift                            (8)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_ss10_coef7_shift                            (0)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_ss10_coef4_mask                             (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_ss10_coef5_mask                             (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_ss10_coef6_mask                             (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_ss10_coef7_mask                             (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_ss10_coef4(data)                            (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_ss10_coef5(data)                            (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_ss10_coef6(data)                            (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_ss10_coef7(data)                            (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_get_ss10_coef4(data)                        ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_get_ss10_coef5(data)                        ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_get_ss10_coef6(data)                        ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss10_COEF_1_get_ss10_coef7(data)                        (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss11_COEF_0                                            0x1802E7AC
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_reg_addr                                    "0xB802E7AC"
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_reg                                         0xB802E7AC
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_inst_addr                                   "0x0036"
#define  set_RGBW_D_RGBW_SPR_Ss11_COEF_0_reg(data)                               (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss11_COEF_0_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss11_COEF_0_reg                                     (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss11_COEF_0_reg))
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_ss11_coef0_shift                            (24)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_ss11_coef1_shift                            (16)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_ss11_coef2_shift                            (8)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_ss11_coef3_shift                            (0)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_ss11_coef0_mask                             (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_ss11_coef1_mask                             (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_ss11_coef2_mask                             (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_ss11_coef3_mask                             (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_ss11_coef0(data)                            (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_ss11_coef1(data)                            (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_ss11_coef2(data)                            (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_ss11_coef3(data)                            (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_get_ss11_coef0(data)                        ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_get_ss11_coef1(data)                        ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_get_ss11_coef2(data)                        ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_0_get_ss11_coef3(data)                        (0x000000FF&(data))

#define  RGBW_D_RGBW_SPR_Ss11_COEF_1                                            0x1802E7B0
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_reg_addr                                    "0xB802E7B0"
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_reg                                         0xB802E7B0
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_inst_addr                                   "0x0037"
#define  set_RGBW_D_RGBW_SPR_Ss11_COEF_1_reg(data)                               (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss11_COEF_1_reg)=data)
#define  get_RGBW_D_RGBW_SPR_Ss11_COEF_1_reg                                     (*((volatile unsigned int*)RGBW_D_RGBW_SPR_Ss11_COEF_1_reg))
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_ss11_coef4_shift                            (24)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_ss11_coef5_shift                            (16)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_ss11_coef6_shift                            (8)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_ss11_coef7_shift                            (0)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_ss11_coef4_mask                             (0xFF000000)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_ss11_coef5_mask                             (0x00FF0000)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_ss11_coef6_mask                             (0x0000FF00)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_ss11_coef7_mask                             (0x000000FF)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_ss11_coef4(data)                            (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_ss11_coef5(data)                            (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_ss11_coef6(data)                            (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_ss11_coef7(data)                            (0x000000FF&(data))
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_get_ss11_coef4(data)                        ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_get_ss11_coef5(data)                        ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_get_ss11_coef6(data)                        ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_SPR_Ss11_COEF_1_get_ss11_coef7(data)                        (0x000000FF&(data))

#define  RGBW_D_RGBW_HFREQ_MASK_0                                               0x1802E7B4
#define  RGBW_D_RGBW_HFREQ_MASK_0_reg_addr                                       "0xB802E7B4"
#define  RGBW_D_RGBW_HFREQ_MASK_0_reg                                            0xB802E7B4
#define  RGBW_D_RGBW_HFREQ_MASK_0_inst_addr                                      "0x0038"
#define  set_RGBW_D_RGBW_HFREQ_MASK_0_reg(data)                                  (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_0_reg)=data)
#define  get_RGBW_D_RGBW_HFREQ_MASK_0_reg                                        (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_0_reg))
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_sidediff_lowbd_shift                     (28)
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_sidediff_slope_shift                     (24)
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_centerdiff_lowbd_shift                   (20)
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_centerdiff_slope_shift                   (16)
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_selfwhite_lowbd_shift                    (12)
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_selfwhite_slope_shift                    (8)
#define  RGBW_D_RGBW_HFREQ_MASK_0_pixel_rearrange_offset_en_shift                (7)
#define  RGBW_D_RGBW_HFREQ_MASK_0_bkmask_cm_en_shift                             (6)
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_tap_sel_shift                            (5)
#define  RGBW_D_RGBW_HFREQ_MASK_0_pixel_rearrange_en_shift                       (4)
#define  RGBW_D_RGBW_HFREQ_MASK_0_pixel_rearrange_wkeep_shift                    (3)
#define  RGBW_D_RGBW_HFREQ_MASK_0_bkmask_en_shift                                (2)
#define  RGBW_D_RGBW_HFREQ_MASK_0_bkmask_transfer_en_shift                       (1)
#define  RGBW_D_RGBW_HFREQ_MASK_0_bkmask_colorwhite_en_shift                     (0)
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_sidediff_lowbd_mask                      (0xF0000000)
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_sidediff_slope_mask                      (0x0F000000)
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_centerdiff_lowbd_mask                    (0x00F00000)
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_centerdiff_slope_mask                    (0x000F0000)
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_selfwhite_lowbd_mask                     (0x0000F000)
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_selfwhite_slope_mask                     (0x00000F00)
#define  RGBW_D_RGBW_HFREQ_MASK_0_pixel_rearrange_offset_en_mask                 (0x00000080)
#define  RGBW_D_RGBW_HFREQ_MASK_0_bkmask_cm_en_mask                              (0x00000040)
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_tap_sel_mask                             (0x00000020)
#define  RGBW_D_RGBW_HFREQ_MASK_0_pixel_rearrange_en_mask                        (0x00000010)
#define  RGBW_D_RGBW_HFREQ_MASK_0_pixel_rearrange_wkeep_mask                     (0x00000008)
#define  RGBW_D_RGBW_HFREQ_MASK_0_bkmask_en_mask                                 (0x00000004)
#define  RGBW_D_RGBW_HFREQ_MASK_0_bkmask_transfer_en_mask                        (0x00000002)
#define  RGBW_D_RGBW_HFREQ_MASK_0_bkmask_colorwhite_en_mask                      (0x00000001)
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_sidediff_lowbd(data)                     (0xF0000000&((data)<<28))
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_sidediff_slope(data)                     (0x0F000000&((data)<<24))
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_centerdiff_lowbd(data)                   (0x00F00000&((data)<<20))
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_centerdiff_slope(data)                   (0x000F0000&((data)<<16))
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_selfwhite_lowbd(data)                    (0x0000F000&((data)<<12))
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_selfwhite_slope(data)                    (0x00000F00&((data)<<8))
#define  RGBW_D_RGBW_HFREQ_MASK_0_pixel_rearrange_offset_en(data)                (0x00000080&((data)<<7))
#define  RGBW_D_RGBW_HFREQ_MASK_0_bkmask_cm_en(data)                             (0x00000040&((data)<<6))
#define  RGBW_D_RGBW_HFREQ_MASK_0_hfreq_tap_sel(data)                            (0x00000020&((data)<<5))
#define  RGBW_D_RGBW_HFREQ_MASK_0_pixel_rearrange_en(data)                       (0x00000010&((data)<<4))
#define  RGBW_D_RGBW_HFREQ_MASK_0_pixel_rearrange_wkeep(data)                    (0x00000008&((data)<<3))
#define  RGBW_D_RGBW_HFREQ_MASK_0_bkmask_en(data)                                (0x00000004&((data)<<2))
#define  RGBW_D_RGBW_HFREQ_MASK_0_bkmask_transfer_en(data)                       (0x00000002&((data)<<1))
#define  RGBW_D_RGBW_HFREQ_MASK_0_bkmask_colorwhite_en(data)                     (0x00000001&(data))
#define  RGBW_D_RGBW_HFREQ_MASK_0_get_hfreq_sidediff_lowbd(data)                 ((0xF0000000&(data))>>28)
#define  RGBW_D_RGBW_HFREQ_MASK_0_get_hfreq_sidediff_slope(data)                 ((0x0F000000&(data))>>24)
#define  RGBW_D_RGBW_HFREQ_MASK_0_get_hfreq_centerdiff_lowbd(data)               ((0x00F00000&(data))>>20)
#define  RGBW_D_RGBW_HFREQ_MASK_0_get_hfreq_centerdiff_slope(data)               ((0x000F0000&(data))>>16)
#define  RGBW_D_RGBW_HFREQ_MASK_0_get_hfreq_selfwhite_lowbd(data)                ((0x0000F000&(data))>>12)
#define  RGBW_D_RGBW_HFREQ_MASK_0_get_hfreq_selfwhite_slope(data)                ((0x00000F00&(data))>>8)
#define  RGBW_D_RGBW_HFREQ_MASK_0_get_pixel_rearrange_offset_en(data)            ((0x00000080&(data))>>7)
#define  RGBW_D_RGBW_HFREQ_MASK_0_get_bkmask_cm_en(data)                         ((0x00000040&(data))>>6)
#define  RGBW_D_RGBW_HFREQ_MASK_0_get_hfreq_tap_sel(data)                        ((0x00000020&(data))>>5)
#define  RGBW_D_RGBW_HFREQ_MASK_0_get_pixel_rearrange_en(data)                   ((0x00000010&(data))>>4)
#define  RGBW_D_RGBW_HFREQ_MASK_0_get_pixel_rearrange_wkeep(data)                ((0x00000008&(data))>>3)
#define  RGBW_D_RGBW_HFREQ_MASK_0_get_bkmask_en(data)                            ((0x00000004&(data))>>2)
#define  RGBW_D_RGBW_HFREQ_MASK_0_get_bkmask_transfer_en(data)                   ((0x00000002&(data))>>1)
#define  RGBW_D_RGBW_HFREQ_MASK_0_get_bkmask_colorwhite_en(data)                 (0x00000001&(data))

#define  RGBW_D_RGBW_HFREQ_MASK_1                                               0x1802E7B8
#define  RGBW_D_RGBW_HFREQ_MASK_1_reg_addr                                       "0xB802E7B8"
#define  RGBW_D_RGBW_HFREQ_MASK_1_reg                                            0xB802E7B8
#define  RGBW_D_RGBW_HFREQ_MASK_1_inst_addr                                      "0x0039"
#define  set_RGBW_D_RGBW_HFREQ_MASK_1_reg(data)                                  (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_1_reg)=data)
#define  get_RGBW_D_RGBW_HFREQ_MASK_1_reg                                        (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_1_reg))
#define  RGBW_D_RGBW_HFREQ_MASK_1_bkmask_offset_k0_shift                         (24)
#define  RGBW_D_RGBW_HFREQ_MASK_1_bkmask_offset_k1_shift                         (16)
#define  RGBW_D_RGBW_HFREQ_MASK_1_bkmask_offset_w0_even_shift                    (8)
#define  RGBW_D_RGBW_HFREQ_MASK_1_bkmask_offset_w1_even_shift                    (0)
#define  RGBW_D_RGBW_HFREQ_MASK_1_bkmask_offset_k0_mask                          (0xFF000000)
#define  RGBW_D_RGBW_HFREQ_MASK_1_bkmask_offset_k1_mask                          (0x00FF0000)
#define  RGBW_D_RGBW_HFREQ_MASK_1_bkmask_offset_w0_even_mask                     (0x0000FF00)
#define  RGBW_D_RGBW_HFREQ_MASK_1_bkmask_offset_w1_even_mask                     (0x000000FF)
#define  RGBW_D_RGBW_HFREQ_MASK_1_bkmask_offset_k0(data)                         (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_HFREQ_MASK_1_bkmask_offset_k1(data)                         (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_HFREQ_MASK_1_bkmask_offset_w0_even(data)                    (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_HFREQ_MASK_1_bkmask_offset_w1_even(data)                    (0x000000FF&(data))
#define  RGBW_D_RGBW_HFREQ_MASK_1_get_bkmask_offset_k0(data)                     ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_HFREQ_MASK_1_get_bkmask_offset_k1(data)                     ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_HFREQ_MASK_1_get_bkmask_offset_w0_even(data)                ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_HFREQ_MASK_1_get_bkmask_offset_w1_even(data)                (0x000000FF&(data))

#define  RGBW_D_RGBW_HFREQ_MASK_2                                               0x1802E7BC
#define  RGBW_D_RGBW_HFREQ_MASK_2_reg_addr                                       "0xB802E7BC"
#define  RGBW_D_RGBW_HFREQ_MASK_2_reg                                            0xB802E7BC
#define  RGBW_D_RGBW_HFREQ_MASK_2_inst_addr                                      "0x003A"
#define  set_RGBW_D_RGBW_HFREQ_MASK_2_reg(data)                                  (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_2_reg)=data)
#define  get_RGBW_D_RGBW_HFREQ_MASK_2_reg                                        (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_2_reg))
#define  RGBW_D_RGBW_HFREQ_MASK_2_bkmask_offset_w0_odd_shift                     (24)
#define  RGBW_D_RGBW_HFREQ_MASK_2_bkmask_offset_w1_odd_shift                     (16)
#define  RGBW_D_RGBW_HFREQ_MASK_2_bkmask_cm_offset_en_shift                      (15)
#define  RGBW_D_RGBW_HFREQ_MASK_2_dbgmode_shift                                  (9)
#define  RGBW_D_RGBW_HFREQ_MASK_2_dbgmode_cond_disp_en_shift                     (8)
#define  RGBW_D_RGBW_HFREQ_MASK_2_dbgmode_cond_disp_min_shift                    (4)
#define  RGBW_D_RGBW_HFREQ_MASK_2_dbgmode_cond_disp_delta_shift                  (0)
#define  RGBW_D_RGBW_HFREQ_MASK_2_bkmask_offset_w0_odd_mask                      (0xFF000000)
#define  RGBW_D_RGBW_HFREQ_MASK_2_bkmask_offset_w1_odd_mask                      (0x00FF0000)
#define  RGBW_D_RGBW_HFREQ_MASK_2_bkmask_cm_offset_en_mask                       (0x00008000)
#define  RGBW_D_RGBW_HFREQ_MASK_2_dbgmode_mask                                   (0x00000E00)
#define  RGBW_D_RGBW_HFREQ_MASK_2_dbgmode_cond_disp_en_mask                      (0x00000100)
#define  RGBW_D_RGBW_HFREQ_MASK_2_dbgmode_cond_disp_min_mask                     (0x000000F0)
#define  RGBW_D_RGBW_HFREQ_MASK_2_dbgmode_cond_disp_delta_mask                   (0x0000000F)
#define  RGBW_D_RGBW_HFREQ_MASK_2_bkmask_offset_w0_odd(data)                     (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_HFREQ_MASK_2_bkmask_offset_w1_odd(data)                     (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_HFREQ_MASK_2_bkmask_cm_offset_en(data)                      (0x00008000&((data)<<15))
#define  RGBW_D_RGBW_HFREQ_MASK_2_dbgmode(data)                                  (0x00000E00&((data)<<9))
#define  RGBW_D_RGBW_HFREQ_MASK_2_dbgmode_cond_disp_en(data)                     (0x00000100&((data)<<8))
#define  RGBW_D_RGBW_HFREQ_MASK_2_dbgmode_cond_disp_min(data)                    (0x000000F0&((data)<<4))
#define  RGBW_D_RGBW_HFREQ_MASK_2_dbgmode_cond_disp_delta(data)                  (0x0000000F&(data))
#define  RGBW_D_RGBW_HFREQ_MASK_2_get_bkmask_offset_w0_odd(data)                 ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_HFREQ_MASK_2_get_bkmask_offset_w1_odd(data)                 ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_HFREQ_MASK_2_get_bkmask_cm_offset_en(data)                  ((0x00008000&(data))>>15)
#define  RGBW_D_RGBW_HFREQ_MASK_2_get_dbgmode(data)                              ((0x00000E00&(data))>>9)
#define  RGBW_D_RGBW_HFREQ_MASK_2_get_dbgmode_cond_disp_en(data)                 ((0x00000100&(data))>>8)
#define  RGBW_D_RGBW_HFREQ_MASK_2_get_dbgmode_cond_disp_min(data)                ((0x000000F0&(data))>>4)
#define  RGBW_D_RGBW_HFREQ_MASK_2_get_dbgmode_cond_disp_delta(data)              (0x0000000F&(data))

#define  RGBW_D_RGBW_HFREQ_MASK_3                                               0x1802E7FC
#define  RGBW_D_RGBW_HFREQ_MASK_3_reg_addr                                       "0xB802E7FC"
#define  RGBW_D_RGBW_HFREQ_MASK_3_reg                                            0xB802E7FC
#define  RGBW_D_RGBW_HFREQ_MASK_3_inst_addr                                      "0x003B"
#define  set_RGBW_D_RGBW_HFREQ_MASK_3_reg(data)                                  (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_3_reg)=data)
#define  get_RGBW_D_RGBW_HFREQ_MASK_3_reg                                        (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_3_reg))
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_even_r_shift                     (30)
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_even_g_shift                     (28)
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_even_b_shift                     (26)
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_odd_r_shift                      (24)
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_odd_g_shift                      (22)
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_odd_b_shift                      (20)
#define  RGBW_D_RGBW_HFREQ_MASK_3_pixel_rearrange_offset_th_shift                (8)
#define  RGBW_D_RGBW_HFREQ_MASK_3_pixel_rearrange_offset_value_shift             (0)
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_even_r_mask                      (0xC0000000)
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_even_g_mask                      (0x30000000)
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_even_b_mask                      (0x0C000000)
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_odd_r_mask                       (0x03000000)
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_odd_g_mask                       (0x00C00000)
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_odd_b_mask                       (0x00300000)
#define  RGBW_D_RGBW_HFREQ_MASK_3_pixel_rearrange_offset_th_mask                 (0x00001F00)
#define  RGBW_D_RGBW_HFREQ_MASK_3_pixel_rearrange_offset_value_mask              (0x000000FF)
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_even_r(data)                     (0xC0000000&((data)<<30))
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_even_g(data)                     (0x30000000&((data)<<28))
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_even_b(data)                     (0x0C000000&((data)<<26))
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_odd_r(data)                      (0x03000000&((data)<<24))
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_odd_g(data)                      (0x00C00000&((data)<<22))
#define  RGBW_D_RGBW_HFREQ_MASK_3_rearrange_rem_odd_b(data)                      (0x00300000&((data)<<20))
#define  RGBW_D_RGBW_HFREQ_MASK_3_pixel_rearrange_offset_th(data)                (0x00001F00&((data)<<8))
#define  RGBW_D_RGBW_HFREQ_MASK_3_pixel_rearrange_offset_value(data)             (0x000000FF&(data))
#define  RGBW_D_RGBW_HFREQ_MASK_3_get_rearrange_rem_even_r(data)                 ((0xC0000000&(data))>>30)
#define  RGBW_D_RGBW_HFREQ_MASK_3_get_rearrange_rem_even_g(data)                 ((0x30000000&(data))>>28)
#define  RGBW_D_RGBW_HFREQ_MASK_3_get_rearrange_rem_even_b(data)                 ((0x0C000000&(data))>>26)
#define  RGBW_D_RGBW_HFREQ_MASK_3_get_rearrange_rem_odd_r(data)                  ((0x03000000&(data))>>24)
#define  RGBW_D_RGBW_HFREQ_MASK_3_get_rearrange_rem_odd_g(data)                  ((0x00C00000&(data))>>22)
#define  RGBW_D_RGBW_HFREQ_MASK_3_get_rearrange_rem_odd_b(data)                  ((0x00300000&(data))>>20)
#define  RGBW_D_RGBW_HFREQ_MASK_3_get_pixel_rearrange_offset_th(data)            ((0x00001F00&(data))>>8)
#define  RGBW_D_RGBW_HFREQ_MASK_3_get_pixel_rearrange_offset_value(data)         (0x000000FF&(data))

#define  RGBW_D_RGBW_HFREQ_MASK_CM_1                                            0x1802EC50
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_reg_addr                                    "0xB802EC50"
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_reg                                         0xB802EC50
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_inst_addr                                   "0x003C"
#define  set_RGBW_D_RGBW_HFREQ_MASK_CM_1_reg(data)                               (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_CM_1_reg)=data)
#define  get_RGBW_D_RGBW_HFREQ_MASK_CM_1_reg                                     (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_CM_1_reg))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_oddrow_4_rem_shift                (22)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_evenrow_4_rem_shift               (20)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_oddrow_3_rem_shift                (18)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_evenrow_3_rem_shift               (16)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_oddrow_2_rem_shift                (14)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_evenrow_2_rem_shift               (12)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_oddrow_1_rem_shift                (10)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_evenrow_1_rem_shift               (8)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_offset_nxt_w4_shift               (0)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_oddrow_4_rem_mask                 (0x00C00000)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_evenrow_4_rem_mask                (0x00300000)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_oddrow_3_rem_mask                 (0x000C0000)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_evenrow_3_rem_mask                (0x00030000)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_oddrow_2_rem_mask                 (0x0000C000)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_evenrow_2_rem_mask                (0x00003000)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_oddrow_1_rem_mask                 (0x00000C00)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_evenrow_1_rem_mask                (0x00000300)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_offset_nxt_w4_mask                (0x000000FF)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_oddrow_4_rem(data)                (0x00C00000&((data)<<22))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_evenrow_4_rem(data)               (0x00300000&((data)<<20))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_oddrow_3_rem(data)                (0x000C0000&((data)<<18))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_evenrow_3_rem(data)               (0x00030000&((data)<<16))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_oddrow_2_rem(data)                (0x0000C000&((data)<<14))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_evenrow_2_rem(data)               (0x00003000&((data)<<12))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_oddrow_1_rem(data)                (0x00000C00&((data)<<10))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_evenrow_1_rem(data)               (0x00000300&((data)<<8))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_bkmask_cm_offset_nxt_w4(data)               (0x000000FF&(data))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_get_bkmask_cm_oddrow_4_rem(data)            ((0x00C00000&(data))>>22)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_get_bkmask_cm_evenrow_4_rem(data)           ((0x00300000&(data))>>20)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_get_bkmask_cm_oddrow_3_rem(data)            ((0x000C0000&(data))>>18)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_get_bkmask_cm_evenrow_3_rem(data)           ((0x00030000&(data))>>16)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_get_bkmask_cm_oddrow_2_rem(data)            ((0x0000C000&(data))>>14)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_get_bkmask_cm_evenrow_2_rem(data)           ((0x00003000&(data))>>12)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_get_bkmask_cm_oddrow_1_rem(data)            ((0x00000C00&(data))>>10)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_get_bkmask_cm_evenrow_1_rem(data)           ((0x00000300&(data))>>8)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_1_get_bkmask_cm_offset_nxt_w4(data)           (0x000000FF&(data))

#define  RGBW_D_RGBW_HFREQ_MASK_CM_2                                            0x1802EC54
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_reg_addr                                    "0xB802EC54"
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_reg                                         0xB802EC54
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_inst_addr                                   "0x003D"
#define  set_RGBW_D_RGBW_HFREQ_MASK_CM_2_reg(data)                               (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_CM_2_reg)=data)
#define  get_RGBW_D_RGBW_HFREQ_MASK_CM_2_reg                                     (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_CM_2_reg))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_bkmask_cm_offset_cur_w1_shift               (24)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_bkmask_cm_offset_cur_r1_shift               (16)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_bkmask_cm_offset_cur_g1_shift               (8)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_bkmask_cm_offset_nxt_b1_shift               (0)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_bkmask_cm_offset_cur_w1_mask                (0xFF000000)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_bkmask_cm_offset_cur_r1_mask                (0x00FF0000)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_bkmask_cm_offset_cur_g1_mask                (0x0000FF00)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_bkmask_cm_offset_nxt_b1_mask                (0x000000FF)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_bkmask_cm_offset_cur_w1(data)               (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_bkmask_cm_offset_cur_r1(data)               (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_bkmask_cm_offset_cur_g1(data)               (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_bkmask_cm_offset_nxt_b1(data)               (0x000000FF&(data))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_get_bkmask_cm_offset_cur_w1(data)           ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_get_bkmask_cm_offset_cur_r1(data)           ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_get_bkmask_cm_offset_cur_g1(data)           ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_2_get_bkmask_cm_offset_nxt_b1(data)           (0x000000FF&(data))

#define  RGBW_D_RGBW_HFREQ_MASK_CM_3                                            0x1802EC58
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_reg_addr                                    "0xB802EC58"
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_reg                                         0xB802EC58
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_inst_addr                                   "0x003E"
#define  set_RGBW_D_RGBW_HFREQ_MASK_CM_3_reg(data)                               (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_CM_3_reg)=data)
#define  get_RGBW_D_RGBW_HFREQ_MASK_CM_3_reg                                     (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_CM_3_reg))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_bkmask_cm_offset_nxt_r1_shift               (24)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_bkmask_cm_offset_cur_g2_shift               (16)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_bkmask_cm_offset_cur_b2_shift               (8)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_bkmask_cm_offset_cur_w2_shift               (0)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_bkmask_cm_offset_nxt_r1_mask                (0xFF000000)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_bkmask_cm_offset_cur_g2_mask                (0x00FF0000)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_bkmask_cm_offset_cur_b2_mask                (0x0000FF00)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_bkmask_cm_offset_cur_w2_mask                (0x000000FF)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_bkmask_cm_offset_nxt_r1(data)               (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_bkmask_cm_offset_cur_g2(data)               (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_bkmask_cm_offset_cur_b2(data)               (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_bkmask_cm_offset_cur_w2(data)               (0x000000FF&(data))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_get_bkmask_cm_offset_nxt_r1(data)           ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_get_bkmask_cm_offset_cur_g2(data)           ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_get_bkmask_cm_offset_cur_b2(data)           ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_3_get_bkmask_cm_offset_cur_w2(data)           (0x000000FF&(data))

#define  RGBW_D_RGBW_HFREQ_MASK_CM_4                                            0x1802EC5C
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_reg_addr                                    "0xB802EC5C"
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_reg                                         0xB802EC5C
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_inst_addr                                   "0x003F"
#define  set_RGBW_D_RGBW_HFREQ_MASK_CM_4_reg(data)                               (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_CM_4_reg)=data)
#define  get_RGBW_D_RGBW_HFREQ_MASK_CM_4_reg                                     (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_CM_4_reg))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_bkmask_cm_offset_cur_b3_shift               (24)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_bkmask_cm_offset_cur_w3_shift               (16)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_bkmask_cm_offset_cur_r3_shift               (8)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_bkmask_cm_offset_nxt_g3_shift               (0)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_bkmask_cm_offset_cur_b3_mask                (0xFF000000)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_bkmask_cm_offset_cur_w3_mask                (0x00FF0000)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_bkmask_cm_offset_cur_r3_mask                (0x0000FF00)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_bkmask_cm_offset_nxt_g3_mask                (0x000000FF)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_bkmask_cm_offset_cur_b3(data)               (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_bkmask_cm_offset_cur_w3(data)               (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_bkmask_cm_offset_cur_r3(data)               (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_bkmask_cm_offset_nxt_g3(data)               (0x000000FF&(data))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_get_bkmask_cm_offset_cur_b3(data)           ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_get_bkmask_cm_offset_cur_w3(data)           ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_get_bkmask_cm_offset_cur_r3(data)           ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_4_get_bkmask_cm_offset_nxt_g3(data)           (0x000000FF&(data))

#define  RGBW_D_RGBW_HFREQ_MASK_CM_5                                            0x1802EC60
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_reg_addr                                    "0xB802EC60"
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_reg                                         0xB802EC60
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_inst_addr                                   "0x0040"
#define  set_RGBW_D_RGBW_HFREQ_MASK_CM_5_reg(data)                               (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_CM_5_reg)=data)
#define  get_RGBW_D_RGBW_HFREQ_MASK_CM_5_reg                                     (*((volatile unsigned int*)RGBW_D_RGBW_HFREQ_MASK_CM_5_reg))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_bkmask_cm_offset_nxt_b3_shift               (24)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_bkmask_cm_offset_cur_r4_shift               (16)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_bkmask_cm_offset_cur_g4_shift               (8)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_bkmask_cm_offset_cur_b4_shift               (0)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_bkmask_cm_offset_nxt_b3_mask                (0xFF000000)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_bkmask_cm_offset_cur_r4_mask                (0x00FF0000)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_bkmask_cm_offset_cur_g4_mask                (0x0000FF00)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_bkmask_cm_offset_cur_b4_mask                (0x000000FF)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_bkmask_cm_offset_nxt_b3(data)               (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_bkmask_cm_offset_cur_r4(data)               (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_bkmask_cm_offset_cur_g4(data)               (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_bkmask_cm_offset_cur_b4(data)               (0x000000FF&(data))
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_get_bkmask_cm_offset_nxt_b3(data)           ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_get_bkmask_cm_offset_cur_r4(data)           ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_get_bkmask_cm_offset_cur_g4(data)           ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_HFREQ_MASK_CM_5_get_bkmask_cm_offset_cur_b4(data)           (0x000000FF&(data))

#define  RGBW_RGBW_DB_CTRL                                                      0x1802EC40
#define  RGBW_RGBW_DB_CTRL_reg_addr                                              "0xB802EC40"
#define  RGBW_RGBW_DB_CTRL_reg                                                   0xB802EC40
#define  RGBW_RGBW_DB_CTRL_inst_addr                                             "0x0041"
#define  set_RGBW_RGBW_DB_CTRL_reg(data)                                         (*((volatile unsigned int*)RGBW_RGBW_DB_CTRL_reg)=data)
#define  get_RGBW_RGBW_DB_CTRL_reg                                               (*((volatile unsigned int*)RGBW_RGBW_DB_CTRL_reg))
#define  RGBW_RGBW_DB_CTRL_db_en_shift                                           (2)
#define  RGBW_RGBW_DB_CTRL_db_read_level_shift                                   (1)
#define  RGBW_RGBW_DB_CTRL_db_apply_shift                                        (0)
#define  RGBW_RGBW_DB_CTRL_db_en_mask                                            (0x00000004)
#define  RGBW_RGBW_DB_CTRL_db_read_level_mask                                    (0x00000002)
#define  RGBW_RGBW_DB_CTRL_db_apply_mask                                         (0x00000001)
#define  RGBW_RGBW_DB_CTRL_db_en(data)                                           (0x00000004&((data)<<2))
#define  RGBW_RGBW_DB_CTRL_db_read_level(data)                                   (0x00000002&((data)<<1))
#define  RGBW_RGBW_DB_CTRL_db_apply(data)                                        (0x00000001&(data))
#define  RGBW_RGBW_DB_CTRL_get_db_en(data)                                       ((0x00000004&(data))>>2)
#define  RGBW_RGBW_DB_CTRL_get_db_read_level(data)                               ((0x00000002&(data))>>1)
#define  RGBW_RGBW_DB_CTRL_get_db_apply(data)                                    (0x00000001&(data))

#define  RGBW_D_RGBW_PATGEN_CTL_0                                               0x1802E7C0
#define  RGBW_D_RGBW_PATGEN_CTL_0_reg_addr                                       "0xB802E7C0"
#define  RGBW_D_RGBW_PATGEN_CTL_0_reg                                            0xB802E7C0
#define  RGBW_D_RGBW_PATGEN_CTL_0_inst_addr                                      "0x0042"
#define  set_RGBW_D_RGBW_PATGEN_CTL_0_reg(data)                                  (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_CTL_0_reg)=data)
#define  get_RGBW_D_RGBW_PATGEN_CTL_0_reg                                        (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_CTL_0_reg))
#define  RGBW_D_RGBW_PATGEN_CTL_0_patgen_en_shift                                (31)
#define  RGBW_D_RGBW_PATGEN_CTL_0_patgen_ch_num_shift                            (30)
#define  RGBW_D_RGBW_PATGEN_CTL_0_patgen_width_shift                             (0)
#define  RGBW_D_RGBW_PATGEN_CTL_0_patgen_en_mask                                 (0x80000000)
#define  RGBW_D_RGBW_PATGEN_CTL_0_patgen_ch_num_mask                             (0x40000000)
#define  RGBW_D_RGBW_PATGEN_CTL_0_patgen_width_mask                              (0x003FFFFF)
#define  RGBW_D_RGBW_PATGEN_CTL_0_patgen_en(data)                                (0x80000000&((data)<<31))
#define  RGBW_D_RGBW_PATGEN_CTL_0_patgen_ch_num(data)                            (0x40000000&((data)<<30))
#define  RGBW_D_RGBW_PATGEN_CTL_0_patgen_width(data)                             (0x003FFFFF&(data))
#define  RGBW_D_RGBW_PATGEN_CTL_0_get_patgen_en(data)                            ((0x80000000&(data))>>31)
#define  RGBW_D_RGBW_PATGEN_CTL_0_get_patgen_ch_num(data)                        ((0x40000000&(data))>>30)
#define  RGBW_D_RGBW_PATGEN_CTL_0_get_patgen_width(data)                         (0x003FFFFF&(data))

#define  RGBW_D_RGBW_PATGEN_CTL_1                                               0x1802E7C4
#define  RGBW_D_RGBW_PATGEN_CTL_1_reg_addr                                       "0xB802E7C4"
#define  RGBW_D_RGBW_PATGEN_CTL_1_reg                                            0xB802E7C4
#define  RGBW_D_RGBW_PATGEN_CTL_1_inst_addr                                      "0x0043"
#define  set_RGBW_D_RGBW_PATGEN_CTL_1_reg(data)                                  (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_CTL_1_reg)=data)
#define  get_RGBW_D_RGBW_PATGEN_CTL_1_reg                                        (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_CTL_1_reg))
#define  RGBW_D_RGBW_PATGEN_CTL_1_dummy_31_16_shift                              (16)
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_even_ch_order_w_shift                   (14)
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_even_ch_order_b_shift                   (12)
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_even_ch_order_g_shift                   (10)
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_even_ch_order_r_shift                   (8)
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_odd_ch_order_w_shift                    (6)
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_odd_ch_order_b_shift                    (4)
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_odd_ch_order_g_shift                    (2)
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_odd_ch_order_r_shift                    (0)
#define  RGBW_D_RGBW_PATGEN_CTL_1_dummy_31_16_mask                               (0xFFFF0000)
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_even_ch_order_w_mask                    (0x0000C000)
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_even_ch_order_b_mask                    (0x00003000)
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_even_ch_order_g_mask                    (0x00000C00)
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_even_ch_order_r_mask                    (0x00000300)
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_odd_ch_order_w_mask                     (0x000000C0)
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_odd_ch_order_b_mask                     (0x00000030)
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_odd_ch_order_g_mask                     (0x0000000C)
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_odd_ch_order_r_mask                     (0x00000003)
#define  RGBW_D_RGBW_PATGEN_CTL_1_dummy_31_16(data)                              (0xFFFF0000&((data)<<16))
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_even_ch_order_w(data)                   (0x0000C000&((data)<<14))
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_even_ch_order_b(data)                   (0x00003000&((data)<<12))
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_even_ch_order_g(data)                   (0x00000C00&((data)<<10))
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_even_ch_order_r(data)                   (0x00000300&((data)<<8))
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_odd_ch_order_w(data)                    (0x000000C0&((data)<<6))
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_odd_ch_order_b(data)                    (0x00000030&((data)<<4))
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_odd_ch_order_g(data)                    (0x0000000C&((data)<<2))
#define  RGBW_D_RGBW_PATGEN_CTL_1_patgen_odd_ch_order_r(data)                    (0x00000003&(data))
#define  RGBW_D_RGBW_PATGEN_CTL_1_get_dummy_31_16(data)                          ((0xFFFF0000&(data))>>16)
#define  RGBW_D_RGBW_PATGEN_CTL_1_get_patgen_even_ch_order_w(data)               ((0x0000C000&(data))>>14)
#define  RGBW_D_RGBW_PATGEN_CTL_1_get_patgen_even_ch_order_b(data)               ((0x00003000&(data))>>12)
#define  RGBW_D_RGBW_PATGEN_CTL_1_get_patgen_even_ch_order_g(data)               ((0x00000C00&(data))>>10)
#define  RGBW_D_RGBW_PATGEN_CTL_1_get_patgen_even_ch_order_r(data)               ((0x00000300&(data))>>8)
#define  RGBW_D_RGBW_PATGEN_CTL_1_get_patgen_odd_ch_order_w(data)                ((0x000000C0&(data))>>6)
#define  RGBW_D_RGBW_PATGEN_CTL_1_get_patgen_odd_ch_order_b(data)                ((0x00000030&(data))>>4)
#define  RGBW_D_RGBW_PATGEN_CTL_1_get_patgen_odd_ch_order_g(data)                ((0x0000000C&(data))>>2)
#define  RGBW_D_RGBW_PATGEN_CTL_1_get_patgen_odd_ch_order_r(data)                (0x00000003&(data))

#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M                                          0x1802E7C8
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_reg_addr                                  "0xB802E7C8"
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_reg                                       0xB802E7C8
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_inst_addr                                 "0x0044"
#define  set_RGBW_D_RGBW_PATGEN_COLOR_C0_M_reg(data)                             (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C0_M_reg)=data)
#define  get_RGBW_D_RGBW_PATGEN_COLOR_C0_M_reg                                   (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C0_M_reg))
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_patgen_c0_w_msb_shift                     (24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_patgen_c0_b_msb_shift                     (16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_patgen_c0_g_msb_shift                     (8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_patgen_c0_r_msb_shift                     (0)
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_patgen_c0_w_msb_mask                      (0xFF000000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_patgen_c0_b_msb_mask                      (0x00FF0000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_patgen_c0_g_msb_mask                      (0x0000FF00)
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_patgen_c0_r_msb_mask                      (0x000000FF)
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_patgen_c0_w_msb(data)                     (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_patgen_c0_b_msb(data)                     (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_patgen_c0_g_msb(data)                     (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_patgen_c0_r_msb(data)                     (0x000000FF&(data))
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_get_patgen_c0_w_msb(data)                 ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_get_patgen_c0_b_msb(data)                 ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_get_patgen_c0_g_msb(data)                 ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C0_M_get_patgen_c0_r_msb(data)                 (0x000000FF&(data))

#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M                                          0x1802E7CC
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_reg_addr                                  "0xB802E7CC"
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_reg                                       0xB802E7CC
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_inst_addr                                 "0x0045"
#define  set_RGBW_D_RGBW_PATGEN_COLOR_C1_M_reg(data)                             (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C1_M_reg)=data)
#define  get_RGBW_D_RGBW_PATGEN_COLOR_C1_M_reg                                   (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C1_M_reg))
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_patgen_c1_w_msb_shift                     (24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_patgen_c1_b_msb_shift                     (16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_patgen_c1_g_msb_shift                     (8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_patgen_c1_r_msb_shift                     (0)
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_patgen_c1_w_msb_mask                      (0xFF000000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_patgen_c1_b_msb_mask                      (0x00FF0000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_patgen_c1_g_msb_mask                      (0x0000FF00)
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_patgen_c1_r_msb_mask                      (0x000000FF)
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_patgen_c1_w_msb(data)                     (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_patgen_c1_b_msb(data)                     (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_patgen_c1_g_msb(data)                     (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_patgen_c1_r_msb(data)                     (0x000000FF&(data))
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_get_patgen_c1_w_msb(data)                 ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_get_patgen_c1_b_msb(data)                 ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_get_patgen_c1_g_msb(data)                 ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C1_M_get_patgen_c1_r_msb(data)                 (0x000000FF&(data))

#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L                                         0x1802E7D0
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_reg_addr                                 "0xB802E7D0"
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_reg                                      0xB802E7D0
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_inst_addr                                "0x0046"
#define  set_RGBW_D_RGBW_PATGEN_COLOR_C01_L_reg(data)                            (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C01_L_reg)=data)
#define  get_RGBW_D_RGBW_PATGEN_COLOR_C01_L_reg                                  (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C01_L_reg))
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c0_w_lsb_shift                    (28)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c0_b_lsb_shift                    (24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c0_g_lsb_shift                    (20)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c0_r_lsb_shift                    (16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c1_w_lsb_shift                    (12)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c1_b_lsb_shift                    (8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c1_g_lsb_shift                    (4)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c1_r_lsb_shift                    (0)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c0_w_lsb_mask                     (0xF0000000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c0_b_lsb_mask                     (0x0F000000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c0_g_lsb_mask                     (0x00F00000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c0_r_lsb_mask                     (0x000F0000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c1_w_lsb_mask                     (0x0000F000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c1_b_lsb_mask                     (0x00000F00)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c1_g_lsb_mask                     (0x000000F0)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c1_r_lsb_mask                     (0x0000000F)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c0_w_lsb(data)                    (0xF0000000&((data)<<28))
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c0_b_lsb(data)                    (0x0F000000&((data)<<24))
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c0_g_lsb(data)                    (0x00F00000&((data)<<20))
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c0_r_lsb(data)                    (0x000F0000&((data)<<16))
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c1_w_lsb(data)                    (0x0000F000&((data)<<12))
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c1_b_lsb(data)                    (0x00000F00&((data)<<8))
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c1_g_lsb(data)                    (0x000000F0&((data)<<4))
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_patgen_c1_r_lsb(data)                    (0x0000000F&(data))
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_get_patgen_c0_w_lsb(data)                ((0xF0000000&(data))>>28)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_get_patgen_c0_b_lsb(data)                ((0x0F000000&(data))>>24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_get_patgen_c0_g_lsb(data)                ((0x00F00000&(data))>>20)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_get_patgen_c0_r_lsb(data)                ((0x000F0000&(data))>>16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_get_patgen_c1_w_lsb(data)                ((0x0000F000&(data))>>12)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_get_patgen_c1_b_lsb(data)                ((0x00000F00&(data))>>8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_get_patgen_c1_g_lsb(data)                ((0x000000F0&(data))>>4)
#define  RGBW_D_RGBW_PATGEN_COLOR_C01_L_get_patgen_c1_r_lsb(data)                (0x0000000F&(data))

#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M                                          0x1802E7D4
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_reg_addr                                  "0xB802E7D4"
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_reg                                       0xB802E7D4
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_inst_addr                                 "0x0047"
#define  set_RGBW_D_RGBW_PATGEN_COLOR_C2_M_reg(data)                             (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C2_M_reg)=data)
#define  get_RGBW_D_RGBW_PATGEN_COLOR_C2_M_reg                                   (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C2_M_reg))
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_patgen_c2_w_msb_shift                     (24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_patgen_c2_b_msb_shift                     (16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_patgen_c2_g_msb_shift                     (8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_patgen_c2_r_msb_shift                     (0)
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_patgen_c2_w_msb_mask                      (0xFF000000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_patgen_c2_b_msb_mask                      (0x00FF0000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_patgen_c2_g_msb_mask                      (0x0000FF00)
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_patgen_c2_r_msb_mask                      (0x000000FF)
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_patgen_c2_w_msb(data)                     (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_patgen_c2_b_msb(data)                     (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_patgen_c2_g_msb(data)                     (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_patgen_c2_r_msb(data)                     (0x000000FF&(data))
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_get_patgen_c2_w_msb(data)                 ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_get_patgen_c2_b_msb(data)                 ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_get_patgen_c2_g_msb(data)                 ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C2_M_get_patgen_c2_r_msb(data)                 (0x000000FF&(data))

#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M                                          0x1802E7D8
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_reg_addr                                  "0xB802E7D8"
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_reg                                       0xB802E7D8
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_inst_addr                                 "0x0048"
#define  set_RGBW_D_RGBW_PATGEN_COLOR_C3_M_reg(data)                             (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C3_M_reg)=data)
#define  get_RGBW_D_RGBW_PATGEN_COLOR_C3_M_reg                                   (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C3_M_reg))
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_patgen_c3_w_msb_shift                     (24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_patgen_c3_b_msb_shift                     (16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_patgen_c3_g_msb_shift                     (8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_patgen_c3_r_msb_shift                     (0)
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_patgen_c3_w_msb_mask                      (0xFF000000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_patgen_c3_b_msb_mask                      (0x00FF0000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_patgen_c3_g_msb_mask                      (0x0000FF00)
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_patgen_c3_r_msb_mask                      (0x000000FF)
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_patgen_c3_w_msb(data)                     (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_patgen_c3_b_msb(data)                     (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_patgen_c3_g_msb(data)                     (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_patgen_c3_r_msb(data)                     (0x000000FF&(data))
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_get_patgen_c3_w_msb(data)                 ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_get_patgen_c3_b_msb(data)                 ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_get_patgen_c3_g_msb(data)                 ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C3_M_get_patgen_c3_r_msb(data)                 (0x000000FF&(data))

#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L                                         0x1802E7DC
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_reg_addr                                 "0xB802E7DC"
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_reg                                      0xB802E7DC
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_inst_addr                                "0x0049"
#define  set_RGBW_D_RGBW_PATGEN_COLOR_C23_L_reg(data)                            (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C23_L_reg)=data)
#define  get_RGBW_D_RGBW_PATGEN_COLOR_C23_L_reg                                  (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C23_L_reg))
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c2_w_lsb_shift                    (28)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c2_b_lsb_shift                    (24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c2_g_lsb_shift                    (20)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c2_r_lsb_shift                    (16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c3_w_lsb_shift                    (12)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c3_b_lsb_shift                    (8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c3_g_lsb_shift                    (4)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c3_r_lsb_shift                    (0)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c2_w_lsb_mask                     (0xF0000000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c2_b_lsb_mask                     (0x0F000000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c2_g_lsb_mask                     (0x00F00000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c2_r_lsb_mask                     (0x000F0000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c3_w_lsb_mask                     (0x0000F000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c3_b_lsb_mask                     (0x00000F00)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c3_g_lsb_mask                     (0x000000F0)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c3_r_lsb_mask                     (0x0000000F)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c2_w_lsb(data)                    (0xF0000000&((data)<<28))
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c2_b_lsb(data)                    (0x0F000000&((data)<<24))
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c2_g_lsb(data)                    (0x00F00000&((data)<<20))
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c2_r_lsb(data)                    (0x000F0000&((data)<<16))
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c3_w_lsb(data)                    (0x0000F000&((data)<<12))
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c3_b_lsb(data)                    (0x00000F00&((data)<<8))
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c3_g_lsb(data)                    (0x000000F0&((data)<<4))
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_patgen_c3_r_lsb(data)                    (0x0000000F&(data))
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_get_patgen_c2_w_lsb(data)                ((0xF0000000&(data))>>28)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_get_patgen_c2_b_lsb(data)                ((0x0F000000&(data))>>24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_get_patgen_c2_g_lsb(data)                ((0x00F00000&(data))>>20)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_get_patgen_c2_r_lsb(data)                ((0x000F0000&(data))>>16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_get_patgen_c3_w_lsb(data)                ((0x0000F000&(data))>>12)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_get_patgen_c3_b_lsb(data)                ((0x00000F00&(data))>>8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_get_patgen_c3_g_lsb(data)                ((0x000000F0&(data))>>4)
#define  RGBW_D_RGBW_PATGEN_COLOR_C23_L_get_patgen_c3_r_lsb(data)                (0x0000000F&(data))

#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M                                          0x1802E7E0
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_reg_addr                                  "0xB802E7E0"
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_reg                                       0xB802E7E0
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_inst_addr                                 "0x004A"
#define  set_RGBW_D_RGBW_PATGEN_COLOR_C4_M_reg(data)                             (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C4_M_reg)=data)
#define  get_RGBW_D_RGBW_PATGEN_COLOR_C4_M_reg                                   (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C4_M_reg))
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_patgen_c4_w_msb_shift                     (24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_patgen_c4_b_msb_shift                     (16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_patgen_c4_g_msb_shift                     (8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_patgen_c4_r_msb_shift                     (0)
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_patgen_c4_w_msb_mask                      (0xFF000000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_patgen_c4_b_msb_mask                      (0x00FF0000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_patgen_c4_g_msb_mask                      (0x0000FF00)
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_patgen_c4_r_msb_mask                      (0x000000FF)
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_patgen_c4_w_msb(data)                     (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_patgen_c4_b_msb(data)                     (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_patgen_c4_g_msb(data)                     (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_patgen_c4_r_msb(data)                     (0x000000FF&(data))
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_get_patgen_c4_w_msb(data)                 ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_get_patgen_c4_b_msb(data)                 ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_get_patgen_c4_g_msb(data)                 ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C4_M_get_patgen_c4_r_msb(data)                 (0x000000FF&(data))

#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M                                          0x1802E7E4
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_reg_addr                                  "0xB802E7E4"
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_reg                                       0xB802E7E4
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_inst_addr                                 "0x004B"
#define  set_RGBW_D_RGBW_PATGEN_COLOR_C5_M_reg(data)                             (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C5_M_reg)=data)
#define  get_RGBW_D_RGBW_PATGEN_COLOR_C5_M_reg                                   (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C5_M_reg))
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_patgen_c5_w_msb_shift                     (24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_patgen_c5_b_msb_shift                     (16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_patgen_c5_g_msb_shift                     (8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_patgen_c5_r_msb_shift                     (0)
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_patgen_c5_w_msb_mask                      (0xFF000000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_patgen_c5_b_msb_mask                      (0x00FF0000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_patgen_c5_g_msb_mask                      (0x0000FF00)
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_patgen_c5_r_msb_mask                      (0x000000FF)
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_patgen_c5_w_msb(data)                     (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_patgen_c5_b_msb(data)                     (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_patgen_c5_g_msb(data)                     (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_patgen_c5_r_msb(data)                     (0x000000FF&(data))
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_get_patgen_c5_w_msb(data)                 ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_get_patgen_c5_b_msb(data)                 ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_get_patgen_c5_g_msb(data)                 ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C5_M_get_patgen_c5_r_msb(data)                 (0x000000FF&(data))

#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L                                         0x1802E7E8
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_reg_addr                                 "0xB802E7E8"
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_reg                                      0xB802E7E8
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_inst_addr                                "0x004C"
#define  set_RGBW_D_RGBW_PATGEN_COLOR_C45_L_reg(data)                            (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C45_L_reg)=data)
#define  get_RGBW_D_RGBW_PATGEN_COLOR_C45_L_reg                                  (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C45_L_reg))
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c4_w_lsb_shift                    (28)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c4_b_lsb_shift                    (24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c4_g_lsb_shift                    (20)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c4_r_lsb_shift                    (16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c5_w_lsb_shift                    (12)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c5_b_lsb_shift                    (8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c5_g_lsb_shift                    (4)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c5_r_lsb_shift                    (0)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c4_w_lsb_mask                     (0xF0000000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c4_b_lsb_mask                     (0x0F000000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c4_g_lsb_mask                     (0x00F00000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c4_r_lsb_mask                     (0x000F0000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c5_w_lsb_mask                     (0x0000F000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c5_b_lsb_mask                     (0x00000F00)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c5_g_lsb_mask                     (0x000000F0)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c5_r_lsb_mask                     (0x0000000F)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c4_w_lsb(data)                    (0xF0000000&((data)<<28))
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c4_b_lsb(data)                    (0x0F000000&((data)<<24))
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c4_g_lsb(data)                    (0x00F00000&((data)<<20))
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c4_r_lsb(data)                    (0x000F0000&((data)<<16))
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c5_w_lsb(data)                    (0x0000F000&((data)<<12))
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c5_b_lsb(data)                    (0x00000F00&((data)<<8))
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c5_g_lsb(data)                    (0x000000F0&((data)<<4))
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_patgen_c5_r_lsb(data)                    (0x0000000F&(data))
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_get_patgen_c4_w_lsb(data)                ((0xF0000000&(data))>>28)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_get_patgen_c4_b_lsb(data)                ((0x0F000000&(data))>>24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_get_patgen_c4_g_lsb(data)                ((0x00F00000&(data))>>20)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_get_patgen_c4_r_lsb(data)                ((0x000F0000&(data))>>16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_get_patgen_c5_w_lsb(data)                ((0x0000F000&(data))>>12)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_get_patgen_c5_b_lsb(data)                ((0x00000F00&(data))>>8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_get_patgen_c5_g_lsb(data)                ((0x000000F0&(data))>>4)
#define  RGBW_D_RGBW_PATGEN_COLOR_C45_L_get_patgen_c5_r_lsb(data)                (0x0000000F&(data))

#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M                                          0x1802E7EC
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_reg_addr                                  "0xB802E7EC"
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_reg                                       0xB802E7EC
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_inst_addr                                 "0x004D"
#define  set_RGBW_D_RGBW_PATGEN_COLOR_C6_M_reg(data)                             (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C6_M_reg)=data)
#define  get_RGBW_D_RGBW_PATGEN_COLOR_C6_M_reg                                   (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C6_M_reg))
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_patgen_c6_w_msb_shift                     (24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_patgen_c6_b_msb_shift                     (16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_patgen_c6_g_msb_shift                     (8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_patgen_c6_r_msb_shift                     (0)
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_patgen_c6_w_msb_mask                      (0xFF000000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_patgen_c6_b_msb_mask                      (0x00FF0000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_patgen_c6_g_msb_mask                      (0x0000FF00)
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_patgen_c6_r_msb_mask                      (0x000000FF)
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_patgen_c6_w_msb(data)                     (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_patgen_c6_b_msb(data)                     (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_patgen_c6_g_msb(data)                     (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_patgen_c6_r_msb(data)                     (0x000000FF&(data))
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_get_patgen_c6_w_msb(data)                 ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_get_patgen_c6_b_msb(data)                 ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_get_patgen_c6_g_msb(data)                 ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C6_M_get_patgen_c6_r_msb(data)                 (0x000000FF&(data))

#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M                                          0x1802E7F0
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_reg_addr                                  "0xB802E7F0"
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_reg                                       0xB802E7F0
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_inst_addr                                 "0x004E"
#define  set_RGBW_D_RGBW_PATGEN_COLOR_C7_M_reg(data)                             (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C7_M_reg)=data)
#define  get_RGBW_D_RGBW_PATGEN_COLOR_C7_M_reg                                   (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C7_M_reg))
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_patgen_c7_w_msb_shift                     (24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_patgen_c7_b_msb_shift                     (16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_patgen_c7_g_msb_shift                     (8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_patgen_c7_r_msb_shift                     (0)
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_patgen_c7_w_msb_mask                      (0xFF000000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_patgen_c7_b_msb_mask                      (0x00FF0000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_patgen_c7_g_msb_mask                      (0x0000FF00)
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_patgen_c7_r_msb_mask                      (0x000000FF)
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_patgen_c7_w_msb(data)                     (0xFF000000&((data)<<24))
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_patgen_c7_b_msb(data)                     (0x00FF0000&((data)<<16))
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_patgen_c7_g_msb(data)                     (0x0000FF00&((data)<<8))
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_patgen_c7_r_msb(data)                     (0x000000FF&(data))
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_get_patgen_c7_w_msb(data)                 ((0xFF000000&(data))>>24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_get_patgen_c7_b_msb(data)                 ((0x00FF0000&(data))>>16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_get_patgen_c7_g_msb(data)                 ((0x0000FF00&(data))>>8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C7_M_get_patgen_c7_r_msb(data)                 (0x000000FF&(data))

#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L                                         0x1802E7F4
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_reg_addr                                 "0xB802E7F4"
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_reg                                      0xB802E7F4
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_inst_addr                                "0x004F"
#define  set_RGBW_D_RGBW_PATGEN_COLOR_C67_L_reg(data)                            (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C67_L_reg)=data)
#define  get_RGBW_D_RGBW_PATGEN_COLOR_C67_L_reg                                  (*((volatile unsigned int*)RGBW_D_RGBW_PATGEN_COLOR_C67_L_reg))
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c6_w_lsb_shift                    (28)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c6_b_lsb_shift                    (24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c6_g_lsb_shift                    (20)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c6_r_lsb_shift                    (16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c7_w_lsb_shift                    (12)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c7_b_lsb_shift                    (8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c7_g_lsb_shift                    (4)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c7_r_lsb_shift                    (0)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c6_w_lsb_mask                     (0xF0000000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c6_b_lsb_mask                     (0x0F000000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c6_g_lsb_mask                     (0x00F00000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c6_r_lsb_mask                     (0x000F0000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c7_w_lsb_mask                     (0x0000F000)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c7_b_lsb_mask                     (0x00000F00)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c7_g_lsb_mask                     (0x000000F0)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c7_r_lsb_mask                     (0x0000000F)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c6_w_lsb(data)                    (0xF0000000&((data)<<28))
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c6_b_lsb(data)                    (0x0F000000&((data)<<24))
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c6_g_lsb(data)                    (0x00F00000&((data)<<20))
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c6_r_lsb(data)                    (0x000F0000&((data)<<16))
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c7_w_lsb(data)                    (0x0000F000&((data)<<12))
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c7_b_lsb(data)                    (0x00000F00&((data)<<8))
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c7_g_lsb(data)                    (0x000000F0&((data)<<4))
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_patgen_c7_r_lsb(data)                    (0x0000000F&(data))
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_get_patgen_c6_w_lsb(data)                ((0xF0000000&(data))>>28)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_get_patgen_c6_b_lsb(data)                ((0x0F000000&(data))>>24)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_get_patgen_c6_g_lsb(data)                ((0x00F00000&(data))>>20)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_get_patgen_c6_r_lsb(data)                ((0x000F0000&(data))>>16)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_get_patgen_c7_w_lsb(data)                ((0x0000F000&(data))>>12)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_get_patgen_c7_b_lsb(data)                ((0x00000F00&(data))>>8)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_get_patgen_c7_g_lsb(data)                ((0x000000F0&(data))>>4)
#define  RGBW_D_RGBW_PATGEN_COLOR_C67_L_get_patgen_c7_r_lsb(data)                (0x0000000F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======RGBW register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pre_cur_bypass:1;
        RBus_UInt32  ori_bypass:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  cpc_walpha_min:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  cpc_walpha_max:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  cpc_r_satalpha:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  cpc_g_satalpha:5;
    };
}rgbw_d_rgbw_cpc_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cpc_wlimit:8;
        RBus_UInt32  res1:3;
        RBus_UInt32  cpc_b_satalpha:5;
        RBus_UInt32  res2:6;
        RBus_UInt32  cpc_satalpha_offset:10;
    };
}rgbw_d_rgbw_cpc_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cpc_saliency_hfreq_en:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  cpc_saliency_alpha:8;
        RBus_UInt32  res2:6;
        RBus_UInt32  cpc_saliency_offset:10;
    };
}rgbw_d_rgbw_cpc_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cpc_coef_a:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  cpc_coef_b:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  cpc_coef_c:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  cpc_coef_d:5;
    };
}rgbw_d_rgbw_cpc_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  brightness_gain:8;
        RBus_UInt32  brightness_offset:8;
    };
}rgbw_d_rgbw_be_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  enhance_strength_separate:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  enhance_strength_offset_r:12;
        RBus_UInt32  enhance_strength_gain_r:8;
    };
}rgbw_d_rgbw_be_2_sep_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  enhance_strength_offset_g:12;
        RBus_UInt32  enhance_strength_gain_g:8;
        RBus_UInt32  enhance_strength_offset_b:12;
    };
}rgbw_d_rgbw_be_2_sep_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  enhance_strength_gain_b:8;
        RBus_UInt32  enhance_strength_offset_w:12;
        RBus_UInt32  enhance_strength_gain_w:8;
    };
}rgbw_d_rgbw_be_2_sep_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  slogcurve_sub_0:10;
        RBus_UInt32  slogcurve_sub_1:10;
        RBus_UInt32  slogcurve_sub_2:10;
    };
}rgbw_d_rgbw_log_curve_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  slogcurve_sub_3:10;
        RBus_UInt32  slogcurve_sub_4:10;
        RBus_UInt32  slogcurve_sub_5:10;
    };
}rgbw_d_rgbw_log_curve_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  slogcurve_sub_6:10;
        RBus_UInt32  slogcurve_sub_7:10;
        RBus_UInt32  slogcurve_2:10;
    };
}rgbw_d_rgbw_log_curve_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  slogcurve_3:10;
        RBus_UInt32  slogcurve_4:10;
        RBus_UInt32  slogcurve_5:10;
    };
}rgbw_d_rgbw_log_curve_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  slogcurve_6:10;
        RBus_UInt32  slogcurve_7:10;
        RBus_UInt32  slogcurve_8:10;
    };
}rgbw_d_rgbw_log_curve_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  slogcurve_9:10;
        RBus_UInt32  slogcurve_10:10;
        RBus_UInt32  slogcurve_11:10;
    };
}rgbw_d_rgbw_log_curve_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  slogcurve_12:10;
        RBus_UInt32  slogcurve_13:10;
        RBus_UInt32  slogcurve_14:10;
    };
}rgbw_d_rgbw_log_curve_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  slogcurve_15:10;
        RBus_UInt32  slogcurve_16:10;
        RBus_UInt32  slogcurve_17:10;
    };
}rgbw_d_rgbw_log_curve_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  slogcurve_18:10;
        RBus_UInt32  slogcurve_19:10;
        RBus_UInt32  slogcurve_20:10;
    };
}rgbw_d_rgbw_log_curve_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  slogcurve_21:10;
        RBus_UInt32  slogcurve_22:10;
        RBus_UInt32  slogcurve_23:10;
    };
}rgbw_d_rgbw_log_curve_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  slogcurve_24:10;
        RBus_UInt32  slogcurve_25:10;
        RBus_UInt32  slogcurve_26:10;
    };
}rgbw_d_rgbw_log_curve_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  slogcurve_27:10;
        RBus_UInt32  slogcurve_28:10;
        RBus_UInt32  slogcurve_29:10;
    };
}rgbw_d_rgbw_log_curve_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  slogcurve_30:10;
        RBus_UInt32  slogcurve_31:10;
        RBus_UInt32  slogcurve_32:10;
    };
}rgbw_d_rgbw_log_curve_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  deoversat_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  deoversat_alpha:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  deoversat_strength:5;
        RBus_UInt32  deoversat_flatlpf_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  deoversat_flatlpf_lowbd:6;
        RBus_UInt32  res4:3;
        RBus_UInt32  deoversat_flatlpf_slope:5;
    };
}rgbw_d_rgbw_deoversat_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  deoversat_flatlpf_coef0:5;
        RBus_UInt32  deoversat_flatlpf_coef1:4;
        RBus_UInt32  deoversat_flatlpf_coef2:4;
        RBus_UInt32  deoversat_flatlpf_coef3:4;
        RBus_UInt32  ratioclip_en:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  ratioclip_strength:5;
    };
}rgbw_d_rgbw_deoversat_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adaptwhite_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  adaptwhite_alpha:5;
        RBus_UInt32  res2:14;
        RBus_UInt32  adaptwhite_cutweight:10;
    };
}rgbw_d_rgbw_adaptwhite_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hist_en:1;
        RBus_UInt32  hist_mode_sel:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  hist_shift_sel:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  hist_data_sel:5;
        RBus_UInt32  hist_sta0:8;
        RBus_UInt32  res3:8;
    };
}rgbw_d_rgbw_adaptwhite_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hist_sta1:8;
        RBus_UInt32  hist_sta2:8;
        RBus_UInt32  hist_sta3:8;
        RBus_UInt32  hist_sta4:8;
    };
}rgbw_d_rgbw_adaptwhite_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hist_sta5:8;
        RBus_UInt32  hist_sta6:8;
        RBus_UInt32  hist_sta7:8;
        RBus_UInt32  hist_end7:8;
    };
}rgbw_d_rgbw_adaptwhite_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hist_bin0:16;
        RBus_UInt32  hist_bin1:16;
    };
}rgbw_d_rgbw_adaptwhite_hist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hist_bin2:16;
        RBus_UInt32  hist_bin3:16;
    };
}rgbw_d_rgbw_adaptwhite_hist_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hist_bin4:16;
        RBus_UInt32  hist_bin5:16;
    };
}rgbw_d_rgbw_adaptwhite_hist_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hist_bin6:16;
        RBus_UInt32  hist_bin7:16;
    };
}rgbw_d_rgbw_adaptwhite_hist_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  spr_coef_mode:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  ss0_pos:1;
        RBus_UInt32  ss1_pos:1;
        RBus_UInt32  ss2_pos:1;
        RBus_UInt32  ss3_pos:1;
        RBus_UInt32  ss4_pos:1;
        RBus_UInt32  ss5_pos:1;
        RBus_UInt32  ss6_pos:1;
        RBus_UInt32  ss7_pos:1;
        RBus_UInt32  ss8_pos:1;
        RBus_UInt32  ss9_pos:1;
        RBus_UInt32  ss10_pos:1;
        RBus_UInt32  ss11_pos:1;
        RBus_UInt32  even_ch_w:2;
        RBus_UInt32  even_ch_b:2;
        RBus_UInt32  even_ch_g:2;
        RBus_UInt32  even_ch_r:2;
        RBus_UInt32  odd_ch_w:2;
        RBus_UInt32  odd_ch_b:2;
        RBus_UInt32  odd_ch_g:2;
        RBus_UInt32  odd_ch_r:2;
    };
}rgbw_d_rgbw_spr_order_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss0_coef0:8;
        RBus_UInt32  ss0_coef1:8;
        RBus_UInt32  ss0_coef2:8;
        RBus_UInt32  ss0_coef3:8;
    };
}rgbw_d_rgbw_spr_ss0_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss0_coef4:8;
        RBus_UInt32  ss0_coef5:8;
        RBus_UInt32  ss0_coef6:8;
        RBus_UInt32  ss0_coef7:8;
    };
}rgbw_d_rgbw_spr_ss0_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss1_coef0:8;
        RBus_UInt32  ss1_coef1:8;
        RBus_UInt32  ss1_coef2:8;
        RBus_UInt32  ss1_coef3:8;
    };
}rgbw_d_rgbw_spr_ss1_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss1_coef4:8;
        RBus_UInt32  ss1_coef5:8;
        RBus_UInt32  ss1_coef6:8;
        RBus_UInt32  ss1_coef7:8;
    };
}rgbw_d_rgbw_spr_ss1_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss2_coef0:8;
        RBus_UInt32  ss2_coef1:8;
        RBus_UInt32  ss2_coef2:8;
        RBus_UInt32  ss2_coef3:8;
    };
}rgbw_d_rgbw_spr_ss2_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss2_coef4:8;
        RBus_UInt32  ss2_coef5:8;
        RBus_UInt32  ss2_coef6:8;
        RBus_UInt32  ss2_coef7:8;
    };
}rgbw_d_rgbw_spr_ss2_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss3_coef0:8;
        RBus_UInt32  ss3_coef1:8;
        RBus_UInt32  ss3_coef2:8;
        RBus_UInt32  ss3_coef3:8;
    };
}rgbw_d_rgbw_spr_ss3_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss3_coef4:8;
        RBus_UInt32  ss3_coef5:8;
        RBus_UInt32  ss3_coef6:8;
        RBus_UInt32  ss3_coef7:8;
    };
}rgbw_d_rgbw_spr_ss3_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss4_coef0:8;
        RBus_UInt32  ss4_coef1:8;
        RBus_UInt32  ss4_coef2:8;
        RBus_UInt32  ss4_coef3:8;
    };
}rgbw_d_rgbw_spr_ss4_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss4_coef4:8;
        RBus_UInt32  ss4_coef5:8;
        RBus_UInt32  ss4_coef6:8;
        RBus_UInt32  ss4_coef7:8;
    };
}rgbw_d_rgbw_spr_ss4_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss5_coef0:8;
        RBus_UInt32  ss5_coef1:8;
        RBus_UInt32  ss5_coef2:8;
        RBus_UInt32  ss5_coef3:8;
    };
}rgbw_d_rgbw_spr_ss5_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss5_coef4:8;
        RBus_UInt32  ss5_coef5:8;
        RBus_UInt32  ss5_coef6:8;
        RBus_UInt32  ss5_coef7:8;
    };
}rgbw_d_rgbw_spr_ss5_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss6_coef0:8;
        RBus_UInt32  ss6_coef1:8;
        RBus_UInt32  ss6_coef2:8;
        RBus_UInt32  ss6_coef3:8;
    };
}rgbw_d_rgbw_spr_ss6_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss6_coef4:8;
        RBus_UInt32  ss6_coef5:8;
        RBus_UInt32  ss6_coef6:8;
        RBus_UInt32  ss6_coef7:8;
    };
}rgbw_d_rgbw_spr_ss6_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss7_coef0:8;
        RBus_UInt32  ss7_coef1:8;
        RBus_UInt32  ss7_coef2:8;
        RBus_UInt32  ss7_coef3:8;
    };
}rgbw_d_rgbw_spr_ss7_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss7_coef4:8;
        RBus_UInt32  ss7_coef5:8;
        RBus_UInt32  ss7_coef6:8;
        RBus_UInt32  ss7_coef7:8;
    };
}rgbw_d_rgbw_spr_ss7_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss8_coef0:8;
        RBus_UInt32  ss8_coef1:8;
        RBus_UInt32  ss8_coef2:8;
        RBus_UInt32  ss8_coef3:8;
    };
}rgbw_d_rgbw_spr_ss8_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss8_coef4:8;
        RBus_UInt32  ss8_coef5:8;
        RBus_UInt32  ss8_coef6:8;
        RBus_UInt32  ss8_coef7:8;
    };
}rgbw_d_rgbw_spr_ss8_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss9_coef0:8;
        RBus_UInt32  ss9_coef1:8;
        RBus_UInt32  ss9_coef2:8;
        RBus_UInt32  ss9_coef3:8;
    };
}rgbw_d_rgbw_spr_ss9_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss9_coef4:8;
        RBus_UInt32  ss9_coef5:8;
        RBus_UInt32  ss9_coef6:8;
        RBus_UInt32  ss9_coef7:8;
    };
}rgbw_d_rgbw_spr_ss9_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss10_coef0:8;
        RBus_UInt32  ss10_coef1:8;
        RBus_UInt32  ss10_coef2:8;
        RBus_UInt32  ss10_coef3:8;
    };
}rgbw_d_rgbw_spr_ss10_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss10_coef4:8;
        RBus_UInt32  ss10_coef5:8;
        RBus_UInt32  ss10_coef6:8;
        RBus_UInt32  ss10_coef7:8;
    };
}rgbw_d_rgbw_spr_ss10_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss11_coef0:8;
        RBus_UInt32  ss11_coef1:8;
        RBus_UInt32  ss11_coef2:8;
        RBus_UInt32  ss11_coef3:8;
    };
}rgbw_d_rgbw_spr_ss11_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss11_coef4:8;
        RBus_UInt32  ss11_coef5:8;
        RBus_UInt32  ss11_coef6:8;
        RBus_UInt32  ss11_coef7:8;
    };
}rgbw_d_rgbw_spr_ss11_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hfreq_sidediff_lowbd:4;
        RBus_UInt32  hfreq_sidediff_slope:4;
        RBus_UInt32  hfreq_centerdiff_lowbd:4;
        RBus_UInt32  hfreq_centerdiff_slope:4;
        RBus_UInt32  hfreq_selfwhite_lowbd:4;
        RBus_UInt32  hfreq_selfwhite_slope:4;
        RBus_UInt32  pixel_rearrange_offset_en:1;
        RBus_UInt32  bkmask_cm_en:1;
        RBus_UInt32  hfreq_tap_sel:1;
        RBus_UInt32  pixel_rearrange_en:1;
        RBus_UInt32  pixel_rearrange_wkeep:1;
        RBus_UInt32  bkmask_en:1;
        RBus_UInt32  bkmask_transfer_en:1;
        RBus_UInt32  bkmask_colorwhite_en:1;
    };
}rgbw_d_rgbw_hfreq_mask_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bkmask_offset_k0:8;
        RBus_UInt32  bkmask_offset_k1:8;
        RBus_UInt32  bkmask_offset_w0_even:8;
        RBus_UInt32  bkmask_offset_w1_even:8;
    };
}rgbw_d_rgbw_hfreq_mask_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bkmask_offset_w0_odd:8;
        RBus_UInt32  bkmask_offset_w1_odd:8;
        RBus_UInt32  bkmask_cm_offset_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  dbgmode:3;
        RBus_UInt32  dbgmode_cond_disp_en:1;
        RBus_UInt32  dbgmode_cond_disp_min:4;
        RBus_UInt32  dbgmode_cond_disp_delta:4;
    };
}rgbw_d_rgbw_hfreq_mask_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rearrange_rem_even_r:2;
        RBus_UInt32  rearrange_rem_even_g:2;
        RBus_UInt32  rearrange_rem_even_b:2;
        RBus_UInt32  rearrange_rem_odd_r:2;
        RBus_UInt32  rearrange_rem_odd_g:2;
        RBus_UInt32  rearrange_rem_odd_b:2;
        RBus_UInt32  res1:7;
        RBus_UInt32  pixel_rearrange_offset_th:5;
        RBus_UInt32  pixel_rearrange_offset_value:8;
    };
}rgbw_d_rgbw_hfreq_mask_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  bkmask_cm_oddrow_4_rem:2;
        RBus_UInt32  bkmask_cm_evenrow_4_rem:2;
        RBus_UInt32  bkmask_cm_oddrow_3_rem:2;
        RBus_UInt32  bkmask_cm_evenrow_3_rem:2;
        RBus_UInt32  bkmask_cm_oddrow_2_rem:2;
        RBus_UInt32  bkmask_cm_evenrow_2_rem:2;
        RBus_UInt32  bkmask_cm_oddrow_1_rem:2;
        RBus_UInt32  bkmask_cm_evenrow_1_rem:2;
        RBus_UInt32  bkmask_cm_offset_nxt_w4:8;
    };
}rgbw_d_rgbw_hfreq_mask_cm_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bkmask_cm_offset_cur_w1:8;
        RBus_UInt32  bkmask_cm_offset_cur_r1:8;
        RBus_UInt32  bkmask_cm_offset_cur_g1:8;
        RBus_UInt32  bkmask_cm_offset_nxt_b1:8;
    };
}rgbw_d_rgbw_hfreq_mask_cm_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bkmask_cm_offset_nxt_r1:8;
        RBus_UInt32  bkmask_cm_offset_cur_g2:8;
        RBus_UInt32  bkmask_cm_offset_cur_b2:8;
        RBus_UInt32  bkmask_cm_offset_cur_w2:8;
    };
}rgbw_d_rgbw_hfreq_mask_cm_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bkmask_cm_offset_cur_b3:8;
        RBus_UInt32  bkmask_cm_offset_cur_w3:8;
        RBus_UInt32  bkmask_cm_offset_cur_r3:8;
        RBus_UInt32  bkmask_cm_offset_nxt_g3:8;
    };
}rgbw_d_rgbw_hfreq_mask_cm_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bkmask_cm_offset_nxt_b3:8;
        RBus_UInt32  bkmask_cm_offset_cur_r4:8;
        RBus_UInt32  bkmask_cm_offset_cur_g4:8;
        RBus_UInt32  bkmask_cm_offset_cur_b4:8;
    };
}rgbw_d_rgbw_hfreq_mask_cm_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_read_level:1;
        RBus_UInt32  db_apply:1;
    };
}rgbw_rgbw_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_en:1;
        RBus_UInt32  patgen_ch_num:1;
        RBus_UInt32  res1:8;
        RBus_UInt32  patgen_width:22;
    };
}rgbw_d_rgbw_patgen_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802e7c4_31_16:16;
        RBus_UInt32  patgen_even_ch_order_w:2;
        RBus_UInt32  patgen_even_ch_order_b:2;
        RBus_UInt32  patgen_even_ch_order_g:2;
        RBus_UInt32  patgen_even_ch_order_r:2;
        RBus_UInt32  patgen_odd_ch_order_w:2;
        RBus_UInt32  patgen_odd_ch_order_b:2;
        RBus_UInt32  patgen_odd_ch_order_g:2;
        RBus_UInt32  patgen_odd_ch_order_r:2;
    };
}rgbw_d_rgbw_patgen_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c0_w_msb:8;
        RBus_UInt32  patgen_c0_b_msb:8;
        RBus_UInt32  patgen_c0_g_msb:8;
        RBus_UInt32  patgen_c0_r_msb:8;
    };
}rgbw_d_rgbw_patgen_color_c0_m_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c1_w_msb:8;
        RBus_UInt32  patgen_c1_b_msb:8;
        RBus_UInt32  patgen_c1_g_msb:8;
        RBus_UInt32  patgen_c1_r_msb:8;
    };
}rgbw_d_rgbw_patgen_color_c1_m_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c0_w_lsb:4;
        RBus_UInt32  patgen_c0_b_lsb:4;
        RBus_UInt32  patgen_c0_g_lsb:4;
        RBus_UInt32  patgen_c0_r_lsb:4;
        RBus_UInt32  patgen_c1_w_lsb:4;
        RBus_UInt32  patgen_c1_b_lsb:4;
        RBus_UInt32  patgen_c1_g_lsb:4;
        RBus_UInt32  patgen_c1_r_lsb:4;
    };
}rgbw_d_rgbw_patgen_color_c01_l_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c2_w_msb:8;
        RBus_UInt32  patgen_c2_b_msb:8;
        RBus_UInt32  patgen_c2_g_msb:8;
        RBus_UInt32  patgen_c2_r_msb:8;
    };
}rgbw_d_rgbw_patgen_color_c2_m_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c3_w_msb:8;
        RBus_UInt32  patgen_c3_b_msb:8;
        RBus_UInt32  patgen_c3_g_msb:8;
        RBus_UInt32  patgen_c3_r_msb:8;
    };
}rgbw_d_rgbw_patgen_color_c3_m_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c2_w_lsb:4;
        RBus_UInt32  patgen_c2_b_lsb:4;
        RBus_UInt32  patgen_c2_g_lsb:4;
        RBus_UInt32  patgen_c2_r_lsb:4;
        RBus_UInt32  patgen_c3_w_lsb:4;
        RBus_UInt32  patgen_c3_b_lsb:4;
        RBus_UInt32  patgen_c3_g_lsb:4;
        RBus_UInt32  patgen_c3_r_lsb:4;
    };
}rgbw_d_rgbw_patgen_color_c23_l_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c4_w_msb:8;
        RBus_UInt32  patgen_c4_b_msb:8;
        RBus_UInt32  patgen_c4_g_msb:8;
        RBus_UInt32  patgen_c4_r_msb:8;
    };
}rgbw_d_rgbw_patgen_color_c4_m_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c5_w_msb:8;
        RBus_UInt32  patgen_c5_b_msb:8;
        RBus_UInt32  patgen_c5_g_msb:8;
        RBus_UInt32  patgen_c5_r_msb:8;
    };
}rgbw_d_rgbw_patgen_color_c5_m_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c4_w_lsb:4;
        RBus_UInt32  patgen_c4_b_lsb:4;
        RBus_UInt32  patgen_c4_g_lsb:4;
        RBus_UInt32  patgen_c4_r_lsb:4;
        RBus_UInt32  patgen_c5_w_lsb:4;
        RBus_UInt32  patgen_c5_b_lsb:4;
        RBus_UInt32  patgen_c5_g_lsb:4;
        RBus_UInt32  patgen_c5_r_lsb:4;
    };
}rgbw_d_rgbw_patgen_color_c45_l_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c6_w_msb:8;
        RBus_UInt32  patgen_c6_b_msb:8;
        RBus_UInt32  patgen_c6_g_msb:8;
        RBus_UInt32  patgen_c6_r_msb:8;
    };
}rgbw_d_rgbw_patgen_color_c6_m_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c7_w_msb:8;
        RBus_UInt32  patgen_c7_b_msb:8;
        RBus_UInt32  patgen_c7_g_msb:8;
        RBus_UInt32  patgen_c7_r_msb:8;
    };
}rgbw_d_rgbw_patgen_color_c7_m_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c6_w_lsb:4;
        RBus_UInt32  patgen_c6_b_lsb:4;
        RBus_UInt32  patgen_c6_g_lsb:4;
        RBus_UInt32  patgen_c6_r_lsb:4;
        RBus_UInt32  patgen_c7_w_lsb:4;
        RBus_UInt32  patgen_c7_b_lsb:4;
        RBus_UInt32  patgen_c7_g_lsb:4;
        RBus_UInt32  patgen_c7_r_lsb:4;
    };
}rgbw_d_rgbw_patgen_color_c67_l_RBUS;

#else //apply LITTLE_ENDIAN

//======RGBW register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cpc_g_satalpha:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  cpc_r_satalpha:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  cpc_walpha_max:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  cpc_walpha_min:5;
        RBus_UInt32  res4:1;
        RBus_UInt32  ori_bypass:1;
        RBus_UInt32  pre_cur_bypass:1;
    };
}rgbw_d_rgbw_cpc_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cpc_satalpha_offset:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  cpc_b_satalpha:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  cpc_wlimit:8;
    };
}rgbw_d_rgbw_cpc_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cpc_saliency_offset:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  cpc_saliency_alpha:8;
        RBus_UInt32  res2:7;
        RBus_UInt32  cpc_saliency_hfreq_en:1;
    };
}rgbw_d_rgbw_cpc_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cpc_coef_d:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  cpc_coef_c:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  cpc_coef_b:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  cpc_coef_a:5;
        RBus_UInt32  res4:3;
    };
}rgbw_d_rgbw_cpc_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  brightness_offset:8;
        RBus_UInt32  brightness_gain:8;
        RBus_UInt32  res1:16;
    };
}rgbw_d_rgbw_be_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  enhance_strength_gain_r:8;
        RBus_UInt32  enhance_strength_offset_r:12;
        RBus_UInt32  res1:11;
        RBus_UInt32  enhance_strength_separate:1;
    };
}rgbw_d_rgbw_be_2_sep_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  enhance_strength_offset_b:12;
        RBus_UInt32  enhance_strength_gain_g:8;
        RBus_UInt32  enhance_strength_offset_g:12;
    };
}rgbw_d_rgbw_be_2_sep_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  enhance_strength_gain_w:8;
        RBus_UInt32  enhance_strength_offset_w:12;
        RBus_UInt32  enhance_strength_gain_b:8;
        RBus_UInt32  res1:4;
    };
}rgbw_d_rgbw_be_2_sep_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  slogcurve_sub_2:10;
        RBus_UInt32  slogcurve_sub_1:10;
        RBus_UInt32  slogcurve_sub_0:10;
        RBus_UInt32  res1:2;
    };
}rgbw_d_rgbw_log_curve_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  slogcurve_sub_5:10;
        RBus_UInt32  slogcurve_sub_4:10;
        RBus_UInt32  slogcurve_sub_3:10;
        RBus_UInt32  res1:2;
    };
}rgbw_d_rgbw_log_curve_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  slogcurve_2:10;
        RBus_UInt32  slogcurve_sub_7:10;
        RBus_UInt32  slogcurve_sub_6:10;
        RBus_UInt32  res1:2;
    };
}rgbw_d_rgbw_log_curve_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  slogcurve_5:10;
        RBus_UInt32  slogcurve_4:10;
        RBus_UInt32  slogcurve_3:10;
        RBus_UInt32  res1:2;
    };
}rgbw_d_rgbw_log_curve_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  slogcurve_8:10;
        RBus_UInt32  slogcurve_7:10;
        RBus_UInt32  slogcurve_6:10;
        RBus_UInt32  res1:2;
    };
}rgbw_d_rgbw_log_curve_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  slogcurve_11:10;
        RBus_UInt32  slogcurve_10:10;
        RBus_UInt32  slogcurve_9:10;
        RBus_UInt32  res1:2;
    };
}rgbw_d_rgbw_log_curve_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  slogcurve_14:10;
        RBus_UInt32  slogcurve_13:10;
        RBus_UInt32  slogcurve_12:10;
        RBus_UInt32  res1:2;
    };
}rgbw_d_rgbw_log_curve_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  slogcurve_17:10;
        RBus_UInt32  slogcurve_16:10;
        RBus_UInt32  slogcurve_15:10;
        RBus_UInt32  res1:2;
    };
}rgbw_d_rgbw_log_curve_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  slogcurve_20:10;
        RBus_UInt32  slogcurve_19:10;
        RBus_UInt32  slogcurve_18:10;
        RBus_UInt32  res1:2;
    };
}rgbw_d_rgbw_log_curve_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  slogcurve_23:10;
        RBus_UInt32  slogcurve_22:10;
        RBus_UInt32  slogcurve_21:10;
        RBus_UInt32  res1:2;
    };
}rgbw_d_rgbw_log_curve_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  slogcurve_26:10;
        RBus_UInt32  slogcurve_25:10;
        RBus_UInt32  slogcurve_24:10;
        RBus_UInt32  res1:2;
    };
}rgbw_d_rgbw_log_curve_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  slogcurve_29:10;
        RBus_UInt32  slogcurve_28:10;
        RBus_UInt32  slogcurve_27:10;
        RBus_UInt32  res1:2;
    };
}rgbw_d_rgbw_log_curve_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  slogcurve_32:10;
        RBus_UInt32  slogcurve_31:10;
        RBus_UInt32  slogcurve_30:10;
        RBus_UInt32  res1:2;
    };
}rgbw_d_rgbw_log_curve_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  deoversat_flatlpf_slope:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  deoversat_flatlpf_lowbd:6;
        RBus_UInt32  res2:1;
        RBus_UInt32  deoversat_flatlpf_en:1;
        RBus_UInt32  deoversat_strength:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  deoversat_alpha:5;
        RBus_UInt32  res4:2;
        RBus_UInt32  deoversat_en:1;
    };
}rgbw_d_rgbw_deoversat_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ratioclip_strength:5;
        RBus_UInt32  res1:6;
        RBus_UInt32  ratioclip_en:1;
        RBus_UInt32  deoversat_flatlpf_coef3:4;
        RBus_UInt32  deoversat_flatlpf_coef2:4;
        RBus_UInt32  deoversat_flatlpf_coef1:4;
        RBus_UInt32  deoversat_flatlpf_coef0:5;
        RBus_UInt32  res2:3;
    };
}rgbw_d_rgbw_deoversat_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adaptwhite_cutweight:10;
        RBus_UInt32  res1:14;
        RBus_UInt32  adaptwhite_alpha:5;
        RBus_UInt32  res2:2;
        RBus_UInt32  adaptwhite_en:1;
    };
}rgbw_d_rgbw_adaptwhite_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  hist_sta0:8;
        RBus_UInt32  hist_data_sel:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  hist_shift_sel:4;
        RBus_UInt32  res3:2;
        RBus_UInt32  hist_mode_sel:1;
        RBus_UInt32  hist_en:1;
    };
}rgbw_d_rgbw_adaptwhite_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hist_sta4:8;
        RBus_UInt32  hist_sta3:8;
        RBus_UInt32  hist_sta2:8;
        RBus_UInt32  hist_sta1:8;
    };
}rgbw_d_rgbw_adaptwhite_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hist_end7:8;
        RBus_UInt32  hist_sta7:8;
        RBus_UInt32  hist_sta6:8;
        RBus_UInt32  hist_sta5:8;
    };
}rgbw_d_rgbw_adaptwhite_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hist_bin1:16;
        RBus_UInt32  hist_bin0:16;
    };
}rgbw_d_rgbw_adaptwhite_hist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hist_bin3:16;
        RBus_UInt32  hist_bin2:16;
    };
}rgbw_d_rgbw_adaptwhite_hist_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hist_bin5:16;
        RBus_UInt32  hist_bin4:16;
    };
}rgbw_d_rgbw_adaptwhite_hist_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hist_bin7:16;
        RBus_UInt32  hist_bin6:16;
    };
}rgbw_d_rgbw_adaptwhite_hist_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  odd_ch_r:2;
        RBus_UInt32  odd_ch_g:2;
        RBus_UInt32  odd_ch_b:2;
        RBus_UInt32  odd_ch_w:2;
        RBus_UInt32  even_ch_r:2;
        RBus_UInt32  even_ch_g:2;
        RBus_UInt32  even_ch_b:2;
        RBus_UInt32  even_ch_w:2;
        RBus_UInt32  ss11_pos:1;
        RBus_UInt32  ss10_pos:1;
        RBus_UInt32  ss9_pos:1;
        RBus_UInt32  ss8_pos:1;
        RBus_UInt32  ss7_pos:1;
        RBus_UInt32  ss6_pos:1;
        RBus_UInt32  ss5_pos:1;
        RBus_UInt32  ss4_pos:1;
        RBus_UInt32  ss3_pos:1;
        RBus_UInt32  ss2_pos:1;
        RBus_UInt32  ss1_pos:1;
        RBus_UInt32  ss0_pos:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  spr_coef_mode:1;
    };
}rgbw_d_rgbw_spr_order_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss0_coef3:8;
        RBus_UInt32  ss0_coef2:8;
        RBus_UInt32  ss0_coef1:8;
        RBus_UInt32  ss0_coef0:8;
    };
}rgbw_d_rgbw_spr_ss0_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss0_coef7:8;
        RBus_UInt32  ss0_coef6:8;
        RBus_UInt32  ss0_coef5:8;
        RBus_UInt32  ss0_coef4:8;
    };
}rgbw_d_rgbw_spr_ss0_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss1_coef3:8;
        RBus_UInt32  ss1_coef2:8;
        RBus_UInt32  ss1_coef1:8;
        RBus_UInt32  ss1_coef0:8;
    };
}rgbw_d_rgbw_spr_ss1_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss1_coef7:8;
        RBus_UInt32  ss1_coef6:8;
        RBus_UInt32  ss1_coef5:8;
        RBus_UInt32  ss1_coef4:8;
    };
}rgbw_d_rgbw_spr_ss1_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss2_coef3:8;
        RBus_UInt32  ss2_coef2:8;
        RBus_UInt32  ss2_coef1:8;
        RBus_UInt32  ss2_coef0:8;
    };
}rgbw_d_rgbw_spr_ss2_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss2_coef7:8;
        RBus_UInt32  ss2_coef6:8;
        RBus_UInt32  ss2_coef5:8;
        RBus_UInt32  ss2_coef4:8;
    };
}rgbw_d_rgbw_spr_ss2_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss3_coef3:8;
        RBus_UInt32  ss3_coef2:8;
        RBus_UInt32  ss3_coef1:8;
        RBus_UInt32  ss3_coef0:8;
    };
}rgbw_d_rgbw_spr_ss3_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss3_coef7:8;
        RBus_UInt32  ss3_coef6:8;
        RBus_UInt32  ss3_coef5:8;
        RBus_UInt32  ss3_coef4:8;
    };
}rgbw_d_rgbw_spr_ss3_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss4_coef3:8;
        RBus_UInt32  ss4_coef2:8;
        RBus_UInt32  ss4_coef1:8;
        RBus_UInt32  ss4_coef0:8;
    };
}rgbw_d_rgbw_spr_ss4_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss4_coef7:8;
        RBus_UInt32  ss4_coef6:8;
        RBus_UInt32  ss4_coef5:8;
        RBus_UInt32  ss4_coef4:8;
    };
}rgbw_d_rgbw_spr_ss4_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss5_coef3:8;
        RBus_UInt32  ss5_coef2:8;
        RBus_UInt32  ss5_coef1:8;
        RBus_UInt32  ss5_coef0:8;
    };
}rgbw_d_rgbw_spr_ss5_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss5_coef7:8;
        RBus_UInt32  ss5_coef6:8;
        RBus_UInt32  ss5_coef5:8;
        RBus_UInt32  ss5_coef4:8;
    };
}rgbw_d_rgbw_spr_ss5_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss6_coef3:8;
        RBus_UInt32  ss6_coef2:8;
        RBus_UInt32  ss6_coef1:8;
        RBus_UInt32  ss6_coef0:8;
    };
}rgbw_d_rgbw_spr_ss6_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss6_coef7:8;
        RBus_UInt32  ss6_coef6:8;
        RBus_UInt32  ss6_coef5:8;
        RBus_UInt32  ss6_coef4:8;
    };
}rgbw_d_rgbw_spr_ss6_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss7_coef3:8;
        RBus_UInt32  ss7_coef2:8;
        RBus_UInt32  ss7_coef1:8;
        RBus_UInt32  ss7_coef0:8;
    };
}rgbw_d_rgbw_spr_ss7_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss7_coef7:8;
        RBus_UInt32  ss7_coef6:8;
        RBus_UInt32  ss7_coef5:8;
        RBus_UInt32  ss7_coef4:8;
    };
}rgbw_d_rgbw_spr_ss7_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss8_coef3:8;
        RBus_UInt32  ss8_coef2:8;
        RBus_UInt32  ss8_coef1:8;
        RBus_UInt32  ss8_coef0:8;
    };
}rgbw_d_rgbw_spr_ss8_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss8_coef7:8;
        RBus_UInt32  ss8_coef6:8;
        RBus_UInt32  ss8_coef5:8;
        RBus_UInt32  ss8_coef4:8;
    };
}rgbw_d_rgbw_spr_ss8_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss9_coef3:8;
        RBus_UInt32  ss9_coef2:8;
        RBus_UInt32  ss9_coef1:8;
        RBus_UInt32  ss9_coef0:8;
    };
}rgbw_d_rgbw_spr_ss9_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss9_coef7:8;
        RBus_UInt32  ss9_coef6:8;
        RBus_UInt32  ss9_coef5:8;
        RBus_UInt32  ss9_coef4:8;
    };
}rgbw_d_rgbw_spr_ss9_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss10_coef3:8;
        RBus_UInt32  ss10_coef2:8;
        RBus_UInt32  ss10_coef1:8;
        RBus_UInt32  ss10_coef0:8;
    };
}rgbw_d_rgbw_spr_ss10_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss10_coef7:8;
        RBus_UInt32  ss10_coef6:8;
        RBus_UInt32  ss10_coef5:8;
        RBus_UInt32  ss10_coef4:8;
    };
}rgbw_d_rgbw_spr_ss10_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss11_coef3:8;
        RBus_UInt32  ss11_coef2:8;
        RBus_UInt32  ss11_coef1:8;
        RBus_UInt32  ss11_coef0:8;
    };
}rgbw_d_rgbw_spr_ss11_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss11_coef7:8;
        RBus_UInt32  ss11_coef6:8;
        RBus_UInt32  ss11_coef5:8;
        RBus_UInt32  ss11_coef4:8;
    };
}rgbw_d_rgbw_spr_ss11_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bkmask_colorwhite_en:1;
        RBus_UInt32  bkmask_transfer_en:1;
        RBus_UInt32  bkmask_en:1;
        RBus_UInt32  pixel_rearrange_wkeep:1;
        RBus_UInt32  pixel_rearrange_en:1;
        RBus_UInt32  hfreq_tap_sel:1;
        RBus_UInt32  bkmask_cm_en:1;
        RBus_UInt32  pixel_rearrange_offset_en:1;
        RBus_UInt32  hfreq_selfwhite_slope:4;
        RBus_UInt32  hfreq_selfwhite_lowbd:4;
        RBus_UInt32  hfreq_centerdiff_slope:4;
        RBus_UInt32  hfreq_centerdiff_lowbd:4;
        RBus_UInt32  hfreq_sidediff_slope:4;
        RBus_UInt32  hfreq_sidediff_lowbd:4;
    };
}rgbw_d_rgbw_hfreq_mask_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bkmask_offset_w1_even:8;
        RBus_UInt32  bkmask_offset_w0_even:8;
        RBus_UInt32  bkmask_offset_k1:8;
        RBus_UInt32  bkmask_offset_k0:8;
    };
}rgbw_d_rgbw_hfreq_mask_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbgmode_cond_disp_delta:4;
        RBus_UInt32  dbgmode_cond_disp_min:4;
        RBus_UInt32  dbgmode_cond_disp_en:1;
        RBus_UInt32  dbgmode:3;
        RBus_UInt32  res1:3;
        RBus_UInt32  bkmask_cm_offset_en:1;
        RBus_UInt32  bkmask_offset_w1_odd:8;
        RBus_UInt32  bkmask_offset_w0_odd:8;
    };
}rgbw_d_rgbw_hfreq_mask_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pixel_rearrange_offset_value:8;
        RBus_UInt32  pixel_rearrange_offset_th:5;
        RBus_UInt32  res1:7;
        RBus_UInt32  rearrange_rem_odd_b:2;
        RBus_UInt32  rearrange_rem_odd_g:2;
        RBus_UInt32  rearrange_rem_odd_r:2;
        RBus_UInt32  rearrange_rem_even_b:2;
        RBus_UInt32  rearrange_rem_even_g:2;
        RBus_UInt32  rearrange_rem_even_r:2;
    };
}rgbw_d_rgbw_hfreq_mask_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bkmask_cm_offset_nxt_w4:8;
        RBus_UInt32  bkmask_cm_evenrow_1_rem:2;
        RBus_UInt32  bkmask_cm_oddrow_1_rem:2;
        RBus_UInt32  bkmask_cm_evenrow_2_rem:2;
        RBus_UInt32  bkmask_cm_oddrow_2_rem:2;
        RBus_UInt32  bkmask_cm_evenrow_3_rem:2;
        RBus_UInt32  bkmask_cm_oddrow_3_rem:2;
        RBus_UInt32  bkmask_cm_evenrow_4_rem:2;
        RBus_UInt32  bkmask_cm_oddrow_4_rem:2;
        RBus_UInt32  res1:8;
    };
}rgbw_d_rgbw_hfreq_mask_cm_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bkmask_cm_offset_nxt_b1:8;
        RBus_UInt32  bkmask_cm_offset_cur_g1:8;
        RBus_UInt32  bkmask_cm_offset_cur_r1:8;
        RBus_UInt32  bkmask_cm_offset_cur_w1:8;
    };
}rgbw_d_rgbw_hfreq_mask_cm_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bkmask_cm_offset_cur_w2:8;
        RBus_UInt32  bkmask_cm_offset_cur_b2:8;
        RBus_UInt32  bkmask_cm_offset_cur_g2:8;
        RBus_UInt32  bkmask_cm_offset_nxt_r1:8;
    };
}rgbw_d_rgbw_hfreq_mask_cm_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bkmask_cm_offset_nxt_g3:8;
        RBus_UInt32  bkmask_cm_offset_cur_r3:8;
        RBus_UInt32  bkmask_cm_offset_cur_w3:8;
        RBus_UInt32  bkmask_cm_offset_cur_b3:8;
    };
}rgbw_d_rgbw_hfreq_mask_cm_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bkmask_cm_offset_cur_b4:8;
        RBus_UInt32  bkmask_cm_offset_cur_g4:8;
        RBus_UInt32  bkmask_cm_offset_cur_r4:8;
        RBus_UInt32  bkmask_cm_offset_nxt_b3:8;
    };
}rgbw_d_rgbw_hfreq_mask_cm_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_apply:1;
        RBus_UInt32  db_read_level:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  res1:29;
    };
}rgbw_rgbw_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_width:22;
        RBus_UInt32  res1:8;
        RBus_UInt32  patgen_ch_num:1;
        RBus_UInt32  patgen_en:1;
    };
}rgbw_d_rgbw_patgen_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_odd_ch_order_r:2;
        RBus_UInt32  patgen_odd_ch_order_g:2;
        RBus_UInt32  patgen_odd_ch_order_b:2;
        RBus_UInt32  patgen_odd_ch_order_w:2;
        RBus_UInt32  patgen_even_ch_order_r:2;
        RBus_UInt32  patgen_even_ch_order_g:2;
        RBus_UInt32  patgen_even_ch_order_b:2;
        RBus_UInt32  patgen_even_ch_order_w:2;
        RBus_UInt32  dummy1802e7c4_31_16:16;
    };
}rgbw_d_rgbw_patgen_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c0_r_msb:8;
        RBus_UInt32  patgen_c0_g_msb:8;
        RBus_UInt32  patgen_c0_b_msb:8;
        RBus_UInt32  patgen_c0_w_msb:8;
    };
}rgbw_d_rgbw_patgen_color_c0_m_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c1_r_msb:8;
        RBus_UInt32  patgen_c1_g_msb:8;
        RBus_UInt32  patgen_c1_b_msb:8;
        RBus_UInt32  patgen_c1_w_msb:8;
    };
}rgbw_d_rgbw_patgen_color_c1_m_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c1_r_lsb:4;
        RBus_UInt32  patgen_c1_g_lsb:4;
        RBus_UInt32  patgen_c1_b_lsb:4;
        RBus_UInt32  patgen_c1_w_lsb:4;
        RBus_UInt32  patgen_c0_r_lsb:4;
        RBus_UInt32  patgen_c0_g_lsb:4;
        RBus_UInt32  patgen_c0_b_lsb:4;
        RBus_UInt32  patgen_c0_w_lsb:4;
    };
}rgbw_d_rgbw_patgen_color_c01_l_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c2_r_msb:8;
        RBus_UInt32  patgen_c2_g_msb:8;
        RBus_UInt32  patgen_c2_b_msb:8;
        RBus_UInt32  patgen_c2_w_msb:8;
    };
}rgbw_d_rgbw_patgen_color_c2_m_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c3_r_msb:8;
        RBus_UInt32  patgen_c3_g_msb:8;
        RBus_UInt32  patgen_c3_b_msb:8;
        RBus_UInt32  patgen_c3_w_msb:8;
    };
}rgbw_d_rgbw_patgen_color_c3_m_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c3_r_lsb:4;
        RBus_UInt32  patgen_c3_g_lsb:4;
        RBus_UInt32  patgen_c3_b_lsb:4;
        RBus_UInt32  patgen_c3_w_lsb:4;
        RBus_UInt32  patgen_c2_r_lsb:4;
        RBus_UInt32  patgen_c2_g_lsb:4;
        RBus_UInt32  patgen_c2_b_lsb:4;
        RBus_UInt32  patgen_c2_w_lsb:4;
    };
}rgbw_d_rgbw_patgen_color_c23_l_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c4_r_msb:8;
        RBus_UInt32  patgen_c4_g_msb:8;
        RBus_UInt32  patgen_c4_b_msb:8;
        RBus_UInt32  patgen_c4_w_msb:8;
    };
}rgbw_d_rgbw_patgen_color_c4_m_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c5_r_msb:8;
        RBus_UInt32  patgen_c5_g_msb:8;
        RBus_UInt32  patgen_c5_b_msb:8;
        RBus_UInt32  patgen_c5_w_msb:8;
    };
}rgbw_d_rgbw_patgen_color_c5_m_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c5_r_lsb:4;
        RBus_UInt32  patgen_c5_g_lsb:4;
        RBus_UInt32  patgen_c5_b_lsb:4;
        RBus_UInt32  patgen_c5_w_lsb:4;
        RBus_UInt32  patgen_c4_r_lsb:4;
        RBus_UInt32  patgen_c4_g_lsb:4;
        RBus_UInt32  patgen_c4_b_lsb:4;
        RBus_UInt32  patgen_c4_w_lsb:4;
    };
}rgbw_d_rgbw_patgen_color_c45_l_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c6_r_msb:8;
        RBus_UInt32  patgen_c6_g_msb:8;
        RBus_UInt32  patgen_c6_b_msb:8;
        RBus_UInt32  patgen_c6_w_msb:8;
    };
}rgbw_d_rgbw_patgen_color_c6_m_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c7_r_msb:8;
        RBus_UInt32  patgen_c7_g_msb:8;
        RBus_UInt32  patgen_c7_b_msb:8;
        RBus_UInt32  patgen_c7_w_msb:8;
    };
}rgbw_d_rgbw_patgen_color_c7_m_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  patgen_c7_r_lsb:4;
        RBus_UInt32  patgen_c7_g_lsb:4;
        RBus_UInt32  patgen_c7_b_lsb:4;
        RBus_UInt32  patgen_c7_w_lsb:4;
        RBus_UInt32  patgen_c6_r_lsb:4;
        RBus_UInt32  patgen_c6_g_lsb:4;
        RBus_UInt32  patgen_c6_b_lsb:4;
        RBus_UInt32  patgen_c6_w_lsb:4;
    };
}rgbw_d_rgbw_patgen_color_c67_l_RBUS;




#endif 


#endif 
