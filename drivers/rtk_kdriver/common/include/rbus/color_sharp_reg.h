/**
* @file Mac7p-DesignSpec-D-Domain_Sharpness
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_COLOR_SHARP_REG_H_
#define _RBUS_COLOR_SHARP_REG_H_

#include "rbus_types.h"



//  COLOR_SHARP Register Address
#define  COLOR_SHARP_DM_NR_SHP_CTRL                                             0x1802B500
#define  COLOR_SHARP_DM_NR_SHP_CTRL_reg_addr                                     "0xB802B500"
#define  COLOR_SHARP_DM_NR_SHP_CTRL_reg                                          0xB802B500
#define  COLOR_SHARP_DM_NR_SHP_CTRL_inst_addr                                    "0x0000"
#define  set_COLOR_SHARP_DM_NR_SHP_CTRL_reg(data)                                (*((volatile unsigned int*)COLOR_SHARP_DM_NR_SHP_CTRL_reg)=data)
#define  get_COLOR_SHARP_DM_NR_SHP_CTRL_reg                                      (*((volatile unsigned int*)COLOR_SHARP_DM_NR_SHP_CTRL_reg))
#define  COLOR_SHARP_DM_NR_SHP_CTRL_db_read_shift                                (12)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_db_en_shift                                  (11)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_db_load_shift                                (10)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_tex_emf_enable_shift                         (2)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_edg_emf_enable_shift                         (1)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_peaking_enable_shift                         (0)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_db_read_mask                                 (0x00001000)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_db_en_mask                                   (0x00000800)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_db_load_mask                                 (0x00000400)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_tex_emf_enable_mask                          (0x00000004)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_edg_emf_enable_mask                          (0x00000002)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_peaking_enable_mask                          (0x00000001)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_db_read(data)                                (0x00001000&((data)<<12))
#define  COLOR_SHARP_DM_NR_SHP_CTRL_db_en(data)                                  (0x00000800&((data)<<11))
#define  COLOR_SHARP_DM_NR_SHP_CTRL_db_load(data)                                (0x00000400&((data)<<10))
#define  COLOR_SHARP_DM_NR_SHP_CTRL_tex_emf_enable(data)                         (0x00000004&((data)<<2))
#define  COLOR_SHARP_DM_NR_SHP_CTRL_edg_emf_enable(data)                         (0x00000002&((data)<<1))
#define  COLOR_SHARP_DM_NR_SHP_CTRL_peaking_enable(data)                         (0x00000001&(data))
#define  COLOR_SHARP_DM_NR_SHP_CTRL_get_db_read(data)                            ((0x00001000&(data))>>12)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_get_db_en(data)                              ((0x00000800&(data))>>11)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_get_db_load(data)                            ((0x00000400&(data))>>10)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_get_tex_emf_enable(data)                     ((0x00000004&(data))>>2)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_get_edg_emf_enable(data)                     ((0x00000002&(data))>>1)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_get_peaking_enable(data)                     (0x00000001&(data))

#define  COLOR_SHARP_DM_NR_SHP_CTRL_5                                           0x1802B540
#define  COLOR_SHARP_DM_NR_SHP_CTRL_5_reg_addr                                   "0xB802B540"
#define  COLOR_SHARP_DM_NR_SHP_CTRL_5_reg                                        0xB802B540
#define  COLOR_SHARP_DM_NR_SHP_CTRL_5_inst_addr                                  "0x0001"
#define  set_COLOR_SHARP_DM_NR_SHP_CTRL_5_reg(data)                              (*((volatile unsigned int*)COLOR_SHARP_DM_NR_SHP_CTRL_5_reg)=data)
#define  get_COLOR_SHARP_DM_NR_SHP_CTRL_5_reg                                    (*((volatile unsigned int*)COLOR_SHARP_DM_NR_SHP_CTRL_5_reg))
#define  COLOR_SHARP_DM_NR_SHP_CTRL_5_db_read_shift                              (2)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_5_db_en_shift                                (1)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_5_db_load_shift                              (0)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_5_db_read_mask                               (0x00000004)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_5_db_en_mask                                 (0x00000002)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_5_db_load_mask                               (0x00000001)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_5_db_read(data)                              (0x00000004&((data)<<2))
#define  COLOR_SHARP_DM_NR_SHP_CTRL_5_db_en(data)                                (0x00000002&((data)<<1))
#define  COLOR_SHARP_DM_NR_SHP_CTRL_5_db_load(data)                              (0x00000001&(data))
#define  COLOR_SHARP_DM_NR_SHP_CTRL_5_get_db_read(data)                          ((0x00000004&(data))>>2)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_5_get_db_en(data)                            ((0x00000002&(data))>>1)
#define  COLOR_SHARP_DM_NR_SHP_CTRL_5_get_db_load(data)                          (0x00000001&(data))

#define  COLOR_SHARP_DM_MKIII_SHP_CTRL                                          0x1802B504
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_reg_addr                                  "0xB802B504"
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_reg                                       0xB802B504
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_inst_addr                                 "0x0002"
#define  set_COLOR_SHARP_DM_MKIII_SHP_CTRL_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_DM_MKIII_SHP_CTRL_reg)=data)
#define  get_COLOR_SHARP_DM_MKIII_SHP_CTRL_reg                                   (*((volatile unsigned int*)COLOR_SHARP_DM_MKIII_SHP_CTRL_reg))
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_seg_gain_debug_step_shift                 (10)
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_seg_gain_debug_mode_shift                 (7)
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_gain_by_y_en_shift                        (3)
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_lpf_weigh_en_shift                        (2)
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_max_min_gain_en_shift                     (1)
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_sharp_mkiii_debug_en_shift                (0)
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_seg_gain_debug_step_mask                  (0x00001C00)
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_seg_gain_debug_mode_mask                  (0x00000180)
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_gain_by_y_en_mask                         (0x00000008)
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_lpf_weigh_en_mask                         (0x00000004)
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_max_min_gain_en_mask                      (0x00000002)
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_sharp_mkiii_debug_en_mask                 (0x00000001)
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_seg_gain_debug_step(data)                 (0x00001C00&((data)<<10))
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_seg_gain_debug_mode(data)                 (0x00000180&((data)<<7))
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_gain_by_y_en(data)                        (0x00000008&((data)<<3))
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_lpf_weigh_en(data)                        (0x00000004&((data)<<2))
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_max_min_gain_en(data)                     (0x00000002&((data)<<1))
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_sharp_mkiii_debug_en(data)                (0x00000001&(data))
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_get_seg_gain_debug_step(data)             ((0x00001C00&(data))>>10)
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_get_seg_gain_debug_mode(data)             ((0x00000180&(data))>>7)
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_get_gain_by_y_en(data)                    ((0x00000008&(data))>>3)
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_get_lpf_weigh_en(data)                    ((0x00000004&(data))>>2)
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_get_max_min_gain_en(data)                 ((0x00000002&(data))>>1)
#define  COLOR_SHARP_DM_MKIII_SHP_CTRL_get_sharp_mkiii_debug_en(data)            (0x00000001&(data))

#define  COLOR_SHARP_DM_SEGPK_CTRL1                                             0x1802B508
#define  COLOR_SHARP_DM_SEGPK_CTRL1_reg_addr                                     "0xB802B508"
#define  COLOR_SHARP_DM_SEGPK_CTRL1_reg                                          0xB802B508
#define  COLOR_SHARP_DM_SEGPK_CTRL1_inst_addr                                    "0x0003"
#define  set_COLOR_SHARP_DM_SEGPK_CTRL1_reg(data)                                (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_CTRL1_reg)=data)
#define  get_COLOR_SHARP_DM_SEGPK_CTRL1_reg                                      (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_CTRL1_reg))
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edg_tex_blending_lpf_filter_en_shift         (28)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edg_tex_blending_lpf_filter_shift            (26)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_enhance_mode_shift                           (24)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edgextrange_v_shift                          (23)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edgextrange_shift                            (20)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edg_dlti_shift                               (19)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_sobel_stepbit_shift                          (16)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_sobel_upbnd_shift                            (8)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_sobelmode_shift                              (7)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edgmode_shift                                (5)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_texpk_en_shift                               (4)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edgpk_en_shift                               (3)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edgext_en_shift                              (2)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_segpk_mode_shift                             (0)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edg_tex_blending_lpf_filter_en_mask          (0x10000000)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edg_tex_blending_lpf_filter_mask             (0x0C000000)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_enhance_mode_mask                            (0x03000000)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edgextrange_v_mask                           (0x00800000)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edgextrange_mask                             (0x00700000)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edg_dlti_mask                                (0x00080000)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_sobel_stepbit_mask                           (0x00070000)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_sobel_upbnd_mask                             (0x0000FF00)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_sobelmode_mask                               (0x00000080)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edgmode_mask                                 (0x00000060)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_texpk_en_mask                                (0x00000010)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edgpk_en_mask                                (0x00000008)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edgext_en_mask                               (0x00000004)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_segpk_mode_mask                              (0x00000003)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edg_tex_blending_lpf_filter_en(data)         (0x10000000&((data)<<28))
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edg_tex_blending_lpf_filter(data)            (0x0C000000&((data)<<26))
#define  COLOR_SHARP_DM_SEGPK_CTRL1_enhance_mode(data)                           (0x03000000&((data)<<24))
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edgextrange_v(data)                          (0x00800000&((data)<<23))
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edgextrange(data)                            (0x00700000&((data)<<20))
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edg_dlti(data)                               (0x00080000&((data)<<19))
#define  COLOR_SHARP_DM_SEGPK_CTRL1_sobel_stepbit(data)                          (0x00070000&((data)<<16))
#define  COLOR_SHARP_DM_SEGPK_CTRL1_sobel_upbnd(data)                            (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_SEGPK_CTRL1_sobelmode(data)                              (0x00000080&((data)<<7))
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edgmode(data)                                (0x00000060&((data)<<5))
#define  COLOR_SHARP_DM_SEGPK_CTRL1_texpk_en(data)                               (0x00000010&((data)<<4))
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edgpk_en(data)                               (0x00000008&((data)<<3))
#define  COLOR_SHARP_DM_SEGPK_CTRL1_edgext_en(data)                              (0x00000004&((data)<<2))
#define  COLOR_SHARP_DM_SEGPK_CTRL1_segpk_mode(data)                             (0x00000003&(data))
#define  COLOR_SHARP_DM_SEGPK_CTRL1_get_edg_tex_blending_lpf_filter_en(data)     ((0x10000000&(data))>>28)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_get_edg_tex_blending_lpf_filter(data)        ((0x0C000000&(data))>>26)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_get_enhance_mode(data)                       ((0x03000000&(data))>>24)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_get_edgextrange_v(data)                      ((0x00800000&(data))>>23)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_get_edgextrange(data)                        ((0x00700000&(data))>>20)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_get_edg_dlti(data)                           ((0x00080000&(data))>>19)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_get_sobel_stepbit(data)                      ((0x00070000&(data))>>16)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_get_sobel_upbnd(data)                        ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_get_sobelmode(data)                          ((0x00000080&(data))>>7)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_get_edgmode(data)                            ((0x00000060&(data))>>5)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_get_texpk_en(data)                           ((0x00000010&(data))>>4)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_get_edgpk_en(data)                           ((0x00000008&(data))>>3)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_get_edgext_en(data)                          ((0x00000004&(data))>>2)
#define  COLOR_SHARP_DM_SEGPK_CTRL1_get_segpk_mode(data)                         (0x00000003&(data))

#define  COLOR_SHARP_DM_SEGPK_CTRL2                                             0x1802B50C
#define  COLOR_SHARP_DM_SEGPK_CTRL2_reg_addr                                     "0xB802B50C"
#define  COLOR_SHARP_DM_SEGPK_CTRL2_reg                                          0xB802B50C
#define  COLOR_SHARP_DM_SEGPK_CTRL2_inst_addr                                    "0x0004"
#define  set_COLOR_SHARP_DM_SEGPK_CTRL2_reg(data)                                (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_CTRL2_reg)=data)
#define  get_COLOR_SHARP_DM_SEGPK_CTRL2_reg                                      (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_CTRL2_reg))
#define  COLOR_SHARP_DM_SEGPK_CTRL2_sobelrange_h_shift                           (21)
#define  COLOR_SHARP_DM_SEGPK_CTRL2_sobelrange_v_shift                           (20)
#define  COLOR_SHARP_DM_SEGPK_CTRL2_pkdlti_comsign_shift                         (16)
#define  COLOR_SHARP_DM_SEGPK_CTRL2_zigsftbit_reg_shift                          (12)
#define  COLOR_SHARP_DM_SEGPK_CTRL2_zdiff_stepbit_shift                          (8)
#define  COLOR_SHARP_DM_SEGPK_CTRL2_zdiff_upbnd_shift                            (0)
#define  COLOR_SHARP_DM_SEGPK_CTRL2_sobelrange_h_mask                            (0x00600000)
#define  COLOR_SHARP_DM_SEGPK_CTRL2_sobelrange_v_mask                            (0x00100000)
#define  COLOR_SHARP_DM_SEGPK_CTRL2_pkdlti_comsign_mask                          (0x00070000)
#define  COLOR_SHARP_DM_SEGPK_CTRL2_zigsftbit_reg_mask                           (0x00003000)
#define  COLOR_SHARP_DM_SEGPK_CTRL2_zdiff_stepbit_mask                           (0x00000700)
#define  COLOR_SHARP_DM_SEGPK_CTRL2_zdiff_upbnd_mask                             (0x000000FF)
#define  COLOR_SHARP_DM_SEGPK_CTRL2_sobelrange_h(data)                           (0x00600000&((data)<<21))
#define  COLOR_SHARP_DM_SEGPK_CTRL2_sobelrange_v(data)                           (0x00100000&((data)<<20))
#define  COLOR_SHARP_DM_SEGPK_CTRL2_pkdlti_comsign(data)                         (0x00070000&((data)<<16))
#define  COLOR_SHARP_DM_SEGPK_CTRL2_zigsftbit_reg(data)                          (0x00003000&((data)<<12))
#define  COLOR_SHARP_DM_SEGPK_CTRL2_zdiff_stepbit(data)                          (0x00000700&((data)<<8))
#define  COLOR_SHARP_DM_SEGPK_CTRL2_zdiff_upbnd(data)                            (0x000000FF&(data))
#define  COLOR_SHARP_DM_SEGPK_CTRL2_get_sobelrange_h(data)                       ((0x00600000&(data))>>21)
#define  COLOR_SHARP_DM_SEGPK_CTRL2_get_sobelrange_v(data)                       ((0x00100000&(data))>>20)
#define  COLOR_SHARP_DM_SEGPK_CTRL2_get_pkdlti_comsign(data)                     ((0x00070000&(data))>>16)
#define  COLOR_SHARP_DM_SEGPK_CTRL2_get_zigsftbit_reg(data)                      ((0x00003000&(data))>>12)
#define  COLOR_SHARP_DM_SEGPK_CTRL2_get_zdiff_stepbit(data)                      ((0x00000700&(data))>>8)
#define  COLOR_SHARP_DM_SEGPK_CTRL2_get_zdiff_upbnd(data)                        (0x000000FF&(data))

#define  COLOR_SHARP_DM_SEGPK_CTRL3                                             0x1802B510
#define  COLOR_SHARP_DM_SEGPK_CTRL3_reg_addr                                     "0xB802B510"
#define  COLOR_SHARP_DM_SEGPK_CTRL3_reg                                          0xB802B510
#define  COLOR_SHARP_DM_SEGPK_CTRL3_inst_addr                                    "0x0005"
#define  set_COLOR_SHARP_DM_SEGPK_CTRL3_reg(data)                                (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_CTRL3_reg)=data)
#define  get_COLOR_SHARP_DM_SEGPK_CTRL3_reg                                      (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_CTRL3_reg))
#define  COLOR_SHARP_DM_SEGPK_CTRL3_small_th1_shift                              (15)
#define  COLOR_SHARP_DM_SEGPK_CTRL3_tex_en_shift                                 (14)
#define  COLOR_SHARP_DM_SEGPK_CTRL3_tex_stepbit_shift                            (8)
#define  COLOR_SHARP_DM_SEGPK_CTRL3_tex_upbnd_shift                              (0)
#define  COLOR_SHARP_DM_SEGPK_CTRL3_small_th1_mask                               (0x003F8000)
#define  COLOR_SHARP_DM_SEGPK_CTRL3_tex_en_mask                                  (0x00004000)
#define  COLOR_SHARP_DM_SEGPK_CTRL3_tex_stepbit_mask                             (0x00000700)
#define  COLOR_SHARP_DM_SEGPK_CTRL3_tex_upbnd_mask                               (0x000000FF)
#define  COLOR_SHARP_DM_SEGPK_CTRL3_small_th1(data)                              (0x003F8000&((data)<<15))
#define  COLOR_SHARP_DM_SEGPK_CTRL3_tex_en(data)                                 (0x00004000&((data)<<14))
#define  COLOR_SHARP_DM_SEGPK_CTRL3_tex_stepbit(data)                            (0x00000700&((data)<<8))
#define  COLOR_SHARP_DM_SEGPK_CTRL3_tex_upbnd(data)                              (0x000000FF&(data))
#define  COLOR_SHARP_DM_SEGPK_CTRL3_get_small_th1(data)                          ((0x003F8000&(data))>>15)
#define  COLOR_SHARP_DM_SEGPK_CTRL3_get_tex_en(data)                             ((0x00004000&(data))>>14)
#define  COLOR_SHARP_DM_SEGPK_CTRL3_get_tex_stepbit(data)                        ((0x00000700&(data))>>8)
#define  COLOR_SHARP_DM_SEGPK_CTRL3_get_tex_upbnd(data)                          (0x000000FF&(data))

#define  COLOR_SHARP_DM_SEGPK_DBG                                               0x1802B51C
#define  COLOR_SHARP_DM_SEGPK_DBG_reg_addr                                       "0xB802B51C"
#define  COLOR_SHARP_DM_SEGPK_DBG_reg                                            0xB802B51C
#define  COLOR_SHARP_DM_SEGPK_DBG_inst_addr                                      "0x0006"
#define  set_COLOR_SHARP_DM_SEGPK_DBG_reg(data)                                  (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_DBG_reg)=data)
#define  get_COLOR_SHARP_DM_SEGPK_DBG_reg                                        (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_DBG_reg))
#define  COLOR_SHARP_DM_SEGPK_DBG_debugmode_shift                                (0)
#define  COLOR_SHARP_DM_SEGPK_DBG_debugmode_mask                                 (0x00000007)
#define  COLOR_SHARP_DM_SEGPK_DBG_debugmode(data)                                (0x00000007&(data))
#define  COLOR_SHARP_DM_SEGPK_DBG_get_debugmode(data)                            (0x00000007&(data))

#define  COLOR_SHARP_DM_PEAKING_GAIN                                            0x1802B524
#define  COLOR_SHARP_DM_PEAKING_GAIN_reg_addr                                    "0xB802B524"
#define  COLOR_SHARP_DM_PEAKING_GAIN_reg                                         0xB802B524
#define  COLOR_SHARP_DM_PEAKING_GAIN_inst_addr                                   "0x0007"
#define  set_COLOR_SHARP_DM_PEAKING_GAIN_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_DM_PEAKING_GAIN_reg)=data)
#define  get_COLOR_SHARP_DM_PEAKING_GAIN_reg                                     (*((volatile unsigned int*)COLOR_SHARP_DM_PEAKING_GAIN_reg))
#define  COLOR_SHARP_DM_PEAKING_GAIN_gain_pos2_shift                             (30)
#define  COLOR_SHARP_DM_PEAKING_GAIN_gain_neg2_shift                             (28)
#define  COLOR_SHARP_DM_PEAKING_GAIN_tex_d2_shift_bit_shift                      (24)
#define  COLOR_SHARP_DM_PEAKING_GAIN_gain_pos_shift                              (8)
#define  COLOR_SHARP_DM_PEAKING_GAIN_gain_neg_shift                              (0)
#define  COLOR_SHARP_DM_PEAKING_GAIN_gain_pos2_mask                              (0xC0000000)
#define  COLOR_SHARP_DM_PEAKING_GAIN_gain_neg2_mask                              (0x30000000)
#define  COLOR_SHARP_DM_PEAKING_GAIN_tex_d2_shift_bit_mask                       (0x03000000)
#define  COLOR_SHARP_DM_PEAKING_GAIN_gain_pos_mask                               (0x0000FF00)
#define  COLOR_SHARP_DM_PEAKING_GAIN_gain_neg_mask                               (0x000000FF)
#define  COLOR_SHARP_DM_PEAKING_GAIN_gain_pos2(data)                             (0xC0000000&((data)<<30))
#define  COLOR_SHARP_DM_PEAKING_GAIN_gain_neg2(data)                             (0x30000000&((data)<<28))
#define  COLOR_SHARP_DM_PEAKING_GAIN_tex_d2_shift_bit(data)                      (0x03000000&((data)<<24))
#define  COLOR_SHARP_DM_PEAKING_GAIN_gain_pos(data)                              (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_PEAKING_GAIN_gain_neg(data)                              (0x000000FF&(data))
#define  COLOR_SHARP_DM_PEAKING_GAIN_get_gain_pos2(data)                         ((0xC0000000&(data))>>30)
#define  COLOR_SHARP_DM_PEAKING_GAIN_get_gain_neg2(data)                         ((0x30000000&(data))>>28)
#define  COLOR_SHARP_DM_PEAKING_GAIN_get_tex_d2_shift_bit(data)                  ((0x03000000&(data))>>24)
#define  COLOR_SHARP_DM_PEAKING_GAIN_get_gain_pos(data)                          ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_PEAKING_GAIN_get_gain_neg(data)                          (0x000000FF&(data))

#define  COLOR_SHARP_DM_PEAKING_BOUND_1                                         0x1802B528
#define  COLOR_SHARP_DM_PEAKING_BOUND_1_reg_addr                                 "0xB802B528"
#define  COLOR_SHARP_DM_PEAKING_BOUND_1_reg                                      0xB802B528
#define  COLOR_SHARP_DM_PEAKING_BOUND_1_inst_addr                                "0x0008"
#define  set_COLOR_SHARP_DM_PEAKING_BOUND_1_reg(data)                            (*((volatile unsigned int*)COLOR_SHARP_DM_PEAKING_BOUND_1_reg)=data)
#define  get_COLOR_SHARP_DM_PEAKING_BOUND_1_reg                                  (*((volatile unsigned int*)COLOR_SHARP_DM_PEAKING_BOUND_1_reg))
#define  COLOR_SHARP_DM_PEAKING_BOUND_1_hv_pos_shift                             (18)
#define  COLOR_SHARP_DM_PEAKING_BOUND_1_hv_neg_shift                             (8)
#define  COLOR_SHARP_DM_PEAKING_BOUND_1_lv_shift                                 (0)
#define  COLOR_SHARP_DM_PEAKING_BOUND_1_hv_pos_mask                              (0x0FFC0000)
#define  COLOR_SHARP_DM_PEAKING_BOUND_1_hv_neg_mask                              (0x0003FF00)
#define  COLOR_SHARP_DM_PEAKING_BOUND_1_lv_mask                                  (0x000000FF)
#define  COLOR_SHARP_DM_PEAKING_BOUND_1_hv_pos(data)                             (0x0FFC0000&((data)<<18))
#define  COLOR_SHARP_DM_PEAKING_BOUND_1_hv_neg(data)                             (0x0003FF00&((data)<<8))
#define  COLOR_SHARP_DM_PEAKING_BOUND_1_lv(data)                                 (0x000000FF&(data))
#define  COLOR_SHARP_DM_PEAKING_BOUND_1_get_hv_pos(data)                         ((0x0FFC0000&(data))>>18)
#define  COLOR_SHARP_DM_PEAKING_BOUND_1_get_hv_neg(data)                         ((0x0003FF00&(data))>>8)
#define  COLOR_SHARP_DM_PEAKING_BOUND_1_get_lv(data)                             (0x000000FF&(data))

#define  COLOR_SHARP_DM_PEAKING_BOUND_0                                         0x1802B52C
#define  COLOR_SHARP_DM_PEAKING_BOUND_0_reg_addr                                 "0xB802B52C"
#define  COLOR_SHARP_DM_PEAKING_BOUND_0_reg                                      0xB802B52C
#define  COLOR_SHARP_DM_PEAKING_BOUND_0_inst_addr                                "0x0009"
#define  set_COLOR_SHARP_DM_PEAKING_BOUND_0_reg(data)                            (*((volatile unsigned int*)COLOR_SHARP_DM_PEAKING_BOUND_0_reg)=data)
#define  get_COLOR_SHARP_DM_PEAKING_BOUND_0_reg                                  (*((volatile unsigned int*)COLOR_SHARP_DM_PEAKING_BOUND_0_reg))
#define  COLOR_SHARP_DM_PEAKING_BOUND_0_lv2_shift                                (0)
#define  COLOR_SHARP_DM_PEAKING_BOUND_0_lv2_mask                                 (0x000000FF)
#define  COLOR_SHARP_DM_PEAKING_BOUND_0_lv2(data)                                (0x000000FF&(data))
#define  COLOR_SHARP_DM_PEAKING_BOUND_0_get_lv2(data)                            (0x000000FF&(data))

#define  COLOR_SHARP_DM_PEAKING_LVD                                             0x1802B9F8
#define  COLOR_SHARP_DM_PEAKING_LVD_reg_addr                                     "0xB802B9F8"
#define  COLOR_SHARP_DM_PEAKING_LVD_reg                                          0xB802B9F8
#define  COLOR_SHARP_DM_PEAKING_LVD_inst_addr                                    "0x000A"
#define  set_COLOR_SHARP_DM_PEAKING_LVD_reg(data)                                (*((volatile unsigned int*)COLOR_SHARP_DM_PEAKING_LVD_reg)=data)
#define  get_COLOR_SHARP_DM_PEAKING_LVD_reg                                      (*((volatile unsigned int*)COLOR_SHARP_DM_PEAKING_LVD_reg))
#define  COLOR_SHARP_DM_PEAKING_LVD_range_shift                                  (24)
#define  COLOR_SHARP_DM_PEAKING_LVD_gaim_shift                                   (16)
#define  COLOR_SHARP_DM_PEAKING_LVD_gain_shift                                   (8)
#define  COLOR_SHARP_DM_PEAKING_LVD_range_mask                                   (0x0F000000)
#define  COLOR_SHARP_DM_PEAKING_LVD_gaim_mask                                    (0x00FF0000)
#define  COLOR_SHARP_DM_PEAKING_LVD_gain_mask                                    (0x0000FF00)
#define  COLOR_SHARP_DM_PEAKING_LVD_range(data)                                  (0x0F000000&((data)<<24))
#define  COLOR_SHARP_DM_PEAKING_LVD_gaim(data)                                   (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_DM_PEAKING_LVD_gain(data)                                   (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_PEAKING_LVD_get_range(data)                              ((0x0F000000&(data))>>24)
#define  COLOR_SHARP_DM_PEAKING_LVD_get_gaim(data)                               ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_DM_PEAKING_LVD_get_gain(data)                               ((0x0000FF00&(data))>>8)

#define  COLOR_SHARP_DM_2D_SHP_TEX_0                                            0x1802B530
#define  COLOR_SHARP_DM_2D_SHP_TEX_0_reg_addr                                    "0xB802B530"
#define  COLOR_SHARP_DM_2D_SHP_TEX_0_reg                                         0xB802B530
#define  COLOR_SHARP_DM_2D_SHP_TEX_0_inst_addr                                   "0x000B"
#define  set_COLOR_SHARP_DM_2D_SHP_TEX_0_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_TEX_0_reg)=data)
#define  get_COLOR_SHARP_DM_2D_SHP_TEX_0_reg                                     (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_TEX_0_reg))
#define  COLOR_SHARP_DM_2D_SHP_TEX_0_coef_c0_0_shift                             (16)
#define  COLOR_SHARP_DM_2D_SHP_TEX_0_coef_c1_0_shift                             (8)
#define  COLOR_SHARP_DM_2D_SHP_TEX_0_coef_c2_0_shift                             (0)
#define  COLOR_SHARP_DM_2D_SHP_TEX_0_coef_c0_0_mask                              (0x03FF0000)
#define  COLOR_SHARP_DM_2D_SHP_TEX_0_coef_c1_0_mask                              (0x0000FF00)
#define  COLOR_SHARP_DM_2D_SHP_TEX_0_coef_c2_0_mask                              (0x000000FF)
#define  COLOR_SHARP_DM_2D_SHP_TEX_0_coef_c0_0(data)                             (0x03FF0000&((data)<<16))
#define  COLOR_SHARP_DM_2D_SHP_TEX_0_coef_c1_0(data)                             (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_2D_SHP_TEX_0_coef_c2_0(data)                             (0x000000FF&(data))
#define  COLOR_SHARP_DM_2D_SHP_TEX_0_get_coef_c0_0(data)                         ((0x03FF0000&(data))>>16)
#define  COLOR_SHARP_DM_2D_SHP_TEX_0_get_coef_c1_0(data)                         ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_2D_SHP_TEX_0_get_coef_c2_0(data)                         (0x000000FF&(data))

#define  COLOR_SHARP_DM_2D_SHP_TEX_1                                            0x1802B534
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_reg_addr                                    "0xB802B534"
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_reg                                         0xB802B534
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_inst_addr                                   "0x000C"
#define  set_COLOR_SHARP_DM_2D_SHP_TEX_1_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_TEX_1_reg)=data)
#define  get_COLOR_SHARP_DM_2D_SHP_TEX_1_reg                                     (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_TEX_1_reg))
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_coef_c3_0_shift                             (24)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_coef_c4_0_shift                             (16)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_coef_c5_0_shift                             (8)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_coef_c6_0_shift                             (0)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_coef_c3_0_mask                              (0xFF000000)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_coef_c4_0_mask                              (0x00FF0000)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_coef_c5_0_mask                              (0x0000FF00)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_coef_c6_0_mask                              (0x000000FF)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_coef_c3_0(data)                             (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_coef_c4_0(data)                             (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_coef_c5_0(data)                             (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_coef_c6_0(data)                             (0x000000FF&(data))
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_get_coef_c3_0(data)                         ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_get_coef_c4_0(data)                         ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_get_coef_c5_0(data)                         ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_get_coef_c6_0(data)                         (0x000000FF&(data))

#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1                                          0x1802B538
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_reg_addr                                  "0xB802B538"
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_reg                                       0xB802B538
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_inst_addr                                 "0x000D"
#define  set_COLOR_SHARP_DM_2D_SHP_TEX_1_1_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_TEX_1_1_reg)=data)
#define  get_COLOR_SHARP_DM_2D_SHP_TEX_1_1_reg                                   (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_TEX_1_1_reg))
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_coef_c7_0_shift                           (24)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_coef_c8_0_shift                           (16)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_coef_c9_0_shift                           (8)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_coef_c10_0_shift                          (0)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_coef_c7_0_mask                            (0xFF000000)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_coef_c8_0_mask                            (0x00FF0000)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_coef_c9_0_mask                            (0x0000FF00)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_coef_c10_0_mask                           (0x000000FF)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_coef_c7_0(data)                           (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_coef_c8_0(data)                           (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_coef_c9_0(data)                           (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_coef_c10_0(data)                          (0x000000FF&(data))
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_get_coef_c7_0(data)                       ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_get_coef_c8_0(data)                       ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_get_coef_c9_0(data)                       ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_2D_SHP_TEX_1_1_get_coef_c10_0(data)                      (0x000000FF&(data))

#define  COLOR_SHARP_DM_2D_SHP_TEX_2                                            0x1802B558
#define  COLOR_SHARP_DM_2D_SHP_TEX_2_reg_addr                                    "0xB802B558"
#define  COLOR_SHARP_DM_2D_SHP_TEX_2_reg                                         0xB802B558
#define  COLOR_SHARP_DM_2D_SHP_TEX_2_inst_addr                                   "0x000E"
#define  set_COLOR_SHARP_DM_2D_SHP_TEX_2_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_TEX_2_reg)=data)
#define  get_COLOR_SHARP_DM_2D_SHP_TEX_2_reg                                     (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_TEX_2_reg))
#define  COLOR_SHARP_DM_2D_SHP_TEX_2_coef_c0_1_shift                             (24)
#define  COLOR_SHARP_DM_2D_SHP_TEX_2_coef_c0_1_mask                              (0xFF000000)
#define  COLOR_SHARP_DM_2D_SHP_TEX_2_coef_c0_1(data)                             (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_2D_SHP_TEX_2_get_coef_c0_1(data)                         ((0xFF000000&(data))>>24)

#define  COLOR_SHARP_DM_2D_SHP_TEX_4                                            0x1802B57C
#define  COLOR_SHARP_DM_2D_SHP_TEX_4_reg_addr                                    "0xB802B57C"
#define  COLOR_SHARP_DM_2D_SHP_TEX_4_reg                                         0xB802B57C
#define  COLOR_SHARP_DM_2D_SHP_TEX_4_inst_addr                                   "0x000F"
#define  set_COLOR_SHARP_DM_2D_SHP_TEX_4_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_TEX_4_reg)=data)
#define  get_COLOR_SHARP_DM_2D_SHP_TEX_4_reg                                     (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_TEX_4_reg))
#define  COLOR_SHARP_DM_2D_SHP_TEX_4_coef_c0_2_shift                             (24)
#define  COLOR_SHARP_DM_2D_SHP_TEX_4_coef_c0_2_mask                              (0xFF000000)
#define  COLOR_SHARP_DM_2D_SHP_TEX_4_coef_c0_2(data)                             (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_2D_SHP_TEX_4_get_coef_c0_2(data)                         ((0xFF000000&(data))>>24)

#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE                                     0x1802B5E4
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_reg_addr                             "0xB802B5E4"
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_reg                                  0xB802B5E4
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_inst_addr                            "0x0010"
#define  set_COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_reg(data)                        (*((volatile unsigned int*)COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_reg)=data)
#define  get_COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_reg                              (*((volatile unsigned int*)COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_reg))
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_seg0_offset_shift                    (20)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_seg2_gain_sel_shift                  (16)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_seg1_gain_sel_shift                  (12)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_seg0_gain_sel_shift                  (8)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_emf_range_force_v_5tap_shift         (7)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_emf_range_force_h_11tap_shift        (6)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_emf_range_shift                      (4)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_emf_shift_shift                      (1)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_seg0_offset_mask                     (0x7FF00000)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_seg2_gain_sel_mask                   (0x00070000)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_seg1_gain_sel_mask                   (0x00007000)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_seg0_gain_sel_mask                   (0x00000700)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_emf_range_force_v_5tap_mask          (0x00000080)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_emf_range_force_h_11tap_mask         (0x00000040)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_emf_range_mask                       (0x00000030)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_emf_shift_mask                       (0x0000000E)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_seg0_offset(data)                    (0x7FF00000&((data)<<20))
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_seg2_gain_sel(data)                  (0x00070000&((data)<<16))
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_seg1_gain_sel(data)                  (0x00007000&((data)<<12))
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_seg0_gain_sel(data)                  (0x00000700&((data)<<8))
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_emf_range_force_v_5tap(data)         (0x00000080&((data)<<7))
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_emf_range_force_h_11tap(data)        (0x00000040&((data)<<6))
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_emf_range(data)                      (0x00000030&((data)<<4))
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_emf_shift(data)                      (0x0000000E&((data)<<1))
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_get_seg0_offset(data)                ((0x7FF00000&(data))>>20)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_get_seg2_gain_sel(data)              ((0x00070000&(data))>>16)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_get_seg1_gain_sel(data)              ((0x00007000&(data))>>12)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_get_seg0_gain_sel(data)              ((0x00000700&(data))>>8)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_get_emf_range_force_v_5tap(data)     ((0x00000080&(data))>>7)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_get_emf_range_force_h_11tap(data)    ((0x00000040&(data))>>6)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_get_emf_range(data)                  ((0x00000030&(data))>>4)
#define  COLOR_SHARP_DM_PEAKING_EMF_TEXTURE_get_emf_shift(data)                  ((0x0000000E&(data))>>1)

#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE                                     0x1802B5E8
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_reg_addr                             "0xB802B5E8"
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_reg                                  0xB802B5E8
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_inst_addr                            "0x0011"
#define  set_COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_reg(data)                        (*((volatile unsigned int*)COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_reg)=data)
#define  get_COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_reg                              (*((volatile unsigned int*)COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_reg))
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_declinebit_shift                     (24)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_blendstepbit_shift                   (20)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_lowbnd_shift                         (8)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_blend_wt_shift                       (4)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_aov_range_shift                      (2)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_emf_mk2_debug_shift                  (1)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_emf_mode_sel_shift                   (0)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_declinebit_mask                      (0x03000000)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_blendstepbit_mask                    (0x00700000)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_lowbnd_mask                          (0x0003FF00)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_blend_wt_mask                        (0x000000F0)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_aov_range_mask                       (0x00000004)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_emf_mk2_debug_mask                   (0x00000002)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_emf_mode_sel_mask                    (0x00000001)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_declinebit(data)                     (0x03000000&((data)<<24))
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_blendstepbit(data)                   (0x00700000&((data)<<20))
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_lowbnd(data)                         (0x0003FF00&((data)<<8))
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_blend_wt(data)                       (0x000000F0&((data)<<4))
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_aov_range(data)                      (0x00000004&((data)<<2))
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_emf_mk2_debug(data)                  (0x00000002&((data)<<1))
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_emf_mode_sel(data)                   (0x00000001&(data))
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_get_declinebit(data)                 ((0x03000000&(data))>>24)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_get_blendstepbit(data)               ((0x00700000&(data))>>20)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_get_lowbnd(data)                     ((0x0003FF00&(data))>>8)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_get_blend_wt(data)                   ((0x000000F0&(data))>>4)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_get_aov_range(data)                  ((0x00000004&(data))>>2)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_get_emf_mk2_debug(data)              ((0x00000002&(data))>>1)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_TEXTURE_get_emf_mode_sel(data)               (0x00000001&(data))

#define  COLOR_SHARP_DM_EMF_EXT_0_TEXTURE                                       0x1802B5EC
#define  COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_reg_addr                               "0xB802B5EC"
#define  COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_reg                                    0xB802B5EC
#define  COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_inst_addr                              "0x0012"
#define  set_COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_reg)=data)
#define  get_COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_reg))
#define  COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_seg1_offset_shift                      (16)
#define  COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_emf_fixextent_pos_shift                (8)
#define  COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_emf_fixextent_neg_shift                (0)
#define  COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_seg1_offset_mask                       (0x07FF0000)
#define  COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_emf_fixextent_pos_mask                 (0x0000FF00)
#define  COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_emf_fixextent_neg_mask                 (0x000000FF)
#define  COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_seg1_offset(data)                      (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_emf_fixextent_pos(data)                (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_emf_fixextent_neg(data)                (0x000000FF&(data))
#define  COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_get_seg1_offset(data)                  ((0x07FF0000&(data))>>16)
#define  COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_get_emf_fixextent_pos(data)            ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_EMF_EXT_0_TEXTURE_get_emf_fixextent_neg(data)            (0x000000FF&(data))

#define  COLOR_SHARP_DM_EMF_EXT_1_TEXTURE                                       0x1802B5F0
#define  COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_reg_addr                               "0xB802B5F0"
#define  COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_reg                                    0xB802B5F0
#define  COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_inst_addr                              "0x0013"
#define  set_COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_reg)=data)
#define  get_COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_reg))
#define  COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_seg1_x_shift                           (22)
#define  COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_seg0_x_shift                           (12)
#define  COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_seg2_offset_shift                      (0)
#define  COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_seg1_x_mask                            (0xFFC00000)
#define  COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_seg0_x_mask                            (0x003FF000)
#define  COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_seg2_offset_mask                       (0x000007FF)
#define  COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_seg1_x(data)                           (0xFFC00000&((data)<<22))
#define  COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_seg0_x(data)                           (0x003FF000&((data)<<12))
#define  COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_seg2_offset(data)                      (0x000007FF&(data))
#define  COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_get_seg1_x(data)                       ((0xFFC00000&(data))>>22)
#define  COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_get_seg0_x(data)                       ((0x003FF000&(data))>>12)
#define  COLOR_SHARP_DM_EMF_EXT_1_TEXTURE_get_seg2_offset(data)                  (0x000007FF&(data))

#define  COLOR_SHARP_DM_SEGPK_EDGPK3                                            0x1802B650
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_reg_addr                                    "0xB802B650"
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_reg                                         0xB802B650
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_inst_addr                                   "0x0014"
#define  set_COLOR_SHARP_DM_SEGPK_EDGPK3_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_EDGPK3_reg)=data)
#define  get_COLOR_SHARP_DM_SEGPK_EDGPK3_reg                                     (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_EDGPK3_reg))
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_gain_pos2_shift                             (30)
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_gain_neg2_shift                             (28)
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_edg_d2_shift_bit_shift                      (24)
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_gain_pos_shift                              (8)
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_gain_neg_shift                              (0)
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_gain_pos2_mask                              (0xC0000000)
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_gain_neg2_mask                              (0x30000000)
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_edg_d2_shift_bit_mask                       (0x03000000)
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_gain_pos_mask                               (0x0000FF00)
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_gain_neg_mask                               (0x000000FF)
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_gain_pos2(data)                             (0xC0000000&((data)<<30))
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_gain_neg2(data)                             (0x30000000&((data)<<28))
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_edg_d2_shift_bit(data)                      (0x03000000&((data)<<24))
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_gain_pos(data)                              (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_gain_neg(data)                              (0x000000FF&(data))
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_get_gain_pos2(data)                         ((0xC0000000&(data))>>30)
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_get_gain_neg2(data)                         ((0x30000000&(data))>>28)
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_get_edg_d2_shift_bit(data)                  ((0x03000000&(data))>>24)
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_get_gain_pos(data)                          ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_SEGPK_EDGPK3_get_gain_neg(data)                          (0x000000FF&(data))

#define  COLOR_SHARP_DM_SEGPK_EDGPK4                                            0x1802B654
#define  COLOR_SHARP_DM_SEGPK_EDGPK4_reg_addr                                    "0xB802B654"
#define  COLOR_SHARP_DM_SEGPK_EDGPK4_reg                                         0xB802B654
#define  COLOR_SHARP_DM_SEGPK_EDGPK4_inst_addr                                   "0x0015"
#define  set_COLOR_SHARP_DM_SEGPK_EDGPK4_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_EDGPK4_reg)=data)
#define  get_COLOR_SHARP_DM_SEGPK_EDGPK4_reg                                     (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_EDGPK4_reg))
#define  COLOR_SHARP_DM_SEGPK_EDGPK4_hv_pos_shift                                (18)
#define  COLOR_SHARP_DM_SEGPK_EDGPK4_hv_neg_shift                                (8)
#define  COLOR_SHARP_DM_SEGPK_EDGPK4_lv_shift                                    (0)
#define  COLOR_SHARP_DM_SEGPK_EDGPK4_hv_pos_mask                                 (0x0FFC0000)
#define  COLOR_SHARP_DM_SEGPK_EDGPK4_hv_neg_mask                                 (0x0003FF00)
#define  COLOR_SHARP_DM_SEGPK_EDGPK4_lv_mask                                     (0x000000FF)
#define  COLOR_SHARP_DM_SEGPK_EDGPK4_hv_pos(data)                                (0x0FFC0000&((data)<<18))
#define  COLOR_SHARP_DM_SEGPK_EDGPK4_hv_neg(data)                                (0x0003FF00&((data)<<8))
#define  COLOR_SHARP_DM_SEGPK_EDGPK4_lv(data)                                    (0x000000FF&(data))
#define  COLOR_SHARP_DM_SEGPK_EDGPK4_get_hv_pos(data)                            ((0x0FFC0000&(data))>>18)
#define  COLOR_SHARP_DM_SEGPK_EDGPK4_get_hv_neg(data)                            ((0x0003FF00&(data))>>8)
#define  COLOR_SHARP_DM_SEGPK_EDGPK4_get_lv(data)                                (0x000000FF&(data))

#define  COLOR_SHARP_DM_SEGPK_EDGPK2                                            0x1802B658
#define  COLOR_SHARP_DM_SEGPK_EDGPK2_reg_addr                                    "0xB802B658"
#define  COLOR_SHARP_DM_SEGPK_EDGPK2_reg                                         0xB802B658
#define  COLOR_SHARP_DM_SEGPK_EDGPK2_inst_addr                                   "0x0016"
#define  set_COLOR_SHARP_DM_SEGPK_EDGPK2_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_EDGPK2_reg)=data)
#define  get_COLOR_SHARP_DM_SEGPK_EDGPK2_reg                                     (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_EDGPK2_reg))
#define  COLOR_SHARP_DM_SEGPK_EDGPK2_lv2_shift                                   (0)
#define  COLOR_SHARP_DM_SEGPK_EDGPK2_lv2_mask                                    (0x000000FF)
#define  COLOR_SHARP_DM_SEGPK_EDGPK2_lv2(data)                                   (0x000000FF&(data))
#define  COLOR_SHARP_DM_SEGPK_EDGPK2_get_lv2(data)                               (0x000000FF&(data))

#define  COLOR_SHARP_DM_2D_SHP_EDGE_0                                           0x1802B65C
#define  COLOR_SHARP_DM_2D_SHP_EDGE_0_reg_addr                                   "0xB802B65C"
#define  COLOR_SHARP_DM_2D_SHP_EDGE_0_reg                                        0xB802B65C
#define  COLOR_SHARP_DM_2D_SHP_EDGE_0_inst_addr                                  "0x0017"
#define  set_COLOR_SHARP_DM_2D_SHP_EDGE_0_reg(data)                              (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_EDGE_0_reg)=data)
#define  get_COLOR_SHARP_DM_2D_SHP_EDGE_0_reg                                    (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_EDGE_0_reg))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_0_coef_c0_0_shift                            (16)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_0_coef_c1_0_shift                            (8)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_0_coef_c2_0_shift                            (0)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_0_coef_c0_0_mask                             (0x03FF0000)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_0_coef_c1_0_mask                             (0x0000FF00)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_0_coef_c2_0_mask                             (0x000000FF)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_0_coef_c0_0(data)                            (0x03FF0000&((data)<<16))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_0_coef_c1_0(data)                            (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_0_coef_c2_0(data)                            (0x000000FF&(data))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_0_get_coef_c0_0(data)                        ((0x03FF0000&(data))>>16)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_0_get_coef_c1_0(data)                        ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_0_get_coef_c2_0(data)                        (0x000000FF&(data))

#define  COLOR_SHARP_DM_2D_SHP_EDGE_1                                           0x1802B660
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_reg_addr                                   "0xB802B660"
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_reg                                        0xB802B660
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_inst_addr                                  "0x0018"
#define  set_COLOR_SHARP_DM_2D_SHP_EDGE_1_reg(data)                              (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_EDGE_1_reg)=data)
#define  get_COLOR_SHARP_DM_2D_SHP_EDGE_1_reg                                    (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_EDGE_1_reg))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_coef_c3_0_shift                            (24)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_coef_c4_0_shift                            (16)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_coef_c5_0_shift                            (8)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_coef_c6_0_shift                            (0)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_coef_c3_0_mask                             (0xFF000000)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_coef_c4_0_mask                             (0x00FF0000)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_coef_c5_0_mask                             (0x0000FF00)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_coef_c6_0_mask                             (0x000000FF)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_coef_c3_0(data)                            (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_coef_c4_0(data)                            (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_coef_c5_0(data)                            (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_coef_c6_0(data)                            (0x000000FF&(data))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_get_coef_c3_0(data)                        ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_get_coef_c4_0(data)                        ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_get_coef_c5_0(data)                        ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_get_coef_c6_0(data)                        (0x000000FF&(data))

#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1                                         0x1802B664
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_reg_addr                                 "0xB802B664"
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_reg                                      0xB802B664
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_inst_addr                                "0x0019"
#define  set_COLOR_SHARP_DM_2D_SHP_EDGE_1_1_reg(data)                            (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_EDGE_1_1_reg)=data)
#define  get_COLOR_SHARP_DM_2D_SHP_EDGE_1_1_reg                                  (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_EDGE_1_1_reg))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_coef_c7_0_shift                          (24)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_coef_c8_0_shift                          (16)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_coef_c9_0_shift                          (8)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_coef_c10_0_shift                         (0)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_coef_c7_0_mask                           (0xFF000000)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_coef_c8_0_mask                           (0x00FF0000)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_coef_c9_0_mask                           (0x0000FF00)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_coef_c10_0_mask                          (0x000000FF)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_coef_c7_0(data)                          (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_coef_c8_0(data)                          (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_coef_c9_0(data)                          (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_coef_c10_0(data)                         (0x000000FF&(data))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_get_coef_c7_0(data)                      ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_get_coef_c8_0(data)                      ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_get_coef_c9_0(data)                      ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_1_1_get_coef_c10_0(data)                     (0x000000FF&(data))

#define  COLOR_SHARP_DM_2D_SHP_EDGE_2                                           0x1802B684
#define  COLOR_SHARP_DM_2D_SHP_EDGE_2_reg_addr                                   "0xB802B684"
#define  COLOR_SHARP_DM_2D_SHP_EDGE_2_reg                                        0xB802B684
#define  COLOR_SHARP_DM_2D_SHP_EDGE_2_inst_addr                                  "0x001A"
#define  set_COLOR_SHARP_DM_2D_SHP_EDGE_2_reg(data)                              (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_EDGE_2_reg)=data)
#define  get_COLOR_SHARP_DM_2D_SHP_EDGE_2_reg                                    (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_EDGE_2_reg))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_2_coef_c0_1_shift                            (24)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_2_coef_c0_1_mask                             (0xFF000000)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_2_coef_c0_1(data)                            (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_2_get_coef_c0_1(data)                        ((0xFF000000&(data))>>24)

#define  COLOR_SHARP_DM_2D_SHP_EDGE_4                                           0x1802B6A8
#define  COLOR_SHARP_DM_2D_SHP_EDGE_4_reg_addr                                   "0xB802B6A8"
#define  COLOR_SHARP_DM_2D_SHP_EDGE_4_reg                                        0xB802B6A8
#define  COLOR_SHARP_DM_2D_SHP_EDGE_4_inst_addr                                  "0x001B"
#define  set_COLOR_SHARP_DM_2D_SHP_EDGE_4_reg(data)                              (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_EDGE_4_reg)=data)
#define  get_COLOR_SHARP_DM_2D_SHP_EDGE_4_reg                                    (*((volatile unsigned int*)COLOR_SHARP_DM_2D_SHP_EDGE_4_reg))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_4_coef_c0_2_shift                            (24)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_4_coef_c0_2_mask                             (0xFF000000)
#define  COLOR_SHARP_DM_2D_SHP_EDGE_4_coef_c0_2(data)                            (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_2D_SHP_EDGE_4_get_coef_c0_2(data)                        ((0xFF000000&(data))>>24)

#define  COLOR_SHARP_DM_PEAKING_EMF                                             0x1802B710
#define  COLOR_SHARP_DM_PEAKING_EMF_reg_addr                                     "0xB802B710"
#define  COLOR_SHARP_DM_PEAKING_EMF_reg                                          0xB802B710
#define  COLOR_SHARP_DM_PEAKING_EMF_inst_addr                                    "0x001C"
#define  set_COLOR_SHARP_DM_PEAKING_EMF_reg(data)                                (*((volatile unsigned int*)COLOR_SHARP_DM_PEAKING_EMF_reg)=data)
#define  get_COLOR_SHARP_DM_PEAKING_EMF_reg                                      (*((volatile unsigned int*)COLOR_SHARP_DM_PEAKING_EMF_reg))
#define  COLOR_SHARP_DM_PEAKING_EMF_seg0_offset_shift                            (20)
#define  COLOR_SHARP_DM_PEAKING_EMF_seg2_gain_sel_shift                          (16)
#define  COLOR_SHARP_DM_PEAKING_EMF_seg1_gain_sel_shift                          (12)
#define  COLOR_SHARP_DM_PEAKING_EMF_seg0_gain_sel_shift                          (8)
#define  COLOR_SHARP_DM_PEAKING_EMF_emf_range_force_v_5tap_shift                 (7)
#define  COLOR_SHARP_DM_PEAKING_EMF_emf_range_force_h_11tap_shift                (6)
#define  COLOR_SHARP_DM_PEAKING_EMF_emf_range_shift                              (4)
#define  COLOR_SHARP_DM_PEAKING_EMF_emf_shift_shift                              (1)
#define  COLOR_SHARP_DM_PEAKING_EMF_seg0_offset_mask                             (0x7FF00000)
#define  COLOR_SHARP_DM_PEAKING_EMF_seg2_gain_sel_mask                           (0x00070000)
#define  COLOR_SHARP_DM_PEAKING_EMF_seg1_gain_sel_mask                           (0x00007000)
#define  COLOR_SHARP_DM_PEAKING_EMF_seg0_gain_sel_mask                           (0x00000700)
#define  COLOR_SHARP_DM_PEAKING_EMF_emf_range_force_v_5tap_mask                  (0x00000080)
#define  COLOR_SHARP_DM_PEAKING_EMF_emf_range_force_h_11tap_mask                 (0x00000040)
#define  COLOR_SHARP_DM_PEAKING_EMF_emf_range_mask                               (0x00000030)
#define  COLOR_SHARP_DM_PEAKING_EMF_emf_shift_mask                               (0x0000000E)
#define  COLOR_SHARP_DM_PEAKING_EMF_seg0_offset(data)                            (0x7FF00000&((data)<<20))
#define  COLOR_SHARP_DM_PEAKING_EMF_seg2_gain_sel(data)                          (0x00070000&((data)<<16))
#define  COLOR_SHARP_DM_PEAKING_EMF_seg1_gain_sel(data)                          (0x00007000&((data)<<12))
#define  COLOR_SHARP_DM_PEAKING_EMF_seg0_gain_sel(data)                          (0x00000700&((data)<<8))
#define  COLOR_SHARP_DM_PEAKING_EMF_emf_range_force_v_5tap(data)                 (0x00000080&((data)<<7))
#define  COLOR_SHARP_DM_PEAKING_EMF_emf_range_force_h_11tap(data)                (0x00000040&((data)<<6))
#define  COLOR_SHARP_DM_PEAKING_EMF_emf_range(data)                              (0x00000030&((data)<<4))
#define  COLOR_SHARP_DM_PEAKING_EMF_emf_shift(data)                              (0x0000000E&((data)<<1))
#define  COLOR_SHARP_DM_PEAKING_EMF_get_seg0_offset(data)                        ((0x7FF00000&(data))>>20)
#define  COLOR_SHARP_DM_PEAKING_EMF_get_seg2_gain_sel(data)                      ((0x00070000&(data))>>16)
#define  COLOR_SHARP_DM_PEAKING_EMF_get_seg1_gain_sel(data)                      ((0x00007000&(data))>>12)
#define  COLOR_SHARP_DM_PEAKING_EMF_get_seg0_gain_sel(data)                      ((0x00000700&(data))>>8)
#define  COLOR_SHARP_DM_PEAKING_EMF_get_emf_range_force_v_5tap(data)             ((0x00000080&(data))>>7)
#define  COLOR_SHARP_DM_PEAKING_EMF_get_emf_range_force_h_11tap(data)            ((0x00000040&(data))>>6)
#define  COLOR_SHARP_DM_PEAKING_EMF_get_emf_range(data)                          ((0x00000030&(data))>>4)
#define  COLOR_SHARP_DM_PEAKING_EMF_get_emf_shift(data)                          ((0x0000000E&(data))>>1)

#define  COLOR_SHARP_DM_EMFMK2_CTRL                                             0x1802B714
#define  COLOR_SHARP_DM_EMFMK2_CTRL_reg_addr                                     "0xB802B714"
#define  COLOR_SHARP_DM_EMFMK2_CTRL_reg                                          0xB802B714
#define  COLOR_SHARP_DM_EMFMK2_CTRL_inst_addr                                    "0x001D"
#define  set_COLOR_SHARP_DM_EMFMK2_CTRL_reg(data)                                (*((volatile unsigned int*)COLOR_SHARP_DM_EMFMK2_CTRL_reg)=data)
#define  get_COLOR_SHARP_DM_EMFMK2_CTRL_reg                                      (*((volatile unsigned int*)COLOR_SHARP_DM_EMFMK2_CTRL_reg))
#define  COLOR_SHARP_DM_EMFMK2_CTRL_declinebit_shift                             (24)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_blendstepbit_shift                           (20)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_lowbnd_shift                                 (8)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_blend_wt_shift                               (4)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_aov_range_shift                              (2)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_emf_mk2_debug_shift                          (1)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_emf_mode_sel_shift                           (0)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_declinebit_mask                              (0x03000000)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_blendstepbit_mask                            (0x00700000)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_lowbnd_mask                                  (0x0003FF00)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_blend_wt_mask                                (0x000000F0)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_aov_range_mask                               (0x00000004)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_emf_mk2_debug_mask                           (0x00000002)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_emf_mode_sel_mask                            (0x00000001)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_declinebit(data)                             (0x03000000&((data)<<24))
#define  COLOR_SHARP_DM_EMFMK2_CTRL_blendstepbit(data)                           (0x00700000&((data)<<20))
#define  COLOR_SHARP_DM_EMFMK2_CTRL_lowbnd(data)                                 (0x0003FF00&((data)<<8))
#define  COLOR_SHARP_DM_EMFMK2_CTRL_blend_wt(data)                               (0x000000F0&((data)<<4))
#define  COLOR_SHARP_DM_EMFMK2_CTRL_aov_range(data)                              (0x00000004&((data)<<2))
#define  COLOR_SHARP_DM_EMFMK2_CTRL_emf_mk2_debug(data)                          (0x00000002&((data)<<1))
#define  COLOR_SHARP_DM_EMFMK2_CTRL_emf_mode_sel(data)                           (0x00000001&(data))
#define  COLOR_SHARP_DM_EMFMK2_CTRL_get_declinebit(data)                         ((0x03000000&(data))>>24)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_get_blendstepbit(data)                       ((0x00700000&(data))>>20)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_get_lowbnd(data)                             ((0x0003FF00&(data))>>8)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_get_blend_wt(data)                           ((0x000000F0&(data))>>4)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_get_aov_range(data)                          ((0x00000004&(data))>>2)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_get_emf_mk2_debug(data)                      ((0x00000002&(data))>>1)
#define  COLOR_SHARP_DM_EMFMK2_CTRL_get_emf_mode_sel(data)                       (0x00000001&(data))

#define  COLOR_SHARP_DM_EMF_EXT_0                                               0x1802B718
#define  COLOR_SHARP_DM_EMF_EXT_0_reg_addr                                       "0xB802B718"
#define  COLOR_SHARP_DM_EMF_EXT_0_reg                                            0xB802B718
#define  COLOR_SHARP_DM_EMF_EXT_0_inst_addr                                      "0x001E"
#define  set_COLOR_SHARP_DM_EMF_EXT_0_reg(data)                                  (*((volatile unsigned int*)COLOR_SHARP_DM_EMF_EXT_0_reg)=data)
#define  get_COLOR_SHARP_DM_EMF_EXT_0_reg                                        (*((volatile unsigned int*)COLOR_SHARP_DM_EMF_EXT_0_reg))
#define  COLOR_SHARP_DM_EMF_EXT_0_seg1_offset_shift                              (16)
#define  COLOR_SHARP_DM_EMF_EXT_0_emf_fixextent_pos_shift                        (8)
#define  COLOR_SHARP_DM_EMF_EXT_0_emf_fixextent_neg_shift                        (0)
#define  COLOR_SHARP_DM_EMF_EXT_0_seg1_offset_mask                               (0x07FF0000)
#define  COLOR_SHARP_DM_EMF_EXT_0_emf_fixextent_pos_mask                         (0x0000FF00)
#define  COLOR_SHARP_DM_EMF_EXT_0_emf_fixextent_neg_mask                         (0x000000FF)
#define  COLOR_SHARP_DM_EMF_EXT_0_seg1_offset(data)                              (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_EMF_EXT_0_emf_fixextent_pos(data)                        (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_EMF_EXT_0_emf_fixextent_neg(data)                        (0x000000FF&(data))
#define  COLOR_SHARP_DM_EMF_EXT_0_get_seg1_offset(data)                          ((0x07FF0000&(data))>>16)
#define  COLOR_SHARP_DM_EMF_EXT_0_get_emf_fixextent_pos(data)                    ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_EMF_EXT_0_get_emf_fixextent_neg(data)                    (0x000000FF&(data))

#define  COLOR_SHARP_DM_EMF_EXT_1                                               0x1802B71C
#define  COLOR_SHARP_DM_EMF_EXT_1_reg_addr                                       "0xB802B71C"
#define  COLOR_SHARP_DM_EMF_EXT_1_reg                                            0xB802B71C
#define  COLOR_SHARP_DM_EMF_EXT_1_inst_addr                                      "0x001F"
#define  set_COLOR_SHARP_DM_EMF_EXT_1_reg(data)                                  (*((volatile unsigned int*)COLOR_SHARP_DM_EMF_EXT_1_reg)=data)
#define  get_COLOR_SHARP_DM_EMF_EXT_1_reg                                        (*((volatile unsigned int*)COLOR_SHARP_DM_EMF_EXT_1_reg))
#define  COLOR_SHARP_DM_EMF_EXT_1_seg1_x_shift                                   (22)
#define  COLOR_SHARP_DM_EMF_EXT_1_seg0_x_shift                                   (12)
#define  COLOR_SHARP_DM_EMF_EXT_1_seg2_offset_shift                              (0)
#define  COLOR_SHARP_DM_EMF_EXT_1_seg1_x_mask                                    (0xFFC00000)
#define  COLOR_SHARP_DM_EMF_EXT_1_seg0_x_mask                                    (0x003FF000)
#define  COLOR_SHARP_DM_EMF_EXT_1_seg2_offset_mask                               (0x000007FF)
#define  COLOR_SHARP_DM_EMF_EXT_1_seg1_x(data)                                   (0xFFC00000&((data)<<22))
#define  COLOR_SHARP_DM_EMF_EXT_1_seg0_x(data)                                   (0x003FF000&((data)<<12))
#define  COLOR_SHARP_DM_EMF_EXT_1_seg2_offset(data)                              (0x000007FF&(data))
#define  COLOR_SHARP_DM_EMF_EXT_1_get_seg1_x(data)                               ((0xFFC00000&(data))>>22)
#define  COLOR_SHARP_DM_EMF_EXT_1_get_seg0_x(data)                               ((0x003FF000&(data))>>12)
#define  COLOR_SHARP_DM_EMF_EXT_1_get_seg2_offset(data)                          (0x000007FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V                                  0x1802B670
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_reg_addr                          "0xB802B670"
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_reg                               0xB802B670
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_inst_addr                         "0x0020"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_reg(data)                     (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_reg                           (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_gain_pos_shift                    (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_gain_neg_shift                    (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_gain_pos_mask                     (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_gain_neg_mask                     (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_gain_pos(data)                    (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_gain_neg(data)                    (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_get_gain_pos(data)                ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_get_gain_neg(data)                (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V                                 0x1802B674
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_reg_addr                         "0xB802B674"
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_reg                              0xB802B674
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_inst_addr                        "0x0021"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_reg(data)                    (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_reg                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_dummy_27_26_shift                (26)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_hv_pos_shift                     (18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_dummy_17_16_shift                (16)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_hv_neg_shift                     (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_lv_shift                         (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_dummy_27_26_mask                 (0x0C000000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_hv_pos_mask                      (0x03FC0000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_dummy_17_16_mask                 (0x00030000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_hv_neg_mask                      (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_lv_mask                          (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_dummy_27_26(data)                (0x0C000000&((data)<<26))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_hv_pos(data)                     (0x03FC0000&((data)<<18))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_dummy_17_16(data)                (0x00030000&((data)<<16))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_hv_neg(data)                     (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_lv(data)                         (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_get_dummy_27_26(data)            ((0x0C000000&(data))>>26)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_get_hv_pos(data)                 ((0x03FC0000&(data))>>18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_get_dummy_17_16(data)            ((0x00030000&(data))>>16)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_get_hv_neg(data)                 ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_get_lv(data)                     (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG                              0x1802B678
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG_reg_addr                      "0xB802B678"
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG_reg                           0xB802B678
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG_inst_addr                     "0x0022"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG_reg(data)                 (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG_reg                       (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG_gain_pos_shift                (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG_gain_neg_shift                (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG_gain_pos_mask                 (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG_gain_neg_mask                 (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG_gain_pos(data)                (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG_gain_neg(data)                (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG_get_gain_pos(data)            ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG_get_gain_neg(data)            (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG                             0x1802B67C
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_reg_addr                     "0xB802B67C"
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_reg                          0xB802B67C
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_inst_addr                    "0x0023"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_reg(data)                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_reg                      (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_dummy_27_26_shift            (26)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_hv_pos_shift                 (18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_dummy_17_16_shift            (16)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_hv_neg_shift                 (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_lv_shift                     (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_dummy_27_26_mask             (0x0C000000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_hv_pos_mask                  (0x03FC0000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_dummy_17_16_mask             (0x00030000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_hv_neg_mask                  (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_lv_mask                      (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_dummy_27_26(data)            (0x0C000000&((data)<<26))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_hv_pos(data)                 (0x03FC0000&((data)<<18))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_dummy_17_16(data)            (0x00030000&((data)<<16))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_hv_neg(data)                 (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_lv(data)                     (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_get_dummy_27_26(data)        ((0x0C000000&(data))>>26)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_get_hv_pos(data)             ((0x03FC0000&(data))>>18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_get_dummy_17_16(data)        ((0x00030000&(data))>>16)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_get_hv_neg(data)             ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_get_lv(data)                 (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V                                  0x1802B680
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_reg_addr                          "0xB802B680"
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_reg                               0xB802B680
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_inst_addr                         "0x0024"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_reg(data)                     (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_reg                           (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_gain_pos_shift                    (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_gain_neg_shift                    (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_gain_pos_mask                     (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_gain_neg_mask                     (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_gain_pos(data)                    (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_gain_neg(data)                    (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_get_gain_pos(data)                ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_get_gain_neg(data)                (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V                                 0x1802B9E0
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_reg_addr                         "0xB802B9E0"
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_reg                              0xB802B9E0
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_inst_addr                        "0x0025"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_reg(data)                    (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_reg                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_dummy_27_26_shift                (26)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_hv_pos_shift                     (18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_dummy_17_16_shift                (16)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_hv_neg_shift                     (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_lv_shift                         (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_dummy_27_26_mask                 (0x0C000000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_hv_pos_mask                      (0x03FC0000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_dummy_17_16_mask                 (0x00030000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_hv_neg_mask                      (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_lv_mask                          (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_dummy_27_26(data)                (0x0C000000&((data)<<26))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_hv_pos(data)                     (0x03FC0000&((data)<<18))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_dummy_17_16(data)                (0x00030000&((data)<<16))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_hv_neg(data)                     (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_lv(data)                         (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_get_dummy_27_26(data)            ((0x0C000000&(data))>>26)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_get_hv_pos(data)                 ((0x03FC0000&(data))>>18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_get_dummy_17_16(data)            ((0x00030000&(data))>>16)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_get_hv_neg(data)                 ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_get_lv(data)                     (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG                              0x1802B688
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_reg_addr                      "0xB802B688"
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_reg                           0xB802B688
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_inst_addr                     "0x0026"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_reg(data)                 (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_reg                       (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_gain_pos_shift                (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_gain_neg_shift                (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_gain_pos_mask                 (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_gain_neg_mask                 (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_gain_pos(data)                (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_gain_neg(data)                (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_get_gain_pos(data)            ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_get_gain_neg(data)            (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG                             0x1802B68C
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_reg_addr                     "0xB802B68C"
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_reg                          0xB802B68C
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_inst_addr                    "0x0027"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_reg(data)                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_reg                      (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_dummy_27_26_shift            (26)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_hv_pos_shift                 (18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_dummy_17_16_shift            (16)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_hv_neg_shift                 (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_lv_shift                     (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_dummy_27_26_mask             (0x0C000000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_hv_pos_mask                  (0x03FC0000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_dummy_17_16_mask             (0x00030000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_hv_neg_mask                  (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_lv_mask                      (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_dummy_27_26(data)            (0x0C000000&((data)<<26))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_hv_pos(data)                 (0x03FC0000&((data)<<18))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_dummy_17_16(data)            (0x00030000&((data)<<16))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_hv_neg(data)                 (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_lv(data)                     (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_get_dummy_27_26(data)        ((0x0C000000&(data))>>26)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_get_hv_pos(data)             ((0x03FC0000&(data))>>18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_get_dummy_17_16(data)        ((0x00030000&(data))>>16)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_get_hv_neg(data)             ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_get_lv(data)                 (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V                                  0x1802B690
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_reg_addr                          "0xB802B690"
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_reg                               0xB802B690
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_inst_addr                         "0x0028"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_reg(data)                     (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_reg                           (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_gain_pos_shift                    (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_gain_neg_shift                    (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_gain_pos_mask                     (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_gain_neg_mask                     (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_gain_pos(data)                    (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_gain_neg(data)                    (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_get_gain_pos(data)                ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_get_gain_neg(data)                (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V                                 0x1802B694
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_reg_addr                         "0xB802B694"
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_reg                              0xB802B694
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_inst_addr                        "0x0029"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_reg(data)                    (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_reg                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_dummy_27_26_shift                (26)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_hv_pos_shift                     (18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_dummy_17_16_shift                (16)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_hv_neg_shift                     (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_lv_shift                         (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_dummy_27_26_mask                 (0x0C000000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_hv_pos_mask                      (0x03FC0000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_dummy_17_16_mask                 (0x00030000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_hv_neg_mask                      (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_lv_mask                          (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_dummy_27_26(data)                (0x0C000000&((data)<<26))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_hv_pos(data)                     (0x03FC0000&((data)<<18))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_dummy_17_16(data)                (0x00030000&((data)<<16))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_hv_neg(data)                     (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_lv(data)                         (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_get_dummy_27_26(data)            ((0x0C000000&(data))>>26)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_get_hv_pos(data)                 ((0x03FC0000&(data))>>18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_get_dummy_17_16(data)            ((0x00030000&(data))>>16)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_get_hv_neg(data)                 ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_get_lv(data)                     (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG                              0x1802B698
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_reg_addr                      "0xB802B698"
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_reg                           0xB802B698
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_inst_addr                     "0x002A"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_reg(data)                 (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_reg                       (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_gain_pos_shift                (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_gain_neg_shift                (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_gain_pos_mask                 (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_gain_neg_mask                 (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_gain_pos(data)                (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_gain_neg(data)                (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_get_gain_pos(data)            ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_get_gain_neg(data)            (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG                             0x1802B69C
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_reg_addr                     "0xB802B69C"
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_reg                          0xB802B69C
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_inst_addr                    "0x002B"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_reg(data)                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_reg                      (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_dummy_27_26_shift            (26)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_hv_pos_shift                 (18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_dummy_17_16_shift            (16)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_hv_neg_shift                 (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_lv_shift                     (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_dummy_27_26_mask             (0x0C000000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_hv_pos_mask                  (0x03FC0000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_dummy_17_16_mask             (0x00030000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_hv_neg_mask                  (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_lv_mask                      (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_dummy_27_26(data)            (0x0C000000&((data)<<26))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_hv_pos(data)                 (0x03FC0000&((data)<<18))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_dummy_17_16(data)            (0x00030000&((data)<<16))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_hv_neg(data)                 (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_lv(data)                     (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_get_dummy_27_26(data)        ((0x0C000000&(data))>>26)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_get_hv_pos(data)             ((0x03FC0000&(data))>>18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_get_dummy_17_16(data)        ((0x00030000&(data))>>16)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_get_hv_neg(data)             ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_get_lv(data)                 (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V                                  0x1802B6A0
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_reg_addr                          "0xB802B6A0"
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_reg                               0xB802B6A0
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_inst_addr                         "0x002C"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_reg(data)                     (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_reg                           (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_gain_pos_shift                    (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_gain_neg_shift                    (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_gain_pos_mask                     (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_gain_neg_mask                     (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_gain_pos(data)                    (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_gain_neg(data)                    (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_get_gain_pos(data)                ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_get_gain_neg(data)                (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V                                 0x1802B6A4
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_reg_addr                         "0xB802B6A4"
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_reg                              0xB802B6A4
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_inst_addr                        "0x002D"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_reg(data)                    (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_reg                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_dummy_27_26_shift                (26)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_hv_pos_shift                     (18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_dummy_17_16_shift                (16)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_hv_neg_shift                     (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_lv_shift                         (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_dummy_27_26_mask                 (0x0C000000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_hv_pos_mask                      (0x03FC0000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_dummy_17_16_mask                 (0x00030000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_hv_neg_mask                      (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_lv_mask                          (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_dummy_27_26(data)                (0x0C000000&((data)<<26))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_hv_pos(data)                     (0x03FC0000&((data)<<18))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_dummy_17_16(data)                (0x00030000&((data)<<16))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_hv_neg(data)                     (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_lv(data)                         (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_get_dummy_27_26(data)            ((0x0C000000&(data))>>26)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_get_hv_pos(data)                 ((0x03FC0000&(data))>>18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_get_dummy_17_16(data)            ((0x00030000&(data))>>16)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_get_hv_neg(data)                 ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_get_lv(data)                     (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_EDG                              0x1802B9E4
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_EDG_reg_addr                      "0xB802B9E4"
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_EDG_reg                           0xB802B9E4
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_EDG_inst_addr                     "0x002E"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_EDG_reg(data)                 (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_EDG_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_EDG_reg                       (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_EDG_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_EDG_gain_pos_shift                (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_EDG_gain_neg_shift                (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_EDG_gain_pos_mask                 (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_EDG_gain_neg_mask                 (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_EDG_gain_pos(data)                (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_EDG_gain_neg(data)                (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_EDG_get_gain_pos(data)            ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_V_EDG_get_gain_neg(data)            (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG                             0x1802B6AC
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_reg_addr                     "0xB802B6AC"
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_reg                          0xB802B6AC
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_inst_addr                    "0x002F"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_reg(data)                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_reg                      (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_dummy_27_26_shift            (26)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_hv_pos_shift                 (18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_dummy_17_16_shift            (16)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_hv_neg_shift                 (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_lv_shift                     (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_dummy_27_26_mask             (0x0C000000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_hv_pos_mask                  (0x03FC0000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_dummy_17_16_mask             (0x00030000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_hv_neg_mask                  (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_lv_mask                      (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_dummy_27_26(data)            (0x0C000000&((data)<<26))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_hv_pos(data)                 (0x03FC0000&((data)<<18))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_dummy_17_16(data)            (0x00030000&((data)<<16))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_hv_neg(data)                 (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_lv(data)                     (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_get_dummy_27_26(data)        ((0x0C000000&(data))>>26)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_get_hv_pos(data)             ((0x03FC0000&(data))>>18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_get_dummy_17_16(data)        ((0x00030000&(data))>>16)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_get_hv_neg(data)             ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_V_EDG_get_lv(data)                 (0x000000FF&(data))

#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0                                     0x1802B720
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_reg_addr                             "0xB802B720"
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_reg                                  0xB802B720
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_inst_addr                            "0x0030"
#define  set_COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_reg(data)                        (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_reg)=data)
#define  get_COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_reg                              (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_reg))
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_bigedge_ratio_shift                  (24)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_smalledge_ratio_shift                (16)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_deltaedge_ratio_shift                (8)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_smalledge_ulevel_shift               (0)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_bigedge_ratio_mask                   (0x1F000000)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_smalledge_ratio_mask                 (0x001F0000)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_deltaedge_ratio_mask                 (0x00001F00)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_smalledge_ulevel_mask                (0x0000001F)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_bigedge_ratio(data)                  (0x1F000000&((data)<<24))
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_smalledge_ratio(data)                (0x001F0000&((data)<<16))
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_deltaedge_ratio(data)                (0x00001F00&((data)<<8))
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_smalledge_ulevel(data)               (0x0000001F&(data))
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_get_bigedge_ratio(data)              ((0x1F000000&(data))>>24)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_get_smalledge_ratio(data)            ((0x001F0000&(data))>>16)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_get_deltaedge_ratio(data)            ((0x00001F00&(data))>>8)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_0_get_smalledge_ulevel(data)           (0x0000001F&(data))

#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1                                     0x1802B724
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_reg_addr                             "0xB802B724"
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_reg                                  0xB802B724
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_inst_addr                            "0x0031"
#define  set_COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_reg(data)                        (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_reg)=data)
#define  get_COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_reg                              (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_reg))
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_coring_en_shift                 (31)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_gain_en_shift                   (30)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_deltaedge_ulevel_shift               (20)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_coring_clip_shift               (12)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_delta_ext_range_shift           (9)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_gain_bound_shift                (4)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_ser_range_shift                 (0)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_coring_en_mask                  (0x80000000)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_gain_en_mask                    (0x40000000)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_deltaedge_ulevel_mask                (0x01F00000)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_coring_clip_mask                (0x0001F000)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_delta_ext_range_mask            (0x00000E00)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_gain_bound_mask                 (0x000001F0)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_ser_range_mask                  (0x0000000F)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_coring_en(data)                 (0x80000000&((data)<<31))
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_gain_en(data)                   (0x40000000&((data)<<30))
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_deltaedge_ulevel(data)               (0x01F00000&((data)<<20))
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_coring_clip(data)               (0x0001F000&((data)<<12))
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_delta_ext_range(data)           (0x00000E00&((data)<<9))
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_gain_bound(data)                (0x000001F0&((data)<<4))
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_edge_ser_range(data)                 (0x0000000F&(data))
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_get_edge_coring_en(data)             ((0x80000000&(data))>>31)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_get_edge_gain_en(data)               ((0x40000000&(data))>>30)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_get_deltaedge_ulevel(data)           ((0x01F00000&(data))>>20)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_get_edge_coring_clip(data)           ((0x0001F000&(data))>>12)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_get_edge_delta_ext_range(data)       ((0x00000E00&(data))>>9)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_get_edge_gain_bound(data)            ((0x000001F0&(data))>>4)
#define  COLOR_SHARP_DM_SEGPK_EDGE_CORING_1_get_edge_ser_range(data)             (0x0000000F&(data))

#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE                                 0x1802B728
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_reg_addr                         "0xB802B728"
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_reg                              0xB802B728
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_inst_addr                        "0x0032"
#define  set_COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_reg(data)                    (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_reg)=data)
#define  get_COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_reg                          (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_reg))
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_slope_gain_en_shift              (26)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_dir_shift                        (25)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_gain_boundpos_shift              (20)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_gain_boundneg_shift              (16)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_gain_extendpos_shift             (8)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_gain_extendneg_shift             (0)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_slope_gain_en_mask               (0x04000000)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_dir_mask                         (0x02000000)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_gain_boundpos_mask               (0x00F00000)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_gain_boundneg_mask               (0x000F0000)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_gain_extendpos_mask              (0x00007F00)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_gain_extendneg_mask              (0x0000007F)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_slope_gain_en(data)              (0x04000000&((data)<<26))
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_dir(data)                        (0x02000000&((data)<<25))
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_gain_boundpos(data)              (0x00F00000&((data)<<20))
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_gain_boundneg(data)              (0x000F0000&((data)<<16))
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_gain_extendpos(data)             (0x00007F00&((data)<<8))
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_gain_extendneg(data)             (0x0000007F&(data))
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_get_slope_gain_en(data)          ((0x04000000&(data))>>26)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_get_dir(data)                    ((0x02000000&(data))>>25)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_get_gain_boundpos(data)          ((0x00F00000&(data))>>20)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_get_gain_boundneg(data)          ((0x000F0000&(data))>>16)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_get_gain_extendpos(data)         ((0x00007F00&(data))>>8)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_SOURCESLOPE_get_gain_extendneg(data)         (0x0000007F&(data))

#define  COLOR_SHARP_DM_SEGPK_VPK1                                              0x1802B72C
#define  COLOR_SHARP_DM_SEGPK_VPK1_reg_addr                                      "0xB802B72C"
#define  COLOR_SHARP_DM_SEGPK_VPK1_reg                                           0xB802B72C
#define  COLOR_SHARP_DM_SEGPK_VPK1_inst_addr                                     "0x0033"
#define  set_COLOR_SHARP_DM_SEGPK_VPK1_reg(data)                                 (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_VPK1_reg)=data)
#define  get_COLOR_SHARP_DM_SEGPK_VPK1_reg                                       (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_VPK1_reg))
#define  COLOR_SHARP_DM_SEGPK_VPK1_vpk_c2_shift                                  (24)
#define  COLOR_SHARP_DM_SEGPK_VPK1_vpk_c1_shift                                  (12)
#define  COLOR_SHARP_DM_SEGPK_VPK1_vpk_c0_shift                                  (0)
#define  COLOR_SHARP_DM_SEGPK_VPK1_vpk_c2_mask                                   (0xFF000000)
#define  COLOR_SHARP_DM_SEGPK_VPK1_vpk_c1_mask                                   (0x001FF000)
#define  COLOR_SHARP_DM_SEGPK_VPK1_vpk_c0_mask                                   (0x000001FF)
#define  COLOR_SHARP_DM_SEGPK_VPK1_vpk_c2(data)                                  (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_SEGPK_VPK1_vpk_c1(data)                                  (0x001FF000&((data)<<12))
#define  COLOR_SHARP_DM_SEGPK_VPK1_vpk_c0(data)                                  (0x000001FF&(data))
#define  COLOR_SHARP_DM_SEGPK_VPK1_get_vpk_c2(data)                              ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_DM_SEGPK_VPK1_get_vpk_c1(data)                              ((0x001FF000&(data))>>12)
#define  COLOR_SHARP_DM_SEGPK_VPK1_get_vpk_c0(data)                              (0x000001FF&(data))

#define  COLOR_SHARP_DM_SEGPK_VPK2                                              0x1802B730
#define  COLOR_SHARP_DM_SEGPK_VPK2_reg_addr                                      "0xB802B730"
#define  COLOR_SHARP_DM_SEGPK_VPK2_reg                                           0xB802B730
#define  COLOR_SHARP_DM_SEGPK_VPK2_inst_addr                                     "0x0034"
#define  set_COLOR_SHARP_DM_SEGPK_VPK2_reg(data)                                 (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_VPK2_reg)=data)
#define  get_COLOR_SHARP_DM_SEGPK_VPK2_reg                                       (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_VPK2_reg))
#define  COLOR_SHARP_DM_SEGPK_VPK2_vpk_lv_shift                                  (16)
#define  COLOR_SHARP_DM_SEGPK_VPK2_vpk_gain_neg_shift                            (8)
#define  COLOR_SHARP_DM_SEGPK_VPK2_vpk_gain_pos_shift                            (0)
#define  COLOR_SHARP_DM_SEGPK_VPK2_vpk_lv_mask                                   (0x00FF0000)
#define  COLOR_SHARP_DM_SEGPK_VPK2_vpk_gain_neg_mask                             (0x0000FF00)
#define  COLOR_SHARP_DM_SEGPK_VPK2_vpk_gain_pos_mask                             (0x000000FF)
#define  COLOR_SHARP_DM_SEGPK_VPK2_vpk_lv(data)                                  (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_DM_SEGPK_VPK2_vpk_gain_neg(data)                            (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_SEGPK_VPK2_vpk_gain_pos(data)                            (0x000000FF&(data))
#define  COLOR_SHARP_DM_SEGPK_VPK2_get_vpk_lv(data)                              ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_DM_SEGPK_VPK2_get_vpk_gain_neg(data)                        ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_SEGPK_VPK2_get_vpk_gain_pos(data)                        (0x000000FF&(data))

#define  COLOR_SHARP_DM_SEGPK_VPK3                                              0x1802B734
#define  COLOR_SHARP_DM_SEGPK_VPK3_reg_addr                                      "0xB802B734"
#define  COLOR_SHARP_DM_SEGPK_VPK3_reg                                           0xB802B734
#define  COLOR_SHARP_DM_SEGPK_VPK3_inst_addr                                     "0x0035"
#define  set_COLOR_SHARP_DM_SEGPK_VPK3_reg(data)                                 (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_VPK3_reg)=data)
#define  get_COLOR_SHARP_DM_SEGPK_VPK3_reg                                       (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_VPK3_reg))
#define  COLOR_SHARP_DM_SEGPK_VPK3_lv2_shift                                     (20)
#define  COLOR_SHARP_DM_SEGPK_VPK3_gain_pos2_shift                               (18)
#define  COLOR_SHARP_DM_SEGPK_VPK3_gain_neg2_shift                               (16)
#define  COLOR_SHARP_DM_SEGPK_VPK3_vpk_hv_pos_shift                              (8)
#define  COLOR_SHARP_DM_SEGPK_VPK3_vpk_hv_neg_shift                              (0)
#define  COLOR_SHARP_DM_SEGPK_VPK3_lv2_mask                                      (0x0FF00000)
#define  COLOR_SHARP_DM_SEGPK_VPK3_gain_pos2_mask                                (0x000C0000)
#define  COLOR_SHARP_DM_SEGPK_VPK3_gain_neg2_mask                                (0x00030000)
#define  COLOR_SHARP_DM_SEGPK_VPK3_vpk_hv_pos_mask                               (0x0000FF00)
#define  COLOR_SHARP_DM_SEGPK_VPK3_vpk_hv_neg_mask                               (0x000000FF)
#define  COLOR_SHARP_DM_SEGPK_VPK3_lv2(data)                                     (0x0FF00000&((data)<<20))
#define  COLOR_SHARP_DM_SEGPK_VPK3_gain_pos2(data)                               (0x000C0000&((data)<<18))
#define  COLOR_SHARP_DM_SEGPK_VPK3_gain_neg2(data)                               (0x00030000&((data)<<16))
#define  COLOR_SHARP_DM_SEGPK_VPK3_vpk_hv_pos(data)                              (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_SEGPK_VPK3_vpk_hv_neg(data)                              (0x000000FF&(data))
#define  COLOR_SHARP_DM_SEGPK_VPK3_get_lv2(data)                                 ((0x0FF00000&(data))>>20)
#define  COLOR_SHARP_DM_SEGPK_VPK3_get_gain_pos2(data)                           ((0x000C0000&(data))>>18)
#define  COLOR_SHARP_DM_SEGPK_VPK3_get_gain_neg2(data)                           ((0x00030000&(data))>>16)
#define  COLOR_SHARP_DM_SEGPK_VPK3_get_vpk_hv_pos(data)                          ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_SEGPK_VPK3_get_vpk_hv_neg(data)                          (0x000000FF&(data))

#define  COLOR_SHARP_DM_SEGPK_VPK4                                              0x1802B738
#define  COLOR_SHARP_DM_SEGPK_VPK4_reg_addr                                      "0xB802B738"
#define  COLOR_SHARP_DM_SEGPK_VPK4_reg                                           0xB802B738
#define  COLOR_SHARP_DM_SEGPK_VPK4_inst_addr                                     "0x0036"
#define  set_COLOR_SHARP_DM_SEGPK_VPK4_reg(data)                                 (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_VPK4_reg)=data)
#define  get_COLOR_SHARP_DM_SEGPK_VPK4_reg                                       (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_VPK4_reg))
#define  COLOR_SHARP_DM_SEGPK_VPK4_vext_reg_shift                                (8)
#define  COLOR_SHARP_DM_SEGPK_VPK4_vpk_edg_en_shift                              (4)
#define  COLOR_SHARP_DM_SEGPK_VPK4_v_tex_en_shift                                (2)
#define  COLOR_SHARP_DM_SEGPK_VPK4_vemf_en_shift                                 (1)
#define  COLOR_SHARP_DM_SEGPK_VPK4_vpk_en_shift                                  (0)
#define  COLOR_SHARP_DM_SEGPK_VPK4_vext_reg_mask                                 (0x0000FF00)
#define  COLOR_SHARP_DM_SEGPK_VPK4_vpk_edg_en_mask                               (0x00000010)
#define  COLOR_SHARP_DM_SEGPK_VPK4_v_tex_en_mask                                 (0x00000004)
#define  COLOR_SHARP_DM_SEGPK_VPK4_vemf_en_mask                                  (0x00000002)
#define  COLOR_SHARP_DM_SEGPK_VPK4_vpk_en_mask                                   (0x00000001)
#define  COLOR_SHARP_DM_SEGPK_VPK4_vext_reg(data)                                (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_SEGPK_VPK4_vpk_edg_en(data)                              (0x00000010&((data)<<4))
#define  COLOR_SHARP_DM_SEGPK_VPK4_v_tex_en(data)                                (0x00000004&((data)<<2))
#define  COLOR_SHARP_DM_SEGPK_VPK4_vemf_en(data)                                 (0x00000002&((data)<<1))
#define  COLOR_SHARP_DM_SEGPK_VPK4_vpk_en(data)                                  (0x00000001&(data))
#define  COLOR_SHARP_DM_SEGPK_VPK4_get_vext_reg(data)                            ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_SEGPK_VPK4_get_vpk_edg_en(data)                          ((0x00000010&(data))>>4)
#define  COLOR_SHARP_DM_SEGPK_VPK4_get_v_tex_en(data)                            ((0x00000004&(data))>>2)
#define  COLOR_SHARP_DM_SEGPK_VPK4_get_vemf_en(data)                             ((0x00000002&(data))>>1)
#define  COLOR_SHARP_DM_SEGPK_VPK4_get_vpk_en(data)                              (0x00000001&(data))

#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0                                       0x1802B740
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_reg_addr                               "0xB802B740"
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_reg                                    0xB802B740
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_inst_addr                              "0x0037"
#define  set_COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_reg))
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_cds_cm0_enable_shift                   (28)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_cds_enable_shift                       (27)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_cds_debug_shift                        (24)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_u_ub_0_shift                           (12)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_u_lb_0_shift                           (0)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_cds_cm0_enable_mask                    (0x10000000)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_cds_enable_mask                        (0x08000000)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_cds_debug_mask                         (0x07000000)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_u_ub_0_mask                            (0x007FF000)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_u_lb_0_mask                            (0x000007FF)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_cds_cm0_enable(data)                   (0x10000000&((data)<<28))
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_cds_enable(data)                       (0x08000000&((data)<<27))
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_cds_debug(data)                        (0x07000000&((data)<<24))
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_u_ub_0(data)                           (0x007FF000&((data)<<12))
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_u_lb_0(data)                           (0x000007FF&(data))
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_get_cds_cm0_enable(data)               ((0x10000000&(data))>>28)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_get_cds_enable(data)                   ((0x08000000&(data))>>27)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_get_cds_debug(data)                    ((0x07000000&(data))>>24)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_get_u_ub_0(data)                       ((0x007FF000&(data))>>12)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_get_u_lb_0(data)                       (0x000007FF&(data))

#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0                                       0x1802B744
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_reg_addr                               "0xB802B744"
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_reg                                    0xB802B744
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_inst_addr                              "0x0038"
#define  set_COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_reg))
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_cm0_mode_shift                         (30)
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_cm0_conti_area_shift                   (25)
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_cm0_conti_enable_shift                 (24)
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_v_ub_0_shift                           (12)
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_v_lb_0_shift                           (0)
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_cm0_mode_mask                          (0xC0000000)
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_cm0_conti_area_mask                    (0x3E000000)
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_cm0_conti_enable_mask                  (0x01000000)
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_v_ub_0_mask                            (0x007FF000)
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_v_lb_0_mask                            (0x000007FF)
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_cm0_mode(data)                         (0xC0000000&((data)<<30))
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_cm0_conti_area(data)                   (0x3E000000&((data)<<25))
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_cm0_conti_enable(data)                 (0x01000000&((data)<<24))
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_v_ub_0(data)                           (0x007FF000&((data)<<12))
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_v_lb_0(data)                           (0x000007FF&(data))
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_get_cm0_mode(data)                     ((0xC0000000&(data))>>30)
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_get_cm0_conti_area(data)               ((0x3E000000&(data))>>25)
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_get_cm0_conti_enable(data)             ((0x01000000&(data))>>24)
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_get_v_ub_0(data)                       ((0x007FF000&(data))>>12)
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_0_get_v_lb_0(data)                       (0x000007FF&(data))

#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_1                                       0x1802B748
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_reg_addr                               "0xB802B748"
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_reg                                    0xB802B748
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_inst_addr                              "0x0039"
#define  set_COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_reg))
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_uv_rad_0_shift                         (22)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_cv_0_shift                             (12)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_cu_0_shift                             (0)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_uv_rad_0_mask                          (0x7FC00000)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_cv_0_mask                              (0x003FF000)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_cu_0_mask                              (0x000003FF)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_uv_rad_0(data)                         (0x7FC00000&((data)<<22))
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_cv_0(data)                             (0x003FF000&((data)<<12))
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_cu_0(data)                             (0x000003FF&(data))
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_get_uv_rad_0(data)                     ((0x7FC00000&(data))>>22)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_get_cv_0(data)                         ((0x003FF000&(data))>>12)
#define  COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_get_cu_0(data)                         (0x000003FF&(data))

#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_1                                       0x1802B74C
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_1_reg_addr                               "0xB802B74C"
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_1_reg                                    0xB802B74C
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_1_inst_addr                              "0x003A"
#define  set_COLOR_SHARP_DM_CDS_CM0_V_BOUND_1_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM0_V_BOUND_1_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM0_V_BOUND_1_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM0_V_BOUND_1_reg))
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_1_cnt_0_shift                            (0)
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_1_cnt_0_mask                             (0x00FFFFFF)
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_1_cnt_0(data)                            (0x00FFFFFF&(data))
#define  COLOR_SHARP_DM_CDS_CM0_V_BOUND_1_get_cnt_0(data)                        (0x00FFFFFF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX                                0x1802B750
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX_reg_addr                        "0xB802B750"
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX_reg                             0xB802B750
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX_inst_addr                       "0x003B"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX_reg(data)                   (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX_reg                         (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX_gain_pos_shift                  (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX_gain_neg_shift                  (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX_gain_pos_mask                   (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX_gain_neg_mask                   (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX_gain_pos(data)                  (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX_gain_neg(data)                  (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX_get_gain_pos(data)              ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX_get_gain_neg(data)              (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX                               0x1802B754
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_reg_addr                       "0xB802B754"
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_reg                            0xB802B754
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_inst_addr                      "0x003C"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_reg(data)                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_reg                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_hv_pos_shift                   (18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_hv_neg_shift                   (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_lv_shift                       (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_hv_pos_mask                    (0x0FFC0000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_hv_neg_mask                    (0x0003FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_lv_mask                        (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_hv_pos(data)                   (0x0FFC0000&((data)<<18))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_hv_neg(data)                   (0x0003FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_lv(data)                       (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_get_hv_pos(data)               ((0x0FFC0000&(data))>>18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_get_hv_neg(data)               ((0x0003FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_get_lv(data)                   (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE                               0x1802B758
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE_reg_addr                       "0xB802B758"
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE_reg                            0xB802B758
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE_inst_addr                      "0x003D"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE_reg(data)                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE_reg                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE_gain_pos_shift                 (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE_gain_neg_shift                 (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE_gain_pos_mask                  (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE_gain_neg_mask                  (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE_gain_pos(data)                 (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE_gain_neg(data)                 (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE_get_gain_pos(data)             ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE_get_gain_neg(data)             (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE                              0x1802B75C
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_reg_addr                      "0xB802B75C"
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_reg                           0xB802B75C
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_inst_addr                     "0x003E"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_reg(data)                 (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_reg                       (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_hv_pos_shift                  (18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_hv_neg_shift                  (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_lv_shift                      (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_hv_pos_mask                   (0x0FFC0000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_hv_neg_mask                   (0x0003FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_lv_mask                       (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_hv_pos(data)                  (0x0FFC0000&((data)<<18))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_hv_neg(data)                  (0x0003FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_lv(data)                      (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_get_hv_pos(data)              ((0x0FFC0000&(data))>>18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_get_hv_neg(data)              ((0x0003FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_get_lv(data)                  (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_0                                       0x1802B760
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_reg_addr                               "0xB802B760"
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_reg                                    0xB802B760
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_inst_addr                              "0x003F"
#define  set_COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_reg))
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_cds_cm1_enable_shift                   (28)
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_u_ub_1_shift                           (12)
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_u_lb_1_shift                           (0)
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_cds_cm1_enable_mask                    (0x10000000)
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_u_ub_1_mask                            (0x007FF000)
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_u_lb_1_mask                            (0x000007FF)
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_cds_cm1_enable(data)                   (0x10000000&((data)<<28))
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_u_ub_1(data)                           (0x007FF000&((data)<<12))
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_u_lb_1(data)                           (0x000007FF&(data))
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_get_cds_cm1_enable(data)               ((0x10000000&(data))>>28)
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_get_u_ub_1(data)                       ((0x007FF000&(data))>>12)
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_get_u_lb_1(data)                       (0x000007FF&(data))

#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0                                       0x1802B764
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_reg_addr                               "0xB802B764"
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_reg                                    0xB802B764
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_inst_addr                              "0x0040"
#define  set_COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_reg))
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_cm1_mode_shift                         (30)
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_cm1_conti_area_shift                   (25)
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_cm1_conti_enable_shift                 (24)
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_v_ub_1_shift                           (12)
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_v_lb_1_shift                           (0)
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_cm1_mode_mask                          (0xC0000000)
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_cm1_conti_area_mask                    (0x3E000000)
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_cm1_conti_enable_mask                  (0x01000000)
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_v_ub_1_mask                            (0x007FF000)
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_v_lb_1_mask                            (0x000007FF)
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_cm1_mode(data)                         (0xC0000000&((data)<<30))
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_cm1_conti_area(data)                   (0x3E000000&((data)<<25))
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_cm1_conti_enable(data)                 (0x01000000&((data)<<24))
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_v_ub_1(data)                           (0x007FF000&((data)<<12))
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_v_lb_1(data)                           (0x000007FF&(data))
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_get_cm1_mode(data)                     ((0xC0000000&(data))>>30)
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_get_cm1_conti_area(data)               ((0x3E000000&(data))>>25)
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_get_cm1_conti_enable(data)             ((0x01000000&(data))>>24)
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_get_v_ub_1(data)                       ((0x007FF000&(data))>>12)
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_get_v_lb_1(data)                       (0x000007FF&(data))

#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_1                                       0x1802B768
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_reg_addr                               "0xB802B768"
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_reg                                    0xB802B768
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_inst_addr                              "0x0041"
#define  set_COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_reg))
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_uv_rad_1_shift                         (22)
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_cv_1_shift                             (12)
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_cu_1_shift                             (0)
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_uv_rad_1_mask                          (0x7FC00000)
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_cv_1_mask                              (0x003FF000)
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_cu_1_mask                              (0x000003FF)
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_uv_rad_1(data)                         (0x7FC00000&((data)<<22))
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_cv_1(data)                             (0x003FF000&((data)<<12))
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_cu_1(data)                             (0x000003FF&(data))
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_get_uv_rad_1(data)                     ((0x7FC00000&(data))>>22)
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_get_cv_1(data)                         ((0x003FF000&(data))>>12)
#define  COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_get_cu_1(data)                         (0x000003FF&(data))

#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_1                                       0x1802B76C
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_1_reg_addr                               "0xB802B76C"
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_1_reg                                    0xB802B76C
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_1_inst_addr                              "0x0042"
#define  set_COLOR_SHARP_DM_CDS_CM1_V_BOUND_1_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM1_V_BOUND_1_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM1_V_BOUND_1_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM1_V_BOUND_1_reg))
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_1_cnt_1_shift                            (0)
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_1_cnt_1_mask                             (0x00FFFFFF)
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_1_cnt_1(data)                            (0x00FFFFFF&(data))
#define  COLOR_SHARP_DM_CDS_CM1_V_BOUND_1_get_cnt_1(data)                        (0x00FFFFFF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX                                0x1802B770
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_reg_addr                        "0xB802B770"
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_reg                             0xB802B770
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_inst_addr                       "0x0043"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_reg(data)                   (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_reg                         (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_gain_pos_shift                  (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_gain_neg_shift                  (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_gain_pos_mask                   (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_gain_neg_mask                   (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_gain_pos(data)                  (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_gain_neg(data)                  (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_get_gain_pos(data)              ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_get_gain_neg(data)              (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX                               0x1802B774
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_reg_addr                       "0xB802B774"
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_reg                            0xB802B774
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_inst_addr                      "0x0044"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_reg(data)                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_reg                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_hv_pos_shift                   (18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_hv_neg_shift                   (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_lv_shift                       (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_hv_pos_mask                    (0x0FFC0000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_hv_neg_mask                    (0x0003FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_lv_mask                        (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_hv_pos(data)                   (0x0FFC0000&((data)<<18))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_hv_neg(data)                   (0x0003FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_lv(data)                       (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_get_hv_pos(data)               ((0x0FFC0000&(data))>>18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_get_hv_neg(data)               ((0x0003FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_get_lv(data)                   (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE                               0x1802B778
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_reg_addr                       "0xB802B778"
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_reg                            0xB802B778
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_inst_addr                      "0x0045"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_reg(data)                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_reg                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_gain_pos_shift                 (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_gain_neg_shift                 (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_gain_pos_mask                  (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_gain_neg_mask                  (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_gain_pos(data)                 (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_gain_neg(data)                 (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_get_gain_pos(data)             ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_get_gain_neg(data)             (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE                              0x1802B77C
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_reg_addr                      "0xB802B77C"
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_reg                           0xB802B77C
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_inst_addr                     "0x0046"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_reg(data)                 (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_reg                       (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_hv_pos_shift                  (18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_hv_neg_shift                  (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_lv_shift                      (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_hv_pos_mask                   (0x0FFC0000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_hv_neg_mask                   (0x0003FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_lv_mask                       (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_hv_pos(data)                  (0x0FFC0000&((data)<<18))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_hv_neg(data)                  (0x0003FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_lv(data)                      (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_get_hv_pos(data)              ((0x0FFC0000&(data))>>18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_get_hv_neg(data)              ((0x0003FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_get_lv(data)                  (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_0                                       0x1802B780
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_reg_addr                               "0xB802B780"
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_reg                                    0xB802B780
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_inst_addr                              "0x0047"
#define  set_COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_reg))
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_cds_cm2_enable_shift                   (28)
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_u_ub_2_shift                           (12)
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_u_lb_2_shift                           (0)
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_cds_cm2_enable_mask                    (0x10000000)
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_u_ub_2_mask                            (0x007FF000)
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_u_lb_2_mask                            (0x000007FF)
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_cds_cm2_enable(data)                   (0x10000000&((data)<<28))
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_u_ub_2(data)                           (0x007FF000&((data)<<12))
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_u_lb_2(data)                           (0x000007FF&(data))
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_get_cds_cm2_enable(data)               ((0x10000000&(data))>>28)
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_get_u_ub_2(data)                       ((0x007FF000&(data))>>12)
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_get_u_lb_2(data)                       (0x000007FF&(data))

#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0                                       0x1802B784
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_reg_addr                               "0xB802B784"
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_reg                                    0xB802B784
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_inst_addr                              "0x0048"
#define  set_COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_reg))
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_cm2_mode_shift                         (30)
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_cm2_conti_area_shift                   (25)
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_cm2_conti_enable_shift                 (24)
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_v_ub_2_shift                           (12)
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_v_lb_2_shift                           (0)
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_cm2_mode_mask                          (0xC0000000)
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_cm2_conti_area_mask                    (0x3E000000)
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_cm2_conti_enable_mask                  (0x01000000)
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_v_ub_2_mask                            (0x007FF000)
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_v_lb_2_mask                            (0x000007FF)
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_cm2_mode(data)                         (0xC0000000&((data)<<30))
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_cm2_conti_area(data)                   (0x3E000000&((data)<<25))
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_cm2_conti_enable(data)                 (0x01000000&((data)<<24))
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_v_ub_2(data)                           (0x007FF000&((data)<<12))
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_v_lb_2(data)                           (0x000007FF&(data))
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_get_cm2_mode(data)                     ((0xC0000000&(data))>>30)
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_get_cm2_conti_area(data)               ((0x3E000000&(data))>>25)
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_get_cm2_conti_enable(data)             ((0x01000000&(data))>>24)
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_get_v_ub_2(data)                       ((0x007FF000&(data))>>12)
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_get_v_lb_2(data)                       (0x000007FF&(data))

#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_1                                       0x1802B788
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_reg_addr                               "0xB802B788"
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_reg                                    0xB802B788
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_inst_addr                              "0x0049"
#define  set_COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_reg))
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_uv_rad_2_shift                         (22)
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_cv_2_shift                             (12)
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_cu_2_shift                             (0)
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_uv_rad_2_mask                          (0x7FC00000)
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_cv_2_mask                              (0x003FF000)
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_cu_2_mask                              (0x000003FF)
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_uv_rad_2(data)                         (0x7FC00000&((data)<<22))
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_cv_2(data)                             (0x003FF000&((data)<<12))
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_cu_2(data)                             (0x000003FF&(data))
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_get_uv_rad_2(data)                     ((0x7FC00000&(data))>>22)
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_get_cv_2(data)                         ((0x003FF000&(data))>>12)
#define  COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_get_cu_2(data)                         (0x000003FF&(data))

#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_1                                       0x1802B78C
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_1_reg_addr                               "0xB802B78C"
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_1_reg                                    0xB802B78C
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_1_inst_addr                              "0x004A"
#define  set_COLOR_SHARP_DM_CDS_CM2_V_BOUND_1_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM2_V_BOUND_1_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM2_V_BOUND_1_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM2_V_BOUND_1_reg))
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_1_cnt_2_shift                            (0)
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_1_cnt_2_mask                             (0x00FFFFFF)
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_1_cnt_2(data)                            (0x00FFFFFF&(data))
#define  COLOR_SHARP_DM_CDS_CM2_V_BOUND_1_get_cnt_2(data)                        (0x00FFFFFF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX                                0x1802B790
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_reg_addr                        "0xB802B790"
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_reg                             0xB802B790
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_inst_addr                       "0x004B"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_reg(data)                   (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_reg                         (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_gain_pos_shift                  (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_gain_neg_shift                  (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_gain_pos_mask                   (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_gain_neg_mask                   (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_gain_pos(data)                  (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_gain_neg(data)                  (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_get_gain_pos(data)              ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_get_gain_neg(data)              (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX                               0x1802B794
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_reg_addr                       "0xB802B794"
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_reg                            0xB802B794
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_inst_addr                      "0x004C"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_reg(data)                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_reg                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_hv_pos_shift                   (18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_hv_neg_shift                   (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_lv_shift                       (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_hv_pos_mask                    (0x0FFC0000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_hv_neg_mask                    (0x0003FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_lv_mask                        (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_hv_pos(data)                   (0x0FFC0000&((data)<<18))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_hv_neg(data)                   (0x0003FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_lv(data)                       (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_get_hv_pos(data)               ((0x0FFC0000&(data))>>18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_get_hv_neg(data)               ((0x0003FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_get_lv(data)                   (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE                               0x1802B798
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_reg_addr                       "0xB802B798"
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_reg                            0xB802B798
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_inst_addr                      "0x004D"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_reg(data)                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_reg                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_gain_pos_shift                 (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_gain_neg_shift                 (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_gain_pos_mask                  (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_gain_neg_mask                  (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_gain_pos(data)                 (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_gain_neg(data)                 (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_get_gain_pos(data)             ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_get_gain_neg(data)             (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE                              0x1802B79C
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_reg_addr                      "0xB802B79C"
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_reg                           0xB802B79C
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_inst_addr                     "0x004E"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_reg(data)                 (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_reg                       (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_hv_pos_shift                  (18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_hv_neg_shift                  (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_lv_shift                      (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_hv_pos_mask                   (0x0FFC0000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_hv_neg_mask                   (0x0003FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_lv_mask                       (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_hv_pos(data)                  (0x0FFC0000&((data)<<18))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_hv_neg(data)                  (0x0003FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_lv(data)                      (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_get_hv_pos(data)              ((0x0FFC0000&(data))>>18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_get_hv_neg(data)              ((0x0003FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_get_lv(data)                  (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_0                                       0x1802B7A0
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_reg_addr                               "0xB802B7A0"
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_reg                                    0xB802B7A0
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_inst_addr                              "0x004F"
#define  set_COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_reg))
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_cds_cm3_enable_shift                   (28)
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_u_ub_3_shift                           (12)
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_u_lb_3_shift                           (0)
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_cds_cm3_enable_mask                    (0x10000000)
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_u_ub_3_mask                            (0x007FF000)
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_u_lb_3_mask                            (0x000007FF)
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_cds_cm3_enable(data)                   (0x10000000&((data)<<28))
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_u_ub_3(data)                           (0x007FF000&((data)<<12))
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_u_lb_3(data)                           (0x000007FF&(data))
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_get_cds_cm3_enable(data)               ((0x10000000&(data))>>28)
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_get_u_ub_3(data)                       ((0x007FF000&(data))>>12)
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_0_get_u_lb_3(data)                       (0x000007FF&(data))

#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0                                       0x1802B7A4
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_reg_addr                               "0xB802B7A4"
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_reg                                    0xB802B7A4
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_inst_addr                              "0x0050"
#define  set_COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_reg))
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_cm3_mode_shift                         (30)
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_cm3_conti_area_shift                   (25)
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_cm3_conti_enable_shift                 (24)
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_v_ub_3_shift                           (12)
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_v_lb_3_shift                           (0)
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_cm3_mode_mask                          (0xC0000000)
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_cm3_conti_area_mask                    (0x3E000000)
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_cm3_conti_enable_mask                  (0x01000000)
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_v_ub_3_mask                            (0x007FF000)
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_v_lb_3_mask                            (0x000007FF)
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_cm3_mode(data)                         (0xC0000000&((data)<<30))
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_cm3_conti_area(data)                   (0x3E000000&((data)<<25))
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_cm3_conti_enable(data)                 (0x01000000&((data)<<24))
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_v_ub_3(data)                           (0x007FF000&((data)<<12))
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_v_lb_3(data)                           (0x000007FF&(data))
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_get_cm3_mode(data)                     ((0xC0000000&(data))>>30)
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_get_cm3_conti_area(data)               ((0x3E000000&(data))>>25)
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_get_cm3_conti_enable(data)             ((0x01000000&(data))>>24)
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_get_v_ub_3(data)                       ((0x007FF000&(data))>>12)
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_0_get_v_lb_3(data)                       (0x000007FF&(data))

#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_1                                       0x1802B7A8
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_reg_addr                               "0xB802B7A8"
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_reg                                    0xB802B7A8
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_inst_addr                              "0x0051"
#define  set_COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_reg))
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_uv_rad_3_shift                         (22)
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_cv_3_shift                             (12)
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_cu_3_shift                             (0)
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_uv_rad_3_mask                          (0x7FC00000)
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_cv_3_mask                              (0x003FF000)
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_cu_3_mask                              (0x000003FF)
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_uv_rad_3(data)                         (0x7FC00000&((data)<<22))
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_cv_3(data)                             (0x003FF000&((data)<<12))
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_cu_3(data)                             (0x000003FF&(data))
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_get_uv_rad_3(data)                     ((0x7FC00000&(data))>>22)
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_get_cv_3(data)                         ((0x003FF000&(data))>>12)
#define  COLOR_SHARP_DM_CDS_CM3_U_BOUND_1_get_cu_3(data)                         (0x000003FF&(data))

#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_1                                       0x1802B7AC
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_1_reg_addr                               "0xB802B7AC"
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_1_reg                                    0xB802B7AC
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_1_inst_addr                              "0x0052"
#define  set_COLOR_SHARP_DM_CDS_CM3_V_BOUND_1_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM3_V_BOUND_1_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM3_V_BOUND_1_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM3_V_BOUND_1_reg))
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_1_cnt_3_shift                            (0)
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_1_cnt_3_mask                             (0x00FFFFFF)
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_1_cnt_3(data)                            (0x00FFFFFF&(data))
#define  COLOR_SHARP_DM_CDS_CM3_V_BOUND_1_get_cnt_3(data)                        (0x00FFFFFF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_TEX                                0x1802B7B0
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_TEX_reg_addr                        "0xB802B7B0"
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_TEX_reg                             0xB802B7B0
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_TEX_inst_addr                       "0x0053"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_TEX_reg(data)                   (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_TEX_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_TEX_reg                         (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_TEX_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_TEX_gain_pos_shift                  (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_TEX_gain_neg_shift                  (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_TEX_gain_pos_mask                   (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_TEX_gain_neg_mask                   (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_TEX_gain_pos(data)                  (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_TEX_gain_neg(data)                  (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_TEX_get_gain_pos(data)              ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_TEX_get_gain_neg(data)              (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX                               0x1802B7B4
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_reg_addr                       "0xB802B7B4"
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_reg                            0xB802B7B4
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_inst_addr                      "0x0054"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_reg(data)                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_reg                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_hv_pos_shift                   (18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_hv_neg_shift                   (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_lv_shift                       (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_hv_pos_mask                    (0x0FFC0000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_hv_neg_mask                    (0x0003FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_lv_mask                        (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_hv_pos(data)                   (0x0FFC0000&((data)<<18))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_hv_neg(data)                   (0x0003FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_lv(data)                       (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_get_hv_pos(data)               ((0x0FFC0000&(data))>>18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_get_hv_neg(data)               ((0x0003FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_TEX_get_lv(data)                   (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_EDGE                               0x1802B7B8
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_EDGE_reg_addr                       "0xB802B7B8"
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_EDGE_reg                            0xB802B7B8
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_EDGE_inst_addr                      "0x0055"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_EDGE_reg(data)                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_EDGE_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_EDGE_reg                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_EDGE_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_EDGE_gain_pos_shift                 (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_EDGE_gain_neg_shift                 (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_EDGE_gain_pos_mask                  (0x0000FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_EDGE_gain_neg_mask                  (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_EDGE_gain_pos(data)                 (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_EDGE_gain_neg(data)                 (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_EDGE_get_gain_pos(data)             ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM3_EDGE_get_gain_neg(data)             (0x000000FF&(data))

#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE                              0x1802B7BC
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_reg_addr                      "0xB802B7BC"
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_reg                           0xB802B7BC
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_inst_addr                     "0x0056"
#define  set_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_reg(data)                 (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_reg                       (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_reg))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_hv_pos_shift                  (18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_hv_neg_shift                  (8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_lv_shift                      (0)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_hv_pos_mask                   (0x0FFC0000)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_hv_neg_mask                   (0x0003FF00)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_lv_mask                       (0x000000FF)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_hv_pos(data)                  (0x0FFC0000&((data)<<18))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_hv_neg(data)                  (0x0003FF00&((data)<<8))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_lv(data)                      (0x000000FF&(data))
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_get_hv_pos(data)              ((0x0FFC0000&(data))>>18)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_get_hv_neg(data)              ((0x0003FF00&(data))>>8)
#define  COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM3_EDGE_get_lv(data)                  (0x000000FF&(data))

#define  COLOR_SHARP_DM_SOURS_LPF_0                                             0x1802B7C0
#define  COLOR_SHARP_DM_SOURS_LPF_0_reg_addr                                     "0xB802B7C0"
#define  COLOR_SHARP_DM_SOURS_LPF_0_reg                                          0xB802B7C0
#define  COLOR_SHARP_DM_SOURS_LPF_0_inst_addr                                    "0x0057"
#define  set_COLOR_SHARP_DM_SOURS_LPF_0_reg(data)                                (*((volatile unsigned int*)COLOR_SHARP_DM_SOURS_LPF_0_reg)=data)
#define  get_COLOR_SHARP_DM_SOURS_LPF_0_reg                                      (*((volatile unsigned int*)COLOR_SHARP_DM_SOURS_LPF_0_reg))
#define  COLOR_SHARP_DM_SOURS_LPF_0_coef_c0_shift                                (24)
#define  COLOR_SHARP_DM_SOURS_LPF_0_coef_c1_shift                                (16)
#define  COLOR_SHARP_DM_SOURS_LPF_0_coef_c2_shift                                (8)
#define  COLOR_SHARP_DM_SOURS_LPF_0_coef_c3_shift                                (0)
#define  COLOR_SHARP_DM_SOURS_LPF_0_coef_c0_mask                                 (0x3F000000)
#define  COLOR_SHARP_DM_SOURS_LPF_0_coef_c1_mask                                 (0x003F0000)
#define  COLOR_SHARP_DM_SOURS_LPF_0_coef_c2_mask                                 (0x00003F00)
#define  COLOR_SHARP_DM_SOURS_LPF_0_coef_c3_mask                                 (0x0000003F)
#define  COLOR_SHARP_DM_SOURS_LPF_0_coef_c0(data)                                (0x3F000000&((data)<<24))
#define  COLOR_SHARP_DM_SOURS_LPF_0_coef_c1(data)                                (0x003F0000&((data)<<16))
#define  COLOR_SHARP_DM_SOURS_LPF_0_coef_c2(data)                                (0x00003F00&((data)<<8))
#define  COLOR_SHARP_DM_SOURS_LPF_0_coef_c3(data)                                (0x0000003F&(data))
#define  COLOR_SHARP_DM_SOURS_LPF_0_get_coef_c0(data)                            ((0x3F000000&(data))>>24)
#define  COLOR_SHARP_DM_SOURS_LPF_0_get_coef_c1(data)                            ((0x003F0000&(data))>>16)
#define  COLOR_SHARP_DM_SOURS_LPF_0_get_coef_c2(data)                            ((0x00003F00&(data))>>8)
#define  COLOR_SHARP_DM_SOURS_LPF_0_get_coef_c3(data)                            (0x0000003F&(data))

#define  COLOR_SHARP_DM_SOURS_LPF_1                                             0x1802B7C4
#define  COLOR_SHARP_DM_SOURS_LPF_1_reg_addr                                     "0xB802B7C4"
#define  COLOR_SHARP_DM_SOURS_LPF_1_reg                                          0xB802B7C4
#define  COLOR_SHARP_DM_SOURS_LPF_1_inst_addr                                    "0x0058"
#define  set_COLOR_SHARP_DM_SOURS_LPF_1_reg(data)                                (*((volatile unsigned int*)COLOR_SHARP_DM_SOURS_LPF_1_reg)=data)
#define  get_COLOR_SHARP_DM_SOURS_LPF_1_reg                                      (*((volatile unsigned int*)COLOR_SHARP_DM_SOURS_LPF_1_reg))
#define  COLOR_SHARP_DM_SOURS_LPF_1_coef_c4_shift                                (8)
#define  COLOR_SHARP_DM_SOURS_LPF_1_coef_c5_shift                                (0)
#define  COLOR_SHARP_DM_SOURS_LPF_1_coef_c4_mask                                 (0x00003F00)
#define  COLOR_SHARP_DM_SOURS_LPF_1_coef_c5_mask                                 (0x0000003F)
#define  COLOR_SHARP_DM_SOURS_LPF_1_coef_c4(data)                                (0x00003F00&((data)<<8))
#define  COLOR_SHARP_DM_SOURS_LPF_1_coef_c5(data)                                (0x0000003F&(data))
#define  COLOR_SHARP_DM_SOURS_LPF_1_get_coef_c4(data)                            ((0x00003F00&(data))>>8)
#define  COLOR_SHARP_DM_SOURS_LPF_1_get_coef_c5(data)                            (0x0000003F&(data))

#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_0                                       0x1802B7C8
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_0_reg_addr                               "0xB802B7C8"
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_0_reg                                    0xB802B7C8
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_0_inst_addr                              "0x0059"
#define  set_COLOR_SHARP_DM_MAXMIN_SHP_GAIN_0_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_SHP_GAIN_0_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_SHP_GAIN_0_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_SHP_GAIN_0_reg))
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_0_s0_shift                               (16)
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_0_s1_shift                               (0)
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_0_s0_mask                                (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_0_s1_mask                                (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_0_s0(data)                               (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_0_s1(data)                               (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_0_get_s0(data)                           ((0x07FF0000&(data))>>16)
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_0_get_s1(data)                           (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_1                                       0x1802B7CC
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_1_reg_addr                               "0xB802B7CC"
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_1_reg                                    0xB802B7CC
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_1_inst_addr                              "0x005A"
#define  set_COLOR_SHARP_DM_MAXMIN_SHP_GAIN_1_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_SHP_GAIN_1_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_SHP_GAIN_1_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_SHP_GAIN_1_reg))
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_1_s2_shift                               (16)
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_1_s3_shift                               (0)
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_1_s2_mask                                (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_1_s3_mask                                (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_1_s2(data)                               (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_1_s3(data)                               (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_1_get_s2(data)                           ((0x07FF0000&(data))>>16)
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_1_get_s3(data)                           (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_2                                       0x1802B7D0
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_2_reg_addr                               "0xB802B7D0"
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_2_reg                                    0xB802B7D0
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_2_inst_addr                              "0x005B"
#define  set_COLOR_SHARP_DM_MAXMIN_SHP_GAIN_2_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_SHP_GAIN_2_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_SHP_GAIN_2_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_SHP_GAIN_2_reg))
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_2_s4_shift                               (16)
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_2_s5_shift                               (0)
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_2_s4_mask                                (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_2_s5_mask                                (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_2_s4(data)                               (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_2_s5(data)                               (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_2_get_s4(data)                           ((0x07FF0000&(data))>>16)
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_2_get_s5(data)                           (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_3                                       0x1802B7D4
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_3_reg_addr                               "0xB802B7D4"
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_3_reg                                    0xB802B7D4
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_3_inst_addr                              "0x005C"
#define  set_COLOR_SHARP_DM_MAXMIN_SHP_GAIN_3_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_SHP_GAIN_3_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_SHP_GAIN_3_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_SHP_GAIN_3_reg))
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_3_s6_shift                               (16)
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_3_s6_mask                                (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_3_s6(data)                               (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_SHP_GAIN_3_get_s6(data)                           ((0x07FF0000&(data))>>16)

#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_0                                       0x1802B7D8
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_0_reg_addr                               "0xB802B7D8"
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_0_reg                                    0xB802B7D8
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_0_inst_addr                              "0x005D"
#define  set_COLOR_SHARP_DM_MAXMIN_SHP_STEP_0_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_SHP_STEP_0_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_SHP_STEP_0_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_SHP_STEP_0_reg))
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_0_s1_shift                               (0)
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_0_s1_mask                                (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_0_s1(data)                               (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_0_get_s1(data)                           (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_1                                       0x1802B7DC
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_1_reg_addr                               "0xB802B7DC"
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_1_reg                                    0xB802B7DC
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_1_inst_addr                              "0x005E"
#define  set_COLOR_SHARP_DM_MAXMIN_SHP_STEP_1_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_SHP_STEP_1_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_SHP_STEP_1_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_SHP_STEP_1_reg))
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_1_s2_shift                               (16)
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_1_s3_shift                               (0)
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_1_s2_mask                                (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_1_s3_mask                                (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_1_s2(data)                               (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_1_s3(data)                               (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_1_get_s2(data)                           ((0x07FF0000&(data))>>16)
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_1_get_s3(data)                           (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_2                                       0x1802B7E0
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_2_reg_addr                               "0xB802B7E0"
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_2_reg                                    0xB802B7E0
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_2_inst_addr                              "0x005F"
#define  set_COLOR_SHARP_DM_MAXMIN_SHP_STEP_2_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_SHP_STEP_2_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_SHP_STEP_2_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_SHP_STEP_2_reg))
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_2_s4_shift                               (16)
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_2_s5_shift                               (0)
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_2_s4_mask                                (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_2_s5_mask                                (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_2_s4(data)                               (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_2_s5(data)                               (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_2_get_s4(data)                           ((0x07FF0000&(data))>>16)
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_2_get_s5(data)                           (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_3                                       0x1802B7E4
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_3_reg_addr                               "0xB802B7E4"
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_3_reg                                    0xB802B7E4
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_3_inst_addr                              "0x0060"
#define  set_COLOR_SHARP_DM_MAXMIN_SHP_STEP_3_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_SHP_STEP_3_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_SHP_STEP_3_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_SHP_STEP_3_reg))
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_3_s6_shift                               (16)
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_3_s6_mask                                (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_3_s6(data)                               (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_SHP_STEP_3_get_s6(data)                           ((0x07FF0000&(data))>>16)

#define  COLOR_SHARP_DM_CDS_CM0_Y                                               0x1802B7E8
#define  COLOR_SHARP_DM_CDS_CM0_Y_reg_addr                                       "0xB802B7E8"
#define  COLOR_SHARP_DM_CDS_CM0_Y_reg                                            0xB802B7E8
#define  COLOR_SHARP_DM_CDS_CM0_Y_inst_addr                                      "0x0061"
#define  set_COLOR_SHARP_DM_CDS_CM0_Y_reg(data)                                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM0_Y_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM0_Y_reg                                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM0_Y_reg))
#define  COLOR_SHARP_DM_CDS_CM0_Y_sum_0_shift                                    (0)
#define  COLOR_SHARP_DM_CDS_CM0_Y_sum_0_mask                                     (0xFFFFFFFF)
#define  COLOR_SHARP_DM_CDS_CM0_Y_sum_0(data)                                    (0xFFFFFFFF&(data))
#define  COLOR_SHARP_DM_CDS_CM0_Y_get_sum_0(data)                                (0xFFFFFFFF&(data))

#define  COLOR_SHARP_DM_CDS_CM0_U                                               0x1802B7EC
#define  COLOR_SHARP_DM_CDS_CM0_U_reg_addr                                       "0xB802B7EC"
#define  COLOR_SHARP_DM_CDS_CM0_U_reg                                            0xB802B7EC
#define  COLOR_SHARP_DM_CDS_CM0_U_inst_addr                                      "0x0062"
#define  set_COLOR_SHARP_DM_CDS_CM0_U_reg(data)                                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM0_U_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM0_U_reg                                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM0_U_reg))
#define  COLOR_SHARP_DM_CDS_CM0_U_sum_0_shift                                    (0)
#define  COLOR_SHARP_DM_CDS_CM0_U_sum_0_mask                                     (0xFFFFFFFF)
#define  COLOR_SHARP_DM_CDS_CM0_U_sum_0(data)                                    (0xFFFFFFFF&(data))
#define  COLOR_SHARP_DM_CDS_CM0_U_get_sum_0(data)                                (0xFFFFFFFF&(data))

#define  COLOR_SHARP_DM_CDS_CM0_V                                               0x1802B7F0
#define  COLOR_SHARP_DM_CDS_CM0_V_reg_addr                                       "0xB802B7F0"
#define  COLOR_SHARP_DM_CDS_CM0_V_reg                                            0xB802B7F0
#define  COLOR_SHARP_DM_CDS_CM0_V_inst_addr                                      "0x0063"
#define  set_COLOR_SHARP_DM_CDS_CM0_V_reg(data)                                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM0_V_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM0_V_reg                                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM0_V_reg))
#define  COLOR_SHARP_DM_CDS_CM0_V_sum_0_shift                                    (0)
#define  COLOR_SHARP_DM_CDS_CM0_V_sum_0_mask                                     (0xFFFFFFFF)
#define  COLOR_SHARP_DM_CDS_CM0_V_sum_0(data)                                    (0xFFFFFFFF&(data))
#define  COLOR_SHARP_DM_CDS_CM0_V_get_sum_0(data)                                (0xFFFFFFFF&(data))

#define  COLOR_SHARP_DM_CDS_CM1_Y                                               0x1802B7F4
#define  COLOR_SHARP_DM_CDS_CM1_Y_reg_addr                                       "0xB802B7F4"
#define  COLOR_SHARP_DM_CDS_CM1_Y_reg                                            0xB802B7F4
#define  COLOR_SHARP_DM_CDS_CM1_Y_inst_addr                                      "0x0064"
#define  set_COLOR_SHARP_DM_CDS_CM1_Y_reg(data)                                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM1_Y_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM1_Y_reg                                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM1_Y_reg))
#define  COLOR_SHARP_DM_CDS_CM1_Y_sum_1_shift                                    (0)
#define  COLOR_SHARP_DM_CDS_CM1_Y_sum_1_mask                                     (0xFFFFFFFF)
#define  COLOR_SHARP_DM_CDS_CM1_Y_sum_1(data)                                    (0xFFFFFFFF&(data))
#define  COLOR_SHARP_DM_CDS_CM1_Y_get_sum_1(data)                                (0xFFFFFFFF&(data))

#define  COLOR_SHARP_DM_CDS_CM1_U                                               0x1802B7F8
#define  COLOR_SHARP_DM_CDS_CM1_U_reg_addr                                       "0xB802B7F8"
#define  COLOR_SHARP_DM_CDS_CM1_U_reg                                            0xB802B7F8
#define  COLOR_SHARP_DM_CDS_CM1_U_inst_addr                                      "0x0065"
#define  set_COLOR_SHARP_DM_CDS_CM1_U_reg(data)                                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM1_U_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM1_U_reg                                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM1_U_reg))
#define  COLOR_SHARP_DM_CDS_CM1_U_sum_1_shift                                    (0)
#define  COLOR_SHARP_DM_CDS_CM1_U_sum_1_mask                                     (0xFFFFFFFF)
#define  COLOR_SHARP_DM_CDS_CM1_U_sum_1(data)                                    (0xFFFFFFFF&(data))
#define  COLOR_SHARP_DM_CDS_CM1_U_get_sum_1(data)                                (0xFFFFFFFF&(data))

#define  COLOR_SHARP_DM_CDS_CM1_V                                               0x1802B7FC
#define  COLOR_SHARP_DM_CDS_CM1_V_reg_addr                                       "0xB802B7FC"
#define  COLOR_SHARP_DM_CDS_CM1_V_reg                                            0xB802B7FC
#define  COLOR_SHARP_DM_CDS_CM1_V_inst_addr                                      "0x0066"
#define  set_COLOR_SHARP_DM_CDS_CM1_V_reg(data)                                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM1_V_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM1_V_reg                                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM1_V_reg))
#define  COLOR_SHARP_DM_CDS_CM1_V_sum_1_shift                                    (0)
#define  COLOR_SHARP_DM_CDS_CM1_V_sum_1_mask                                     (0xFFFFFFFF)
#define  COLOR_SHARP_DM_CDS_CM1_V_sum_1(data)                                    (0xFFFFFFFF&(data))
#define  COLOR_SHARP_DM_CDS_CM1_V_get_sum_1(data)                                (0xFFFFFFFF&(data))

#define  COLOR_SHARP_DM_CDS_CM2_Y                                               0x1802B800
#define  COLOR_SHARP_DM_CDS_CM2_Y_reg_addr                                       "0xB802B800"
#define  COLOR_SHARP_DM_CDS_CM2_Y_reg                                            0xB802B800
#define  COLOR_SHARP_DM_CDS_CM2_Y_inst_addr                                      "0x0067"
#define  set_COLOR_SHARP_DM_CDS_CM2_Y_reg(data)                                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM2_Y_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM2_Y_reg                                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM2_Y_reg))
#define  COLOR_SHARP_DM_CDS_CM2_Y_sum_2_shift                                    (0)
#define  COLOR_SHARP_DM_CDS_CM2_Y_sum_2_mask                                     (0xFFFFFFFF)
#define  COLOR_SHARP_DM_CDS_CM2_Y_sum_2(data)                                    (0xFFFFFFFF&(data))
#define  COLOR_SHARP_DM_CDS_CM2_Y_get_sum_2(data)                                (0xFFFFFFFF&(data))

#define  COLOR_SHARP_DM_CDS_CM2_U                                               0x1802B804
#define  COLOR_SHARP_DM_CDS_CM2_U_reg_addr                                       "0xB802B804"
#define  COLOR_SHARP_DM_CDS_CM2_U_reg                                            0xB802B804
#define  COLOR_SHARP_DM_CDS_CM2_U_inst_addr                                      "0x0068"
#define  set_COLOR_SHARP_DM_CDS_CM2_U_reg(data)                                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM2_U_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM2_U_reg                                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM2_U_reg))
#define  COLOR_SHARP_DM_CDS_CM2_U_sum_2_shift                                    (0)
#define  COLOR_SHARP_DM_CDS_CM2_U_sum_2_mask                                     (0xFFFFFFFF)
#define  COLOR_SHARP_DM_CDS_CM2_U_sum_2(data)                                    (0xFFFFFFFF&(data))
#define  COLOR_SHARP_DM_CDS_CM2_U_get_sum_2(data)                                (0xFFFFFFFF&(data))

#define  COLOR_SHARP_DM_CDS_CM2_V                                               0x1802B808
#define  COLOR_SHARP_DM_CDS_CM2_V_reg_addr                                       "0xB802B808"
#define  COLOR_SHARP_DM_CDS_CM2_V_reg                                            0xB802B808
#define  COLOR_SHARP_DM_CDS_CM2_V_inst_addr                                      "0x0069"
#define  set_COLOR_SHARP_DM_CDS_CM2_V_reg(data)                                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM2_V_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM2_V_reg                                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM2_V_reg))
#define  COLOR_SHARP_DM_CDS_CM2_V_sum_2_shift                                    (0)
#define  COLOR_SHARP_DM_CDS_CM2_V_sum_2_mask                                     (0xFFFFFFFF)
#define  COLOR_SHARP_DM_CDS_CM2_V_sum_2(data)                                    (0xFFFFFFFF&(data))
#define  COLOR_SHARP_DM_CDS_CM2_V_get_sum_2(data)                                (0xFFFFFFFF&(data))

#define  COLOR_SHARP_DM_CDS_CM3_Y                                               0x1802B80C
#define  COLOR_SHARP_DM_CDS_CM3_Y_reg_addr                                       "0xB802B80C"
#define  COLOR_SHARP_DM_CDS_CM3_Y_reg                                            0xB802B80C
#define  COLOR_SHARP_DM_CDS_CM3_Y_inst_addr                                      "0x006A"
#define  set_COLOR_SHARP_DM_CDS_CM3_Y_reg(data)                                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM3_Y_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM3_Y_reg                                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM3_Y_reg))
#define  COLOR_SHARP_DM_CDS_CM3_Y_sum_3_shift                                    (0)
#define  COLOR_SHARP_DM_CDS_CM3_Y_sum_3_mask                                     (0xFFFFFFFF)
#define  COLOR_SHARP_DM_CDS_CM3_Y_sum_3(data)                                    (0xFFFFFFFF&(data))
#define  COLOR_SHARP_DM_CDS_CM3_Y_get_sum_3(data)                                (0xFFFFFFFF&(data))

#define  COLOR_SHARP_DM_CDS_CM3_U                                               0x1802B810
#define  COLOR_SHARP_DM_CDS_CM3_U_reg_addr                                       "0xB802B810"
#define  COLOR_SHARP_DM_CDS_CM3_U_reg                                            0xB802B810
#define  COLOR_SHARP_DM_CDS_CM3_U_inst_addr                                      "0x006B"
#define  set_COLOR_SHARP_DM_CDS_CM3_U_reg(data)                                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM3_U_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM3_U_reg                                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM3_U_reg))
#define  COLOR_SHARP_DM_CDS_CM3_U_sum_3_shift                                    (0)
#define  COLOR_SHARP_DM_CDS_CM3_U_sum_3_mask                                     (0xFFFFFFFF)
#define  COLOR_SHARP_DM_CDS_CM3_U_sum_3(data)                                    (0xFFFFFFFF&(data))
#define  COLOR_SHARP_DM_CDS_CM3_U_get_sum_3(data)                                (0xFFFFFFFF&(data))

#define  COLOR_SHARP_DM_CDS_CM3_V                                               0x1802B814
#define  COLOR_SHARP_DM_CDS_CM3_V_reg_addr                                       "0xB802B814"
#define  COLOR_SHARP_DM_CDS_CM3_V_reg                                            0xB802B814
#define  COLOR_SHARP_DM_CDS_CM3_V_inst_addr                                      "0x006C"
#define  set_COLOR_SHARP_DM_CDS_CM3_V_reg(data)                                  (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM3_V_reg)=data)
#define  get_COLOR_SHARP_DM_CDS_CM3_V_reg                                        (*((volatile unsigned int*)COLOR_SHARP_DM_CDS_CM3_V_reg))
#define  COLOR_SHARP_DM_CDS_CM3_V_sum_3_shift                                    (0)
#define  COLOR_SHARP_DM_CDS_CM3_V_sum_3_mask                                     (0xFFFFFFFF)
#define  COLOR_SHARP_DM_CDS_CM3_V_sum_3(data)                                    (0xFFFFFFFF&(data))
#define  COLOR_SHARP_DM_CDS_CM3_V_get_sum_3(data)                                (0xFFFFFFFF&(data))

#define  COLOR_SHARP_DM_VPK_HPK_ADD                                             0x1802B818
#define  COLOR_SHARP_DM_VPK_HPK_ADD_reg_addr                                     "0xB802B818"
#define  COLOR_SHARP_DM_VPK_HPK_ADD_reg                                          0xB802B818
#define  COLOR_SHARP_DM_VPK_HPK_ADD_inst_addr                                    "0x006D"
#define  set_COLOR_SHARP_DM_VPK_HPK_ADD_reg(data)                                (*((volatile unsigned int*)COLOR_SHARP_DM_VPK_HPK_ADD_reg)=data)
#define  get_COLOR_SHARP_DM_VPK_HPK_ADD_reg                                      (*((volatile unsigned int*)COLOR_SHARP_DM_VPK_HPK_ADD_reg))
#define  COLOR_SHARP_DM_VPK_HPK_ADD_dummy_31_4_shift                             (4)
#define  COLOR_SHARP_DM_VPK_HPK_ADD_hpf_vpf_maxmin_en_shift                      (1)
#define  COLOR_SHARP_DM_VPK_HPK_ADD_src_sel_shift                                (0)
#define  COLOR_SHARP_DM_VPK_HPK_ADD_dummy_31_4_mask                              (0xFFFFFFF0)
#define  COLOR_SHARP_DM_VPK_HPK_ADD_hpf_vpf_maxmin_en_mask                       (0x00000002)
#define  COLOR_SHARP_DM_VPK_HPK_ADD_src_sel_mask                                 (0x00000001)
#define  COLOR_SHARP_DM_VPK_HPK_ADD_dummy_31_4(data)                             (0xFFFFFFF0&((data)<<4))
#define  COLOR_SHARP_DM_VPK_HPK_ADD_hpf_vpf_maxmin_en(data)                      (0x00000002&((data)<<1))
#define  COLOR_SHARP_DM_VPK_HPK_ADD_src_sel(data)                                (0x00000001&(data))
#define  COLOR_SHARP_DM_VPK_HPK_ADD_get_dummy_31_4(data)                         ((0xFFFFFFF0&(data))>>4)
#define  COLOR_SHARP_DM_VPK_HPK_ADD_get_hpf_vpf_maxmin_en(data)                  ((0x00000002&(data))>>1)
#define  COLOR_SHARP_DM_VPK_HPK_ADD_get_src_sel(data)                            (0x00000001&(data))

#define  COLOR_SHARP_DM_GAIN_CURVE_DEBUG                                        0x1802B88C
#define  COLOR_SHARP_DM_GAIN_CURVE_DEBUG_reg_addr                                "0xB802B88C"
#define  COLOR_SHARP_DM_GAIN_CURVE_DEBUG_reg                                     0xB802B88C
#define  COLOR_SHARP_DM_GAIN_CURVE_DEBUG_inst_addr                               "0x006E"
#define  set_COLOR_SHARP_DM_GAIN_CURVE_DEBUG_reg(data)                           (*((volatile unsigned int*)COLOR_SHARP_DM_GAIN_CURVE_DEBUG_reg)=data)
#define  get_COLOR_SHARP_DM_GAIN_CURVE_DEBUG_reg                                 (*((volatile unsigned int*)COLOR_SHARP_DM_GAIN_CURVE_DEBUG_reg))
#define  COLOR_SHARP_DM_GAIN_CURVE_DEBUG_hpf_out_debug_en_shift                  (19)
#define  COLOR_SHARP_DM_GAIN_CURVE_DEBUG_hpf_out_debug_sel_shift                 (16)
#define  COLOR_SHARP_DM_GAIN_CURVE_DEBUG_hpf_out_debug_en_mask                   (0x00080000)
#define  COLOR_SHARP_DM_GAIN_CURVE_DEBUG_hpf_out_debug_sel_mask                  (0x00070000)
#define  COLOR_SHARP_DM_GAIN_CURVE_DEBUG_hpf_out_debug_en(data)                  (0x00080000&((data)<<19))
#define  COLOR_SHARP_DM_GAIN_CURVE_DEBUG_hpf_out_debug_sel(data)                 (0x00070000&((data)<<16))
#define  COLOR_SHARP_DM_GAIN_CURVE_DEBUG_get_hpf_out_debug_en(data)              ((0x00080000&(data))>>19)
#define  COLOR_SHARP_DM_GAIN_CURVE_DEBUG_get_hpf_out_debug_sel(data)             ((0x00070000&(data))>>16)

#define  COLOR_SHARP_DM_SR_Ctrl                                                 0x1802BA00
#define  COLOR_SHARP_DM_SR_Ctrl_reg_addr                                         "0xB802BA00"
#define  COLOR_SHARP_DM_SR_Ctrl_reg                                              0xB802BA00
#define  COLOR_SHARP_DM_SR_Ctrl_inst_addr                                        "0x006F"
#define  set_COLOR_SHARP_DM_SR_Ctrl_reg(data)                                    (*((volatile unsigned int*)COLOR_SHARP_DM_SR_Ctrl_reg)=data)
#define  get_COLOR_SHARP_DM_SR_Ctrl_reg                                          (*((volatile unsigned int*)COLOR_SHARP_DM_SR_Ctrl_reg))
#define  COLOR_SHARP_DM_SR_Ctrl_sr_pndu_shift                                    (23)
#define  COLOR_SHARP_DM_SR_Ctrl_vpk_sr_tex_shift                                 (22)
#define  COLOR_SHARP_DM_SR_Ctrl_vpk_sr_edg_shift                                 (21)
#define  COLOR_SHARP_DM_SR_Ctrl_h_edg_filter_en_shift                            (20)
#define  COLOR_SHARP_DM_SR_Ctrl_h_tex_filter_en_shift                            (19)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_0_edg_en_shift                                (18)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_0_tex_en_shift                                (17)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_1_edg_en_shift                                (16)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_1_tex_en_shift                                (15)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_2_edg_en_shift                                (14)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_2_tex_en_shift                                (13)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_3_edg_en_shift                                (12)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_3_tex_en_shift                                (11)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_0_edg_en_shift                              (10)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_0_tex_en_shift                              (9)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_1_edg_en_shift                              (8)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_1_tex_en_shift                              (7)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_2_edg_en_shift                              (6)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_2_tex_en_shift                              (5)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_3_edg_en_shift                              (4)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_3_tex_en_shift                              (3)
#define  COLOR_SHARP_DM_SR_Ctrl_vpk_edg_en_shift                                 (2)
#define  COLOR_SHARP_DM_SR_Ctrl_vpk_tex_en_shift                                 (1)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_pndu_mask                                     (0x00800000)
#define  COLOR_SHARP_DM_SR_Ctrl_vpk_sr_tex_mask                                  (0x00400000)
#define  COLOR_SHARP_DM_SR_Ctrl_vpk_sr_edg_mask                                  (0x00200000)
#define  COLOR_SHARP_DM_SR_Ctrl_h_edg_filter_en_mask                             (0x00100000)
#define  COLOR_SHARP_DM_SR_Ctrl_h_tex_filter_en_mask                             (0x00080000)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_0_edg_en_mask                                 (0x00040000)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_0_tex_en_mask                                 (0x00020000)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_1_edg_en_mask                                 (0x00010000)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_1_tex_en_mask                                 (0x00008000)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_2_edg_en_mask                                 (0x00004000)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_2_tex_en_mask                                 (0x00002000)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_3_edg_en_mask                                 (0x00001000)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_3_tex_en_mask                                 (0x00000800)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_0_edg_en_mask                               (0x00000400)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_0_tex_en_mask                               (0x00000200)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_1_edg_en_mask                               (0x00000100)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_1_tex_en_mask                               (0x00000080)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_2_edg_en_mask                               (0x00000040)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_2_tex_en_mask                               (0x00000020)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_3_edg_en_mask                               (0x00000010)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_3_tex_en_mask                               (0x00000008)
#define  COLOR_SHARP_DM_SR_Ctrl_vpk_edg_en_mask                                  (0x00000004)
#define  COLOR_SHARP_DM_SR_Ctrl_vpk_tex_en_mask                                  (0x00000002)
#define  COLOR_SHARP_DM_SR_Ctrl_sr_pndu(data)                                    (0x00800000&((data)<<23))
#define  COLOR_SHARP_DM_SR_Ctrl_vpk_sr_tex(data)                                 (0x00400000&((data)<<22))
#define  COLOR_SHARP_DM_SR_Ctrl_vpk_sr_edg(data)                                 (0x00200000&((data)<<21))
#define  COLOR_SHARP_DM_SR_Ctrl_h_edg_filter_en(data)                            (0x00100000&((data)<<20))
#define  COLOR_SHARP_DM_SR_Ctrl_h_tex_filter_en(data)                            (0x00080000&((data)<<19))
#define  COLOR_SHARP_DM_SR_Ctrl_sr_0_edg_en(data)                                (0x00040000&((data)<<18))
#define  COLOR_SHARP_DM_SR_Ctrl_sr_0_tex_en(data)                                (0x00020000&((data)<<17))
#define  COLOR_SHARP_DM_SR_Ctrl_sr_1_edg_en(data)                                (0x00010000&((data)<<16))
#define  COLOR_SHARP_DM_SR_Ctrl_sr_1_tex_en(data)                                (0x00008000&((data)<<15))
#define  COLOR_SHARP_DM_SR_Ctrl_sr_2_edg_en(data)                                (0x00004000&((data)<<14))
#define  COLOR_SHARP_DM_SR_Ctrl_sr_2_tex_en(data)                                (0x00002000&((data)<<13))
#define  COLOR_SHARP_DM_SR_Ctrl_sr_3_edg_en(data)                                (0x00001000&((data)<<12))
#define  COLOR_SHARP_DM_SR_Ctrl_sr_3_tex_en(data)                                (0x00000800&((data)<<11))
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_0_edg_en(data)                              (0x00000400&((data)<<10))
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_0_tex_en(data)                              (0x00000200&((data)<<9))
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_1_edg_en(data)                              (0x00000100&((data)<<8))
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_1_tex_en(data)                              (0x00000080&((data)<<7))
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_2_edg_en(data)                              (0x00000040&((data)<<6))
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_2_tex_en(data)                              (0x00000020&((data)<<5))
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_3_edg_en(data)                              (0x00000010&((data)<<4))
#define  COLOR_SHARP_DM_SR_Ctrl_sr_v_3_tex_en(data)                              (0x00000008&((data)<<3))
#define  COLOR_SHARP_DM_SR_Ctrl_vpk_edg_en(data)                                 (0x00000004&((data)<<2))
#define  COLOR_SHARP_DM_SR_Ctrl_vpk_tex_en(data)                                 (0x00000002&((data)<<1))
#define  COLOR_SHARP_DM_SR_Ctrl_get_sr_pndu(data)                                ((0x00800000&(data))>>23)
#define  COLOR_SHARP_DM_SR_Ctrl_get_vpk_sr_tex(data)                             ((0x00400000&(data))>>22)
#define  COLOR_SHARP_DM_SR_Ctrl_get_vpk_sr_edg(data)                             ((0x00200000&(data))>>21)
#define  COLOR_SHARP_DM_SR_Ctrl_get_h_edg_filter_en(data)                        ((0x00100000&(data))>>20)
#define  COLOR_SHARP_DM_SR_Ctrl_get_h_tex_filter_en(data)                        ((0x00080000&(data))>>19)
#define  COLOR_SHARP_DM_SR_Ctrl_get_sr_0_edg_en(data)                            ((0x00040000&(data))>>18)
#define  COLOR_SHARP_DM_SR_Ctrl_get_sr_0_tex_en(data)                            ((0x00020000&(data))>>17)
#define  COLOR_SHARP_DM_SR_Ctrl_get_sr_1_edg_en(data)                            ((0x00010000&(data))>>16)
#define  COLOR_SHARP_DM_SR_Ctrl_get_sr_1_tex_en(data)                            ((0x00008000&(data))>>15)
#define  COLOR_SHARP_DM_SR_Ctrl_get_sr_2_edg_en(data)                            ((0x00004000&(data))>>14)
#define  COLOR_SHARP_DM_SR_Ctrl_get_sr_2_tex_en(data)                            ((0x00002000&(data))>>13)
#define  COLOR_SHARP_DM_SR_Ctrl_get_sr_3_edg_en(data)                            ((0x00001000&(data))>>12)
#define  COLOR_SHARP_DM_SR_Ctrl_get_sr_3_tex_en(data)                            ((0x00000800&(data))>>11)
#define  COLOR_SHARP_DM_SR_Ctrl_get_sr_v_0_edg_en(data)                          ((0x00000400&(data))>>10)
#define  COLOR_SHARP_DM_SR_Ctrl_get_sr_v_0_tex_en(data)                          ((0x00000200&(data))>>9)
#define  COLOR_SHARP_DM_SR_Ctrl_get_sr_v_1_edg_en(data)                          ((0x00000100&(data))>>8)
#define  COLOR_SHARP_DM_SR_Ctrl_get_sr_v_1_tex_en(data)                          ((0x00000080&(data))>>7)
#define  COLOR_SHARP_DM_SR_Ctrl_get_sr_v_2_edg_en(data)                          ((0x00000040&(data))>>6)
#define  COLOR_SHARP_DM_SR_Ctrl_get_sr_v_2_tex_en(data)                          ((0x00000020&(data))>>5)
#define  COLOR_SHARP_DM_SR_Ctrl_get_sr_v_3_edg_en(data)                          ((0x00000010&(data))>>4)
#define  COLOR_SHARP_DM_SR_Ctrl_get_sr_v_3_tex_en(data)                          ((0x00000008&(data))>>3)
#define  COLOR_SHARP_DM_SR_Ctrl_get_vpk_edg_en(data)                             ((0x00000004&(data))>>2)
#define  COLOR_SHARP_DM_SR_Ctrl_get_vpk_tex_en(data)                             ((0x00000002&(data))>>1)

#define  COLOR_SHARP_DM_SR_continual_detail_gain                                0x1802B890
#define  COLOR_SHARP_DM_SR_continual_detail_gain_reg_addr                        "0xB802B890"
#define  COLOR_SHARP_DM_SR_continual_detail_gain_reg                             0xB802B890
#define  COLOR_SHARP_DM_SR_continual_detail_gain_inst_addr                       "0x0070"
#define  set_COLOR_SHARP_DM_SR_continual_detail_gain_reg(data)                   (*((volatile unsigned int*)COLOR_SHARP_DM_SR_continual_detail_gain_reg)=data)
#define  get_COLOR_SHARP_DM_SR_continual_detail_gain_reg                         (*((volatile unsigned int*)COLOR_SHARP_DM_SR_continual_detail_gain_reg))
#define  COLOR_SHARP_DM_SR_continual_detail_gain_sr_detail_tex_en_shift          (31)
#define  COLOR_SHARP_DM_SR_continual_detail_gain_sr_detail_v_tex_en_shift        (29)
#define  COLOR_SHARP_DM_SR_continual_detail_gain_period_shift                    (24)
#define  COLOR_SHARP_DM_SR_continual_detail_gain_gain_shift                      (12)
#define  COLOR_SHARP_DM_SR_continual_detail_gain_offset_shift                    (0)
#define  COLOR_SHARP_DM_SR_continual_detail_gain_sr_detail_tex_en_mask           (0x80000000)
#define  COLOR_SHARP_DM_SR_continual_detail_gain_sr_detail_v_tex_en_mask         (0x20000000)
#define  COLOR_SHARP_DM_SR_continual_detail_gain_period_mask                     (0x0F000000)
#define  COLOR_SHARP_DM_SR_continual_detail_gain_gain_mask                       (0x001FF000)
#define  COLOR_SHARP_DM_SR_continual_detail_gain_offset_mask                     (0x000001FF)
#define  COLOR_SHARP_DM_SR_continual_detail_gain_sr_detail_tex_en(data)          (0x80000000&((data)<<31))
#define  COLOR_SHARP_DM_SR_continual_detail_gain_sr_detail_v_tex_en(data)        (0x20000000&((data)<<29))
#define  COLOR_SHARP_DM_SR_continual_detail_gain_period(data)                    (0x0F000000&((data)<<24))
#define  COLOR_SHARP_DM_SR_continual_detail_gain_gain(data)                      (0x001FF000&((data)<<12))
#define  COLOR_SHARP_DM_SR_continual_detail_gain_offset(data)                    (0x000001FF&(data))
#define  COLOR_SHARP_DM_SR_continual_detail_gain_get_sr_detail_tex_en(data)      ((0x80000000&(data))>>31)
#define  COLOR_SHARP_DM_SR_continual_detail_gain_get_sr_detail_v_tex_en(data)    ((0x20000000&(data))>>29)
#define  COLOR_SHARP_DM_SR_continual_detail_gain_get_period(data)                ((0x0F000000&(data))>>24)
#define  COLOR_SHARP_DM_SR_continual_detail_gain_get_gain(data)                  ((0x001FF000&(data))>>12)
#define  COLOR_SHARP_DM_SR_continual_detail_gain_get_offset(data)                (0x000001FF&(data))

#define  COLOR_SHARP_DM_SR_continual_detail_sel                                 0x1802B894
#define  COLOR_SHARP_DM_SR_continual_detail_sel_reg_addr                         "0xB802B894"
#define  COLOR_SHARP_DM_SR_continual_detail_sel_reg                              0xB802B894
#define  COLOR_SHARP_DM_SR_continual_detail_sel_inst_addr                        "0x0071"
#define  set_COLOR_SHARP_DM_SR_continual_detail_sel_reg(data)                    (*((volatile unsigned int*)COLOR_SHARP_DM_SR_continual_detail_sel_reg)=data)
#define  get_COLOR_SHARP_DM_SR_continual_detail_sel_reg                          (*((volatile unsigned int*)COLOR_SHARP_DM_SR_continual_detail_sel_reg))
#define  COLOR_SHARP_DM_SR_continual_detail_sel_ring_gen_gain_shift              (8)
#define  COLOR_SHARP_DM_SR_continual_detail_sel_ring_gen_gain_mask               (0x0000FF00)
#define  COLOR_SHARP_DM_SR_continual_detail_sel_ring_gen_gain(data)              (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_SR_continual_detail_sel_get_ring_gen_gain(data)          ((0x0000FF00&(data))>>8)

#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1                                    0x1802B89C
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_reg_addr                            "0xB802B89C"
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_reg                                 0xB802B89C
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_inst_addr                           "0x0072"
#define  set_COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_reg(data)                       (*((volatile unsigned int*)COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_reg)=data)
#define  get_COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_reg                             (*((volatile unsigned int*)COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_reg))
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_c1_shift                            (24)
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_c2_shift                            (16)
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_c3_shift                            (8)
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_c4_shift                            (0)
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_c1_mask                             (0xFF000000)
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_c2_mask                             (0x00FF0000)
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_c3_mask                             (0x0000FF00)
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_c4_mask                             (0x000000FF)
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_c1(data)                            (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_c2(data)                            (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_c3(data)                            (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_c4(data)                            (0x000000FF&(data))
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_get_c1(data)                        ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_get_c2(data)                        ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_get_c3(data)                        ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_SR_9tap_hpf_h_coef_1_get_c4(data)                        (0x000000FF&(data))

#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0                                   0x1802B8A0
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_reg_addr                           "0xB802B8A0"
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_reg                                0xB802B8A0
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_inst_addr                          "0x0073"
#define  set_COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_reg(data)                      (*((volatile unsigned int*)COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_reg)=data)
#define  get_COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_reg                            (*((volatile unsigned int*)COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_reg))
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_c0_shift                           (23)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_c1_shift                           (8)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_c2_shift                           (0)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_c0_mask                            (0xFF800000)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_c1_mask                            (0x0000FF00)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_c2_mask                            (0x000000FF)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_c0(data)                           (0xFF800000&((data)<<23))
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_c1(data)                           (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_c2(data)                           (0x000000FF&(data))
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_get_c0(data)                       ((0xFF800000&(data))>>23)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_get_c1(data)                       ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_0_get_c2(data)                       (0x000000FF&(data))

#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1                                   0x1802B8A4
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_reg_addr                           "0xB802B8A4"
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_reg                                0xB802B8A4
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_inst_addr                          "0x0074"
#define  set_COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_reg(data)                      (*((volatile unsigned int*)COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_reg)=data)
#define  get_COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_reg                            (*((volatile unsigned int*)COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_reg))
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_c3_shift                           (24)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_c4_shift                           (16)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_c5_shift                           (8)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_c6_shift                           (0)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_c3_mask                            (0xFF000000)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_c4_mask                            (0x00FF0000)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_c5_mask                            (0x0000FF00)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_c6_mask                            (0x000000FF)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_c3(data)                           (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_c4(data)                           (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_c5(data)                           (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_c6(data)                           (0x000000FF&(data))
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_get_c3(data)                       ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_get_c4(data)                       ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_get_c5(data)                       ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_SR_13tap_hpf_h_coef_1_get_c6(data)                       (0x000000FF&(data))

#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0                                   0x1802B8A8
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_reg_addr                           "0xB802B8A8"
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_reg                                0xB802B8A8
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_inst_addr                          "0x0075"
#define  set_COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_reg(data)                      (*((volatile unsigned int*)COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_reg)=data)
#define  get_COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_reg                            (*((volatile unsigned int*)COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_reg))
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_c0_shift                           (23)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_c1_shift                           (8)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_c2_shift                           (0)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_c0_mask                            (0xFF800000)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_c1_mask                            (0x0000FF00)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_c2_mask                            (0x000000FF)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_c0(data)                           (0xFF800000&((data)<<23))
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_c1(data)                           (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_c2(data)                           (0x000000FF&(data))
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_get_c0(data)                       ((0xFF800000&(data))>>23)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_get_c1(data)                       ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_0_get_c2(data)                       (0x000000FF&(data))

#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1                                   0x1802B8AC
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_reg_addr                           "0xB802B8AC"
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_reg                                0xB802B8AC
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_inst_addr                          "0x0076"
#define  set_COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_reg(data)                      (*((volatile unsigned int*)COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_reg)=data)
#define  get_COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_reg                            (*((volatile unsigned int*)COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_reg))
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_c3_shift                           (24)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_c4_shift                           (16)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_c5_shift                           (8)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_c6_shift                           (0)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_c3_mask                            (0xFF000000)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_c4_mask                            (0x00FF0000)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_c5_mask                            (0x0000FF00)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_c6_mask                            (0x000000FF)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_c3(data)                           (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_c4(data)                           (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_c5(data)                           (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_c6(data)                           (0x000000FF&(data))
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_get_c3(data)                       ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_get_c4(data)                       ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_get_c5(data)                       ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_1_get_c6(data)                       (0x000000FF&(data))

#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2                                   0x1802B8B0
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_reg_addr                           "0xB802B8B0"
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_reg                                0xB802B8B0
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_inst_addr                          "0x0077"
#define  set_COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_reg(data)                      (*((volatile unsigned int*)COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_reg)=data)
#define  get_COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_reg                            (*((volatile unsigned int*)COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_reg))
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_c7_shift                           (24)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_c8_shift                           (16)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_c9_shift                           (8)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_c10_shift                          (0)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_c7_mask                            (0xFF000000)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_c8_mask                            (0x00FF0000)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_c9_mask                            (0x0000FF00)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_c10_mask                           (0x000000FF)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_c7(data)                           (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_c8(data)                           (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_c9(data)                           (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_c10(data)                          (0x000000FF&(data))
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_get_c7(data)                       ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_get_c8(data)                       ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_get_c9(data)                       ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_SR_21tap_hpf_h_coef_2_get_c10(data)                      (0x000000FF&(data))

#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_0_1                                  0x1802B8B8
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_0_1_reg_addr                          "0xB802B8B8"
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_0_1_reg                               0xB802B8B8
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_0_1_inst_addr                         "0x0078"
#define  set_COLOR_SHARP_DM_SR_9tap_hpf_v_coef_0_1_reg(data)                     (*((volatile unsigned int*)COLOR_SHARP_DM_SR_9tap_hpf_v_coef_0_1_reg)=data)
#define  get_COLOR_SHARP_DM_SR_9tap_hpf_v_coef_0_1_reg                           (*((volatile unsigned int*)COLOR_SHARP_DM_SR_9tap_hpf_v_coef_0_1_reg))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_0_1_c1_shift                          (24)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_0_1_c2_shift                          (16)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_0_1_c1_mask                           (0xFF000000)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_0_1_c2_mask                           (0x00FF0000)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_0_1_c1(data)                          (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_0_1_c2(data)                          (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_0_1_get_c1(data)                      ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_0_1_get_c2(data)                      ((0x00FF0000&(data))>>16)

#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_0                                  0x1802B8BC
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_0_reg_addr                          "0xB802B8BC"
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_0_reg                               0xB802B8BC
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_0_inst_addr                         "0x0079"
#define  set_COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_0_reg(data)                     (*((volatile unsigned int*)COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_0_reg)=data)
#define  get_COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_0_reg                           (*((volatile unsigned int*)COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_0_reg))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_0_c0_shift                          (23)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_0_c0_mask                           (0xFF800000)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_0_c0(data)                          (0xFF800000&((data)<<23))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_0_get_c0(data)                      ((0xFF800000&(data))>>23)

#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_1                                  0x1802B8C0
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_1_reg_addr                          "0xB802B8C0"
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_1_reg                               0xB802B8C0
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_1_inst_addr                         "0x007A"
#define  set_COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_1_reg(data)                     (*((volatile unsigned int*)COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_1_reg)=data)
#define  get_COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_1_reg                           (*((volatile unsigned int*)COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_1_reg))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_1_c1_shift                          (24)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_1_c2_shift                          (16)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_1_c1_mask                           (0xFF000000)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_1_c2_mask                           (0x00FF0000)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_1_c1(data)                          (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_1_c2(data)                          (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_1_get_c1(data)                      ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_1_1_get_c2(data)                      ((0x00FF0000&(data))>>16)

#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_0                                  0x1802B8C4
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_0_reg_addr                          "0xB802B8C4"
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_0_reg                               0xB802B8C4
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_0_inst_addr                         "0x007B"
#define  set_COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_0_reg(data)                     (*((volatile unsigned int*)COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_0_reg)=data)
#define  get_COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_0_reg                           (*((volatile unsigned int*)COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_0_reg))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_0_c0_shift                          (23)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_0_c0_mask                           (0xFF800000)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_0_c0(data)                          (0xFF800000&((data)<<23))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_0_get_c0(data)                      ((0xFF800000&(data))>>23)

#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_1                                  0x1802B8C8
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_1_reg_addr                          "0xB802B8C8"
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_1_reg                               0xB802B8C8
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_1_inst_addr                         "0x007C"
#define  set_COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_1_reg(data)                     (*((volatile unsigned int*)COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_1_reg)=data)
#define  get_COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_1_reg                           (*((volatile unsigned int*)COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_1_reg))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_1_c1_shift                          (24)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_1_c2_shift                          (16)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_1_c1_mask                           (0xFF000000)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_1_c2_mask                           (0x00FF0000)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_1_c1(data)                          (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_1_c2(data)                          (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_1_get_c1(data)                      ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_2_1_get_c2(data)                      ((0x00FF0000&(data))>>16)

#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_0                                   0x1802B8CC
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_0_reg_addr                           "0xB802B8CC"
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_0_reg                                0xB802B8CC
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_0_inst_addr                          "0x007D"
#define  set_COLOR_SHARP_DM_SR_11tap_hpf_h_coef_0_reg(data)                      (*((volatile unsigned int*)COLOR_SHARP_DM_SR_11tap_hpf_h_coef_0_reg)=data)
#define  get_COLOR_SHARP_DM_SR_11tap_hpf_h_coef_0_reg                            (*((volatile unsigned int*)COLOR_SHARP_DM_SR_11tap_hpf_h_coef_0_reg))
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_0_c0_shift                           (23)
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_0_c1_shift                           (0)
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_0_c0_mask                            (0xFF800000)
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_0_c1_mask                            (0x000000FF)
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_0_c0(data)                           (0xFF800000&((data)<<23))
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_0_c1(data)                           (0x000000FF&(data))
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_0_get_c0(data)                       ((0xFF800000&(data))>>23)
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_0_get_c1(data)                       (0x000000FF&(data))

#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1                                   0x1802B8D0
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_reg_addr                           "0xB802B8D0"
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_reg                                0xB802B8D0
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_inst_addr                          "0x007E"
#define  set_COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_reg(data)                      (*((volatile unsigned int*)COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_reg)=data)
#define  get_COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_reg                            (*((volatile unsigned int*)COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_reg))
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_c2_shift                           (24)
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_c3_shift                           (16)
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_c4_shift                           (8)
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_c5_shift                           (0)
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_c2_mask                            (0xFF000000)
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_c3_mask                            (0x00FF0000)
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_c4_mask                            (0x0000FF00)
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_c5_mask                            (0x000000FF)
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_c2(data)                           (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_c3(data)                           (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_c4(data)                           (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_c5(data)                           (0x000000FF&(data))
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_get_c2(data)                       ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_get_c3(data)                       ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_get_c4(data)                       ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_SR_11tap_hpf_h_coef_1_get_c5(data)                       (0x000000FF&(data))

#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_0                                  0x1802B8D4
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_0_reg_addr                          "0xB802B8D4"
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_0_reg                               0xB802B8D4
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_0_inst_addr                         "0x007F"
#define  set_COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_0_reg(data)                     (*((volatile unsigned int*)COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_0_reg)=data)
#define  get_COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_0_reg                           (*((volatile unsigned int*)COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_0_reg))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_0_c0_shift                          (23)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_0_c0_mask                           (0xFF800000)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_0_c0(data)                          (0xFF800000&((data)<<23))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_0_get_c0(data)                      ((0xFF800000&(data))>>23)

#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_1                                  0x1802B8D8
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_1_reg_addr                          "0xB802B8D8"
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_1_reg                               0xB802B8D8
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_1_inst_addr                         "0x0080"
#define  set_COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_1_reg(data)                     (*((volatile unsigned int*)COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_1_reg)=data)
#define  get_COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_1_reg                           (*((volatile unsigned int*)COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_1_reg))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_1_c1_shift                          (24)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_1_c2_shift                          (16)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_1_c1_mask                           (0xFF000000)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_1_c2_mask                           (0x00FF0000)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_1_c1(data)                          (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_1_c2(data)                          (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_1_get_c1(data)                      ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_DM_SR_9tap_hpf_v_coef_3_1_get_c2(data)                      ((0x00FF0000&(data))>>16)

#define  COLOR_SHARP_DM_SR_DBG                                                  0x1802B8E0
#define  COLOR_SHARP_DM_SR_DBG_reg_addr                                          "0xB802B8E0"
#define  COLOR_SHARP_DM_SR_DBG_reg                                               0xB802B8E0
#define  COLOR_SHARP_DM_SR_DBG_inst_addr                                         "0x0081"
#define  set_COLOR_SHARP_DM_SR_DBG_reg(data)                                     (*((volatile unsigned int*)COLOR_SHARP_DM_SR_DBG_reg)=data)
#define  get_COLOR_SHARP_DM_SR_DBG_reg                                           (*((volatile unsigned int*)COLOR_SHARP_DM_SR_DBG_reg))
#define  COLOR_SHARP_DM_SR_DBG_sr_debug_shift                                    (0)
#define  COLOR_SHARP_DM_SR_DBG_sr_debug_mask                                     (0x00000007)
#define  COLOR_SHARP_DM_SR_DBG_sr_debug(data)                                    (0x00000007&(data))
#define  COLOR_SHARP_DM_SR_DBG_get_sr_debug(data)                                (0x00000007&(data))

#define  COLOR_SHARP_DM_SR_BIAS_coef                                            0x1802B9FC
#define  COLOR_SHARP_DM_SR_BIAS_coef_reg_addr                                    "0xB802B9FC"
#define  COLOR_SHARP_DM_SR_BIAS_coef_reg                                         0xB802B9FC
#define  COLOR_SHARP_DM_SR_BIAS_coef_inst_addr                                   "0x0082"
#define  set_COLOR_SHARP_DM_SR_BIAS_coef_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_DM_SR_BIAS_coef_reg)=data)
#define  get_COLOR_SHARP_DM_SR_BIAS_coef_reg                                     (*((volatile unsigned int*)COLOR_SHARP_DM_SR_BIAS_coef_reg))
#define  COLOR_SHARP_DM_SR_BIAS_coef_cb1_shift                                   (24)
#define  COLOR_SHARP_DM_SR_BIAS_coef_cb2_shift                                   (16)
#define  COLOR_SHARP_DM_SR_BIAS_coef_cblv1_shift                                 (12)
#define  COLOR_SHARP_DM_SR_BIAS_coef_cblv2_shift                                 (8)
#define  COLOR_SHARP_DM_SR_BIAS_coef_cb1_mask                                    (0xFF000000)
#define  COLOR_SHARP_DM_SR_BIAS_coef_cb2_mask                                    (0x00FF0000)
#define  COLOR_SHARP_DM_SR_BIAS_coef_cblv1_mask                                  (0x0000F000)
#define  COLOR_SHARP_DM_SR_BIAS_coef_cblv2_mask                                  (0x00000F00)
#define  COLOR_SHARP_DM_SR_BIAS_coef_cb1(data)                                   (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_SR_BIAS_coef_cb2(data)                                   (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_DM_SR_BIAS_coef_cblv1(data)                                 (0x0000F000&((data)<<12))
#define  COLOR_SHARP_DM_SR_BIAS_coef_cblv2(data)                                 (0x00000F00&((data)<<8))
#define  COLOR_SHARP_DM_SR_BIAS_coef_get_cb1(data)                               ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_DM_SR_BIAS_coef_get_cb2(data)                               ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_DM_SR_BIAS_coef_get_cblv1(data)                             ((0x0000F000&(data))>>12)
#define  COLOR_SHARP_DM_SR_BIAS_coef_get_cblv2(data)                             ((0x00000F00&(data))>>8)

#define  COLOR_SHARP_DM_SEGPK_VPK5                                              0x1802BAF4
#define  COLOR_SHARP_DM_SEGPK_VPK5_reg_addr                                      "0xB802BAF4"
#define  COLOR_SHARP_DM_SEGPK_VPK5_reg                                           0xB802BAF4
#define  COLOR_SHARP_DM_SEGPK_VPK5_inst_addr                                     "0x0083"
#define  set_COLOR_SHARP_DM_SEGPK_VPK5_reg(data)                                 (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_VPK5_reg)=data)
#define  get_COLOR_SHARP_DM_SEGPK_VPK5_reg                                       (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_VPK5_reg))
#define  COLOR_SHARP_DM_SEGPK_VPK5_vpk_edg_lv_shift                              (16)
#define  COLOR_SHARP_DM_SEGPK_VPK5_vpk_edg_gain_neg_shift                        (8)
#define  COLOR_SHARP_DM_SEGPK_VPK5_vpk_edg_gain_pos_shift                        (0)
#define  COLOR_SHARP_DM_SEGPK_VPK5_vpk_edg_lv_mask                               (0x00FF0000)
#define  COLOR_SHARP_DM_SEGPK_VPK5_vpk_edg_gain_neg_mask                         (0x0000FF00)
#define  COLOR_SHARP_DM_SEGPK_VPK5_vpk_edg_gain_pos_mask                         (0x000000FF)
#define  COLOR_SHARP_DM_SEGPK_VPK5_vpk_edg_lv(data)                              (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_DM_SEGPK_VPK5_vpk_edg_gain_neg(data)                        (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_DM_SEGPK_VPK5_vpk_edg_gain_pos(data)                        (0x000000FF&(data))
#define  COLOR_SHARP_DM_SEGPK_VPK5_get_vpk_edg_lv(data)                          ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_DM_SEGPK_VPK5_get_vpk_edg_gain_neg(data)                    ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_DM_SEGPK_VPK5_get_vpk_edg_gain_pos(data)                    (0x000000FF&(data))

#define  COLOR_SHARP_DM_SEGPK_VPK6                                              0x1802BAF8
#define  COLOR_SHARP_DM_SEGPK_VPK6_reg_addr                                      "0xB802BAF8"
#define  COLOR_SHARP_DM_SEGPK_VPK6_reg                                           0xB802BAF8
#define  COLOR_SHARP_DM_SEGPK_VPK6_inst_addr                                     "0x0084"
#define  set_COLOR_SHARP_DM_SEGPK_VPK6_reg(data)                                 (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_VPK6_reg)=data)
#define  get_COLOR_SHARP_DM_SEGPK_VPK6_reg                                       (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_VPK6_reg))
#define  COLOR_SHARP_DM_SEGPK_VPK6_edg_lv2_shift                                 (24)
#define  COLOR_SHARP_DM_SEGPK_VPK6_vpk_edg_gain_pos2_shift                       (22)
#define  COLOR_SHARP_DM_SEGPK_VPK6_vpk_edg_gain_neg2_shift                       (20)
#define  COLOR_SHARP_DM_SEGPK_VPK6_vpk_edg_hv_pos_shift                          (10)
#define  COLOR_SHARP_DM_SEGPK_VPK6_vpk_edg_hv_neg_shift                          (0)
#define  COLOR_SHARP_DM_SEGPK_VPK6_edg_lv2_mask                                  (0xFF000000)
#define  COLOR_SHARP_DM_SEGPK_VPK6_vpk_edg_gain_pos2_mask                        (0x00C00000)
#define  COLOR_SHARP_DM_SEGPK_VPK6_vpk_edg_gain_neg2_mask                        (0x00300000)
#define  COLOR_SHARP_DM_SEGPK_VPK6_vpk_edg_hv_pos_mask                           (0x000FFC00)
#define  COLOR_SHARP_DM_SEGPK_VPK6_vpk_edg_hv_neg_mask                           (0x000003FF)
#define  COLOR_SHARP_DM_SEGPK_VPK6_edg_lv2(data)                                 (0xFF000000&((data)<<24))
#define  COLOR_SHARP_DM_SEGPK_VPK6_vpk_edg_gain_pos2(data)                       (0x00C00000&((data)<<22))
#define  COLOR_SHARP_DM_SEGPK_VPK6_vpk_edg_gain_neg2(data)                       (0x00300000&((data)<<20))
#define  COLOR_SHARP_DM_SEGPK_VPK6_vpk_edg_hv_pos(data)                          (0x000FFC00&((data)<<10))
#define  COLOR_SHARP_DM_SEGPK_VPK6_vpk_edg_hv_neg(data)                          (0x000003FF&(data))
#define  COLOR_SHARP_DM_SEGPK_VPK6_get_edg_lv2(data)                             ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_DM_SEGPK_VPK6_get_vpk_edg_gain_pos2(data)                   ((0x00C00000&(data))>>22)
#define  COLOR_SHARP_DM_SEGPK_VPK6_get_vpk_edg_gain_neg2(data)                   ((0x00300000&(data))>>20)
#define  COLOR_SHARP_DM_SEGPK_VPK6_get_vpk_edg_hv_pos(data)                      ((0x000FFC00&(data))>>10)
#define  COLOR_SHARP_DM_SEGPK_VPK6_get_vpk_edg_hv_neg(data)                      (0x000003FF&(data))

#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE                                0x1802BAFC
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_reg_addr                        "0xB802BAFC"
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_reg                             0xB802BAFC
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_inst_addr                       "0x0085"
#define  set_COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_reg(data)                   (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_reg)=data)
#define  get_COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_reg                         (*((volatile unsigned int*)COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_reg))
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_v_slope_gain_en_shift           (26)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_dir_v_shift                     (25)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_gain_boundpos_v_shift           (20)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_gain_boundneg_v_shift           (16)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_gain_extendpos_v_shift          (8)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_gain_extendneg_v_shift          (0)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_v_slope_gain_en_mask            (0x04000000)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_dir_v_mask                      (0x02000000)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_gain_boundpos_v_mask            (0x00F00000)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_gain_boundneg_v_mask            (0x000F0000)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_gain_extendpos_v_mask           (0x00007F00)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_gain_extendneg_v_mask           (0x0000007F)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_v_slope_gain_en(data)           (0x04000000&((data)<<26))
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_dir_v(data)                     (0x02000000&((data)<<25))
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_gain_boundpos_v(data)           (0x00F00000&((data)<<20))
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_gain_boundneg_v(data)           (0x000F0000&((data)<<16))
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_gain_extendpos_v(data)          (0x00007F00&((data)<<8))
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_gain_extendneg_v(data)          (0x0000007F&(data))
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_get_v_slope_gain_en(data)       ((0x04000000&(data))>>26)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_get_dir_v(data)                 ((0x02000000&(data))>>25)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_get_gain_boundpos_v(data)       ((0x00F00000&(data))>>20)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_get_gain_boundneg_v(data)       ((0x000F0000&(data))>>16)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_get_gain_extendpos_v(data)      ((0x00007F00&(data))>>8)
#define  COLOR_SHARP_DM_SEGPK_EDGPK_VSOURCESLOPE_get_gain_extendneg_v(data)      (0x0000007F&(data))

#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_0                                       0x1802B900
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_0_reg_addr                               "0xB802B900"
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_0_reg                                    0xB802B900
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_0_inst_addr                              "0x0086"
#define  set_COLOR_SHARP_DM_MAXMIN_LPF_WEIT_0_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_LPF_WEIT_0_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_LPF_WEIT_0_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_LPF_WEIT_0_reg))
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_0_s0_shift                               (16)
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_0_s1_shift                               (0)
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_0_s0_mask                                (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_0_s1_mask                                (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_0_s0(data)                               (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_0_s1(data)                               (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_0_get_s0(data)                           ((0x07FF0000&(data))>>16)
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_0_get_s1(data)                           (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_1                                       0x1802B904
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_1_reg_addr                               "0xB802B904"
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_1_reg                                    0xB802B904
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_1_inst_addr                              "0x0087"
#define  set_COLOR_SHARP_DM_MAXMIN_LPF_WEIT_1_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_LPF_WEIT_1_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_LPF_WEIT_1_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_LPF_WEIT_1_reg))
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_1_s2_shift                               (16)
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_1_s3_shift                               (0)
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_1_s2_mask                                (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_1_s3_mask                                (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_1_s2(data)                               (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_1_s3(data)                               (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_1_get_s2(data)                           ((0x07FF0000&(data))>>16)
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_1_get_s3(data)                           (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_2                                       0x1802B908
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_2_reg_addr                               "0xB802B908"
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_2_reg                                    0xB802B908
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_2_inst_addr                              "0x0088"
#define  set_COLOR_SHARP_DM_MAXMIN_LPF_WEIT_2_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_LPF_WEIT_2_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_LPF_WEIT_2_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_LPF_WEIT_2_reg))
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_2_s4_shift                               (16)
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_2_s5_shift                               (0)
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_2_s4_mask                                (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_2_s5_mask                                (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_2_s4(data)                               (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_2_s5(data)                               (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_2_get_s4(data)                           ((0x07FF0000&(data))>>16)
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_2_get_s5(data)                           (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_3                                       0x1802B90C
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_3_reg_addr                               "0xB802B90C"
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_3_reg                                    0xB802B90C
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_3_inst_addr                              "0x0089"
#define  set_COLOR_SHARP_DM_MAXMIN_LPF_WEIT_3_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_LPF_WEIT_3_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_LPF_WEIT_3_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_LPF_WEIT_3_reg))
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_3_s6_shift                               (16)
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_3_s6_mask                                (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_3_s6(data)                               (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_LPF_WEIT_3_get_s6(data)                           ((0x07FF0000&(data))>>16)

#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_0                                       0x1802B910
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_0_reg_addr                               "0xB802B910"
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_0_reg                                    0xB802B910
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_0_inst_addr                              "0x008A"
#define  set_COLOR_SHARP_DM_MAXMIN_LPF_STEP_0_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_LPF_STEP_0_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_LPF_STEP_0_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_LPF_STEP_0_reg))
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_0_s1_shift                               (0)
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_0_s1_mask                                (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_0_s1(data)                               (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_0_get_s1(data)                           (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_1                                       0x1802B914
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_1_reg_addr                               "0xB802B914"
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_1_reg                                    0xB802B914
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_1_inst_addr                              "0x008B"
#define  set_COLOR_SHARP_DM_MAXMIN_LPF_STEP_1_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_LPF_STEP_1_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_LPF_STEP_1_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_LPF_STEP_1_reg))
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_1_s2_shift                               (16)
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_1_s3_shift                               (0)
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_1_s2_mask                                (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_1_s3_mask                                (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_1_s2(data)                               (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_1_s3(data)                               (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_1_get_s2(data)                           ((0x07FF0000&(data))>>16)
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_1_get_s3(data)                           (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_2                                       0x1802B918
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_2_reg_addr                               "0xB802B918"
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_2_reg                                    0xB802B918
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_2_inst_addr                              "0x008C"
#define  set_COLOR_SHARP_DM_MAXMIN_LPF_STEP_2_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_LPF_STEP_2_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_LPF_STEP_2_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_LPF_STEP_2_reg))
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_2_s4_shift                               (16)
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_2_s5_shift                               (0)
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_2_s4_mask                                (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_2_s5_mask                                (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_2_s4(data)                               (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_2_s5(data)                               (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_2_get_s4(data)                           ((0x07FF0000&(data))>>16)
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_2_get_s5(data)                           (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_3                                       0x1802B91C
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_3_reg_addr                               "0xB802B91C"
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_3_reg                                    0xB802B91C
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_3_inst_addr                              "0x008D"
#define  set_COLOR_SHARP_DM_MAXMIN_LPF_STEP_3_reg(data)                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_LPF_STEP_3_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_LPF_STEP_3_reg                                (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_LPF_STEP_3_reg))
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_3_s6_shift                               (16)
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_3_s6_mask                                (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_3_s6(data)                               (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_LPF_STEP_3_get_s6(data)                           ((0x07FF0000&(data))>>16)

#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_0                                 0x1802B920
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_0_reg_addr                         "0xB802B920"
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_0_reg                              0xB802B920
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_0_inst_addr                        "0x008E"
#define  set_COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_0_reg(data)                    (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_0_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_0_reg                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_0_reg))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_0_s0_shift                         (16)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_0_s1_shift                         (0)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_0_s0_mask                          (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_0_s1_mask                          (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_0_s0(data)                         (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_0_s1(data)                         (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_0_get_s0(data)                     ((0x07FF0000&(data))>>16)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_0_get_s1(data)                     (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_1                                 0x1802B924
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_1_reg_addr                         "0xB802B924"
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_1_reg                              0xB802B924
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_1_inst_addr                        "0x008F"
#define  set_COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_1_reg(data)                    (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_1_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_1_reg                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_1_reg))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_1_s2_shift                         (16)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_1_s3_shift                         (0)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_1_s2_mask                          (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_1_s3_mask                          (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_1_s2(data)                         (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_1_s3(data)                         (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_1_get_s2(data)                     ((0x07FF0000&(data))>>16)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_1_get_s3(data)                     (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_2                                 0x1802B928
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_2_reg_addr                         "0xB802B928"
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_2_reg                              0xB802B928
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_2_inst_addr                        "0x0090"
#define  set_COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_2_reg(data)                    (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_2_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_2_reg                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_2_reg))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_2_s4_shift                         (16)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_2_s5_shift                         (0)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_2_s4_mask                          (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_2_s5_mask                          (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_2_s4(data)                         (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_2_s5(data)                         (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_2_get_s4(data)                     ((0x07FF0000&(data))>>16)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_2_get_s5(data)                     (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_3                                 0x1802B92C
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_3_reg_addr                         "0xB802B92C"
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_3_reg                              0xB802B92C
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_3_inst_addr                        "0x0091"
#define  set_COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_3_reg(data)                    (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_3_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_3_reg                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_3_reg))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_3_s6_shift                         (16)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_3_s6_mask                          (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_3_s6(data)                         (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_GAIN_3_get_s6(data)                     ((0x07FF0000&(data))>>16)

#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_0                                 0x1802B930
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_0_reg_addr                         "0xB802B930"
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_0_reg                              0xB802B930
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_0_inst_addr                        "0x0092"
#define  set_COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_0_reg(data)                    (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_0_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_0_reg                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_0_reg))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_0_s1_shift                         (0)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_0_s1_mask                          (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_0_s1(data)                         (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_0_get_s1(data)                     (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_1                                 0x1802B934
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_1_reg_addr                         "0xB802B934"
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_1_reg                              0xB802B934
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_1_inst_addr                        "0x0093"
#define  set_COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_1_reg(data)                    (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_1_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_1_reg                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_1_reg))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_1_s2_shift                         (16)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_1_s3_shift                         (0)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_1_s2_mask                          (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_1_s3_mask                          (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_1_s2(data)                         (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_1_s3(data)                         (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_1_get_s2(data)                     ((0x07FF0000&(data))>>16)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_1_get_s3(data)                     (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_2                                 0x1802B938
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_2_reg_addr                         "0xB802B938"
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_2_reg                              0xB802B938
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_2_inst_addr                        "0x0094"
#define  set_COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_2_reg(data)                    (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_2_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_2_reg                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_2_reg))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_2_s4_shift                         (16)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_2_s5_shift                         (0)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_2_s4_mask                          (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_2_s5_mask                          (0x000007FF)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_2_s4(data)                         (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_2_s5(data)                         (0x000007FF&(data))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_2_get_s4(data)                     ((0x07FF0000&(data))>>16)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_2_get_s5(data)                     (0x000007FF&(data))

#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_3                                 0x1802B93C
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_3_reg_addr                         "0xB802B93C"
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_3_reg                              0xB802B93C
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_3_inst_addr                        "0x0095"
#define  set_COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_3_reg(data)                    (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_3_reg)=data)
#define  get_COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_3_reg                          (*((volatile unsigned int*)COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_3_reg))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_3_s6_shift                         (16)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_3_s6_mask                          (0x07FF0000)
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_3_s6(data)                         (0x07FF0000&((data)<<16))
#define  COLOR_SHARP_DM_MAXMIN_GAIN_BY_Y_STEP_3_get_s6(data)                     ((0x07FF0000&(data))>>16)

#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE                                      0x1802B570
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_reg_addr                              "0xB802B570"
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_reg                                   0xB802B570
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_inst_addr                             "0x0096"
#define  set_COLOR_SHARP_SHP_CDS_REGION_ENABLE_reg(data)                         (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION_ENABLE_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION_ENABLE_reg                               (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION_ENABLE_reg))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_5_shift           (27)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_4_shift           (26)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_3_shift           (25)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_2_shift           (24)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_1_shift           (23)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_0_shift           (22)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_5_shift           (21)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_4_shift           (20)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_3_shift           (19)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_2_shift           (18)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_1_shift           (17)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_0_shift           (16)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_5_shift           (15)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_4_shift           (14)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_3_shift           (13)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_2_shift           (12)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_1_shift           (11)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_0_shift           (10)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_5_shift           (9)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_4_shift           (8)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_3_shift           (7)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_2_shift           (6)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_1_shift           (5)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_0_shift           (4)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_shift             (3)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_shift             (2)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_shift             (1)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_shift             (0)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_5_mask            (0x08000000)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_4_mask            (0x04000000)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_3_mask            (0x02000000)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_2_mask            (0x01000000)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_1_mask            (0x00800000)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_0_mask            (0x00400000)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_5_mask            (0x00200000)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_4_mask            (0x00100000)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_3_mask            (0x00080000)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_2_mask            (0x00040000)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_1_mask            (0x00020000)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_0_mask            (0x00010000)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_5_mask            (0x00008000)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_4_mask            (0x00004000)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_3_mask            (0x00002000)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_2_mask            (0x00001000)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_1_mask            (0x00000800)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_0_mask            (0x00000400)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_5_mask            (0x00000200)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_4_mask            (0x00000100)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_3_mask            (0x00000080)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_2_mask            (0x00000040)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_1_mask            (0x00000020)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_0_mask            (0x00000010)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_mask              (0x00000008)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_mask              (0x00000004)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_mask              (0x00000002)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_mask              (0x00000001)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_5(data)           (0x08000000&((data)<<27))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_4(data)           (0x04000000&((data)<<26))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_3(data)           (0x02000000&((data)<<25))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_2(data)           (0x01000000&((data)<<24))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_1(data)           (0x00800000&((data)<<23))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable_0(data)           (0x00400000&((data)<<22))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_5(data)           (0x00200000&((data)<<21))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_4(data)           (0x00100000&((data)<<20))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_3(data)           (0x00080000&((data)<<19))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_2(data)           (0x00040000&((data)<<18))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_1(data)           (0x00020000&((data)<<17))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable_0(data)           (0x00010000&((data)<<16))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_5(data)           (0x00008000&((data)<<15))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_4(data)           (0x00004000&((data)<<14))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_3(data)           (0x00002000&((data)<<13))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_2(data)           (0x00001000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_1(data)           (0x00000800&((data)<<11))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable_0(data)           (0x00000400&((data)<<10))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_5(data)           (0x00000200&((data)<<9))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_4(data)           (0x00000100&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_3(data)           (0x00000080&((data)<<7))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_2(data)           (0x00000040&((data)<<6))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_1(data)           (0x00000020&((data)<<5))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable_0(data)           (0x00000010&((data)<<4))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_3_enable(data)             (0x00000008&((data)<<3))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_2_enable(data)             (0x00000004&((data)<<2))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_1_enable(data)             (0x00000002&((data)<<1))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_cds_region_0_enable(data)             (0x00000001&(data))
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_3_enable_5(data)       ((0x08000000&(data))>>27)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_3_enable_4(data)       ((0x04000000&(data))>>26)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_3_enable_3(data)       ((0x02000000&(data))>>25)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_3_enable_2(data)       ((0x01000000&(data))>>24)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_3_enable_1(data)       ((0x00800000&(data))>>23)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_3_enable_0(data)       ((0x00400000&(data))>>22)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_2_enable_5(data)       ((0x00200000&(data))>>21)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_2_enable_4(data)       ((0x00100000&(data))>>20)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_2_enable_3(data)       ((0x00080000&(data))>>19)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_2_enable_2(data)       ((0x00040000&(data))>>18)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_2_enable_1(data)       ((0x00020000&(data))>>17)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_2_enable_0(data)       ((0x00010000&(data))>>16)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_1_enable_5(data)       ((0x00008000&(data))>>15)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_1_enable_4(data)       ((0x00004000&(data))>>14)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_1_enable_3(data)       ((0x00002000&(data))>>13)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_1_enable_2(data)       ((0x00001000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_1_enable_1(data)       ((0x00000800&(data))>>11)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_1_enable_0(data)       ((0x00000400&(data))>>10)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_0_enable_5(data)       ((0x00000200&(data))>>9)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_0_enable_4(data)       ((0x00000100&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_0_enable_3(data)       ((0x00000080&(data))>>7)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_0_enable_2(data)       ((0x00000040&(data))>>6)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_0_enable_1(data)       ((0x00000020&(data))>>5)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_0_enable_0(data)       ((0x00000010&(data))>>4)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_3_enable(data)         ((0x00000008&(data))>>3)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_2_enable(data)         ((0x00000004&(data))>>2)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_1_enable(data)         ((0x00000002&(data))>>1)
#define  COLOR_SHARP_SHP_CDS_REGION_ENABLE_get_cds_region_0_enable(data)         (0x00000001&(data))

#define  COLOR_SHARP_SHP_CDS_REGION0_0                                          0x1802B574
#define  COLOR_SHARP_SHP_CDS_REGION0_0_reg_addr                                  "0xB802B574"
#define  COLOR_SHARP_SHP_CDS_REGION0_0_reg                                       0xB802B574
#define  COLOR_SHARP_SHP_CDS_REGION0_0_inst_addr                                 "0x0097"
#define  set_COLOR_SHARP_SHP_CDS_REGION0_0_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION0_0_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION0_0_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION0_0_reg))
#define  COLOR_SHARP_SHP_CDS_REGION0_0_cds_region_0_smooth_shift                 (24)
#define  COLOR_SHARP_SHP_CDS_REGION0_0_cds_region_0_end_i_shift                  (12)
#define  COLOR_SHARP_SHP_CDS_REGION0_0_cds_region_0_start_i_shift                (0)
#define  COLOR_SHARP_SHP_CDS_REGION0_0_cds_region_0_smooth_mask                  (0xFF000000)
#define  COLOR_SHARP_SHP_CDS_REGION0_0_cds_region_0_end_i_mask                   (0x00FFF000)
#define  COLOR_SHARP_SHP_CDS_REGION0_0_cds_region_0_start_i_mask                 (0x00000FFF)
#define  COLOR_SHARP_SHP_CDS_REGION0_0_cds_region_0_smooth(data)                 (0xFF000000&((data)<<24))
#define  COLOR_SHARP_SHP_CDS_REGION0_0_cds_region_0_end_i(data)                  (0x00FFF000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION0_0_cds_region_0_start_i(data)                (0x00000FFF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION0_0_get_cds_region_0_smooth(data)             ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_SHP_CDS_REGION0_0_get_cds_region_0_end_i(data)              ((0x00FFF000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION0_0_get_cds_region_0_start_i(data)            (0x00000FFF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION0_1                                          0x1802B578
#define  COLOR_SHARP_SHP_CDS_REGION0_1_reg_addr                                  "0xB802B578"
#define  COLOR_SHARP_SHP_CDS_REGION0_1_reg                                       0xB802B578
#define  COLOR_SHARP_SHP_CDS_REGION0_1_inst_addr                                 "0x0098"
#define  set_COLOR_SHARP_SHP_CDS_REGION0_1_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION0_1_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION0_1_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION0_1_reg))
#define  COLOR_SHARP_SHP_CDS_REGION0_1_cds_region_0_end_j_shift                  (12)
#define  COLOR_SHARP_SHP_CDS_REGION0_1_cds_region_0_start_j_shift                (0)
#define  COLOR_SHARP_SHP_CDS_REGION0_1_cds_region_0_end_j_mask                   (0x00FFF000)
#define  COLOR_SHARP_SHP_CDS_REGION0_1_cds_region_0_start_j_mask                 (0x00000FFF)
#define  COLOR_SHARP_SHP_CDS_REGION0_1_cds_region_0_end_j(data)                  (0x00FFF000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION0_1_cds_region_0_start_j(data)                (0x00000FFF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION0_1_get_cds_region_0_end_j(data)              ((0x00FFF000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION0_1_get_cds_region_0_start_j(data)            (0x00000FFF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION0_2                                          0x1802B590
#define  COLOR_SHARP_SHP_CDS_REGION0_2_reg_addr                                  "0xB802B590"
#define  COLOR_SHARP_SHP_CDS_REGION0_2_reg                                       0xB802B590
#define  COLOR_SHARP_SHP_CDS_REGION0_2_inst_addr                                 "0x0099"
#define  set_COLOR_SHARP_SHP_CDS_REGION0_2_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION0_2_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION0_2_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION0_2_reg))
#define  COLOR_SHARP_SHP_CDS_REGION0_2_cds_region_0_jld_shift                    (24)
#define  COLOR_SHARP_SHP_CDS_REGION0_2_cds_region_0_jlu_shift                    (16)
#define  COLOR_SHARP_SHP_CDS_REGION0_2_cds_region_0_ild_shift                    (8)
#define  COLOR_SHARP_SHP_CDS_REGION0_2_cds_region_0_ilu_shift                    (0)
#define  COLOR_SHARP_SHP_CDS_REGION0_2_cds_region_0_jld_mask                     (0xFF000000)
#define  COLOR_SHARP_SHP_CDS_REGION0_2_cds_region_0_jlu_mask                     (0x00FF0000)
#define  COLOR_SHARP_SHP_CDS_REGION0_2_cds_region_0_ild_mask                     (0x0000FF00)
#define  COLOR_SHARP_SHP_CDS_REGION0_2_cds_region_0_ilu_mask                     (0x000000FF)
#define  COLOR_SHARP_SHP_CDS_REGION0_2_cds_region_0_jld(data)                    (0xFF000000&((data)<<24))
#define  COLOR_SHARP_SHP_CDS_REGION0_2_cds_region_0_jlu(data)                    (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_CDS_REGION0_2_cds_region_0_ild(data)                    (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION0_2_cds_region_0_ilu(data)                    (0x000000FF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION0_2_get_cds_region_0_jld(data)                ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_SHP_CDS_REGION0_2_get_cds_region_0_jlu(data)                ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_CDS_REGION0_2_get_cds_region_0_ild(data)                ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION0_2_get_cds_region_0_ilu(data)                (0x000000FF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION0_3                                          0x1802B594
#define  COLOR_SHARP_SHP_CDS_REGION0_3_reg_addr                                  "0xB802B594"
#define  COLOR_SHARP_SHP_CDS_REGION0_3_reg                                       0xB802B594
#define  COLOR_SHARP_SHP_CDS_REGION0_3_inst_addr                                 "0x009A"
#define  set_COLOR_SHARP_SHP_CDS_REGION0_3_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION0_3_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION0_3_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION0_3_reg))
#define  COLOR_SHARP_SHP_CDS_REGION0_3_cds_region_0_jrd_shift                    (24)
#define  COLOR_SHARP_SHP_CDS_REGION0_3_cds_region_0_jru_shift                    (16)
#define  COLOR_SHARP_SHP_CDS_REGION0_3_cds_region_0_ird_shift                    (8)
#define  COLOR_SHARP_SHP_CDS_REGION0_3_cds_region_0_iru_shift                    (0)
#define  COLOR_SHARP_SHP_CDS_REGION0_3_cds_region_0_jrd_mask                     (0xFF000000)
#define  COLOR_SHARP_SHP_CDS_REGION0_3_cds_region_0_jru_mask                     (0x00FF0000)
#define  COLOR_SHARP_SHP_CDS_REGION0_3_cds_region_0_ird_mask                     (0x0000FF00)
#define  COLOR_SHARP_SHP_CDS_REGION0_3_cds_region_0_iru_mask                     (0x000000FF)
#define  COLOR_SHARP_SHP_CDS_REGION0_3_cds_region_0_jrd(data)                    (0xFF000000&((data)<<24))
#define  COLOR_SHARP_SHP_CDS_REGION0_3_cds_region_0_jru(data)                    (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_CDS_REGION0_3_cds_region_0_ird(data)                    (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION0_3_cds_region_0_iru(data)                    (0x000000FF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION0_3_get_cds_region_0_jrd(data)                ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_SHP_CDS_REGION0_3_get_cds_region_0_jru(data)                ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_CDS_REGION0_3_get_cds_region_0_ird(data)                ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION0_3_get_cds_region_0_iru(data)                (0x000000FF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION0_4                                          0x1802B598
#define  COLOR_SHARP_SHP_CDS_REGION0_4_reg_addr                                  "0xB802B598"
#define  COLOR_SHARP_SHP_CDS_REGION0_4_reg                                       0xB802B598
#define  COLOR_SHARP_SHP_CDS_REGION0_4_inst_addr                                 "0x009B"
#define  set_COLOR_SHARP_SHP_CDS_REGION0_4_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION0_4_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION0_4_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION0_4_reg))
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_jrdm_shift                   (14)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_jrum_shift                   (12)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_irdm_shift                   (10)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_irum_shift                   (8)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_jldm_shift                   (6)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_jlum_shift                   (4)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_ildm_shift                   (2)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_ilum_shift                   (0)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_jrdm_mask                    (0x0000C000)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_jrum_mask                    (0x00003000)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_irdm_mask                    (0x00000C00)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_irum_mask                    (0x00000300)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_jldm_mask                    (0x000000C0)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_jlum_mask                    (0x00000030)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_ildm_mask                    (0x0000000C)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_ilum_mask                    (0x00000003)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_jrdm(data)                   (0x0000C000&((data)<<14))
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_jrum(data)                   (0x00003000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_irdm(data)                   (0x00000C00&((data)<<10))
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_irum(data)                   (0x00000300&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_jldm(data)                   (0x000000C0&((data)<<6))
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_jlum(data)                   (0x00000030&((data)<<4))
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_ildm(data)                   (0x0000000C&((data)<<2))
#define  COLOR_SHARP_SHP_CDS_REGION0_4_cds_region_0_ilum(data)                   (0x00000003&(data))
#define  COLOR_SHARP_SHP_CDS_REGION0_4_get_cds_region_0_jrdm(data)               ((0x0000C000&(data))>>14)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_get_cds_region_0_jrum(data)               ((0x00003000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_get_cds_region_0_irdm(data)               ((0x00000C00&(data))>>10)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_get_cds_region_0_irum(data)               ((0x00000300&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_get_cds_region_0_jldm(data)               ((0x000000C0&(data))>>6)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_get_cds_region_0_jlum(data)               ((0x00000030&(data))>>4)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_get_cds_region_0_ildm(data)               ((0x0000000C&(data))>>2)
#define  COLOR_SHARP_SHP_CDS_REGION0_4_get_cds_region_0_ilum(data)               (0x00000003&(data))

#define  COLOR_SHARP_SHP_CDS_REGION1_0                                          0x1802B5D4
#define  COLOR_SHARP_SHP_CDS_REGION1_0_reg_addr                                  "0xB802B5D4"
#define  COLOR_SHARP_SHP_CDS_REGION1_0_reg                                       0xB802B5D4
#define  COLOR_SHARP_SHP_CDS_REGION1_0_inst_addr                                 "0x009C"
#define  set_COLOR_SHARP_SHP_CDS_REGION1_0_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION1_0_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION1_0_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION1_0_reg))
#define  COLOR_SHARP_SHP_CDS_REGION1_0_cds_region_1_smooth_shift                 (24)
#define  COLOR_SHARP_SHP_CDS_REGION1_0_cds_region_1_end_i_shift                  (12)
#define  COLOR_SHARP_SHP_CDS_REGION1_0_cds_region_1_start_i_shift                (0)
#define  COLOR_SHARP_SHP_CDS_REGION1_0_cds_region_1_smooth_mask                  (0xFF000000)
#define  COLOR_SHARP_SHP_CDS_REGION1_0_cds_region_1_end_i_mask                   (0x00FFF000)
#define  COLOR_SHARP_SHP_CDS_REGION1_0_cds_region_1_start_i_mask                 (0x00000FFF)
#define  COLOR_SHARP_SHP_CDS_REGION1_0_cds_region_1_smooth(data)                 (0xFF000000&((data)<<24))
#define  COLOR_SHARP_SHP_CDS_REGION1_0_cds_region_1_end_i(data)                  (0x00FFF000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION1_0_cds_region_1_start_i(data)                (0x00000FFF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION1_0_get_cds_region_1_smooth(data)             ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_SHP_CDS_REGION1_0_get_cds_region_1_end_i(data)              ((0x00FFF000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION1_0_get_cds_region_1_start_i(data)            (0x00000FFF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION1_1                                          0x1802B5D8
#define  COLOR_SHARP_SHP_CDS_REGION1_1_reg_addr                                  "0xB802B5D8"
#define  COLOR_SHARP_SHP_CDS_REGION1_1_reg                                       0xB802B5D8
#define  COLOR_SHARP_SHP_CDS_REGION1_1_inst_addr                                 "0x009D"
#define  set_COLOR_SHARP_SHP_CDS_REGION1_1_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION1_1_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION1_1_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION1_1_reg))
#define  COLOR_SHARP_SHP_CDS_REGION1_1_cds_region_1_end_j_shift                  (12)
#define  COLOR_SHARP_SHP_CDS_REGION1_1_cds_region_1_start_j_shift                (0)
#define  COLOR_SHARP_SHP_CDS_REGION1_1_cds_region_1_end_j_mask                   (0x00FFF000)
#define  COLOR_SHARP_SHP_CDS_REGION1_1_cds_region_1_start_j_mask                 (0x00000FFF)
#define  COLOR_SHARP_SHP_CDS_REGION1_1_cds_region_1_end_j(data)                  (0x00FFF000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION1_1_cds_region_1_start_j(data)                (0x00000FFF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION1_1_get_cds_region_1_end_j(data)              ((0x00FFF000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION1_1_get_cds_region_1_start_j(data)            (0x00000FFF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION1_2                                          0x1802B5DC
#define  COLOR_SHARP_SHP_CDS_REGION1_2_reg_addr                                  "0xB802B5DC"
#define  COLOR_SHARP_SHP_CDS_REGION1_2_reg                                       0xB802B5DC
#define  COLOR_SHARP_SHP_CDS_REGION1_2_inst_addr                                 "0x009E"
#define  set_COLOR_SHARP_SHP_CDS_REGION1_2_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION1_2_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION1_2_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION1_2_reg))
#define  COLOR_SHARP_SHP_CDS_REGION1_2_cds_region_1_jld_shift                    (24)
#define  COLOR_SHARP_SHP_CDS_REGION1_2_cds_region_1_jlu_shift                    (16)
#define  COLOR_SHARP_SHP_CDS_REGION1_2_cds_region_1_ild_shift                    (8)
#define  COLOR_SHARP_SHP_CDS_REGION1_2_cds_region_1_ilu_shift                    (0)
#define  COLOR_SHARP_SHP_CDS_REGION1_2_cds_region_1_jld_mask                     (0xFF000000)
#define  COLOR_SHARP_SHP_CDS_REGION1_2_cds_region_1_jlu_mask                     (0x00FF0000)
#define  COLOR_SHARP_SHP_CDS_REGION1_2_cds_region_1_ild_mask                     (0x0000FF00)
#define  COLOR_SHARP_SHP_CDS_REGION1_2_cds_region_1_ilu_mask                     (0x000000FF)
#define  COLOR_SHARP_SHP_CDS_REGION1_2_cds_region_1_jld(data)                    (0xFF000000&((data)<<24))
#define  COLOR_SHARP_SHP_CDS_REGION1_2_cds_region_1_jlu(data)                    (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_CDS_REGION1_2_cds_region_1_ild(data)                    (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION1_2_cds_region_1_ilu(data)                    (0x000000FF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION1_2_get_cds_region_1_jld(data)                ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_SHP_CDS_REGION1_2_get_cds_region_1_jlu(data)                ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_CDS_REGION1_2_get_cds_region_1_ild(data)                ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION1_2_get_cds_region_1_ilu(data)                (0x000000FF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION1_3                                          0x1802B6B0
#define  COLOR_SHARP_SHP_CDS_REGION1_3_reg_addr                                  "0xB802B6B0"
#define  COLOR_SHARP_SHP_CDS_REGION1_3_reg                                       0xB802B6B0
#define  COLOR_SHARP_SHP_CDS_REGION1_3_inst_addr                                 "0x009F"
#define  set_COLOR_SHARP_SHP_CDS_REGION1_3_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION1_3_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION1_3_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION1_3_reg))
#define  COLOR_SHARP_SHP_CDS_REGION1_3_cds_region_1_jrd_shift                    (24)
#define  COLOR_SHARP_SHP_CDS_REGION1_3_cds_region_1_jru_shift                    (16)
#define  COLOR_SHARP_SHP_CDS_REGION1_3_cds_region_1_ird_shift                    (8)
#define  COLOR_SHARP_SHP_CDS_REGION1_3_cds_region_1_iru_shift                    (0)
#define  COLOR_SHARP_SHP_CDS_REGION1_3_cds_region_1_jrd_mask                     (0xFF000000)
#define  COLOR_SHARP_SHP_CDS_REGION1_3_cds_region_1_jru_mask                     (0x00FF0000)
#define  COLOR_SHARP_SHP_CDS_REGION1_3_cds_region_1_ird_mask                     (0x0000FF00)
#define  COLOR_SHARP_SHP_CDS_REGION1_3_cds_region_1_iru_mask                     (0x000000FF)
#define  COLOR_SHARP_SHP_CDS_REGION1_3_cds_region_1_jrd(data)                    (0xFF000000&((data)<<24))
#define  COLOR_SHARP_SHP_CDS_REGION1_3_cds_region_1_jru(data)                    (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_CDS_REGION1_3_cds_region_1_ird(data)                    (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION1_3_cds_region_1_iru(data)                    (0x000000FF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION1_3_get_cds_region_1_jrd(data)                ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_SHP_CDS_REGION1_3_get_cds_region_1_jru(data)                ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_CDS_REGION1_3_get_cds_region_1_ird(data)                ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION1_3_get_cds_region_1_iru(data)                (0x000000FF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION1_4                                          0x1802B6B4
#define  COLOR_SHARP_SHP_CDS_REGION1_4_reg_addr                                  "0xB802B6B4"
#define  COLOR_SHARP_SHP_CDS_REGION1_4_reg                                       0xB802B6B4
#define  COLOR_SHARP_SHP_CDS_REGION1_4_inst_addr                                 "0x00A0"
#define  set_COLOR_SHARP_SHP_CDS_REGION1_4_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION1_4_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION1_4_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION1_4_reg))
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_jrdm_shift                   (14)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_jrum_shift                   (12)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_irdm_shift                   (10)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_irum_shift                   (8)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_jldm_shift                   (6)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_jlum_shift                   (4)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_ildm_shift                   (2)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_ilum_shift                   (0)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_jrdm_mask                    (0x0000C000)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_jrum_mask                    (0x00003000)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_irdm_mask                    (0x00000C00)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_irum_mask                    (0x00000300)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_jldm_mask                    (0x000000C0)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_jlum_mask                    (0x00000030)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_ildm_mask                    (0x0000000C)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_ilum_mask                    (0x00000003)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_jrdm(data)                   (0x0000C000&((data)<<14))
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_jrum(data)                   (0x00003000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_irdm(data)                   (0x00000C00&((data)<<10))
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_irum(data)                   (0x00000300&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_jldm(data)                   (0x000000C0&((data)<<6))
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_jlum(data)                   (0x00000030&((data)<<4))
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_ildm(data)                   (0x0000000C&((data)<<2))
#define  COLOR_SHARP_SHP_CDS_REGION1_4_cds_region_1_ilum(data)                   (0x00000003&(data))
#define  COLOR_SHARP_SHP_CDS_REGION1_4_get_cds_region_1_jrdm(data)               ((0x0000C000&(data))>>14)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_get_cds_region_1_jrum(data)               ((0x00003000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_get_cds_region_1_irdm(data)               ((0x00000C00&(data))>>10)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_get_cds_region_1_irum(data)               ((0x00000300&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_get_cds_region_1_jldm(data)               ((0x000000C0&(data))>>6)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_get_cds_region_1_jlum(data)               ((0x00000030&(data))>>4)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_get_cds_region_1_ildm(data)               ((0x0000000C&(data))>>2)
#define  COLOR_SHARP_SHP_CDS_REGION1_4_get_cds_region_1_ilum(data)               (0x00000003&(data))

#define  COLOR_SHARP_SHP_CDS_REGION2_0                                          0x1802B6B8
#define  COLOR_SHARP_SHP_CDS_REGION2_0_reg_addr                                  "0xB802B6B8"
#define  COLOR_SHARP_SHP_CDS_REGION2_0_reg                                       0xB802B6B8
#define  COLOR_SHARP_SHP_CDS_REGION2_0_inst_addr                                 "0x00A1"
#define  set_COLOR_SHARP_SHP_CDS_REGION2_0_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION2_0_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION2_0_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION2_0_reg))
#define  COLOR_SHARP_SHP_CDS_REGION2_0_cds_region_2_smooth_shift                 (24)
#define  COLOR_SHARP_SHP_CDS_REGION2_0_cds_region_2_end_i_shift                  (12)
#define  COLOR_SHARP_SHP_CDS_REGION2_0_cds_region_2_start_i_shift                (0)
#define  COLOR_SHARP_SHP_CDS_REGION2_0_cds_region_2_smooth_mask                  (0xFF000000)
#define  COLOR_SHARP_SHP_CDS_REGION2_0_cds_region_2_end_i_mask                   (0x00FFF000)
#define  COLOR_SHARP_SHP_CDS_REGION2_0_cds_region_2_start_i_mask                 (0x00000FFF)
#define  COLOR_SHARP_SHP_CDS_REGION2_0_cds_region_2_smooth(data)                 (0xFF000000&((data)<<24))
#define  COLOR_SHARP_SHP_CDS_REGION2_0_cds_region_2_end_i(data)                  (0x00FFF000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION2_0_cds_region_2_start_i(data)                (0x00000FFF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION2_0_get_cds_region_2_smooth(data)             ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_SHP_CDS_REGION2_0_get_cds_region_2_end_i(data)              ((0x00FFF000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION2_0_get_cds_region_2_start_i(data)            (0x00000FFF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION2_1                                          0x1802B6BC
#define  COLOR_SHARP_SHP_CDS_REGION2_1_reg_addr                                  "0xB802B6BC"
#define  COLOR_SHARP_SHP_CDS_REGION2_1_reg                                       0xB802B6BC
#define  COLOR_SHARP_SHP_CDS_REGION2_1_inst_addr                                 "0x00A2"
#define  set_COLOR_SHARP_SHP_CDS_REGION2_1_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION2_1_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION2_1_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION2_1_reg))
#define  COLOR_SHARP_SHP_CDS_REGION2_1_cds_region_2_end_j_shift                  (12)
#define  COLOR_SHARP_SHP_CDS_REGION2_1_cds_region_2_start_j_shift                (0)
#define  COLOR_SHARP_SHP_CDS_REGION2_1_cds_region_2_end_j_mask                   (0x00FFF000)
#define  COLOR_SHARP_SHP_CDS_REGION2_1_cds_region_2_start_j_mask                 (0x00000FFF)
#define  COLOR_SHARP_SHP_CDS_REGION2_1_cds_region_2_end_j(data)                  (0x00FFF000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION2_1_cds_region_2_start_j(data)                (0x00000FFF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION2_1_get_cds_region_2_end_j(data)              ((0x00FFF000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION2_1_get_cds_region_2_start_j(data)            (0x00000FFF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION2_2                                          0x1802B6D0
#define  COLOR_SHARP_SHP_CDS_REGION2_2_reg_addr                                  "0xB802B6D0"
#define  COLOR_SHARP_SHP_CDS_REGION2_2_reg                                       0xB802B6D0
#define  COLOR_SHARP_SHP_CDS_REGION2_2_inst_addr                                 "0x00A3"
#define  set_COLOR_SHARP_SHP_CDS_REGION2_2_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION2_2_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION2_2_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION2_2_reg))
#define  COLOR_SHARP_SHP_CDS_REGION2_2_cds_region_2_jld_shift                    (24)
#define  COLOR_SHARP_SHP_CDS_REGION2_2_cds_region_2_jlu_shift                    (16)
#define  COLOR_SHARP_SHP_CDS_REGION2_2_cds_region_2_ild_shift                    (8)
#define  COLOR_SHARP_SHP_CDS_REGION2_2_cds_region_2_ilu_shift                    (0)
#define  COLOR_SHARP_SHP_CDS_REGION2_2_cds_region_2_jld_mask                     (0xFF000000)
#define  COLOR_SHARP_SHP_CDS_REGION2_2_cds_region_2_jlu_mask                     (0x00FF0000)
#define  COLOR_SHARP_SHP_CDS_REGION2_2_cds_region_2_ild_mask                     (0x0000FF00)
#define  COLOR_SHARP_SHP_CDS_REGION2_2_cds_region_2_ilu_mask                     (0x000000FF)
#define  COLOR_SHARP_SHP_CDS_REGION2_2_cds_region_2_jld(data)                    (0xFF000000&((data)<<24))
#define  COLOR_SHARP_SHP_CDS_REGION2_2_cds_region_2_jlu(data)                    (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_CDS_REGION2_2_cds_region_2_ild(data)                    (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION2_2_cds_region_2_ilu(data)                    (0x000000FF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION2_2_get_cds_region_2_jld(data)                ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_SHP_CDS_REGION2_2_get_cds_region_2_jlu(data)                ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_CDS_REGION2_2_get_cds_region_2_ild(data)                ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION2_2_get_cds_region_2_ilu(data)                (0x000000FF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION2_3                                          0x1802B6D4
#define  COLOR_SHARP_SHP_CDS_REGION2_3_reg_addr                                  "0xB802B6D4"
#define  COLOR_SHARP_SHP_CDS_REGION2_3_reg                                       0xB802B6D4
#define  COLOR_SHARP_SHP_CDS_REGION2_3_inst_addr                                 "0x00A4"
#define  set_COLOR_SHARP_SHP_CDS_REGION2_3_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION2_3_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION2_3_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION2_3_reg))
#define  COLOR_SHARP_SHP_CDS_REGION2_3_cds_region_2_jrd_shift                    (24)
#define  COLOR_SHARP_SHP_CDS_REGION2_3_cds_region_2_jru_shift                    (16)
#define  COLOR_SHARP_SHP_CDS_REGION2_3_cds_region_2_ird_shift                    (8)
#define  COLOR_SHARP_SHP_CDS_REGION2_3_cds_region_2_iru_shift                    (0)
#define  COLOR_SHARP_SHP_CDS_REGION2_3_cds_region_2_jrd_mask                     (0xFF000000)
#define  COLOR_SHARP_SHP_CDS_REGION2_3_cds_region_2_jru_mask                     (0x00FF0000)
#define  COLOR_SHARP_SHP_CDS_REGION2_3_cds_region_2_ird_mask                     (0x0000FF00)
#define  COLOR_SHARP_SHP_CDS_REGION2_3_cds_region_2_iru_mask                     (0x000000FF)
#define  COLOR_SHARP_SHP_CDS_REGION2_3_cds_region_2_jrd(data)                    (0xFF000000&((data)<<24))
#define  COLOR_SHARP_SHP_CDS_REGION2_3_cds_region_2_jru(data)                    (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_CDS_REGION2_3_cds_region_2_ird(data)                    (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION2_3_cds_region_2_iru(data)                    (0x000000FF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION2_3_get_cds_region_2_jrd(data)                ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_SHP_CDS_REGION2_3_get_cds_region_2_jru(data)                ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_CDS_REGION2_3_get_cds_region_2_ird(data)                ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION2_3_get_cds_region_2_iru(data)                (0x000000FF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION2_4                                          0x1802B6D8
#define  COLOR_SHARP_SHP_CDS_REGION2_4_reg_addr                                  "0xB802B6D8"
#define  COLOR_SHARP_SHP_CDS_REGION2_4_reg                                       0xB802B6D8
#define  COLOR_SHARP_SHP_CDS_REGION2_4_inst_addr                                 "0x00A5"
#define  set_COLOR_SHARP_SHP_CDS_REGION2_4_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION2_4_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION2_4_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION2_4_reg))
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_jrdm_shift                   (14)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_jrum_shift                   (12)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_irdm_shift                   (10)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_irum_shift                   (8)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_jldm_shift                   (6)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_jlum_shift                   (4)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_ildm_shift                   (2)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_ilum_shift                   (0)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_jrdm_mask                    (0x0000C000)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_jrum_mask                    (0x00003000)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_irdm_mask                    (0x00000C00)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_irum_mask                    (0x00000300)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_jldm_mask                    (0x000000C0)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_jlum_mask                    (0x00000030)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_ildm_mask                    (0x0000000C)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_ilum_mask                    (0x00000003)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_jrdm(data)                   (0x0000C000&((data)<<14))
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_jrum(data)                   (0x00003000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_irdm(data)                   (0x00000C00&((data)<<10))
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_irum(data)                   (0x00000300&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_jldm(data)                   (0x000000C0&((data)<<6))
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_jlum(data)                   (0x00000030&((data)<<4))
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_ildm(data)                   (0x0000000C&((data)<<2))
#define  COLOR_SHARP_SHP_CDS_REGION2_4_cds_region_2_ilum(data)                   (0x00000003&(data))
#define  COLOR_SHARP_SHP_CDS_REGION2_4_get_cds_region_2_jrdm(data)               ((0x0000C000&(data))>>14)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_get_cds_region_2_jrum(data)               ((0x00003000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_get_cds_region_2_irdm(data)               ((0x00000C00&(data))>>10)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_get_cds_region_2_irum(data)               ((0x00000300&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_get_cds_region_2_jldm(data)               ((0x000000C0&(data))>>6)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_get_cds_region_2_jlum(data)               ((0x00000030&(data))>>4)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_get_cds_region_2_ildm(data)               ((0x0000000C&(data))>>2)
#define  COLOR_SHARP_SHP_CDS_REGION2_4_get_cds_region_2_ilum(data)               (0x00000003&(data))

#define  COLOR_SHARP_SHP_CDS_REGION3_0                                          0x1802B6DC
#define  COLOR_SHARP_SHP_CDS_REGION3_0_reg_addr                                  "0xB802B6DC"
#define  COLOR_SHARP_SHP_CDS_REGION3_0_reg                                       0xB802B6DC
#define  COLOR_SHARP_SHP_CDS_REGION3_0_inst_addr                                 "0x00A6"
#define  set_COLOR_SHARP_SHP_CDS_REGION3_0_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION3_0_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION3_0_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION3_0_reg))
#define  COLOR_SHARP_SHP_CDS_REGION3_0_cds_region_3_smooth_shift                 (24)
#define  COLOR_SHARP_SHP_CDS_REGION3_0_cds_region_3_end_i_shift                  (12)
#define  COLOR_SHARP_SHP_CDS_REGION3_0_cds_region_3_start_i_shift                (0)
#define  COLOR_SHARP_SHP_CDS_REGION3_0_cds_region_3_smooth_mask                  (0xFF000000)
#define  COLOR_SHARP_SHP_CDS_REGION3_0_cds_region_3_end_i_mask                   (0x00FFF000)
#define  COLOR_SHARP_SHP_CDS_REGION3_0_cds_region_3_start_i_mask                 (0x00000FFF)
#define  COLOR_SHARP_SHP_CDS_REGION3_0_cds_region_3_smooth(data)                 (0xFF000000&((data)<<24))
#define  COLOR_SHARP_SHP_CDS_REGION3_0_cds_region_3_end_i(data)                  (0x00FFF000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION3_0_cds_region_3_start_i(data)                (0x00000FFF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION3_0_get_cds_region_3_smooth(data)             ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_SHP_CDS_REGION3_0_get_cds_region_3_end_i(data)              ((0x00FFF000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION3_0_get_cds_region_3_start_i(data)            (0x00000FFF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION3_1                                          0x1802B6E0
#define  COLOR_SHARP_SHP_CDS_REGION3_1_reg_addr                                  "0xB802B6E0"
#define  COLOR_SHARP_SHP_CDS_REGION3_1_reg                                       0xB802B6E0
#define  COLOR_SHARP_SHP_CDS_REGION3_1_inst_addr                                 "0x00A7"
#define  set_COLOR_SHARP_SHP_CDS_REGION3_1_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION3_1_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION3_1_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION3_1_reg))
#define  COLOR_SHARP_SHP_CDS_REGION3_1_cds_region_3_end_j_shift                  (12)
#define  COLOR_SHARP_SHP_CDS_REGION3_1_cds_region_3_start_j_shift                (0)
#define  COLOR_SHARP_SHP_CDS_REGION3_1_cds_region_3_end_j_mask                   (0x00FFF000)
#define  COLOR_SHARP_SHP_CDS_REGION3_1_cds_region_3_start_j_mask                 (0x00000FFF)
#define  COLOR_SHARP_SHP_CDS_REGION3_1_cds_region_3_end_j(data)                  (0x00FFF000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION3_1_cds_region_3_start_j(data)                (0x00000FFF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION3_1_get_cds_region_3_end_j(data)              ((0x00FFF000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION3_1_get_cds_region_3_start_j(data)            (0x00000FFF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION3_2                                          0x1802B6E4
#define  COLOR_SHARP_SHP_CDS_REGION3_2_reg_addr                                  "0xB802B6E4"
#define  COLOR_SHARP_SHP_CDS_REGION3_2_reg                                       0xB802B6E4
#define  COLOR_SHARP_SHP_CDS_REGION3_2_inst_addr                                 "0x00A8"
#define  set_COLOR_SHARP_SHP_CDS_REGION3_2_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION3_2_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION3_2_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION3_2_reg))
#define  COLOR_SHARP_SHP_CDS_REGION3_2_cds_region_3_jld_shift                    (24)
#define  COLOR_SHARP_SHP_CDS_REGION3_2_cds_region_3_jlu_shift                    (16)
#define  COLOR_SHARP_SHP_CDS_REGION3_2_cds_region_3_ild_shift                    (8)
#define  COLOR_SHARP_SHP_CDS_REGION3_2_cds_region_3_ilu_shift                    (0)
#define  COLOR_SHARP_SHP_CDS_REGION3_2_cds_region_3_jld_mask                     (0xFF000000)
#define  COLOR_SHARP_SHP_CDS_REGION3_2_cds_region_3_jlu_mask                     (0x00FF0000)
#define  COLOR_SHARP_SHP_CDS_REGION3_2_cds_region_3_ild_mask                     (0x0000FF00)
#define  COLOR_SHARP_SHP_CDS_REGION3_2_cds_region_3_ilu_mask                     (0x000000FF)
#define  COLOR_SHARP_SHP_CDS_REGION3_2_cds_region_3_jld(data)                    (0xFF000000&((data)<<24))
#define  COLOR_SHARP_SHP_CDS_REGION3_2_cds_region_3_jlu(data)                    (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_CDS_REGION3_2_cds_region_3_ild(data)                    (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION3_2_cds_region_3_ilu(data)                    (0x000000FF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION3_2_get_cds_region_3_jld(data)                ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_SHP_CDS_REGION3_2_get_cds_region_3_jlu(data)                ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_CDS_REGION3_2_get_cds_region_3_ild(data)                ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION3_2_get_cds_region_3_ilu(data)                (0x000000FF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION3_3                                          0x1802B6E8
#define  COLOR_SHARP_SHP_CDS_REGION3_3_reg_addr                                  "0xB802B6E8"
#define  COLOR_SHARP_SHP_CDS_REGION3_3_reg                                       0xB802B6E8
#define  COLOR_SHARP_SHP_CDS_REGION3_3_inst_addr                                 "0x00A9"
#define  set_COLOR_SHARP_SHP_CDS_REGION3_3_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION3_3_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION3_3_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION3_3_reg))
#define  COLOR_SHARP_SHP_CDS_REGION3_3_cds_region_3_jrd_shift                    (24)
#define  COLOR_SHARP_SHP_CDS_REGION3_3_cds_region_3_jru_shift                    (16)
#define  COLOR_SHARP_SHP_CDS_REGION3_3_cds_region_3_ird_shift                    (8)
#define  COLOR_SHARP_SHP_CDS_REGION3_3_cds_region_3_iru_shift                    (0)
#define  COLOR_SHARP_SHP_CDS_REGION3_3_cds_region_3_jrd_mask                     (0xFF000000)
#define  COLOR_SHARP_SHP_CDS_REGION3_3_cds_region_3_jru_mask                     (0x00FF0000)
#define  COLOR_SHARP_SHP_CDS_REGION3_3_cds_region_3_ird_mask                     (0x0000FF00)
#define  COLOR_SHARP_SHP_CDS_REGION3_3_cds_region_3_iru_mask                     (0x000000FF)
#define  COLOR_SHARP_SHP_CDS_REGION3_3_cds_region_3_jrd(data)                    (0xFF000000&((data)<<24))
#define  COLOR_SHARP_SHP_CDS_REGION3_3_cds_region_3_jru(data)                    (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_CDS_REGION3_3_cds_region_3_ird(data)                    (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION3_3_cds_region_3_iru(data)                    (0x000000FF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION3_3_get_cds_region_3_jrd(data)                ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_SHP_CDS_REGION3_3_get_cds_region_3_jru(data)                ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_CDS_REGION3_3_get_cds_region_3_ird(data)                ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION3_3_get_cds_region_3_iru(data)                (0x000000FF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION3_4                                          0x1802B6F0
#define  COLOR_SHARP_SHP_CDS_REGION3_4_reg_addr                                  "0xB802B6F0"
#define  COLOR_SHARP_SHP_CDS_REGION3_4_reg                                       0xB802B6F0
#define  COLOR_SHARP_SHP_CDS_REGION3_4_inst_addr                                 "0x00AA"
#define  set_COLOR_SHARP_SHP_CDS_REGION3_4_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION3_4_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION3_4_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION3_4_reg))
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_jrdm_shift                   (14)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_jrum_shift                   (12)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_irdm_shift                   (10)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_irum_shift                   (8)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_jldm_shift                   (6)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_jlum_shift                   (4)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_ildm_shift                   (2)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_ilum_shift                   (0)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_jrdm_mask                    (0x0000C000)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_jrum_mask                    (0x00003000)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_irdm_mask                    (0x00000C00)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_irum_mask                    (0x00000300)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_jldm_mask                    (0x000000C0)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_jlum_mask                    (0x00000030)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_ildm_mask                    (0x0000000C)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_ilum_mask                    (0x00000003)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_jrdm(data)                   (0x0000C000&((data)<<14))
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_jrum(data)                   (0x00003000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_irdm(data)                   (0x00000C00&((data)<<10))
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_irum(data)                   (0x00000300&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_jldm(data)                   (0x000000C0&((data)<<6))
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_jlum(data)                   (0x00000030&((data)<<4))
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_ildm(data)                   (0x0000000C&((data)<<2))
#define  COLOR_SHARP_SHP_CDS_REGION3_4_cds_region_3_ilum(data)                   (0x00000003&(data))
#define  COLOR_SHARP_SHP_CDS_REGION3_4_get_cds_region_3_jrdm(data)               ((0x0000C000&(data))>>14)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_get_cds_region_3_jrum(data)               ((0x00003000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_get_cds_region_3_irdm(data)               ((0x00000C00&(data))>>10)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_get_cds_region_3_irum(data)               ((0x00000300&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_get_cds_region_3_jldm(data)               ((0x000000C0&(data))>>6)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_get_cds_region_3_jlum(data)               ((0x00000030&(data))>>4)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_get_cds_region_3_ildm(data)               ((0x0000000C&(data))>>2)
#define  COLOR_SHARP_SHP_CDS_REGION3_4_get_cds_region_3_ilum(data)               (0x00000003&(data))

#define  COLOR_SHARP_SHP_CDS_REGION4_0                                          0x1802B6F4
#define  COLOR_SHARP_SHP_CDS_REGION4_0_reg_addr                                  "0xB802B6F4"
#define  COLOR_SHARP_SHP_CDS_REGION4_0_reg                                       0xB802B6F4
#define  COLOR_SHARP_SHP_CDS_REGION4_0_inst_addr                                 "0x00AB"
#define  set_COLOR_SHARP_SHP_CDS_REGION4_0_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION4_0_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION4_0_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION4_0_reg))
#define  COLOR_SHARP_SHP_CDS_REGION4_0_cds_region_4_end_i_shift                  (12)
#define  COLOR_SHARP_SHP_CDS_REGION4_0_cds_region_4_start_i_shift                (0)
#define  COLOR_SHARP_SHP_CDS_REGION4_0_cds_region_4_end_i_mask                   (0x00FFF000)
#define  COLOR_SHARP_SHP_CDS_REGION4_0_cds_region_4_start_i_mask                 (0x00000FFF)
#define  COLOR_SHARP_SHP_CDS_REGION4_0_cds_region_4_end_i(data)                  (0x00FFF000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION4_0_cds_region_4_start_i(data)                (0x00000FFF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION4_0_get_cds_region_4_end_i(data)              ((0x00FFF000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION4_0_get_cds_region_4_start_i(data)            (0x00000FFF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION4_1                                          0x1802B6F8
#define  COLOR_SHARP_SHP_CDS_REGION4_1_reg_addr                                  "0xB802B6F8"
#define  COLOR_SHARP_SHP_CDS_REGION4_1_reg                                       0xB802B6F8
#define  COLOR_SHARP_SHP_CDS_REGION4_1_inst_addr                                 "0x00AC"
#define  set_COLOR_SHARP_SHP_CDS_REGION4_1_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION4_1_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION4_1_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION4_1_reg))
#define  COLOR_SHARP_SHP_CDS_REGION4_1_cds_region_4_end_j_shift                  (12)
#define  COLOR_SHARP_SHP_CDS_REGION4_1_cds_region_4_start_j_shift                (0)
#define  COLOR_SHARP_SHP_CDS_REGION4_1_cds_region_4_end_j_mask                   (0x00FFF000)
#define  COLOR_SHARP_SHP_CDS_REGION4_1_cds_region_4_start_j_mask                 (0x00000FFF)
#define  COLOR_SHARP_SHP_CDS_REGION4_1_cds_region_4_end_j(data)                  (0x00FFF000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION4_1_cds_region_4_start_j(data)                (0x00000FFF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION4_1_get_cds_region_4_end_j(data)              ((0x00FFF000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION4_1_get_cds_region_4_start_j(data)            (0x00000FFF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION4_2                                          0x1802B6FC
#define  COLOR_SHARP_SHP_CDS_REGION4_2_reg_addr                                  "0xB802B6FC"
#define  COLOR_SHARP_SHP_CDS_REGION4_2_reg                                       0xB802B6FC
#define  COLOR_SHARP_SHP_CDS_REGION4_2_inst_addr                                 "0x00AD"
#define  set_COLOR_SHARP_SHP_CDS_REGION4_2_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION4_2_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION4_2_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION4_2_reg))
#define  COLOR_SHARP_SHP_CDS_REGION4_2_cds_region_4_jld_shift                    (24)
#define  COLOR_SHARP_SHP_CDS_REGION4_2_cds_region_4_jlu_shift                    (16)
#define  COLOR_SHARP_SHP_CDS_REGION4_2_cds_region_4_ild_shift                    (8)
#define  COLOR_SHARP_SHP_CDS_REGION4_2_cds_region_4_ilu_shift                    (0)
#define  COLOR_SHARP_SHP_CDS_REGION4_2_cds_region_4_jld_mask                     (0xFF000000)
#define  COLOR_SHARP_SHP_CDS_REGION4_2_cds_region_4_jlu_mask                     (0x00FF0000)
#define  COLOR_SHARP_SHP_CDS_REGION4_2_cds_region_4_ild_mask                     (0x0000FF00)
#define  COLOR_SHARP_SHP_CDS_REGION4_2_cds_region_4_ilu_mask                     (0x000000FF)
#define  COLOR_SHARP_SHP_CDS_REGION4_2_cds_region_4_jld(data)                    (0xFF000000&((data)<<24))
#define  COLOR_SHARP_SHP_CDS_REGION4_2_cds_region_4_jlu(data)                    (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_CDS_REGION4_2_cds_region_4_ild(data)                    (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION4_2_cds_region_4_ilu(data)                    (0x000000FF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION4_2_get_cds_region_4_jld(data)                ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_SHP_CDS_REGION4_2_get_cds_region_4_jlu(data)                ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_CDS_REGION4_2_get_cds_region_4_ild(data)                ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION4_2_get_cds_region_4_ilu(data)                (0x000000FF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION4_3                                          0x1802B700
#define  COLOR_SHARP_SHP_CDS_REGION4_3_reg_addr                                  "0xB802B700"
#define  COLOR_SHARP_SHP_CDS_REGION4_3_reg                                       0xB802B700
#define  COLOR_SHARP_SHP_CDS_REGION4_3_inst_addr                                 "0x00AE"
#define  set_COLOR_SHARP_SHP_CDS_REGION4_3_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION4_3_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION4_3_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION4_3_reg))
#define  COLOR_SHARP_SHP_CDS_REGION4_3_cds_region_4_jrd_shift                    (24)
#define  COLOR_SHARP_SHP_CDS_REGION4_3_cds_region_4_jru_shift                    (16)
#define  COLOR_SHARP_SHP_CDS_REGION4_3_cds_region_4_ird_shift                    (8)
#define  COLOR_SHARP_SHP_CDS_REGION4_3_cds_region_4_iru_shift                    (0)
#define  COLOR_SHARP_SHP_CDS_REGION4_3_cds_region_4_jrd_mask                     (0xFF000000)
#define  COLOR_SHARP_SHP_CDS_REGION4_3_cds_region_4_jru_mask                     (0x00FF0000)
#define  COLOR_SHARP_SHP_CDS_REGION4_3_cds_region_4_ird_mask                     (0x0000FF00)
#define  COLOR_SHARP_SHP_CDS_REGION4_3_cds_region_4_iru_mask                     (0x000000FF)
#define  COLOR_SHARP_SHP_CDS_REGION4_3_cds_region_4_jrd(data)                    (0xFF000000&((data)<<24))
#define  COLOR_SHARP_SHP_CDS_REGION4_3_cds_region_4_jru(data)                    (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_CDS_REGION4_3_cds_region_4_ird(data)                    (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION4_3_cds_region_4_iru(data)                    (0x000000FF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION4_3_get_cds_region_4_jrd(data)                ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_SHP_CDS_REGION4_3_get_cds_region_4_jru(data)                ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_CDS_REGION4_3_get_cds_region_4_ird(data)                ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION4_3_get_cds_region_4_iru(data)                (0x000000FF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION4_4                                          0x1802B704
#define  COLOR_SHARP_SHP_CDS_REGION4_4_reg_addr                                  "0xB802B704"
#define  COLOR_SHARP_SHP_CDS_REGION4_4_reg                                       0xB802B704
#define  COLOR_SHARP_SHP_CDS_REGION4_4_inst_addr                                 "0x00AF"
#define  set_COLOR_SHARP_SHP_CDS_REGION4_4_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION4_4_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION4_4_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION4_4_reg))
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_jrdm_shift                   (14)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_jrum_shift                   (12)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_irdm_shift                   (10)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_irum_shift                   (8)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_jldm_shift                   (6)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_jlum_shift                   (4)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_ildm_shift                   (2)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_ilum_shift                   (0)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_jrdm_mask                    (0x0000C000)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_jrum_mask                    (0x00003000)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_irdm_mask                    (0x00000C00)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_irum_mask                    (0x00000300)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_jldm_mask                    (0x000000C0)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_jlum_mask                    (0x00000030)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_ildm_mask                    (0x0000000C)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_ilum_mask                    (0x00000003)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_jrdm(data)                   (0x0000C000&((data)<<14))
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_jrum(data)                   (0x00003000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_irdm(data)                   (0x00000C00&((data)<<10))
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_irum(data)                   (0x00000300&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_jldm(data)                   (0x000000C0&((data)<<6))
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_jlum(data)                   (0x00000030&((data)<<4))
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_ildm(data)                   (0x0000000C&((data)<<2))
#define  COLOR_SHARP_SHP_CDS_REGION4_4_cds_region_4_ilum(data)                   (0x00000003&(data))
#define  COLOR_SHARP_SHP_CDS_REGION4_4_get_cds_region_4_jrdm(data)               ((0x0000C000&(data))>>14)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_get_cds_region_4_jrum(data)               ((0x00003000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_get_cds_region_4_irdm(data)               ((0x00000C00&(data))>>10)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_get_cds_region_4_irum(data)               ((0x00000300&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_get_cds_region_4_jldm(data)               ((0x000000C0&(data))>>6)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_get_cds_region_4_jlum(data)               ((0x00000030&(data))>>4)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_get_cds_region_4_ildm(data)               ((0x0000000C&(data))>>2)
#define  COLOR_SHARP_SHP_CDS_REGION4_4_get_cds_region_4_ilum(data)               (0x00000003&(data))

#define  COLOR_SHARP_SHP_CDS_REGION5_0                                          0x1802B8E4
#define  COLOR_SHARP_SHP_CDS_REGION5_0_reg_addr                                  "0xB802B8E4"
#define  COLOR_SHARP_SHP_CDS_REGION5_0_reg                                       0xB802B8E4
#define  COLOR_SHARP_SHP_CDS_REGION5_0_inst_addr                                 "0x00B0"
#define  set_COLOR_SHARP_SHP_CDS_REGION5_0_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION5_0_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION5_0_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION5_0_reg))
#define  COLOR_SHARP_SHP_CDS_REGION5_0_cds_region_5_end_i_shift                  (12)
#define  COLOR_SHARP_SHP_CDS_REGION5_0_cds_region_5_start_i_shift                (0)
#define  COLOR_SHARP_SHP_CDS_REGION5_0_cds_region_5_end_i_mask                   (0x00FFF000)
#define  COLOR_SHARP_SHP_CDS_REGION5_0_cds_region_5_start_i_mask                 (0x00000FFF)
#define  COLOR_SHARP_SHP_CDS_REGION5_0_cds_region_5_end_i(data)                  (0x00FFF000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION5_0_cds_region_5_start_i(data)                (0x00000FFF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION5_0_get_cds_region_5_end_i(data)              ((0x00FFF000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION5_0_get_cds_region_5_start_i(data)            (0x00000FFF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION5_1                                          0x1802B8E8
#define  COLOR_SHARP_SHP_CDS_REGION5_1_reg_addr                                  "0xB802B8E8"
#define  COLOR_SHARP_SHP_CDS_REGION5_1_reg                                       0xB802B8E8
#define  COLOR_SHARP_SHP_CDS_REGION5_1_inst_addr                                 "0x00B1"
#define  set_COLOR_SHARP_SHP_CDS_REGION5_1_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION5_1_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION5_1_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION5_1_reg))
#define  COLOR_SHARP_SHP_CDS_REGION5_1_cds_region_5_end_j_shift                  (12)
#define  COLOR_SHARP_SHP_CDS_REGION5_1_cds_region_5_start_j_shift                (0)
#define  COLOR_SHARP_SHP_CDS_REGION5_1_cds_region_5_end_j_mask                   (0x00FFF000)
#define  COLOR_SHARP_SHP_CDS_REGION5_1_cds_region_5_start_j_mask                 (0x00000FFF)
#define  COLOR_SHARP_SHP_CDS_REGION5_1_cds_region_5_end_j(data)                  (0x00FFF000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION5_1_cds_region_5_start_j(data)                (0x00000FFF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION5_1_get_cds_region_5_end_j(data)              ((0x00FFF000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION5_1_get_cds_region_5_start_j(data)            (0x00000FFF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION5_2                                          0x1802B8EC
#define  COLOR_SHARP_SHP_CDS_REGION5_2_reg_addr                                  "0xB802B8EC"
#define  COLOR_SHARP_SHP_CDS_REGION5_2_reg                                       0xB802B8EC
#define  COLOR_SHARP_SHP_CDS_REGION5_2_inst_addr                                 "0x00B2"
#define  set_COLOR_SHARP_SHP_CDS_REGION5_2_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION5_2_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION5_2_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION5_2_reg))
#define  COLOR_SHARP_SHP_CDS_REGION5_2_cds_region_5_jld_shift                    (24)
#define  COLOR_SHARP_SHP_CDS_REGION5_2_cds_region_5_jlu_shift                    (16)
#define  COLOR_SHARP_SHP_CDS_REGION5_2_cds_region_5_ild_shift                    (8)
#define  COLOR_SHARP_SHP_CDS_REGION5_2_cds_region_5_ilu_shift                    (0)
#define  COLOR_SHARP_SHP_CDS_REGION5_2_cds_region_5_jld_mask                     (0xFF000000)
#define  COLOR_SHARP_SHP_CDS_REGION5_2_cds_region_5_jlu_mask                     (0x00FF0000)
#define  COLOR_SHARP_SHP_CDS_REGION5_2_cds_region_5_ild_mask                     (0x0000FF00)
#define  COLOR_SHARP_SHP_CDS_REGION5_2_cds_region_5_ilu_mask                     (0x000000FF)
#define  COLOR_SHARP_SHP_CDS_REGION5_2_cds_region_5_jld(data)                    (0xFF000000&((data)<<24))
#define  COLOR_SHARP_SHP_CDS_REGION5_2_cds_region_5_jlu(data)                    (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_CDS_REGION5_2_cds_region_5_ild(data)                    (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION5_2_cds_region_5_ilu(data)                    (0x000000FF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION5_2_get_cds_region_5_jld(data)                ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_SHP_CDS_REGION5_2_get_cds_region_5_jlu(data)                ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_CDS_REGION5_2_get_cds_region_5_ild(data)                ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION5_2_get_cds_region_5_ilu(data)                (0x000000FF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION5_3                                          0x1802B8F0
#define  COLOR_SHARP_SHP_CDS_REGION5_3_reg_addr                                  "0xB802B8F0"
#define  COLOR_SHARP_SHP_CDS_REGION5_3_reg                                       0xB802B8F0
#define  COLOR_SHARP_SHP_CDS_REGION5_3_inst_addr                                 "0x00B3"
#define  set_COLOR_SHARP_SHP_CDS_REGION5_3_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION5_3_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION5_3_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION5_3_reg))
#define  COLOR_SHARP_SHP_CDS_REGION5_3_cds_region_5_jrd_shift                    (24)
#define  COLOR_SHARP_SHP_CDS_REGION5_3_cds_region_5_jru_shift                    (16)
#define  COLOR_SHARP_SHP_CDS_REGION5_3_cds_region_5_ird_shift                    (8)
#define  COLOR_SHARP_SHP_CDS_REGION5_3_cds_region_5_iru_shift                    (0)
#define  COLOR_SHARP_SHP_CDS_REGION5_3_cds_region_5_jrd_mask                     (0xFF000000)
#define  COLOR_SHARP_SHP_CDS_REGION5_3_cds_region_5_jru_mask                     (0x00FF0000)
#define  COLOR_SHARP_SHP_CDS_REGION5_3_cds_region_5_ird_mask                     (0x0000FF00)
#define  COLOR_SHARP_SHP_CDS_REGION5_3_cds_region_5_iru_mask                     (0x000000FF)
#define  COLOR_SHARP_SHP_CDS_REGION5_3_cds_region_5_jrd(data)                    (0xFF000000&((data)<<24))
#define  COLOR_SHARP_SHP_CDS_REGION5_3_cds_region_5_jru(data)                    (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_CDS_REGION5_3_cds_region_5_ird(data)                    (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION5_3_cds_region_5_iru(data)                    (0x000000FF&(data))
#define  COLOR_SHARP_SHP_CDS_REGION5_3_get_cds_region_5_jrd(data)                ((0xFF000000&(data))>>24)
#define  COLOR_SHARP_SHP_CDS_REGION5_3_get_cds_region_5_jru(data)                ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_CDS_REGION5_3_get_cds_region_5_ird(data)                ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION5_3_get_cds_region_5_iru(data)                (0x000000FF&(data))

#define  COLOR_SHARP_SHP_CDS_REGION5_4                                          0x1802B8F4
#define  COLOR_SHARP_SHP_CDS_REGION5_4_reg_addr                                  "0xB802B8F4"
#define  COLOR_SHARP_SHP_CDS_REGION5_4_reg                                       0xB802B8F4
#define  COLOR_SHARP_SHP_CDS_REGION5_4_inst_addr                                 "0x00B4"
#define  set_COLOR_SHARP_SHP_CDS_REGION5_4_reg(data)                             (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION5_4_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_REGION5_4_reg                                   (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_REGION5_4_reg))
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_jrdm_shift                   (14)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_jrum_shift                   (12)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_irdm_shift                   (10)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_irum_shift                   (8)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_jldm_shift                   (6)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_jlum_shift                   (4)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_ildm_shift                   (2)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_ilum_shift                   (0)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_jrdm_mask                    (0x0000C000)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_jrum_mask                    (0x00003000)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_irdm_mask                    (0x00000C00)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_irum_mask                    (0x00000300)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_jldm_mask                    (0x000000C0)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_jlum_mask                    (0x00000030)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_ildm_mask                    (0x0000000C)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_ilum_mask                    (0x00000003)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_jrdm(data)                   (0x0000C000&((data)<<14))
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_jrum(data)                   (0x00003000&((data)<<12))
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_irdm(data)                   (0x00000C00&((data)<<10))
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_irum(data)                   (0x00000300&((data)<<8))
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_jldm(data)                   (0x000000C0&((data)<<6))
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_jlum(data)                   (0x00000030&((data)<<4))
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_ildm(data)                   (0x0000000C&((data)<<2))
#define  COLOR_SHARP_SHP_CDS_REGION5_4_cds_region_5_ilum(data)                   (0x00000003&(data))
#define  COLOR_SHARP_SHP_CDS_REGION5_4_get_cds_region_5_jrdm(data)               ((0x0000C000&(data))>>14)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_get_cds_region_5_jrum(data)               ((0x00003000&(data))>>12)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_get_cds_region_5_irdm(data)               ((0x00000C00&(data))>>10)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_get_cds_region_5_irum(data)               ((0x00000300&(data))>>8)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_get_cds_region_5_jldm(data)               ((0x000000C0&(data))>>6)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_get_cds_region_5_jlum(data)               ((0x00000030&(data))>>4)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_get_cds_region_5_ildm(data)               ((0x0000000C&(data))>>2)
#define  COLOR_SHARP_SHP_CDS_REGION5_4_get_cds_region_5_ilum(data)               (0x00000003&(data))

#define  COLOR_SHARP_SHP_CDS_PREDICT                                            0x1802B8FC
#define  COLOR_SHARP_SHP_CDS_PREDICT_reg_addr                                    "0xB802B8FC"
#define  COLOR_SHARP_SHP_CDS_PREDICT_reg                                         0xB802B8FC
#define  COLOR_SHARP_SHP_CDS_PREDICT_inst_addr                                   "0x00B5"
#define  set_COLOR_SHARP_SHP_CDS_PREDICT_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_PREDICT_reg)=data)
#define  get_COLOR_SHARP_SHP_CDS_PREDICT_reg                                     (*((volatile unsigned int*)COLOR_SHARP_SHP_CDS_PREDICT_reg))
#define  COLOR_SHARP_SHP_CDS_PREDICT_cds_region_predict_2_shift                  (10)
#define  COLOR_SHARP_SHP_CDS_PREDICT_cds_region_predict_1_shift                  (1)
#define  COLOR_SHARP_SHP_CDS_PREDICT_cds_region_predict_sel_shift                (0)
#define  COLOR_SHARP_SHP_CDS_PREDICT_cds_region_predict_2_mask                   (0x0007FC00)
#define  COLOR_SHARP_SHP_CDS_PREDICT_cds_region_predict_1_mask                   (0x000003FE)
#define  COLOR_SHARP_SHP_CDS_PREDICT_cds_region_predict_sel_mask                 (0x00000001)
#define  COLOR_SHARP_SHP_CDS_PREDICT_cds_region_predict_2(data)                  (0x0007FC00&((data)<<10))
#define  COLOR_SHARP_SHP_CDS_PREDICT_cds_region_predict_1(data)                  (0x000003FE&((data)<<1))
#define  COLOR_SHARP_SHP_CDS_PREDICT_cds_region_predict_sel(data)                (0x00000001&(data))
#define  COLOR_SHARP_SHP_CDS_PREDICT_get_cds_region_predict_2(data)              ((0x0007FC00&(data))>>10)
#define  COLOR_SHARP_SHP_CDS_PREDICT_get_cds_region_predict_1(data)              ((0x000003FE&(data))>>1)
#define  COLOR_SHARP_SHP_CDS_PREDICT_get_cds_region_predict_sel(data)            (0x00000001&(data))

#define  COLOR_SHARP_SHP_CRC_CTRL                                               0x1802B940
#define  COLOR_SHARP_SHP_CRC_CTRL_reg_addr                                       "0xB802B940"
#define  COLOR_SHARP_SHP_CRC_CTRL_reg                                            0xB802B940
#define  COLOR_SHARP_SHP_CRC_CTRL_inst_addr                                      "0x00B6"
#define  set_COLOR_SHARP_SHP_CRC_CTRL_reg(data)                                  (*((volatile unsigned int*)COLOR_SHARP_SHP_CRC_CTRL_reg)=data)
#define  get_COLOR_SHARP_SHP_CRC_CTRL_reg                                        (*((volatile unsigned int*)COLOR_SHARP_SHP_CRC_CTRL_reg))
#define  COLOR_SHARP_SHP_CRC_CTRL_crc_conti_shift                                (1)
#define  COLOR_SHARP_SHP_CRC_CTRL_crc_start_shift                                (0)
#define  COLOR_SHARP_SHP_CRC_CTRL_crc_conti_mask                                 (0x00000002)
#define  COLOR_SHARP_SHP_CRC_CTRL_crc_start_mask                                 (0x00000001)
#define  COLOR_SHARP_SHP_CRC_CTRL_crc_conti(data)                                (0x00000002&((data)<<1))
#define  COLOR_SHARP_SHP_CRC_CTRL_crc_start(data)                                (0x00000001&(data))
#define  COLOR_SHARP_SHP_CRC_CTRL_get_crc_conti(data)                            ((0x00000002&(data))>>1)
#define  COLOR_SHARP_SHP_CRC_CTRL_get_crc_start(data)                            (0x00000001&(data))

#define  COLOR_SHARP_SHP_CRC_RESULT                                             0x1802B944
#define  COLOR_SHARP_SHP_CRC_RESULT_reg_addr                                     "0xB802B944"
#define  COLOR_SHARP_SHP_CRC_RESULT_reg                                          0xB802B944
#define  COLOR_SHARP_SHP_CRC_RESULT_inst_addr                                    "0x00B7"
#define  set_COLOR_SHARP_SHP_CRC_RESULT_reg(data)                                (*((volatile unsigned int*)COLOR_SHARP_SHP_CRC_RESULT_reg)=data)
#define  get_COLOR_SHARP_SHP_CRC_RESULT_reg                                      (*((volatile unsigned int*)COLOR_SHARP_SHP_CRC_RESULT_reg))
#define  COLOR_SHARP_SHP_CRC_RESULT_shp_crc_result_shift                         (0)
#define  COLOR_SHARP_SHP_CRC_RESULT_shp_crc_result_mask                          (0xFFFFFFFF)
#define  COLOR_SHARP_SHP_CRC_RESULT_shp_crc_result(data)                         (0xFFFFFFFF&(data))
#define  COLOR_SHARP_SHP_CRC_RESULT_get_shp_crc_result(data)                     (0xFFFFFFFF&(data))

#define  COLOR_SHARP_PEAK2D_BIST                                                0x1802B948
#define  COLOR_SHARP_PEAK2D_BIST_reg_addr                                        "0xB802B948"
#define  COLOR_SHARP_PEAK2D_BIST_reg                                             0xB802B948
#define  COLOR_SHARP_PEAK2D_BIST_inst_addr                                       "0x00B8"
#define  set_COLOR_SHARP_PEAK2D_BIST_reg(data)                                   (*((volatile unsigned int*)COLOR_SHARP_PEAK2D_BIST_reg)=data)
#define  get_COLOR_SHARP_PEAK2D_BIST_reg                                         (*((volatile unsigned int*)COLOR_SHARP_PEAK2D_BIST_reg))
#define  COLOR_SHARP_PEAK2D_BIST_test_shift                                      (22)
#define  COLOR_SHARP_PEAK2D_BIST_ls_shift                                        (21)
#define  COLOR_SHARP_PEAK2D_BIST_dvse_shift                                      (20)
#define  COLOR_SHARP_PEAK2D_BIST_dvs_shift                                       (16)
#define  COLOR_SHARP_PEAK2D_BIST_bist_fail_0_shift                               (15)
#define  COLOR_SHARP_PEAK2D_BIST_bist_fail_1_shift                               (14)
#define  COLOR_SHARP_PEAK2D_BIST_bist_fail_2_shift                               (13)
#define  COLOR_SHARP_PEAK2D_BIST_bist_fail_3_shift                               (12)
#define  COLOR_SHARP_PEAK2D_BIST_drf_fail_0_shift                                (11)
#define  COLOR_SHARP_PEAK2D_BIST_drf_fail_1_shift                                (10)
#define  COLOR_SHARP_PEAK2D_BIST_drf_fail_2_shift                                (9)
#define  COLOR_SHARP_PEAK2D_BIST_drf_fail_3_shift                                (8)
#define  COLOR_SHARP_PEAK2D_BIST_test_mask                                       (0x00400000)
#define  COLOR_SHARP_PEAK2D_BIST_ls_mask                                         (0x00200000)
#define  COLOR_SHARP_PEAK2D_BIST_dvse_mask                                       (0x00100000)
#define  COLOR_SHARP_PEAK2D_BIST_dvs_mask                                        (0x000F0000)
#define  COLOR_SHARP_PEAK2D_BIST_bist_fail_0_mask                                (0x00008000)
#define  COLOR_SHARP_PEAK2D_BIST_bist_fail_1_mask                                (0x00004000)
#define  COLOR_SHARP_PEAK2D_BIST_bist_fail_2_mask                                (0x00002000)
#define  COLOR_SHARP_PEAK2D_BIST_bist_fail_3_mask                                (0x00001000)
#define  COLOR_SHARP_PEAK2D_BIST_drf_fail_0_mask                                 (0x00000800)
#define  COLOR_SHARP_PEAK2D_BIST_drf_fail_1_mask                                 (0x00000400)
#define  COLOR_SHARP_PEAK2D_BIST_drf_fail_2_mask                                 (0x00000200)
#define  COLOR_SHARP_PEAK2D_BIST_drf_fail_3_mask                                 (0x00000100)
#define  COLOR_SHARP_PEAK2D_BIST_test(data)                                      (0x00400000&((data)<<22))
#define  COLOR_SHARP_PEAK2D_BIST_ls(data)                                        (0x00200000&((data)<<21))
#define  COLOR_SHARP_PEAK2D_BIST_dvse(data)                                      (0x00100000&((data)<<20))
#define  COLOR_SHARP_PEAK2D_BIST_dvs(data)                                       (0x000F0000&((data)<<16))
#define  COLOR_SHARP_PEAK2D_BIST_bist_fail_0(data)                               (0x00008000&((data)<<15))
#define  COLOR_SHARP_PEAK2D_BIST_bist_fail_1(data)                               (0x00004000&((data)<<14))
#define  COLOR_SHARP_PEAK2D_BIST_bist_fail_2(data)                               (0x00002000&((data)<<13))
#define  COLOR_SHARP_PEAK2D_BIST_bist_fail_3(data)                               (0x00001000&((data)<<12))
#define  COLOR_SHARP_PEAK2D_BIST_drf_fail_0(data)                                (0x00000800&((data)<<11))
#define  COLOR_SHARP_PEAK2D_BIST_drf_fail_1(data)                                (0x00000400&((data)<<10))
#define  COLOR_SHARP_PEAK2D_BIST_drf_fail_2(data)                                (0x00000200&((data)<<9))
#define  COLOR_SHARP_PEAK2D_BIST_drf_fail_3(data)                                (0x00000100&((data)<<8))
#define  COLOR_SHARP_PEAK2D_BIST_get_test(data)                                  ((0x00400000&(data))>>22)
#define  COLOR_SHARP_PEAK2D_BIST_get_ls(data)                                    ((0x00200000&(data))>>21)
#define  COLOR_SHARP_PEAK2D_BIST_get_dvse(data)                                  ((0x00100000&(data))>>20)
#define  COLOR_SHARP_PEAK2D_BIST_get_dvs(data)                                   ((0x000F0000&(data))>>16)
#define  COLOR_SHARP_PEAK2D_BIST_get_bist_fail_0(data)                           ((0x00008000&(data))>>15)
#define  COLOR_SHARP_PEAK2D_BIST_get_bist_fail_1(data)                           ((0x00004000&(data))>>14)
#define  COLOR_SHARP_PEAK2D_BIST_get_bist_fail_2(data)                           ((0x00002000&(data))>>13)
#define  COLOR_SHARP_PEAK2D_BIST_get_bist_fail_3(data)                           ((0x00001000&(data))>>12)
#define  COLOR_SHARP_PEAK2D_BIST_get_drf_fail_0(data)                            ((0x00000800&(data))>>11)
#define  COLOR_SHARP_PEAK2D_BIST_get_drf_fail_1(data)                            ((0x00000400&(data))>>10)
#define  COLOR_SHARP_PEAK2D_BIST_get_drf_fail_2(data)                            ((0x00000200&(data))>>9)
#define  COLOR_SHARP_PEAK2D_BIST_get_drf_fail_3(data)                            ((0x00000100&(data))>>8)

#define  COLOR_SHARP_SHP_DLTI_CTRL_1                                            0x1802B950
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_reg_addr                                    "0xB802B950"
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_reg                                         0xB802B950
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_inst_addr                                   "0x00B9"
#define  set_COLOR_SHARP_SHP_DLTI_CTRL_1_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_CTRL_1_reg)=data)
#define  get_COLOR_SHARP_SHP_DLTI_CTRL_1_reg                                     (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_CTRL_1_reg))
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_data_sel_shift                              (31)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_maxlen_shift                                (26)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_pnth_shift                                  (16)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_dcp_th_shift                                (8)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_d1_cp_shift_shift                           (5)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_ffd2_en_shift                               (4)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_dlti_en_shift                               (0)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_data_sel_mask                               (0x80000000)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_maxlen_mask                                 (0x1C000000)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_pnth_mask                                   (0x03FF0000)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_dcp_th_mask                                 (0x0000FF00)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_d1_cp_shift_mask                            (0x00000060)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_ffd2_en_mask                                (0x00000010)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_dlti_en_mask                                (0x00000001)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_data_sel(data)                              (0x80000000&((data)<<31))
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_maxlen(data)                                (0x1C000000&((data)<<26))
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_pnth(data)                                  (0x03FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_dcp_th(data)                                (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_d1_cp_shift(data)                           (0x00000060&((data)<<5))
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_ffd2_en(data)                               (0x00000010&((data)<<4))
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_dlti_en(data)                               (0x00000001&(data))
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_get_data_sel(data)                          ((0x80000000&(data))>>31)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_get_maxlen(data)                            ((0x1C000000&(data))>>26)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_get_pnth(data)                              ((0x03FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_get_dcp_th(data)                            ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_get_d1_cp_shift(data)                       ((0x00000060&(data))>>5)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_get_ffd2_en(data)                           ((0x00000010&(data))>>4)
#define  COLOR_SHARP_SHP_DLTI_CTRL_1_get_dlti_en(data)                           (0x00000001&(data))

#define  COLOR_SHARP_SHP_DLTI_CTRL_2                                            0x1802B954
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_reg_addr                                    "0xB802B954"
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_reg                                         0xB802B954
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_inst_addr                                   "0x00BA"
#define  set_COLOR_SHARP_SHP_DLTI_CTRL_2_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_CTRL_2_reg)=data)
#define  get_COLOR_SHARP_SHP_DLTI_CTRL_2_reg                                     (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_CTRL_2_reg))
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_ovc_extend_shift                            (30)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_ffd0_start_shift                            (29)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_flat_s_range_shift                          (27)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_flat_score_thl_shift                        (19)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_flat_score_en_shift                         (18)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_ffd1_ratio_shift                            (10)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_ffd1_th_shift                               (0)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_ovc_extend_mask                             (0x40000000)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_ffd0_start_mask                             (0x20000000)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_flat_s_range_mask                           (0x18000000)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_flat_score_thl_mask                         (0x07F80000)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_flat_score_en_mask                          (0x00040000)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_ffd1_ratio_mask                             (0x0001FC00)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_ffd1_th_mask                                (0x000003FF)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_ovc_extend(data)                            (0x40000000&((data)<<30))
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_ffd0_start(data)                            (0x20000000&((data)<<29))
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_flat_s_range(data)                          (0x18000000&((data)<<27))
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_flat_score_thl(data)                        (0x07F80000&((data)<<19))
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_flat_score_en(data)                         (0x00040000&((data)<<18))
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_ffd1_ratio(data)                            (0x0001FC00&((data)<<10))
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_ffd1_th(data)                               (0x000003FF&(data))
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_get_ovc_extend(data)                        ((0x40000000&(data))>>30)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_get_ffd0_start(data)                        ((0x20000000&(data))>>29)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_get_flat_s_range(data)                      ((0x18000000&(data))>>27)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_get_flat_score_thl(data)                    ((0x07F80000&(data))>>19)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_get_flat_score_en(data)                     ((0x00040000&(data))>>18)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_get_ffd1_ratio(data)                        ((0x0001FC00&(data))>>10)
#define  COLOR_SHARP_SHP_DLTI_CTRL_2_get_ffd1_th(data)                           (0x000003FF&(data))

#define  COLOR_SHARP_SHP_DLTI_CTRL_3                                            0x1802B958
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_reg_addr                                    "0xB802B958"
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_reg                                         0xB802B958
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_inst_addr                                   "0x00BB"
#define  set_COLOR_SHARP_SHP_DLTI_CTRL_3_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_CTRL_3_reg)=data)
#define  get_COLOR_SHARP_SHP_DLTI_CTRL_3_reg                                     (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_CTRL_3_reg))
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_dlti_debug_shift                            (29)
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_ffd2_ratio_shift                            (20)
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_ffd2_range2r_shift                          (10)
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_ffd2_range2l_shift                          (0)
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_dlti_debug_mask                             (0xE0000000)
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_ffd2_ratio_mask                             (0x07F00000)
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_ffd2_range2r_mask                           (0x000FFC00)
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_ffd2_range2l_mask                           (0x000003FF)
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_dlti_debug(data)                            (0xE0000000&((data)<<29))
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_ffd2_ratio(data)                            (0x07F00000&((data)<<20))
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_ffd2_range2r(data)                          (0x000FFC00&((data)<<10))
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_ffd2_range2l(data)                          (0x000003FF&(data))
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_get_dlti_debug(data)                        ((0xE0000000&(data))>>29)
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_get_ffd2_ratio(data)                        ((0x07F00000&(data))>>20)
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_get_ffd2_range2r(data)                      ((0x000FFC00&(data))>>10)
#define  COLOR_SHARP_SHP_DLTI_CTRL_3_get_ffd2_range2l(data)                      (0x000003FF&(data))

#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1                                     0x1802B95C
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_reg_addr                             "0xB802B95C"
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_reg                                  0xB802B95C
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_inst_addr                            "0x00BC"
#define  set_COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_reg(data)                        (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_reg)=data)
#define  get_COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_reg                              (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_reg))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_tnoff2_shift                         (16)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_tnoff1_shift                         (8)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_tnoff0_shift                         (0)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_tnoff2_mask                          (0x00FF0000)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_tnoff1_mask                          (0x0000FF00)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_tnoff0_mask                          (0x000000FF)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_tnoff2(data)                         (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_tnoff1(data)                         (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_tnoff0(data)                         (0x000000FF&(data))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_get_tnoff2(data)                     ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_get_tnoff1(data)                     ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_get_tnoff0(data)                     (0x000000FF&(data))

#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2                                     0x1802B960
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_reg_addr                             "0xB802B960"
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_reg                                  0xB802B960
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_inst_addr                            "0x00BD"
#define  set_COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_reg(data)                        (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_reg)=data)
#define  get_COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_reg                              (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_reg))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_tnoff5_shift                         (16)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_tnoff4_shift                         (8)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_tnoff3_shift                         (0)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_tnoff5_mask                          (0x00FF0000)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_tnoff4_mask                          (0x0000FF00)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_tnoff3_mask                          (0x000000FF)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_tnoff5(data)                         (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_tnoff4(data)                         (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_tnoff3(data)                         (0x000000FF&(data))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_get_tnoff5(data)                     ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_get_tnoff4(data)                     ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_get_tnoff3(data)                     (0x000000FF&(data))

#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3                                     0x1802B964
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_reg_addr                             "0xB802B964"
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_reg                                  0xB802B964
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_inst_addr                            "0x00BE"
#define  set_COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_reg(data)                        (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_reg)=data)
#define  get_COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_reg                              (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_reg))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_tnoff8_shift                         (16)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_tnoff7_shift                         (8)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_tnoff6_shift                         (0)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_tnoff8_mask                          (0x00FF0000)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_tnoff7_mask                          (0x0000FF00)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_tnoff6_mask                          (0x000000FF)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_tnoff8(data)                         (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_tnoff7(data)                         (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_tnoff6(data)                         (0x000000FF&(data))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_get_tnoff8(data)                     ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_get_tnoff7(data)                     ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_get_tnoff6(data)                     (0x000000FF&(data))

#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4                                     0x1802B968
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_reg_addr                             "0xB802B968"
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_reg                                  0xB802B968
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_inst_addr                            "0x00BF"
#define  set_COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_reg(data)                        (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_reg)=data)
#define  get_COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_reg                              (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_reg))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_tnoff11_shift                        (16)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_tnoff10_shift                        (8)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_tnoff9_shift                         (0)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_tnoff11_mask                         (0x00FF0000)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_tnoff10_mask                         (0x0000FF00)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_tnoff9_mask                          (0x000000FF)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_tnoff11(data)                        (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_tnoff10(data)                        (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_tnoff9(data)                         (0x000000FF&(data))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_get_tnoff11(data)                    ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_get_tnoff10(data)                    ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_get_tnoff9(data)                     (0x000000FF&(data))

#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5                                     0x1802B96C
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_reg_addr                             "0xB802B96C"
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_reg                                  0xB802B96C
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_inst_addr                            "0x00C0"
#define  set_COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_reg(data)                        (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_reg)=data)
#define  get_COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_reg                              (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_reg))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_tnoff14_shift                        (16)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_tnoff13_shift                        (8)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_tnoff12_shift                        (0)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_tnoff14_mask                         (0x00FF0000)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_tnoff13_mask                         (0x0000FF00)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_tnoff12_mask                         (0x000000FF)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_tnoff14(data)                        (0x00FF0000&((data)<<16))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_tnoff13(data)                        (0x0000FF00&((data)<<8))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_tnoff12(data)                        (0x000000FF&(data))
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_get_tnoff14(data)                    ((0x00FF0000&(data))>>16)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_get_tnoff13(data)                    ((0x0000FF00&(data))>>8)
#define  COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_get_tnoff12(data)                    (0x000000FF&(data))

#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0                        0x1802B990
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_reg_addr                "0xB802B990"
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_reg                     0xB802B990
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_inst_addr               "0x00C1"
#define  set_COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_reg(data)           (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_reg)=data)
#define  get_COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_reg                 (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_reg))
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_over_enhance_shift      (28)
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_gain_pos_shift          (12)
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_offset_pos_shift        (0)
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_over_enhance_mask       (0x10000000)
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_gain_pos_mask           (0x001FF000)
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_offset_pos_mask         (0x000003FF)
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_over_enhance(data)      (0x10000000&((data)<<28))
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_gain_pos(data)          (0x001FF000&((data)<<12))
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_offset_pos(data)        (0x000003FF&(data))
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_get_over_enhance(data)  ((0x10000000&(data))>>28)
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_get_gain_pos(data)      ((0x001FF000&(data))>>12)
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_0_get_offset_pos(data)    (0x000003FF&(data))

#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_1                        0x1802B994
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_1_reg_addr                "0xB802B994"
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_1_reg                     0xB802B994
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_1_inst_addr               "0x00C2"
#define  set_COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_1_reg(data)           (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_1_reg)=data)
#define  get_COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_1_reg                 (*((volatile unsigned int*)COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_1_reg))
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_1_gain_neg_shift          (12)
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_1_offset_neg_shift        (0)
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_1_gain_neg_mask           (0x001FF000)
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_1_offset_neg_mask         (0x000003FF)
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_1_gain_neg(data)          (0x001FF000&((data)<<12))
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_1_offset_neg(data)        (0x000003FF&(data))
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_1_get_gain_neg(data)      ((0x001FF000&(data))>>12)
#define  COLOR_SHARP_SHP_DLTI_OVER_ENHANCE_GAIN_OFFSET_1_get_offset_neg(data)    (0x000003FF&(data))

#define  COLOR_SHARP_SHP_DCTI_CTRL_1                                            0x1802B9C0
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_reg_addr                                    "0xB802B9C0"
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_reg                                         0xB802B9C0
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_inst_addr                                   "0x00C3"
#define  set_COLOR_SHARP_SHP_DCTI_CTRL_1_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_SHP_DCTI_CTRL_1_reg)=data)
#define  get_COLOR_SHARP_SHP_DCTI_CTRL_1_reg                                     (*((volatile unsigned int*)COLOR_SHARP_SHP_DCTI_CTRL_1_reg))
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_data_sel_shift                              (31)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_maxlen_shift                                (28)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_psmth_shift                                 (20)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_lpmode_shift                                (16)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_engdiv_shift                                (14)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_offdiv_shift                                (12)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_uvgain_shift                                (4)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_dcti_mode_shift                             (3)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_uvalign_en_shift                            (2)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_cur_sel_shift                               (1)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_data_sel_mask                               (0x80000000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_maxlen_mask                                 (0x70000000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_psmth_mask                                  (0x0FF00000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_lpmode_mask                                 (0x00070000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_engdiv_mask                                 (0x0000C000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_offdiv_mask                                 (0x00003000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_uvgain_mask                                 (0x000007F0)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_dcti_mode_mask                              (0x00000008)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_uvalign_en_mask                             (0x00000004)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_cur_sel_mask                                (0x00000002)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_data_sel(data)                              (0x80000000&((data)<<31))
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_maxlen(data)                                (0x70000000&((data)<<28))
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_psmth(data)                                 (0x0FF00000&((data)<<20))
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_lpmode(data)                                (0x00070000&((data)<<16))
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_engdiv(data)                                (0x0000C000&((data)<<14))
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_offdiv(data)                                (0x00003000&((data)<<12))
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_uvgain(data)                                (0x000007F0&((data)<<4))
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_dcti_mode(data)                             (0x00000008&((data)<<3))
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_uvalign_en(data)                            (0x00000004&((data)<<2))
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_cur_sel(data)                               (0x00000002&((data)<<1))
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_get_data_sel(data)                          ((0x80000000&(data))>>31)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_get_maxlen(data)                            ((0x70000000&(data))>>28)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_get_psmth(data)                             ((0x0FF00000&(data))>>20)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_get_lpmode(data)                            ((0x00070000&(data))>>16)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_get_engdiv(data)                            ((0x0000C000&(data))>>14)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_get_offdiv(data)                            ((0x00003000&(data))>>12)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_get_uvgain(data)                            ((0x000007F0&(data))>>4)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_get_dcti_mode(data)                         ((0x00000008&(data))>>3)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_get_uvalign_en(data)                        ((0x00000004&(data))>>2)
#define  COLOR_SHARP_SHP_DCTI_CTRL_1_get_cur_sel(data)                           ((0x00000002&(data))>>1)

#define  COLOR_SHARP_SHP_DCTI_CTRL_2                                            0x1802B9C4
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_reg_addr                                    "0xB802B9C4"
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_reg                                         0xB802B9C4
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_inst_addr                                   "0x00C4"
#define  set_COLOR_SHARP_SHP_DCTI_CTRL_2_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_SHP_DCTI_CTRL_2_reg)=data)
#define  get_COLOR_SHARP_SHP_DCTI_CTRL_2_reg                                     (*((volatile unsigned int*)COLOR_SHARP_SHP_DCTI_CTRL_2_reg))
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_uvsync_en_shift                             (31)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_tran_mode_shift                             (28)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_rate_steep_shift                            (24)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_th_steep_shift                              (16)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_th_coring_shift                             (11)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_steep_mode_shift                            (8)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_hp_mode_shift                               (5)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_vlp_mode_shift                              (2)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_median_mode_shift                           (1)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_blending_mode_shift                         (0)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_uvsync_en_mask                              (0x80000000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_tran_mode_mask                              (0x70000000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_rate_steep_mask                             (0x07000000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_th_steep_mask                               (0x003F0000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_th_coring_mask                              (0x0000F800)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_steep_mode_mask                             (0x00000700)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_hp_mode_mask                                (0x000000E0)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_vlp_mode_mask                               (0x0000001C)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_median_mode_mask                            (0x00000002)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_blending_mode_mask                          (0x00000001)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_uvsync_en(data)                             (0x80000000&((data)<<31))
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_tran_mode(data)                             (0x70000000&((data)<<28))
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_rate_steep(data)                            (0x07000000&((data)<<24))
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_th_steep(data)                              (0x003F0000&((data)<<16))
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_th_coring(data)                             (0x0000F800&((data)<<11))
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_steep_mode(data)                            (0x00000700&((data)<<8))
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_hp_mode(data)                               (0x000000E0&((data)<<5))
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_vlp_mode(data)                              (0x0000001C&((data)<<2))
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_median_mode(data)                           (0x00000002&((data)<<1))
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_blending_mode(data)                         (0x00000001&(data))
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_get_uvsync_en(data)                         ((0x80000000&(data))>>31)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_get_tran_mode(data)                         ((0x70000000&(data))>>28)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_get_rate_steep(data)                        ((0x07000000&(data))>>24)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_get_th_steep(data)                          ((0x003F0000&(data))>>16)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_get_th_coring(data)                         ((0x0000F800&(data))>>11)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_get_steep_mode(data)                        ((0x00000700&(data))>>8)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_get_hp_mode(data)                           ((0x000000E0&(data))>>5)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_get_vlp_mode(data)                          ((0x0000001C&(data))>>2)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_get_median_mode(data)                       ((0x00000002&(data))>>1)
#define  COLOR_SHARP_SHP_DCTI_CTRL_2_get_blending_mode(data)                     (0x00000001&(data))

#define  COLOR_SHARP_SHP_DCTI_CTRL_3                                            0x1802B9C8
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_reg_addr                                    "0xB802B9C8"
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_reg                                         0xB802B9C8
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_inst_addr                                   "0x00C5"
#define  set_COLOR_SHARP_SHP_DCTI_CTRL_3_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_SHP_DCTI_CTRL_3_reg)=data)
#define  get_COLOR_SHARP_SHP_DCTI_CTRL_3_reg                                     (*((volatile unsigned int*)COLOR_SHARP_SHP_DCTI_CTRL_3_reg))
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_maxminlen_shift                             (28)
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_rate_tran_shift                             (24)
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_th_tran_shift                               (16)
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_region_mode_shift                           (12)
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_rate_smooth_shift                           (8)
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_th_smooth_shift                             (0)
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_maxminlen_mask                              (0x70000000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_rate_tran_mask                              (0x07000000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_th_tran_mask                                (0x007F0000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_region_mode_mask                            (0x00007000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_rate_smooth_mask                            (0x00000700)
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_th_smooth_mask                              (0x0000003F)
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_maxminlen(data)                             (0x70000000&((data)<<28))
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_rate_tran(data)                             (0x07000000&((data)<<24))
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_th_tran(data)                               (0x007F0000&((data)<<16))
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_region_mode(data)                           (0x00007000&((data)<<12))
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_rate_smooth(data)                           (0x00000700&((data)<<8))
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_th_smooth(data)                             (0x0000003F&(data))
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_get_maxminlen(data)                         ((0x70000000&(data))>>28)
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_get_rate_tran(data)                         ((0x07000000&(data))>>24)
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_get_th_tran(data)                           ((0x007F0000&(data))>>16)
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_get_region_mode(data)                       ((0x00007000&(data))>>12)
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_get_rate_smooth(data)                       ((0x00000700&(data))>>8)
#define  COLOR_SHARP_SHP_DCTI_CTRL_3_get_th_smooth(data)                         (0x0000003F&(data))

#define  COLOR_SHARP_SHP_DCTI_CTRL_4                                            0x1802B9CC
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_reg_addr                                    "0xB802B9CC"
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_reg                                         0xB802B9CC
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_inst_addr                                   "0x00C6"
#define  set_COLOR_SHARP_SHP_DCTI_CTRL_4_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_SHP_DCTI_CTRL_4_reg)=data)
#define  get_COLOR_SHARP_SHP_DCTI_CTRL_4_reg                                     (*((volatile unsigned int*)COLOR_SHARP_SHP_DCTI_CTRL_4_reg))
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_rate_align_weight_shift                     (28)
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_rate_align_shift                            (24)
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_th_align_shift                              (16)
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_align_mingain_shift                         (8)
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_th_gtran_shift                              (0)
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_rate_align_weight_mask                      (0x70000000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_rate_align_mask                             (0x07000000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_th_align_mask                               (0x007F0000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_align_mingain_mask                          (0x00003F00)
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_th_gtran_mask                               (0x0000003F)
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_rate_align_weight(data)                     (0x70000000&((data)<<28))
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_rate_align(data)                            (0x07000000&((data)<<24))
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_th_align(data)                              (0x007F0000&((data)<<16))
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_align_mingain(data)                         (0x00003F00&((data)<<8))
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_th_gtran(data)                              (0x0000003F&(data))
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_get_rate_align_weight(data)                 ((0x70000000&(data))>>28)
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_get_rate_align(data)                        ((0x07000000&(data))>>24)
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_get_th_align(data)                          ((0x007F0000&(data))>>16)
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_get_align_mingain(data)                     ((0x00003F00&(data))>>8)
#define  COLOR_SHARP_SHP_DCTI_CTRL_4_get_th_gtran(data)                          (0x0000003F&(data))

#define  COLOR_SHARP_SHP_DCTI_CTRL_5                                            0x1802B9D0
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_reg_addr                                    "0xB802B9D0"
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_reg                                         0xB802B9D0
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_inst_addr                                   "0x00C7"
#define  set_COLOR_SHARP_SHP_DCTI_CTRL_5_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_SHP_DCTI_CTRL_5_reg)=data)
#define  get_COLOR_SHARP_SHP_DCTI_CTRL_5_reg                                     (*((volatile unsigned int*)COLOR_SHARP_SHP_DCTI_CTRL_5_reg))
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_th_uvmindiff_shift                          (24)
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_rate_stair2_shift                           (20)
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_rate_stair1_shift                           (16)
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_th_stair_shift                              (8)
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_th_align_weight_shift                       (0)
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_th_uvmindiff_mask                           (0x7F000000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_rate_stair2_mask                            (0x00700000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_rate_stair1_mask                            (0x00070000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_th_stair_mask                               (0x00003F00)
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_th_align_weight_mask                        (0x0000001F)
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_th_uvmindiff(data)                          (0x7F000000&((data)<<24))
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_rate_stair2(data)                           (0x00700000&((data)<<20))
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_rate_stair1(data)                           (0x00070000&((data)<<16))
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_th_stair(data)                              (0x00003F00&((data)<<8))
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_th_align_weight(data)                       (0x0000001F&(data))
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_get_th_uvmindiff(data)                      ((0x7F000000&(data))>>24)
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_get_rate_stair2(data)                       ((0x00700000&(data))>>20)
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_get_rate_stair1(data)                       ((0x00070000&(data))>>16)
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_get_th_stair(data)                          ((0x00003F00&(data))>>8)
#define  COLOR_SHARP_SHP_DCTI_CTRL_5_get_th_align_weight(data)                   (0x0000001F&(data))

#define  COLOR_SHARP_SHP_DCTI_CTRL_6                                            0x1802B9D4
#define  COLOR_SHARP_SHP_DCTI_CTRL_6_reg_addr                                    "0xB802B9D4"
#define  COLOR_SHARP_SHP_DCTI_CTRL_6_reg                                         0xB802B9D4
#define  COLOR_SHARP_SHP_DCTI_CTRL_6_inst_addr                                   "0x00C8"
#define  set_COLOR_SHARP_SHP_DCTI_CTRL_6_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_SHP_DCTI_CTRL_6_reg)=data)
#define  get_COLOR_SHARP_SHP_DCTI_CTRL_6_reg                                     (*((volatile unsigned int*)COLOR_SHARP_SHP_DCTI_CTRL_6_reg))
#define  COLOR_SHARP_SHP_DCTI_CTRL_6_rate_engsync_shift                          (9)
#define  COLOR_SHARP_SHP_DCTI_CTRL_6_rate_uvmindiff_shift                        (6)
#define  COLOR_SHARP_SHP_DCTI_CTRL_6_th_engsync_shift                            (0)
#define  COLOR_SHARP_SHP_DCTI_CTRL_6_rate_engsync_mask                           (0x00000E00)
#define  COLOR_SHARP_SHP_DCTI_CTRL_6_rate_uvmindiff_mask                         (0x000001C0)
#define  COLOR_SHARP_SHP_DCTI_CTRL_6_th_engsync_mask                             (0x0000003F)
#define  COLOR_SHARP_SHP_DCTI_CTRL_6_rate_engsync(data)                          (0x00000E00&((data)<<9))
#define  COLOR_SHARP_SHP_DCTI_CTRL_6_rate_uvmindiff(data)                        (0x000001C0&((data)<<6))
#define  COLOR_SHARP_SHP_DCTI_CTRL_6_th_engsync(data)                            (0x0000003F&(data))
#define  COLOR_SHARP_SHP_DCTI_CTRL_6_get_rate_engsync(data)                      ((0x00000E00&(data))>>9)
#define  COLOR_SHARP_SHP_DCTI_CTRL_6_get_rate_uvmindiff(data)                    ((0x000001C0&(data))>>6)
#define  COLOR_SHARP_SHP_DCTI_CTRL_6_get_th_engsync(data)                        (0x0000003F&(data))

#define  COLOR_SHARP_SHP_DCTI_CTRL_7                                            0x1802B9D8
#define  COLOR_SHARP_SHP_DCTI_CTRL_7_reg_addr                                    "0xB802B9D8"
#define  COLOR_SHARP_SHP_DCTI_CTRL_7_reg                                         0xB802B9D8
#define  COLOR_SHARP_SHP_DCTI_CTRL_7_inst_addr                                   "0x00C9"
#define  set_COLOR_SHARP_SHP_DCTI_CTRL_7_reg(data)                               (*((volatile unsigned int*)COLOR_SHARP_SHP_DCTI_CTRL_7_reg)=data)
#define  get_COLOR_SHARP_SHP_DCTI_CTRL_7_reg                                     (*((volatile unsigned int*)COLOR_SHARP_SHP_DCTI_CTRL_7_reg))
#define  COLOR_SHARP_SHP_DCTI_CTRL_7_debug_shiftbit_shift                        (15)
#define  COLOR_SHARP_SHP_DCTI_CTRL_7_debug_mode_shift                            (12)
#define  COLOR_SHARP_SHP_DCTI_CTRL_7_debug_shiftbit_mask                         (0x00038000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_7_debug_mode_mask                             (0x00007000)
#define  COLOR_SHARP_SHP_DCTI_CTRL_7_debug_shiftbit(data)                        (0x00038000&((data)<<15))
#define  COLOR_SHARP_SHP_DCTI_CTRL_7_debug_mode(data)                            (0x00007000&((data)<<12))
#define  COLOR_SHARP_SHP_DCTI_CTRL_7_get_debug_shiftbit(data)                    ((0x00038000&(data))>>15)
#define  COLOR_SHARP_SHP_DCTI_CTRL_7_get_debug_mode(data)                        ((0x00007000&(data))>>12)

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======COLOR_SHARP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  db_read:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_load:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  tex_emf_enable:1;
        RBus_UInt32  edg_emf_enable:1;
        RBus_UInt32  peaking_enable:1;
    };
}color_sharp_dm_nr_shp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  db_read:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_load:1;
    };
}color_sharp_dm_nr_shp_ctrl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  seg_gain_debug_step:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  seg_gain_debug_mode:2;
        RBus_UInt32  res3:3;
        RBus_UInt32  gain_by_y_en:1;
        RBus_UInt32  lpf_weigh_en:1;
        RBus_UInt32  max_min_gain_en:1;
        RBus_UInt32  sharp_mkiii_debug_en:1;
    };
}color_sharp_dm_mkiii_shp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  edg_tex_blending_lpf_filter_en:1;
        RBus_UInt32  edg_tex_blending_lpf_filter:2;
        RBus_UInt32  enhance_mode:2;
        RBus_UInt32  edgextrange_v:1;
        RBus_UInt32  edgextrange:3;
        RBus_UInt32  edg_dlti:1;
        RBus_UInt32  sobel_stepbit:3;
        RBus_UInt32  sobel_upbnd:8;
        RBus_UInt32  sobelmode:1;
        RBus_UInt32  edgmode:2;
        RBus_UInt32  texpk_en:1;
        RBus_UInt32  edgpk_en:1;
        RBus_UInt32  edgext_en:1;
        RBus_UInt32  segpk_mode:2;
    };
}color_sharp_dm_segpk_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  sobelrange_h:2;
        RBus_UInt32  sobelrange_v:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pkdlti_comsign:3;
        RBus_UInt32  res3:2;
        RBus_UInt32  zigsftbit_reg:2;
        RBus_UInt32  res4:1;
        RBus_UInt32  zdiff_stepbit:3;
        RBus_UInt32  zdiff_upbnd:8;
    };
}color_sharp_dm_segpk_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  small_th1:7;
        RBus_UInt32  tex_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  tex_stepbit:3;
        RBus_UInt32  tex_upbnd:8;
    };
}color_sharp_dm_segpk_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  debugmode:3;
    };
}color_sharp_dm_segpk_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_pos2:2;
        RBus_UInt32  gain_neg2:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  tex_d2_shift_bit:2;
        RBus_UInt32  res2:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_peaking_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_peaking_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lv2:8;
    };
}color_sharp_dm_peaking_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  range:4;
        RBus_UInt32  gaim:8;
        RBus_UInt32  gain:8;
        RBus_UInt32  res2:8;
    };
}color_sharp_dm_peaking_lvd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  coef_c0_0:10;
        RBus_UInt32  coef_c1_0:8;
        RBus_UInt32  coef_c2_0:8;
    };
}color_sharp_dm_2d_shp_tex_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_c3_0:8;
        RBus_UInt32  coef_c4_0:8;
        RBus_UInt32  coef_c5_0:8;
        RBus_UInt32  coef_c6_0:8;
    };
}color_sharp_dm_2d_shp_tex_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_c7_0:8;
        RBus_UInt32  coef_c8_0:8;
        RBus_UInt32  coef_c9_0:8;
        RBus_UInt32  coef_c10_0:8;
    };
}color_sharp_dm_2d_shp_tex_1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_c0_1:8;
        RBus_UInt32  res1:24;
    };
}color_sharp_dm_2d_shp_tex_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_c0_2:8;
        RBus_UInt32  res1:24;
    };
}color_sharp_dm_2d_shp_tex_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  seg0_offset:11;
        RBus_UInt32  res2:1;
        RBus_UInt32  seg2_gain_sel:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  seg1_gain_sel:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  seg0_gain_sel:3;
        RBus_UInt32  emf_range_force_v_5tap:1;
        RBus_UInt32  emf_range_force_h_11tap:1;
        RBus_UInt32  emf_range:2;
        RBus_UInt32  emf_shift:3;
        RBus_UInt32  res5:1;
    };
}color_sharp_dm_peaking_emf_texture_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  declinebit:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  blendstepbit:3;
        RBus_UInt32  res3:2;
        RBus_UInt32  lowbnd:10;
        RBus_UInt32  blend_wt:4;
        RBus_UInt32  res4:1;
        RBus_UInt32  aov_range:1;
        RBus_UInt32  emf_mk2_debug:1;
        RBus_UInt32  emf_mode_sel:1;
    };
}color_sharp_dm_emfmk2_ctrl_texture_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  seg1_offset:11;
        RBus_UInt32  emf_fixextent_pos:8;
        RBus_UInt32  emf_fixextent_neg:8;
    };
}color_sharp_dm_emf_ext_0_texture_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg1_x:10;
        RBus_UInt32  seg0_x:10;
        RBus_UInt32  res1:1;
        RBus_UInt32  seg2_offset:11;
    };
}color_sharp_dm_emf_ext_1_texture_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_pos2:2;
        RBus_UInt32  gain_neg2:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  edg_d2_shift_bit:2;
        RBus_UInt32  res2:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_segpk_edgpk3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_segpk_edgpk4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lv2:8;
    };
}color_sharp_dm_segpk_edgpk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  coef_c0_0:10;
        RBus_UInt32  coef_c1_0:8;
        RBus_UInt32  coef_c2_0:8;
    };
}color_sharp_dm_2d_shp_edge_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_c3_0:8;
        RBus_UInt32  coef_c4_0:8;
        RBus_UInt32  coef_c5_0:8;
        RBus_UInt32  coef_c6_0:8;
    };
}color_sharp_dm_2d_shp_edge_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_c7_0:8;
        RBus_UInt32  coef_c8_0:8;
        RBus_UInt32  coef_c9_0:8;
        RBus_UInt32  coef_c10_0:8;
    };
}color_sharp_dm_2d_shp_edge_1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_c0_1:8;
        RBus_UInt32  res1:24;
    };
}color_sharp_dm_2d_shp_edge_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_c0_2:8;
        RBus_UInt32  res1:24;
    };
}color_sharp_dm_2d_shp_edge_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  seg0_offset:11;
        RBus_UInt32  res2:1;
        RBus_UInt32  seg2_gain_sel:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  seg1_gain_sel:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  seg0_gain_sel:3;
        RBus_UInt32  emf_range_force_v_5tap:1;
        RBus_UInt32  emf_range_force_h_11tap:1;
        RBus_UInt32  emf_range:2;
        RBus_UInt32  emf_shift:3;
        RBus_UInt32  res5:1;
    };
}color_sharp_dm_peaking_emf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  declinebit:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  blendstepbit:3;
        RBus_UInt32  res3:2;
        RBus_UInt32  lowbnd:10;
        RBus_UInt32  blend_wt:4;
        RBus_UInt32  res4:1;
        RBus_UInt32  aov_range:1;
        RBus_UInt32  emf_mk2_debug:1;
        RBus_UInt32  emf_mode_sel:1;
    };
}color_sharp_dm_emfmk2_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  seg1_offset:11;
        RBus_UInt32  emf_fixextent_pos:8;
        RBus_UInt32  emf_fixextent_neg:8;
    };
}color_sharp_dm_emf_ext_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg1_x:10;
        RBus_UInt32  seg0_x:10;
        RBus_UInt32  res1:1;
        RBus_UInt32  seg2_offset:11;
    };
}color_sharp_dm_emf_ext_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_cds_peaking_gain_cm0_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dummy1802b674_27_26:2;
        RBus_UInt32  hv_pos:8;
        RBus_UInt32  dummy1802b674_17_16:2;
        RBus_UInt32  hv_neg:8;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_cds_peaking_bound_cm0_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_cds_peaking_gain_cm0_v_edg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dummy1802b67c_27_26:2;
        RBus_UInt32  hv_pos:8;
        RBus_UInt32  dummy1802b67c_17_16:2;
        RBus_UInt32  hv_neg:8;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_cds_peaking_bound_cm0_v_edg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_cds_peaking_gain_cm1_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dummy1802b9e0_27_26:2;
        RBus_UInt32  hv_pos:8;
        RBus_UInt32  dummy1802b9e0_17_16:2;
        RBus_UInt32  hv_neg:8;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_cds_peaking_bound_cm1_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_cds_peaking_gain_cm1_v_edg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dummy1802b68c_27_26:2;
        RBus_UInt32  hv_pos:8;
        RBus_UInt32  dummy1802b68c_17_16:2;
        RBus_UInt32  hv_neg:8;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_cds_peaking_bound_cm1_v_edg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_cds_peaking_gain_cm2_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dummy1802b694_27_26:2;
        RBus_UInt32  hv_pos:8;
        RBus_UInt32  dummy1802b694_17_16:2;
        RBus_UInt32  hv_neg:8;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_cds_peaking_bound_cm2_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_cds_peaking_gain_cm2_v_edg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dummy1802b69c_27_26:2;
        RBus_UInt32  hv_pos:8;
        RBus_UInt32  dummy1802b69c_17_16:2;
        RBus_UInt32  hv_neg:8;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_cds_peaking_bound_cm2_v_edg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_cds_peaking_gain_cm3_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dummy1802b6a4_27_26:2;
        RBus_UInt32  hv_pos:8;
        RBus_UInt32  dummy1802b6a4_17_16:2;
        RBus_UInt32  hv_neg:8;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_cds_peaking_bound_cm3_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_cds_peaking_gain_cm3_v_edg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dummy1802b6ac_27_26:2;
        RBus_UInt32  hv_pos:8;
        RBus_UInt32  dummy1802b6ac_17_16:2;
        RBus_UInt32  hv_neg:8;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_cds_peaking_bound_cm3_v_edg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  bigedge_ratio:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  smalledge_ratio:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  deltaedge_ratio:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  smalledge_ulevel:5;
    };
}color_sharp_dm_segpk_edge_coring_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edge_coring_en:1;
        RBus_UInt32  edge_gain_en:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  deltaedge_ulevel:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  edge_coring_clip:5;
        RBus_UInt32  edge_delta_ext_range:3;
        RBus_UInt32  edge_gain_bound:5;
        RBus_UInt32  edge_ser_range:4;
    };
}color_sharp_dm_segpk_edge_coring_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  slope_gain_en:1;
        RBus_UInt32  dir:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gain_boundpos:4;
        RBus_UInt32  gain_boundneg:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  gain_extendpos:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  gain_extendneg:7;
    };
}color_sharp_dm_segpk_edgpk_sourceslope_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vpk_c2:8;
        RBus_UInt32  res1:3;
        RBus_UInt32  vpk_c1:9;
        RBus_UInt32  res2:3;
        RBus_UInt32  vpk_c0:9;
    };
}color_sharp_dm_segpk_vpk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  vpk_lv:8;
        RBus_UInt32  vpk_gain_neg:8;
        RBus_UInt32  vpk_gain_pos:8;
    };
}color_sharp_dm_segpk_vpk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  lv2:8;
        RBus_UInt32  gain_pos2:2;
        RBus_UInt32  gain_neg2:2;
        RBus_UInt32  vpk_hv_pos:8;
        RBus_UInt32  vpk_hv_neg:8;
    };
}color_sharp_dm_segpk_vpk3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  vext_reg:8;
        RBus_UInt32  res2:3;
        RBus_UInt32  vpk_edg_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  v_tex_en:1;
        RBus_UInt32  vemf_en:1;
        RBus_UInt32  vpk_en:1;
    };
}color_sharp_dm_segpk_vpk4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cds_cm0_enable:1;
        RBus_UInt32  cds_enable:1;
        RBus_UInt32  cds_debug:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  u_ub_0:11;
        RBus_UInt32  res3:1;
        RBus_UInt32  u_lb_0:11;
    };
}color_sharp_dm_cds_cm0_u_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cm0_mode:2;
        RBus_UInt32  cm0_conti_area:5;
        RBus_UInt32  cm0_conti_enable:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  v_ub_0:11;
        RBus_UInt32  res2:1;
        RBus_UInt32  v_lb_0:11;
    };
}color_sharp_dm_cds_cm0_v_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  uv_rad_0:9;
        RBus_UInt32  cv_0:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  cu_0:10;
    };
}color_sharp_dm_cds_cm0_u_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cnt_0:24;
    };
}color_sharp_dm_cds_cm0_v_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_cds_peaking_gain_cm0_tex_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_cds_peaking_bound_cm0_tex_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_cds_peaking_gain_cm0_edge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_cds_peaking_bound_cm0_edge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cds_cm1_enable:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  u_ub_1:11;
        RBus_UInt32  res3:1;
        RBus_UInt32  u_lb_1:11;
    };
}color_sharp_dm_cds_cm1_u_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cm1_mode:2;
        RBus_UInt32  cm1_conti_area:5;
        RBus_UInt32  cm1_conti_enable:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  v_ub_1:11;
        RBus_UInt32  res2:1;
        RBus_UInt32  v_lb_1:11;
    };
}color_sharp_dm_cds_cm1_v_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  uv_rad_1:9;
        RBus_UInt32  cv_1:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  cu_1:10;
    };
}color_sharp_dm_cds_cm1_u_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cnt_1:24;
    };
}color_sharp_dm_cds_cm1_v_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_cds_peaking_gain_cm1_tex_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_cds_peaking_bound_cm1_tex_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_cds_peaking_gain_cm1_edge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_cds_peaking_bound_cm1_edge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cds_cm2_enable:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  u_ub_2:11;
        RBus_UInt32  res3:1;
        RBus_UInt32  u_lb_2:11;
    };
}color_sharp_dm_cds_cm2_u_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cm2_mode:2;
        RBus_UInt32  cm2_conti_area:5;
        RBus_UInt32  cm2_conti_enable:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  v_ub_2:11;
        RBus_UInt32  res2:1;
        RBus_UInt32  v_lb_2:11;
    };
}color_sharp_dm_cds_cm2_v_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  uv_rad_2:9;
        RBus_UInt32  cv_2:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  cu_2:10;
    };
}color_sharp_dm_cds_cm2_u_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cnt_2:24;
    };
}color_sharp_dm_cds_cm2_v_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_cds_peaking_gain_cm2_tex_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_cds_peaking_bound_cm2_tex_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_cds_peaking_gain_cm2_edge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_cds_peaking_bound_cm2_edge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cds_cm3_enable:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  u_ub_3:11;
        RBus_UInt32  res3:1;
        RBus_UInt32  u_lb_3:11;
    };
}color_sharp_dm_cds_cm3_u_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cm3_mode:2;
        RBus_UInt32  cm3_conti_area:5;
        RBus_UInt32  cm3_conti_enable:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  v_ub_3:11;
        RBus_UInt32  res2:1;
        RBus_UInt32  v_lb_3:11;
    };
}color_sharp_dm_cds_cm3_v_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  uv_rad_3:9;
        RBus_UInt32  cv_3:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  cu_3:10;
    };
}color_sharp_dm_cds_cm3_u_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cnt_3:24;
    };
}color_sharp_dm_cds_cm3_v_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_cds_peaking_gain_cm3_tex_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_cds_peaking_bound_cm3_tex_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  gain_neg:8;
    };
}color_sharp_dm_cds_peaking_gain_cm3_edge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  lv:8;
    };
}color_sharp_dm_cds_peaking_bound_cm3_edge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  coef_c0:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  coef_c1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  coef_c2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  coef_c3:6;
    };
}color_sharp_dm_sours_lpf_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  coef_c4:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  coef_c5:6;
    };
}color_sharp_dm_sours_lpf_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s0:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  s1:11;
    };
}color_sharp_dm_maxmin_shp_gain_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s2:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  s3:11;
    };
}color_sharp_dm_maxmin_shp_gain_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s4:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  s5:11;
    };
}color_sharp_dm_maxmin_shp_gain_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s6:11;
        RBus_UInt32  res2:16;
    };
}color_sharp_dm_maxmin_shp_gain_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  s1:11;
    };
}color_sharp_dm_maxmin_shp_step_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s2:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  s3:11;
    };
}color_sharp_dm_maxmin_shp_step_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s4:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  s5:11;
    };
}color_sharp_dm_maxmin_shp_step_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s6:11;
        RBus_UInt32  res2:16;
    };
}color_sharp_dm_maxmin_shp_step_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_0:32;
    };
}color_sharp_dm_cds_cm0_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_0:32;
    };
}color_sharp_dm_cds_cm0_u_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_0:32;
    };
}color_sharp_dm_cds_cm0_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_1:32;
    };
}color_sharp_dm_cds_cm1_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_1:32;
    };
}color_sharp_dm_cds_cm1_u_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_1:32;
    };
}color_sharp_dm_cds_cm1_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_2:32;
    };
}color_sharp_dm_cds_cm2_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_2:32;
    };
}color_sharp_dm_cds_cm2_u_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_2:32;
    };
}color_sharp_dm_cds_cm2_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_3:32;
    };
}color_sharp_dm_cds_cm3_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_3:32;
    };
}color_sharp_dm_cds_cm3_u_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_3:32;
    };
}color_sharp_dm_cds_cm3_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802b818_31_4:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  hpf_vpf_maxmin_en:1;
        RBus_UInt32  src_sel:1;
    };
}color_sharp_dm_vpk_hpk_add_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  hpf_out_debug_en:1;
        RBus_UInt32  hpf_out_debug_sel:3;
        RBus_UInt32  res2:16;
    };
}color_sharp_dm_gain_curve_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  sr_pndu:1;
        RBus_UInt32  vpk_sr_tex:1;
        RBus_UInt32  vpk_sr_edg:1;
        RBus_UInt32  h_edg_filter_en:1;
        RBus_UInt32  h_tex_filter_en:1;
        RBus_UInt32  sr_0_edg_en:1;
        RBus_UInt32  sr_0_tex_en:1;
        RBus_UInt32  sr_1_edg_en:1;
        RBus_UInt32  sr_1_tex_en:1;
        RBus_UInt32  sr_2_edg_en:1;
        RBus_UInt32  sr_2_tex_en:1;
        RBus_UInt32  sr_3_edg_en:1;
        RBus_UInt32  sr_3_tex_en:1;
        RBus_UInt32  sr_v_0_edg_en:1;
        RBus_UInt32  sr_v_0_tex_en:1;
        RBus_UInt32  sr_v_1_edg_en:1;
        RBus_UInt32  sr_v_1_tex_en:1;
        RBus_UInt32  sr_v_2_edg_en:1;
        RBus_UInt32  sr_v_2_tex_en:1;
        RBus_UInt32  sr_v_3_edg_en:1;
        RBus_UInt32  sr_v_3_tex_en:1;
        RBus_UInt32  vpk_edg_en:1;
        RBus_UInt32  vpk_tex_en:1;
        RBus_UInt32  res2:1;
    };
}color_sharp_dm_sr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_detail_tex_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  sr_detail_v_tex_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  period:4;
        RBus_UInt32  res3:3;
        RBus_UInt32  gain:9;
        RBus_UInt32  res4:3;
        RBus_UInt32  offset:9;
    };
}color_sharp_dm_sr_continual_detail_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ring_gen_gain:8;
        RBus_UInt32  res2:8;
    };
}color_sharp_dm_sr_continual_detail_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c1:8;
        RBus_UInt32  c2:8;
        RBus_UInt32  c3:8;
        RBus_UInt32  c4:8;
    };
}color_sharp_dm_sr_9tap_hpf_h_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c0:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  c1:8;
        RBus_UInt32  c2:8;
    };
}color_sharp_dm_sr_13tap_hpf_h_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c3:8;
        RBus_UInt32  c4:8;
        RBus_UInt32  c5:8;
        RBus_UInt32  c6:8;
    };
}color_sharp_dm_sr_13tap_hpf_h_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c0:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  c1:8;
        RBus_UInt32  c2:8;
    };
}color_sharp_dm_sr_21tap_hpf_h_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c3:8;
        RBus_UInt32  c4:8;
        RBus_UInt32  c5:8;
        RBus_UInt32  c6:8;
    };
}color_sharp_dm_sr_21tap_hpf_h_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c7:8;
        RBus_UInt32  c8:8;
        RBus_UInt32  c9:8;
        RBus_UInt32  c10:8;
    };
}color_sharp_dm_sr_21tap_hpf_h_coef_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c1:8;
        RBus_UInt32  c2:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_sr_9tap_hpf_v_coef_0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c0:9;
        RBus_UInt32  res1:23;
    };
}color_sharp_dm_sr_9tap_hpf_v_coef_1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c1:8;
        RBus_UInt32  c2:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_sr_9tap_hpf_v_coef_1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c0:9;
        RBus_UInt32  res1:23;
    };
}color_sharp_dm_sr_9tap_hpf_v_coef_2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c1:8;
        RBus_UInt32  c2:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_sr_9tap_hpf_v_coef_2_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c0:9;
        RBus_UInt32  res1:15;
        RBus_UInt32  c1:8;
    };
}color_sharp_dm_sr_11tap_hpf_h_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c2:8;
        RBus_UInt32  c3:8;
        RBus_UInt32  c4:8;
        RBus_UInt32  c5:8;
    };
}color_sharp_dm_sr_11tap_hpf_h_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c0:9;
        RBus_UInt32  res1:23;
    };
}color_sharp_dm_sr_9tap_hpf_v_coef_3_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c1:8;
        RBus_UInt32  c2:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_sr_9tap_hpf_v_coef_3_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  sr_debug:3;
    };
}color_sharp_dm_sr_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cb1:8;
        RBus_UInt32  cb2:8;
        RBus_UInt32  cblv1:4;
        RBus_UInt32  cblv2:4;
        RBus_UInt32  res1:8;
    };
}color_sharp_dm_sr_bias_coef_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  vpk_edg_lv:8;
        RBus_UInt32  vpk_edg_gain_neg:8;
        RBus_UInt32  vpk_edg_gain_pos:8;
    };
}color_sharp_dm_segpk_vpk5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edg_lv2:8;
        RBus_UInt32  vpk_edg_gain_pos2:2;
        RBus_UInt32  vpk_edg_gain_neg2:2;
        RBus_UInt32  vpk_edg_hv_pos:10;
        RBus_UInt32  vpk_edg_hv_neg:10;
    };
}color_sharp_dm_segpk_vpk6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  v_slope_gain_en:1;
        RBus_UInt32  dir_v:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gain_boundpos_v:4;
        RBus_UInt32  gain_boundneg_v:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  gain_extendpos_v:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  gain_extendneg_v:7;
    };
}color_sharp_dm_segpk_edgpk_vsourceslope_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s0:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  s1:11;
    };
}color_sharp_dm_maxmin_lpf_weit_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s2:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  s3:11;
    };
}color_sharp_dm_maxmin_lpf_weit_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s4:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  s5:11;
    };
}color_sharp_dm_maxmin_lpf_weit_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s6:11;
        RBus_UInt32  res2:16;
    };
}color_sharp_dm_maxmin_lpf_weit_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  s1:11;
    };
}color_sharp_dm_maxmin_lpf_step_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s2:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  s3:11;
    };
}color_sharp_dm_maxmin_lpf_step_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s4:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  s5:11;
    };
}color_sharp_dm_maxmin_lpf_step_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s6:11;
        RBus_UInt32  res2:16;
    };
}color_sharp_dm_maxmin_lpf_step_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s0:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  s1:11;
    };
}color_sharp_dm_maxmin_gain_by_y_gain_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s2:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  s3:11;
    };
}color_sharp_dm_maxmin_gain_by_y_gain_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s4:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  s5:11;
    };
}color_sharp_dm_maxmin_gain_by_y_gain_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s6:11;
        RBus_UInt32  res2:16;
    };
}color_sharp_dm_maxmin_gain_by_y_gain_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  s1:11;
    };
}color_sharp_dm_maxmin_gain_by_y_step_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s2:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  s3:11;
    };
}color_sharp_dm_maxmin_gain_by_y_step_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s4:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  s5:11;
    };
}color_sharp_dm_maxmin_gain_by_y_step_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s6:11;
        RBus_UInt32  res2:16;
    };
}color_sharp_dm_maxmin_gain_by_y_step_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  cds_region_3_enable_5:1;
        RBus_UInt32  cds_region_3_enable_4:1;
        RBus_UInt32  cds_region_3_enable_3:1;
        RBus_UInt32  cds_region_3_enable_2:1;
        RBus_UInt32  cds_region_3_enable_1:1;
        RBus_UInt32  cds_region_3_enable_0:1;
        RBus_UInt32  cds_region_2_enable_5:1;
        RBus_UInt32  cds_region_2_enable_4:1;
        RBus_UInt32  cds_region_2_enable_3:1;
        RBus_UInt32  cds_region_2_enable_2:1;
        RBus_UInt32  cds_region_2_enable_1:1;
        RBus_UInt32  cds_region_2_enable_0:1;
        RBus_UInt32  cds_region_1_enable_5:1;
        RBus_UInt32  cds_region_1_enable_4:1;
        RBus_UInt32  cds_region_1_enable_3:1;
        RBus_UInt32  cds_region_1_enable_2:1;
        RBus_UInt32  cds_region_1_enable_1:1;
        RBus_UInt32  cds_region_1_enable_0:1;
        RBus_UInt32  cds_region_0_enable_5:1;
        RBus_UInt32  cds_region_0_enable_4:1;
        RBus_UInt32  cds_region_0_enable_3:1;
        RBus_UInt32  cds_region_0_enable_2:1;
        RBus_UInt32  cds_region_0_enable_1:1;
        RBus_UInt32  cds_region_0_enable_0:1;
        RBus_UInt32  cds_region_3_enable:1;
        RBus_UInt32  cds_region_2_enable:1;
        RBus_UInt32  cds_region_1_enable:1;
        RBus_UInt32  cds_region_0_enable:1;
    };
}color_sharp_shp_cds_region_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_0_smooth:8;
        RBus_UInt32  cds_region_0_end_i:12;
        RBus_UInt32  cds_region_0_start_i:12;
    };
}color_sharp_shp_cds_region0_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cds_region_0_end_j:12;
        RBus_UInt32  cds_region_0_start_j:12;
    };
}color_sharp_shp_cds_region0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_0_jld:8;
        RBus_UInt32  cds_region_0_jlu:8;
        RBus_UInt32  cds_region_0_ild:8;
        RBus_UInt32  cds_region_0_ilu:8;
    };
}color_sharp_shp_cds_region0_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_0_jrd:8;
        RBus_UInt32  cds_region_0_jru:8;
        RBus_UInt32  cds_region_0_ird:8;
        RBus_UInt32  cds_region_0_iru:8;
    };
}color_sharp_shp_cds_region0_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cds_region_0_jrdm:2;
        RBus_UInt32  cds_region_0_jrum:2;
        RBus_UInt32  cds_region_0_irdm:2;
        RBus_UInt32  cds_region_0_irum:2;
        RBus_UInt32  cds_region_0_jldm:2;
        RBus_UInt32  cds_region_0_jlum:2;
        RBus_UInt32  cds_region_0_ildm:2;
        RBus_UInt32  cds_region_0_ilum:2;
    };
}color_sharp_shp_cds_region0_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_1_smooth:8;
        RBus_UInt32  cds_region_1_end_i:12;
        RBus_UInt32  cds_region_1_start_i:12;
    };
}color_sharp_shp_cds_region1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cds_region_1_end_j:12;
        RBus_UInt32  cds_region_1_start_j:12;
    };
}color_sharp_shp_cds_region1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_1_jld:8;
        RBus_UInt32  cds_region_1_jlu:8;
        RBus_UInt32  cds_region_1_ild:8;
        RBus_UInt32  cds_region_1_ilu:8;
    };
}color_sharp_shp_cds_region1_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_1_jrd:8;
        RBus_UInt32  cds_region_1_jru:8;
        RBus_UInt32  cds_region_1_ird:8;
        RBus_UInt32  cds_region_1_iru:8;
    };
}color_sharp_shp_cds_region1_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cds_region_1_jrdm:2;
        RBus_UInt32  cds_region_1_jrum:2;
        RBus_UInt32  cds_region_1_irdm:2;
        RBus_UInt32  cds_region_1_irum:2;
        RBus_UInt32  cds_region_1_jldm:2;
        RBus_UInt32  cds_region_1_jlum:2;
        RBus_UInt32  cds_region_1_ildm:2;
        RBus_UInt32  cds_region_1_ilum:2;
    };
}color_sharp_shp_cds_region1_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_2_smooth:8;
        RBus_UInt32  cds_region_2_end_i:12;
        RBus_UInt32  cds_region_2_start_i:12;
    };
}color_sharp_shp_cds_region2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cds_region_2_end_j:12;
        RBus_UInt32  cds_region_2_start_j:12;
    };
}color_sharp_shp_cds_region2_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_2_jld:8;
        RBus_UInt32  cds_region_2_jlu:8;
        RBus_UInt32  cds_region_2_ild:8;
        RBus_UInt32  cds_region_2_ilu:8;
    };
}color_sharp_shp_cds_region2_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_2_jrd:8;
        RBus_UInt32  cds_region_2_jru:8;
        RBus_UInt32  cds_region_2_ird:8;
        RBus_UInt32  cds_region_2_iru:8;
    };
}color_sharp_shp_cds_region2_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cds_region_2_jrdm:2;
        RBus_UInt32  cds_region_2_jrum:2;
        RBus_UInt32  cds_region_2_irdm:2;
        RBus_UInt32  cds_region_2_irum:2;
        RBus_UInt32  cds_region_2_jldm:2;
        RBus_UInt32  cds_region_2_jlum:2;
        RBus_UInt32  cds_region_2_ildm:2;
        RBus_UInt32  cds_region_2_ilum:2;
    };
}color_sharp_shp_cds_region2_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_3_smooth:8;
        RBus_UInt32  cds_region_3_end_i:12;
        RBus_UInt32  cds_region_3_start_i:12;
    };
}color_sharp_shp_cds_region3_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cds_region_3_end_j:12;
        RBus_UInt32  cds_region_3_start_j:12;
    };
}color_sharp_shp_cds_region3_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_3_jld:8;
        RBus_UInt32  cds_region_3_jlu:8;
        RBus_UInt32  cds_region_3_ild:8;
        RBus_UInt32  cds_region_3_ilu:8;
    };
}color_sharp_shp_cds_region3_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_3_jrd:8;
        RBus_UInt32  cds_region_3_jru:8;
        RBus_UInt32  cds_region_3_ird:8;
        RBus_UInt32  cds_region_3_iru:8;
    };
}color_sharp_shp_cds_region3_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cds_region_3_jrdm:2;
        RBus_UInt32  cds_region_3_jrum:2;
        RBus_UInt32  cds_region_3_irdm:2;
        RBus_UInt32  cds_region_3_irum:2;
        RBus_UInt32  cds_region_3_jldm:2;
        RBus_UInt32  cds_region_3_jlum:2;
        RBus_UInt32  cds_region_3_ildm:2;
        RBus_UInt32  cds_region_3_ilum:2;
    };
}color_sharp_shp_cds_region3_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cds_region_4_end_i:12;
        RBus_UInt32  cds_region_4_start_i:12;
    };
}color_sharp_shp_cds_region4_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cds_region_4_end_j:12;
        RBus_UInt32  cds_region_4_start_j:12;
    };
}color_sharp_shp_cds_region4_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_4_jld:8;
        RBus_UInt32  cds_region_4_jlu:8;
        RBus_UInt32  cds_region_4_ild:8;
        RBus_UInt32  cds_region_4_ilu:8;
    };
}color_sharp_shp_cds_region4_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_4_jrd:8;
        RBus_UInt32  cds_region_4_jru:8;
        RBus_UInt32  cds_region_4_ird:8;
        RBus_UInt32  cds_region_4_iru:8;
    };
}color_sharp_shp_cds_region4_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cds_region_4_jrdm:2;
        RBus_UInt32  cds_region_4_jrum:2;
        RBus_UInt32  cds_region_4_irdm:2;
        RBus_UInt32  cds_region_4_irum:2;
        RBus_UInt32  cds_region_4_jldm:2;
        RBus_UInt32  cds_region_4_jlum:2;
        RBus_UInt32  cds_region_4_ildm:2;
        RBus_UInt32  cds_region_4_ilum:2;
    };
}color_sharp_shp_cds_region4_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cds_region_5_end_i:12;
        RBus_UInt32  cds_region_5_start_i:12;
    };
}color_sharp_shp_cds_region5_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cds_region_5_end_j:12;
        RBus_UInt32  cds_region_5_start_j:12;
    };
}color_sharp_shp_cds_region5_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_5_jld:8;
        RBus_UInt32  cds_region_5_jlu:8;
        RBus_UInt32  cds_region_5_ild:8;
        RBus_UInt32  cds_region_5_ilu:8;
    };
}color_sharp_shp_cds_region5_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_5_jrd:8;
        RBus_UInt32  cds_region_5_jru:8;
        RBus_UInt32  cds_region_5_ird:8;
        RBus_UInt32  cds_region_5_iru:8;
    };
}color_sharp_shp_cds_region5_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cds_region_5_jrdm:2;
        RBus_UInt32  cds_region_5_jrum:2;
        RBus_UInt32  cds_region_5_irdm:2;
        RBus_UInt32  cds_region_5_irum:2;
        RBus_UInt32  cds_region_5_jldm:2;
        RBus_UInt32  cds_region_5_jlum:2;
        RBus_UInt32  cds_region_5_ildm:2;
        RBus_UInt32  cds_region_5_ilum:2;
    };
}color_sharp_shp_cds_region5_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  cds_region_predict_2:9;
        RBus_UInt32  cds_region_predict_1:9;
        RBus_UInt32  cds_region_predict_sel:1;
    };
}color_sharp_shp_cds_predict_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  crc_conti:1;
        RBus_UInt32  crc_start:1;
    };
}color_sharp_shp_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  shp_crc_result:32;
    };
}color_sharp_shp_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  test:1;
        RBus_UInt32  ls:1;
        RBus_UInt32  dvse:1;
        RBus_UInt32  dvs:4;
        RBus_UInt32  bist_fail_0:1;
        RBus_UInt32  bist_fail_1:1;
        RBus_UInt32  bist_fail_2:1;
        RBus_UInt32  bist_fail_3:1;
        RBus_UInt32  drf_fail_0:1;
        RBus_UInt32  drf_fail_1:1;
        RBus_UInt32  drf_fail_2:1;
        RBus_UInt32  drf_fail_3:1;
        RBus_UInt32  res2:8;
    };
}color_sharp_peak2d_bist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_sel:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  maxlen:3;
        RBus_UInt32  pnth:10;
        RBus_UInt32  dcp_th:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  d1_cp_shift:2;
        RBus_UInt32  ffd2_en:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  dlti_en:1;
    };
}color_sharp_shp_dlti_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  ovc_extend:1;
        RBus_UInt32  ffd0_start:1;
        RBus_UInt32  flat_s_range:2;
        RBus_UInt32  flat_score_thl:8;
        RBus_UInt32  flat_score_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  ffd1_ratio:7;
        RBus_UInt32  ffd1_th:10;
    };
}color_sharp_shp_dlti_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dlti_debug:3;
        RBus_UInt32  res1:2;
        RBus_UInt32  ffd2_ratio:7;
        RBus_UInt32  ffd2_range2r:10;
        RBus_UInt32  ffd2_range2l:10;
    };
}color_sharp_shp_dlti_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  tnoff2:8;
        RBus_UInt32  tnoff1:8;
        RBus_UInt32  tnoff0:8;
    };
}color_sharp_shp_dlti_gain_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  tnoff5:8;
        RBus_UInt32  tnoff4:8;
        RBus_UInt32  tnoff3:8;
    };
}color_sharp_shp_dlti_gain_offset_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  tnoff8:8;
        RBus_UInt32  tnoff7:8;
        RBus_UInt32  tnoff6:8;
    };
}color_sharp_shp_dlti_gain_offset_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  tnoff11:8;
        RBus_UInt32  tnoff10:8;
        RBus_UInt32  tnoff9:8;
    };
}color_sharp_shp_dlti_gain_offset_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  tnoff14:8;
        RBus_UInt32  tnoff13:8;
        RBus_UInt32  tnoff12:8;
    };
}color_sharp_shp_dlti_gain_offset_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  over_enhance:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  gain_pos:9;
        RBus_UInt32  res3:2;
        RBus_UInt32  offset_pos:10;
    };
}color_sharp_shp_dlti_over_enhance_gain_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  gain_neg:9;
        RBus_UInt32  res2:2;
        RBus_UInt32  offset_neg:10;
    };
}color_sharp_shp_dlti_over_enhance_gain_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_sel:1;
        RBus_UInt32  maxlen:3;
        RBus_UInt32  psmth:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  lpmode:3;
        RBus_UInt32  engdiv:2;
        RBus_UInt32  offdiv:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  uvgain:7;
        RBus_UInt32  dcti_mode:1;
        RBus_UInt32  uvalign_en:1;
        RBus_UInt32  cur_sel:1;
        RBus_UInt32  res3:1;
    };
}color_sharp_shp_dcti_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  uvsync_en:1;
        RBus_UInt32  tran_mode:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  rate_steep:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  th_steep:6;
        RBus_UInt32  th_coring:5;
        RBus_UInt32  steep_mode:3;
        RBus_UInt32  hp_mode:3;
        RBus_UInt32  vlp_mode:3;
        RBus_UInt32  median_mode:1;
        RBus_UInt32  blending_mode:1;
    };
}color_sharp_shp_dcti_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  maxminlen:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  rate_tran:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  th_tran:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  region_mode:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  rate_smooth:3;
        RBus_UInt32  res6:2;
        RBus_UInt32  th_smooth:6;
    };
}color_sharp_shp_dcti_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  rate_align_weight:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  rate_align:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  th_align:7;
        RBus_UInt32  res4:2;
        RBus_UInt32  align_mingain:6;
        RBus_UInt32  res5:2;
        RBus_UInt32  th_gtran:6;
    };
}color_sharp_shp_dcti_ctrl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  th_uvmindiff:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  rate_stair2:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  rate_stair1:3;
        RBus_UInt32  res4:2;
        RBus_UInt32  th_stair:6;
        RBus_UInt32  res5:3;
        RBus_UInt32  th_align_weight:5;
    };
}color_sharp_shp_dcti_ctrl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:19;
        RBus_UInt32  rate_engsync:3;
        RBus_UInt32  rate_uvmindiff:3;
        RBus_UInt32  th_engsync:6;
    };
}color_sharp_shp_dcti_ctrl_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  debug_shiftbit:3;
        RBus_UInt32  debug_mode:3;
        RBus_UInt32  res2:6;
        RBus_UInt32  res3:6;
    };
}color_sharp_shp_dcti_ctrl_7_RBUS;

#else //apply LITTLE_ENDIAN

//======COLOR_SHARP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  peaking_enable:1;
        RBus_UInt32  edg_emf_enable:1;
        RBus_UInt32  tex_emf_enable:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  db_load:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_read:1;
        RBus_UInt32  res2:19;
    };
}color_sharp_dm_nr_shp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_load:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_read:1;
        RBus_UInt32  res1:29;
    };
}color_sharp_dm_nr_shp_ctrl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sharp_mkiii_debug_en:1;
        RBus_UInt32  max_min_gain_en:1;
        RBus_UInt32  lpf_weigh_en:1;
        RBus_UInt32  gain_by_y_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  seg_gain_debug_mode:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  seg_gain_debug_step:3;
        RBus_UInt32  res3:19;
    };
}color_sharp_dm_mkiii_shp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  segpk_mode:2;
        RBus_UInt32  edgext_en:1;
        RBus_UInt32  edgpk_en:1;
        RBus_UInt32  texpk_en:1;
        RBus_UInt32  edgmode:2;
        RBus_UInt32  sobelmode:1;
        RBus_UInt32  sobel_upbnd:8;
        RBus_UInt32  sobel_stepbit:3;
        RBus_UInt32  edg_dlti:1;
        RBus_UInt32  edgextrange:3;
        RBus_UInt32  edgextrange_v:1;
        RBus_UInt32  enhance_mode:2;
        RBus_UInt32  edg_tex_blending_lpf_filter:2;
        RBus_UInt32  edg_tex_blending_lpf_filter_en:1;
        RBus_UInt32  res1:3;
    };
}color_sharp_dm_segpk_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  zdiff_upbnd:8;
        RBus_UInt32  zdiff_stepbit:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  zigsftbit_reg:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  pkdlti_comsign:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  sobelrange_v:1;
        RBus_UInt32  sobelrange_h:2;
        RBus_UInt32  res4:9;
    };
}color_sharp_dm_segpk_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tex_upbnd:8;
        RBus_UInt32  tex_stepbit:3;
        RBus_UInt32  res1:3;
        RBus_UInt32  tex_en:1;
        RBus_UInt32  small_th1:7;
        RBus_UInt32  res2:10;
    };
}color_sharp_dm_segpk_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debugmode:3;
        RBus_UInt32  res1:29;
    };
}color_sharp_dm_segpk_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  tex_d2_shift_bit:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  gain_neg2:2;
        RBus_UInt32  gain_pos2:2;
    };
}color_sharp_dm_peaking_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_peaking_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv2:8;
        RBus_UInt32  res1:24;
    };
}color_sharp_dm_peaking_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  gain:8;
        RBus_UInt32  gaim:8;
        RBus_UInt32  range:4;
        RBus_UInt32  res2:4;
    };
}color_sharp_dm_peaking_lvd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_c2_0:8;
        RBus_UInt32  coef_c1_0:8;
        RBus_UInt32  coef_c0_0:10;
        RBus_UInt32  res1:6;
    };
}color_sharp_dm_2d_shp_tex_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_c6_0:8;
        RBus_UInt32  coef_c5_0:8;
        RBus_UInt32  coef_c4_0:8;
        RBus_UInt32  coef_c3_0:8;
    };
}color_sharp_dm_2d_shp_tex_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_c10_0:8;
        RBus_UInt32  coef_c9_0:8;
        RBus_UInt32  coef_c8_0:8;
        RBus_UInt32  coef_c7_0:8;
    };
}color_sharp_dm_2d_shp_tex_1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  coef_c0_1:8;
    };
}color_sharp_dm_2d_shp_tex_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  coef_c0_2:8;
    };
}color_sharp_dm_2d_shp_tex_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  emf_shift:3;
        RBus_UInt32  emf_range:2;
        RBus_UInt32  emf_range_force_h_11tap:1;
        RBus_UInt32  emf_range_force_v_5tap:1;
        RBus_UInt32  seg0_gain_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  seg1_gain_sel:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  seg2_gain_sel:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  seg0_offset:11;
        RBus_UInt32  res5:1;
    };
}color_sharp_dm_peaking_emf_texture_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emf_mode_sel:1;
        RBus_UInt32  emf_mk2_debug:1;
        RBus_UInt32  aov_range:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  blend_wt:4;
        RBus_UInt32  lowbnd:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  blendstepbit:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  declinebit:2;
        RBus_UInt32  res4:6;
    };
}color_sharp_dm_emfmk2_ctrl_texture_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emf_fixextent_neg:8;
        RBus_UInt32  emf_fixextent_pos:8;
        RBus_UInt32  seg1_offset:11;
        RBus_UInt32  res1:5;
    };
}color_sharp_dm_emf_ext_0_texture_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg2_offset:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  seg0_x:10;
        RBus_UInt32  seg1_x:10;
    };
}color_sharp_dm_emf_ext_1_texture_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  edg_d2_shift_bit:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  gain_neg2:2;
        RBus_UInt32  gain_pos2:2;
    };
}color_sharp_dm_segpk_edgpk3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_segpk_edgpk4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv2:8;
        RBus_UInt32  res1:24;
    };
}color_sharp_dm_segpk_edgpk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_c2_0:8;
        RBus_UInt32  coef_c1_0:8;
        RBus_UInt32  coef_c0_0:10;
        RBus_UInt32  res1:6;
    };
}color_sharp_dm_2d_shp_edge_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_c6_0:8;
        RBus_UInt32  coef_c5_0:8;
        RBus_UInt32  coef_c4_0:8;
        RBus_UInt32  coef_c3_0:8;
    };
}color_sharp_dm_2d_shp_edge_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_c10_0:8;
        RBus_UInt32  coef_c9_0:8;
        RBus_UInt32  coef_c8_0:8;
        RBus_UInt32  coef_c7_0:8;
    };
}color_sharp_dm_2d_shp_edge_1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  coef_c0_1:8;
    };
}color_sharp_dm_2d_shp_edge_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  coef_c0_2:8;
    };
}color_sharp_dm_2d_shp_edge_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  emf_shift:3;
        RBus_UInt32  emf_range:2;
        RBus_UInt32  emf_range_force_h_11tap:1;
        RBus_UInt32  emf_range_force_v_5tap:1;
        RBus_UInt32  seg0_gain_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  seg1_gain_sel:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  seg2_gain_sel:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  seg0_offset:11;
        RBus_UInt32  res5:1;
    };
}color_sharp_dm_peaking_emf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emf_mode_sel:1;
        RBus_UInt32  emf_mk2_debug:1;
        RBus_UInt32  aov_range:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  blend_wt:4;
        RBus_UInt32  lowbnd:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  blendstepbit:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  declinebit:2;
        RBus_UInt32  res4:6;
    };
}color_sharp_dm_emfmk2_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emf_fixextent_neg:8;
        RBus_UInt32  emf_fixextent_pos:8;
        RBus_UInt32  seg1_offset:11;
        RBus_UInt32  res1:5;
    };
}color_sharp_dm_emf_ext_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg2_offset:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  seg0_x:10;
        RBus_UInt32  seg1_x:10;
    };
}color_sharp_dm_emf_ext_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_cds_peaking_gain_cm0_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:8;
        RBus_UInt32  dummy1802b674_17_16:2;
        RBus_UInt32  hv_pos:8;
        RBus_UInt32  dummy1802b674_27_26:2;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_cds_peaking_bound_cm0_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_cds_peaking_gain_cm0_v_edg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:8;
        RBus_UInt32  dummy1802b67c_17_16:2;
        RBus_UInt32  hv_pos:8;
        RBus_UInt32  dummy1802b67c_27_26:2;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_cds_peaking_bound_cm0_v_edg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_cds_peaking_gain_cm1_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:8;
        RBus_UInt32  dummy1802b9e0_17_16:2;
        RBus_UInt32  hv_pos:8;
        RBus_UInt32  dummy1802b9e0_27_26:2;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_cds_peaking_bound_cm1_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_cds_peaking_gain_cm1_v_edg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:8;
        RBus_UInt32  dummy1802b68c_17_16:2;
        RBus_UInt32  hv_pos:8;
        RBus_UInt32  dummy1802b68c_27_26:2;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_cds_peaking_bound_cm1_v_edg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_cds_peaking_gain_cm2_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:8;
        RBus_UInt32  dummy1802b694_17_16:2;
        RBus_UInt32  hv_pos:8;
        RBus_UInt32  dummy1802b694_27_26:2;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_cds_peaking_bound_cm2_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_cds_peaking_gain_cm2_v_edg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:8;
        RBus_UInt32  dummy1802b69c_17_16:2;
        RBus_UInt32  hv_pos:8;
        RBus_UInt32  dummy1802b69c_27_26:2;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_cds_peaking_bound_cm2_v_edg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_cds_peaking_gain_cm3_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:8;
        RBus_UInt32  dummy1802b6a4_17_16:2;
        RBus_UInt32  hv_pos:8;
        RBus_UInt32  dummy1802b6a4_27_26:2;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_cds_peaking_bound_cm3_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_cds_peaking_gain_cm3_v_edg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:8;
        RBus_UInt32  dummy1802b6ac_17_16:2;
        RBus_UInt32  hv_pos:8;
        RBus_UInt32  dummy1802b6ac_27_26:2;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_cds_peaking_bound_cm3_v_edg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  smalledge_ulevel:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  deltaedge_ratio:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  smalledge_ratio:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  bigedge_ratio:5;
        RBus_UInt32  res4:3;
    };
}color_sharp_dm_segpk_edge_coring_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edge_ser_range:4;
        RBus_UInt32  edge_gain_bound:5;
        RBus_UInt32  edge_delta_ext_range:3;
        RBus_UInt32  edge_coring_clip:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  deltaedge_ulevel:5;
        RBus_UInt32  res2:5;
        RBus_UInt32  edge_gain_en:1;
        RBus_UInt32  edge_coring_en:1;
    };
}color_sharp_dm_segpk_edge_coring_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_extendneg:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  gain_extendpos:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  gain_boundneg:4;
        RBus_UInt32  gain_boundpos:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  dir:1;
        RBus_UInt32  slope_gain_en:1;
        RBus_UInt32  res4:5;
    };
}color_sharp_dm_segpk_edgpk_sourceslope_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vpk_c0:9;
        RBus_UInt32  res1:3;
        RBus_UInt32  vpk_c1:9;
        RBus_UInt32  res2:3;
        RBus_UInt32  vpk_c2:8;
    };
}color_sharp_dm_segpk_vpk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vpk_gain_pos:8;
        RBus_UInt32  vpk_gain_neg:8;
        RBus_UInt32  vpk_lv:8;
        RBus_UInt32  res1:8;
    };
}color_sharp_dm_segpk_vpk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vpk_hv_neg:8;
        RBus_UInt32  vpk_hv_pos:8;
        RBus_UInt32  gain_neg2:2;
        RBus_UInt32  gain_pos2:2;
        RBus_UInt32  lv2:8;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_segpk_vpk3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vpk_en:1;
        RBus_UInt32  vemf_en:1;
        RBus_UInt32  v_tex_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  vpk_edg_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  vext_reg:8;
        RBus_UInt32  res3:16;
    };
}color_sharp_dm_segpk_vpk4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  u_lb_0:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  u_ub_0:11;
        RBus_UInt32  res2:1;
        RBus_UInt32  cds_debug:3;
        RBus_UInt32  cds_enable:1;
        RBus_UInt32  cds_cm0_enable:1;
        RBus_UInt32  res3:3;
    };
}color_sharp_dm_cds_cm0_u_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_lb_0:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  v_ub_0:11;
        RBus_UInt32  res2:1;
        RBus_UInt32  cm0_conti_enable:1;
        RBus_UInt32  cm0_conti_area:5;
        RBus_UInt32  cm0_mode:2;
    };
}color_sharp_dm_cds_cm0_v_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cu_0:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  cv_0:10;
        RBus_UInt32  uv_rad_0:9;
        RBus_UInt32  res2:1;
    };
}color_sharp_dm_cds_cm0_u_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cnt_0:24;
        RBus_UInt32  res1:8;
    };
}color_sharp_dm_cds_cm0_v_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_cds_peaking_gain_cm0_tex_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_cds_peaking_bound_cm0_tex_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_cds_peaking_gain_cm0_edge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_cds_peaking_bound_cm0_edge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  u_lb_1:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  u_ub_1:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  cds_cm1_enable:1;
        RBus_UInt32  res3:3;
    };
}color_sharp_dm_cds_cm1_u_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_lb_1:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  v_ub_1:11;
        RBus_UInt32  res2:1;
        RBus_UInt32  cm1_conti_enable:1;
        RBus_UInt32  cm1_conti_area:5;
        RBus_UInt32  cm1_mode:2;
    };
}color_sharp_dm_cds_cm1_v_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cu_1:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  cv_1:10;
        RBus_UInt32  uv_rad_1:9;
        RBus_UInt32  res2:1;
    };
}color_sharp_dm_cds_cm1_u_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cnt_1:24;
        RBus_UInt32  res1:8;
    };
}color_sharp_dm_cds_cm1_v_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_cds_peaking_gain_cm1_tex_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_cds_peaking_bound_cm1_tex_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_cds_peaking_gain_cm1_edge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_cds_peaking_bound_cm1_edge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  u_lb_2:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  u_ub_2:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  cds_cm2_enable:1;
        RBus_UInt32  res3:3;
    };
}color_sharp_dm_cds_cm2_u_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_lb_2:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  v_ub_2:11;
        RBus_UInt32  res2:1;
        RBus_UInt32  cm2_conti_enable:1;
        RBus_UInt32  cm2_conti_area:5;
        RBus_UInt32  cm2_mode:2;
    };
}color_sharp_dm_cds_cm2_v_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cu_2:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  cv_2:10;
        RBus_UInt32  uv_rad_2:9;
        RBus_UInt32  res2:1;
    };
}color_sharp_dm_cds_cm2_u_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cnt_2:24;
        RBus_UInt32  res1:8;
    };
}color_sharp_dm_cds_cm2_v_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_cds_peaking_gain_cm2_tex_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_cds_peaking_bound_cm2_tex_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_cds_peaking_gain_cm2_edge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_cds_peaking_bound_cm2_edge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  u_lb_3:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  u_ub_3:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  cds_cm3_enable:1;
        RBus_UInt32  res3:3;
    };
}color_sharp_dm_cds_cm3_u_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_lb_3:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  v_ub_3:11;
        RBus_UInt32  res2:1;
        RBus_UInt32  cm3_conti_enable:1;
        RBus_UInt32  cm3_conti_area:5;
        RBus_UInt32  cm3_mode:2;
    };
}color_sharp_dm_cds_cm3_v_bound_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cu_3:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  cv_3:10;
        RBus_UInt32  uv_rad_3:9;
        RBus_UInt32  res2:1;
    };
}color_sharp_dm_cds_cm3_u_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cnt_3:24;
        RBus_UInt32  res1:8;
    };
}color_sharp_dm_cds_cm3_v_bound_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_cds_peaking_gain_cm3_tex_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_cds_peaking_bound_cm3_tex_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_neg:8;
        RBus_UInt32  gain_pos:8;
        RBus_UInt32  res1:16;
    };
}color_sharp_dm_cds_peaking_gain_cm3_edge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lv:8;
        RBus_UInt32  hv_neg:10;
        RBus_UInt32  hv_pos:10;
        RBus_UInt32  res1:4;
    };
}color_sharp_dm_cds_peaking_bound_cm3_edge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_c3:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  coef_c2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  coef_c1:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  coef_c0:6;
        RBus_UInt32  res4:2;
    };
}color_sharp_dm_sours_lpf_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coef_c5:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  coef_c4:6;
        RBus_UInt32  res2:18;
    };
}color_sharp_dm_sours_lpf_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  s0:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_shp_gain_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s3:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  s2:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_shp_gain_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s5:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  s4:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_shp_gain_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  s6:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_shp_gain_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1:11;
        RBus_UInt32  res1:21;
    };
}color_sharp_dm_maxmin_shp_step_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s3:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  s2:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_shp_step_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s5:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  s4:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_shp_step_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  s6:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_shp_step_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_0:32;
    };
}color_sharp_dm_cds_cm0_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_0:32;
    };
}color_sharp_dm_cds_cm0_u_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_0:32;
    };
}color_sharp_dm_cds_cm0_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_1:32;
    };
}color_sharp_dm_cds_cm1_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_1:32;
    };
}color_sharp_dm_cds_cm1_u_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_1:32;
    };
}color_sharp_dm_cds_cm1_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_2:32;
    };
}color_sharp_dm_cds_cm2_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_2:32;
    };
}color_sharp_dm_cds_cm2_u_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_2:32;
    };
}color_sharp_dm_cds_cm2_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_3:32;
    };
}color_sharp_dm_cds_cm3_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_3:32;
    };
}color_sharp_dm_cds_cm3_u_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sum_3:32;
    };
}color_sharp_dm_cds_cm3_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src_sel:1;
        RBus_UInt32  hpf_vpf_maxmin_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  dummy1802b818_31_4:28;
    };
}color_sharp_dm_vpk_hpk_add_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  hpf_out_debug_sel:3;
        RBus_UInt32  hpf_out_debug_en:1;
        RBus_UInt32  res2:12;
    };
}color_sharp_dm_gain_curve_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  vpk_tex_en:1;
        RBus_UInt32  vpk_edg_en:1;
        RBus_UInt32  sr_v_3_tex_en:1;
        RBus_UInt32  sr_v_3_edg_en:1;
        RBus_UInt32  sr_v_2_tex_en:1;
        RBus_UInt32  sr_v_2_edg_en:1;
        RBus_UInt32  sr_v_1_tex_en:1;
        RBus_UInt32  sr_v_1_edg_en:1;
        RBus_UInt32  sr_v_0_tex_en:1;
        RBus_UInt32  sr_v_0_edg_en:1;
        RBus_UInt32  sr_3_tex_en:1;
        RBus_UInt32  sr_3_edg_en:1;
        RBus_UInt32  sr_2_tex_en:1;
        RBus_UInt32  sr_2_edg_en:1;
        RBus_UInt32  sr_1_tex_en:1;
        RBus_UInt32  sr_1_edg_en:1;
        RBus_UInt32  sr_0_tex_en:1;
        RBus_UInt32  sr_0_edg_en:1;
        RBus_UInt32  h_tex_filter_en:1;
        RBus_UInt32  h_edg_filter_en:1;
        RBus_UInt32  vpk_sr_edg:1;
        RBus_UInt32  vpk_sr_tex:1;
        RBus_UInt32  sr_pndu:1;
        RBus_UInt32  res2:8;
    };
}color_sharp_dm_sr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  offset:9;
        RBus_UInt32  res1:3;
        RBus_UInt32  gain:9;
        RBus_UInt32  res2:3;
        RBus_UInt32  period:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  sr_detail_v_tex_en:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  sr_detail_tex_en:1;
    };
}color_sharp_dm_sr_continual_detail_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ring_gen_gain:8;
        RBus_UInt32  res2:16;
    };
}color_sharp_dm_sr_continual_detail_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c4:8;
        RBus_UInt32  c3:8;
        RBus_UInt32  c2:8;
        RBus_UInt32  c1:8;
    };
}color_sharp_dm_sr_9tap_hpf_h_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c2:8;
        RBus_UInt32  c1:8;
        RBus_UInt32  res1:7;
        RBus_UInt32  c0:9;
    };
}color_sharp_dm_sr_13tap_hpf_h_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c6:8;
        RBus_UInt32  c5:8;
        RBus_UInt32  c4:8;
        RBus_UInt32  c3:8;
    };
}color_sharp_dm_sr_13tap_hpf_h_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c2:8;
        RBus_UInt32  c1:8;
        RBus_UInt32  res1:7;
        RBus_UInt32  c0:9;
    };
}color_sharp_dm_sr_21tap_hpf_h_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c6:8;
        RBus_UInt32  c5:8;
        RBus_UInt32  c4:8;
        RBus_UInt32  c3:8;
    };
}color_sharp_dm_sr_21tap_hpf_h_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c10:8;
        RBus_UInt32  c9:8;
        RBus_UInt32  c8:8;
        RBus_UInt32  c7:8;
    };
}color_sharp_dm_sr_21tap_hpf_h_coef_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  c2:8;
        RBus_UInt32  c1:8;
    };
}color_sharp_dm_sr_9tap_hpf_v_coef_0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  c0:9;
    };
}color_sharp_dm_sr_9tap_hpf_v_coef_1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  c2:8;
        RBus_UInt32  c1:8;
    };
}color_sharp_dm_sr_9tap_hpf_v_coef_1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  c0:9;
    };
}color_sharp_dm_sr_9tap_hpf_v_coef_2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  c2:8;
        RBus_UInt32  c1:8;
    };
}color_sharp_dm_sr_9tap_hpf_v_coef_2_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c1:8;
        RBus_UInt32  res1:15;
        RBus_UInt32  c0:9;
    };
}color_sharp_dm_sr_11tap_hpf_h_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c5:8;
        RBus_UInt32  c4:8;
        RBus_UInt32  c3:8;
        RBus_UInt32  c2:8;
    };
}color_sharp_dm_sr_11tap_hpf_h_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  c0:9;
    };
}color_sharp_dm_sr_9tap_hpf_v_coef_3_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  c2:8;
        RBus_UInt32  c1:8;
    };
}color_sharp_dm_sr_9tap_hpf_v_coef_3_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_debug:3;
        RBus_UInt32  res1:29;
    };
}color_sharp_dm_sr_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cblv2:4;
        RBus_UInt32  cblv1:4;
        RBus_UInt32  cb2:8;
        RBus_UInt32  cb1:8;
    };
}color_sharp_dm_sr_bias_coef_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vpk_edg_gain_pos:8;
        RBus_UInt32  vpk_edg_gain_neg:8;
        RBus_UInt32  vpk_edg_lv:8;
        RBus_UInt32  res1:8;
    };
}color_sharp_dm_segpk_vpk5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vpk_edg_hv_neg:10;
        RBus_UInt32  vpk_edg_hv_pos:10;
        RBus_UInt32  vpk_edg_gain_neg2:2;
        RBus_UInt32  vpk_edg_gain_pos2:2;
        RBus_UInt32  edg_lv2:8;
    };
}color_sharp_dm_segpk_vpk6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gain_extendneg_v:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  gain_extendpos_v:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  gain_boundneg_v:4;
        RBus_UInt32  gain_boundpos_v:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  dir_v:1;
        RBus_UInt32  v_slope_gain_en:1;
        RBus_UInt32  res4:5;
    };
}color_sharp_dm_segpk_edgpk_vsourceslope_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  s0:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_lpf_weit_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s3:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  s2:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_lpf_weit_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s5:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  s4:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_lpf_weit_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  s6:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_lpf_weit_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1:11;
        RBus_UInt32  res1:21;
    };
}color_sharp_dm_maxmin_lpf_step_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s3:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  s2:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_lpf_step_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s5:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  s4:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_lpf_step_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  s6:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_lpf_step_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  s0:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_gain_by_y_gain_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s3:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  s2:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_gain_by_y_gain_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s5:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  s4:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_gain_by_y_gain_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  s6:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_gain_by_y_gain_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1:11;
        RBus_UInt32  res1:21;
    };
}color_sharp_dm_maxmin_gain_by_y_step_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s3:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  s2:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_gain_by_y_step_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s5:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  s4:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_gain_by_y_step_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  s6:11;
        RBus_UInt32  res2:5;
    };
}color_sharp_dm_maxmin_gain_by_y_step_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_0_enable:1;
        RBus_UInt32  cds_region_1_enable:1;
        RBus_UInt32  cds_region_2_enable:1;
        RBus_UInt32  cds_region_3_enable:1;
        RBus_UInt32  cds_region_0_enable_0:1;
        RBus_UInt32  cds_region_0_enable_1:1;
        RBus_UInt32  cds_region_0_enable_2:1;
        RBus_UInt32  cds_region_0_enable_3:1;
        RBus_UInt32  cds_region_0_enable_4:1;
        RBus_UInt32  cds_region_0_enable_5:1;
        RBus_UInt32  cds_region_1_enable_0:1;
        RBus_UInt32  cds_region_1_enable_1:1;
        RBus_UInt32  cds_region_1_enable_2:1;
        RBus_UInt32  cds_region_1_enable_3:1;
        RBus_UInt32  cds_region_1_enable_4:1;
        RBus_UInt32  cds_region_1_enable_5:1;
        RBus_UInt32  cds_region_2_enable_0:1;
        RBus_UInt32  cds_region_2_enable_1:1;
        RBus_UInt32  cds_region_2_enable_2:1;
        RBus_UInt32  cds_region_2_enable_3:1;
        RBus_UInt32  cds_region_2_enable_4:1;
        RBus_UInt32  cds_region_2_enable_5:1;
        RBus_UInt32  cds_region_3_enable_0:1;
        RBus_UInt32  cds_region_3_enable_1:1;
        RBus_UInt32  cds_region_3_enable_2:1;
        RBus_UInt32  cds_region_3_enable_3:1;
        RBus_UInt32  cds_region_3_enable_4:1;
        RBus_UInt32  cds_region_3_enable_5:1;
        RBus_UInt32  res1:4;
    };
}color_sharp_shp_cds_region_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_0_start_i:12;
        RBus_UInt32  cds_region_0_end_i:12;
        RBus_UInt32  cds_region_0_smooth:8;
    };
}color_sharp_shp_cds_region0_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_0_start_j:12;
        RBus_UInt32  cds_region_0_end_j:12;
        RBus_UInt32  res1:8;
    };
}color_sharp_shp_cds_region0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_0_ilu:8;
        RBus_UInt32  cds_region_0_ild:8;
        RBus_UInt32  cds_region_0_jlu:8;
        RBus_UInt32  cds_region_0_jld:8;
    };
}color_sharp_shp_cds_region0_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_0_iru:8;
        RBus_UInt32  cds_region_0_ird:8;
        RBus_UInt32  cds_region_0_jru:8;
        RBus_UInt32  cds_region_0_jrd:8;
    };
}color_sharp_shp_cds_region0_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_0_ilum:2;
        RBus_UInt32  cds_region_0_ildm:2;
        RBus_UInt32  cds_region_0_jlum:2;
        RBus_UInt32  cds_region_0_jldm:2;
        RBus_UInt32  cds_region_0_irum:2;
        RBus_UInt32  cds_region_0_irdm:2;
        RBus_UInt32  cds_region_0_jrum:2;
        RBus_UInt32  cds_region_0_jrdm:2;
        RBus_UInt32  res1:16;
    };
}color_sharp_shp_cds_region0_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_1_start_i:12;
        RBus_UInt32  cds_region_1_end_i:12;
        RBus_UInt32  cds_region_1_smooth:8;
    };
}color_sharp_shp_cds_region1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_1_start_j:12;
        RBus_UInt32  cds_region_1_end_j:12;
        RBus_UInt32  res1:8;
    };
}color_sharp_shp_cds_region1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_1_ilu:8;
        RBus_UInt32  cds_region_1_ild:8;
        RBus_UInt32  cds_region_1_jlu:8;
        RBus_UInt32  cds_region_1_jld:8;
    };
}color_sharp_shp_cds_region1_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_1_iru:8;
        RBus_UInt32  cds_region_1_ird:8;
        RBus_UInt32  cds_region_1_jru:8;
        RBus_UInt32  cds_region_1_jrd:8;
    };
}color_sharp_shp_cds_region1_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_1_ilum:2;
        RBus_UInt32  cds_region_1_ildm:2;
        RBus_UInt32  cds_region_1_jlum:2;
        RBus_UInt32  cds_region_1_jldm:2;
        RBus_UInt32  cds_region_1_irum:2;
        RBus_UInt32  cds_region_1_irdm:2;
        RBus_UInt32  cds_region_1_jrum:2;
        RBus_UInt32  cds_region_1_jrdm:2;
        RBus_UInt32  res1:16;
    };
}color_sharp_shp_cds_region1_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_2_start_i:12;
        RBus_UInt32  cds_region_2_end_i:12;
        RBus_UInt32  cds_region_2_smooth:8;
    };
}color_sharp_shp_cds_region2_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_2_start_j:12;
        RBus_UInt32  cds_region_2_end_j:12;
        RBus_UInt32  res1:8;
    };
}color_sharp_shp_cds_region2_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_2_ilu:8;
        RBus_UInt32  cds_region_2_ild:8;
        RBus_UInt32  cds_region_2_jlu:8;
        RBus_UInt32  cds_region_2_jld:8;
    };
}color_sharp_shp_cds_region2_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_2_iru:8;
        RBus_UInt32  cds_region_2_ird:8;
        RBus_UInt32  cds_region_2_jru:8;
        RBus_UInt32  cds_region_2_jrd:8;
    };
}color_sharp_shp_cds_region2_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_2_ilum:2;
        RBus_UInt32  cds_region_2_ildm:2;
        RBus_UInt32  cds_region_2_jlum:2;
        RBus_UInt32  cds_region_2_jldm:2;
        RBus_UInt32  cds_region_2_irum:2;
        RBus_UInt32  cds_region_2_irdm:2;
        RBus_UInt32  cds_region_2_jrum:2;
        RBus_UInt32  cds_region_2_jrdm:2;
        RBus_UInt32  res1:16;
    };
}color_sharp_shp_cds_region2_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_3_start_i:12;
        RBus_UInt32  cds_region_3_end_i:12;
        RBus_UInt32  cds_region_3_smooth:8;
    };
}color_sharp_shp_cds_region3_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_3_start_j:12;
        RBus_UInt32  cds_region_3_end_j:12;
        RBus_UInt32  res1:8;
    };
}color_sharp_shp_cds_region3_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_3_ilu:8;
        RBus_UInt32  cds_region_3_ild:8;
        RBus_UInt32  cds_region_3_jlu:8;
        RBus_UInt32  cds_region_3_jld:8;
    };
}color_sharp_shp_cds_region3_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_3_iru:8;
        RBus_UInt32  cds_region_3_ird:8;
        RBus_UInt32  cds_region_3_jru:8;
        RBus_UInt32  cds_region_3_jrd:8;
    };
}color_sharp_shp_cds_region3_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_3_ilum:2;
        RBus_UInt32  cds_region_3_ildm:2;
        RBus_UInt32  cds_region_3_jlum:2;
        RBus_UInt32  cds_region_3_jldm:2;
        RBus_UInt32  cds_region_3_irum:2;
        RBus_UInt32  cds_region_3_irdm:2;
        RBus_UInt32  cds_region_3_jrum:2;
        RBus_UInt32  cds_region_3_jrdm:2;
        RBus_UInt32  res1:16;
    };
}color_sharp_shp_cds_region3_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_4_start_i:12;
        RBus_UInt32  cds_region_4_end_i:12;
        RBus_UInt32  res1:8;
    };
}color_sharp_shp_cds_region4_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_4_start_j:12;
        RBus_UInt32  cds_region_4_end_j:12;
        RBus_UInt32  res1:8;
    };
}color_sharp_shp_cds_region4_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_4_ilu:8;
        RBus_UInt32  cds_region_4_ild:8;
        RBus_UInt32  cds_region_4_jlu:8;
        RBus_UInt32  cds_region_4_jld:8;
    };
}color_sharp_shp_cds_region4_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_4_iru:8;
        RBus_UInt32  cds_region_4_ird:8;
        RBus_UInt32  cds_region_4_jru:8;
        RBus_UInt32  cds_region_4_jrd:8;
    };
}color_sharp_shp_cds_region4_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_4_ilum:2;
        RBus_UInt32  cds_region_4_ildm:2;
        RBus_UInt32  cds_region_4_jlum:2;
        RBus_UInt32  cds_region_4_jldm:2;
        RBus_UInt32  cds_region_4_irum:2;
        RBus_UInt32  cds_region_4_irdm:2;
        RBus_UInt32  cds_region_4_jrum:2;
        RBus_UInt32  cds_region_4_jrdm:2;
        RBus_UInt32  res1:16;
    };
}color_sharp_shp_cds_region4_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_5_start_i:12;
        RBus_UInt32  cds_region_5_end_i:12;
        RBus_UInt32  res1:8;
    };
}color_sharp_shp_cds_region5_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_5_start_j:12;
        RBus_UInt32  cds_region_5_end_j:12;
        RBus_UInt32  res1:8;
    };
}color_sharp_shp_cds_region5_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_5_ilu:8;
        RBus_UInt32  cds_region_5_ild:8;
        RBus_UInt32  cds_region_5_jlu:8;
        RBus_UInt32  cds_region_5_jld:8;
    };
}color_sharp_shp_cds_region5_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_5_iru:8;
        RBus_UInt32  cds_region_5_ird:8;
        RBus_UInt32  cds_region_5_jru:8;
        RBus_UInt32  cds_region_5_jrd:8;
    };
}color_sharp_shp_cds_region5_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_5_ilum:2;
        RBus_UInt32  cds_region_5_ildm:2;
        RBus_UInt32  cds_region_5_jlum:2;
        RBus_UInt32  cds_region_5_jldm:2;
        RBus_UInt32  cds_region_5_irum:2;
        RBus_UInt32  cds_region_5_irdm:2;
        RBus_UInt32  cds_region_5_jrum:2;
        RBus_UInt32  cds_region_5_jrdm:2;
        RBus_UInt32  res1:16;
    };
}color_sharp_shp_cds_region5_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cds_region_predict_sel:1;
        RBus_UInt32  cds_region_predict_1:9;
        RBus_UInt32  cds_region_predict_2:9;
        RBus_UInt32  res1:13;
    };
}color_sharp_shp_cds_predict_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_start:1;
        RBus_UInt32  crc_conti:1;
        RBus_UInt32  res1:30;
    };
}color_sharp_shp_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  shp_crc_result:32;
    };
}color_sharp_shp_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  drf_fail_3:1;
        RBus_UInt32  drf_fail_2:1;
        RBus_UInt32  drf_fail_1:1;
        RBus_UInt32  drf_fail_0:1;
        RBus_UInt32  bist_fail_3:1;
        RBus_UInt32  bist_fail_2:1;
        RBus_UInt32  bist_fail_1:1;
        RBus_UInt32  bist_fail_0:1;
        RBus_UInt32  dvs:4;
        RBus_UInt32  dvse:1;
        RBus_UInt32  ls:1;
        RBus_UInt32  test:1;
        RBus_UInt32  res2:9;
    };
}color_sharp_peak2d_bist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dlti_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  ffd2_en:1;
        RBus_UInt32  d1_cp_shift:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  dcp_th:8;
        RBus_UInt32  pnth:10;
        RBus_UInt32  maxlen:3;
        RBus_UInt32  res3:2;
        RBus_UInt32  data_sel:1;
    };
}color_sharp_shp_dlti_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ffd1_th:10;
        RBus_UInt32  ffd1_ratio:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  flat_score_en:1;
        RBus_UInt32  flat_score_thl:8;
        RBus_UInt32  flat_s_range:2;
        RBus_UInt32  ffd0_start:1;
        RBus_UInt32  ovc_extend:1;
        RBus_UInt32  res2:1;
    };
}color_sharp_shp_dlti_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ffd2_range2l:10;
        RBus_UInt32  ffd2_range2r:10;
        RBus_UInt32  ffd2_ratio:7;
        RBus_UInt32  res1:2;
        RBus_UInt32  dlti_debug:3;
    };
}color_sharp_shp_dlti_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tnoff0:8;
        RBus_UInt32  tnoff1:8;
        RBus_UInt32  tnoff2:8;
        RBus_UInt32  res1:8;
    };
}color_sharp_shp_dlti_gain_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tnoff3:8;
        RBus_UInt32  tnoff4:8;
        RBus_UInt32  tnoff5:8;
        RBus_UInt32  res1:8;
    };
}color_sharp_shp_dlti_gain_offset_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tnoff6:8;
        RBus_UInt32  tnoff7:8;
        RBus_UInt32  tnoff8:8;
        RBus_UInt32  res1:8;
    };
}color_sharp_shp_dlti_gain_offset_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tnoff9:8;
        RBus_UInt32  tnoff10:8;
        RBus_UInt32  tnoff11:8;
        RBus_UInt32  res1:8;
    };
}color_sharp_shp_dlti_gain_offset_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tnoff12:8;
        RBus_UInt32  tnoff13:8;
        RBus_UInt32  tnoff14:8;
        RBus_UInt32  res1:8;
    };
}color_sharp_shp_dlti_gain_offset_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  offset_pos:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  gain_pos:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  over_enhance:1;
        RBus_UInt32  res3:3;
    };
}color_sharp_shp_dlti_over_enhance_gain_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  offset_neg:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  gain_neg:9;
        RBus_UInt32  res2:11;
    };
}color_sharp_shp_dlti_over_enhance_gain_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  cur_sel:1;
        RBus_UInt32  uvalign_en:1;
        RBus_UInt32  dcti_mode:1;
        RBus_UInt32  uvgain:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  offdiv:2;
        RBus_UInt32  engdiv:2;
        RBus_UInt32  lpmode:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  psmth:8;
        RBus_UInt32  maxlen:3;
        RBus_UInt32  data_sel:1;
    };
}color_sharp_shp_dcti_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blending_mode:1;
        RBus_UInt32  median_mode:1;
        RBus_UInt32  vlp_mode:3;
        RBus_UInt32  hp_mode:3;
        RBus_UInt32  steep_mode:3;
        RBus_UInt32  th_coring:5;
        RBus_UInt32  th_steep:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  rate_steep:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  tran_mode:3;
        RBus_UInt32  uvsync_en:1;
    };
}color_sharp_shp_dcti_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  th_smooth:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  rate_smooth:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  region_mode:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  th_tran:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  rate_tran:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  maxminlen:3;
        RBus_UInt32  res6:1;
    };
}color_sharp_shp_dcti_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  th_gtran:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  align_mingain:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  th_align:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  rate_align:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  rate_align_weight:3;
        RBus_UInt32  res5:1;
    };
}color_sharp_shp_dcti_ctrl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  th_align_weight:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  th_stair:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  rate_stair1:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  rate_stair2:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  th_uvmindiff:7;
        RBus_UInt32  res5:1;
    };
}color_sharp_shp_dcti_ctrl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  th_engsync:6;
        RBus_UInt32  rate_uvmindiff:3;
        RBus_UInt32  rate_engsync:3;
        RBus_UInt32  res1:19;
        RBus_UInt32  res2:1;
    };
}color_sharp_shp_dcti_ctrl_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  res2:6;
        RBus_UInt32  debug_mode:3;
        RBus_UInt32  debug_shiftbit:3;
        RBus_UInt32  res3:14;
    };
}color_sharp_shp_dcti_ctrl_7_RBUS;




#endif 


#endif 
