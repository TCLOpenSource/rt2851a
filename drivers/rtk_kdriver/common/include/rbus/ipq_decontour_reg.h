/**
* @file Mac7p-DesignSpec-I-Domain-Decontour
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_IPQ_DECONTOUR_REG_H_
#define _RBUS_IPQ_DECONTOUR_REG_H_

#include "rbus_types.h"



//  IPQ_DECONTOUR Register Address
#define  IPQ_DECONTOUR_De_Contour_CTRL                                          0x18025700
#define  IPQ_DECONTOUR_De_Contour_CTRL_reg_addr                                  "0xB8025700"
#define  IPQ_DECONTOUR_De_Contour_CTRL_reg                                       0xB8025700
#define  IPQ_DECONTOUR_De_Contour_CTRL_inst_addr                                 "0x0000"
#define  set_IPQ_DECONTOUR_De_Contour_CTRL_reg(data)                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_CTRL_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_CTRL_reg                                   (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_CTRL_reg))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_en_shift                           (31)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_neighbor_far_shift                 (30)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_debug_en_shift                     (29)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_debug_mode_shift                   (26)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_yc_mode_shift                      (23)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_bottleneck_en_shift                (21)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_weight_lpf_en_shift          (20)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_lowbd_shift                  (8)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_step_shift                   (4)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_snr_blend_mode_shift               (0)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_en_mask                            (0x80000000)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_neighbor_far_mask                  (0x40000000)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_debug_en_mask                      (0x20000000)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_debug_mode_mask                    (0x0C000000)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_yc_mode_mask                       (0x01800000)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_bottleneck_en_mask                 (0x00200000)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_weight_lpf_en_mask           (0x00100000)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_lowbd_mask                   (0x0000FF00)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_step_mask                    (0x00000030)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_snr_blend_mode_mask                (0x00000003)
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_en(data)                           (0x80000000&((data)<<31))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_neighbor_far(data)                 (0x40000000&((data)<<30))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_debug_en(data)                     (0x20000000&((data)<<29))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_debug_mode(data)                   (0x0C000000&((data)<<26))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_yc_mode(data)                      (0x01800000&((data)<<23))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_bottleneck_en(data)                (0x00200000&((data)<<21))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_weight_lpf_en(data)          (0x00100000&((data)<<20))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_lowbd(data)                  (0x0000FF00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_blend_step(data)                   (0x00000030&((data)<<4))
#define  IPQ_DECONTOUR_De_Contour_CTRL_decont_snr_blend_mode(data)               (0x00000003&(data))
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_en(data)                       ((0x80000000&(data))>>31)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_neighbor_far(data)             ((0x40000000&(data))>>30)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_debug_en(data)                 ((0x20000000&(data))>>29)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_debug_mode(data)               ((0x0C000000&(data))>>26)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_yc_mode(data)                  ((0x01800000&(data))>>23)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_bottleneck_en(data)            ((0x00200000&(data))>>21)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_blend_weight_lpf_en(data)      ((0x00100000&(data))>>20)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_blend_lowbd(data)              ((0x0000FF00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_blend_step(data)               ((0x00000030&(data))>>4)
#define  IPQ_DECONTOUR_De_Contour_CTRL_get_decont_snr_blend_mode(data)           (0x00000003&(data))

#define  IPQ_DECONTOUR_De_Contour_Contrast_Y                                    0x18025704
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_reg_addr                            "0xB8025704"
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_reg                                 0xB8025704
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_inst_addr                           "0x0001"
#define  set_IPQ_DECONTOUR_De_Contour_Contrast_Y_reg(data)                       (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast_Y_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Contrast_Y_reg                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast_Y_reg))
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_contrast_th_y_info_shift     (19)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_neighbor_diff_th_y_info_shift (13)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_gradation_th_y_info_shift    (8)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_maxmindiff_th_y_info_shift   (0)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_contrast_th_y_info_mask      (0x0FF80000)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_neighbor_diff_th_y_info_mask (0x0007E000)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_gradation_th_y_info_mask     (0x00001F00)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_maxmindiff_th_y_info_mask    (0x000000FF)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_contrast_th_y_info(data)     (0x0FF80000&((data)<<19))
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_neighbor_diff_th_y_info(data) (0x0007E000&((data)<<13))
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_gradation_th_y_info(data)    (0x00001F00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_decont_maxmindiff_th_y_info(data)   (0x000000FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_get_decont_contrast_th_y_info(data) ((0x0FF80000&(data))>>19)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_get_decont_neighbor_diff_th_y_info(data) ((0x0007E000&(data))>>13)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_get_decont_gradation_th_y_info(data) ((0x00001F00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_Contrast_Y_get_decont_maxmindiff_th_y_info(data) (0x000000FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Contrast_C                                    0x18025708
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_reg_addr                            "0xB8025708"
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_reg                                 0xB8025708
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_inst_addr                           "0x0002"
#define  set_IPQ_DECONTOUR_De_Contour_Contrast_C_reg(data)                       (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast_C_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Contrast_C_reg                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast_C_reg))
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_contrast_th_c_info_shift     (19)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_neighbor_diff_th_c_info_shift (13)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_gradation_th_c_info_shift    (8)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_maxmindiff_th_c_info_shift   (0)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_contrast_th_c_info_mask      (0x3FF80000)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_neighbor_diff_th_c_info_mask (0x0007E000)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_gradation_th_c_info_mask     (0x00001F00)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_maxmindiff_th_c_info_mask    (0x000000FF)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_contrast_th_c_info(data)     (0x3FF80000&((data)<<19))
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_neighbor_diff_th_c_info(data) (0x0007E000&((data)<<13))
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_gradation_th_c_info(data)    (0x00001F00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_decont_maxmindiff_th_c_info(data)   (0x000000FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_get_decont_contrast_th_c_info(data) ((0x3FF80000&(data))>>19)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_get_decont_neighbor_diff_th_c_info(data) ((0x0007E000&(data))>>13)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_get_decont_gradation_th_c_info(data) ((0x00001F00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_Contrast_C_get_decont_maxmindiff_th_c_info(data) (0x000000FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Contrast                                      0x1802570C
#define  IPQ_DECONTOUR_De_Contour_Contrast_reg_addr                              "0xB802570C"
#define  IPQ_DECONTOUR_De_Contour_Contrast_reg                                   0xB802570C
#define  IPQ_DECONTOUR_De_Contour_Contrast_inst_addr                             "0x0003"
#define  set_IPQ_DECONTOUR_De_Contour_Contrast_reg(data)                         (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Contrast_reg                               (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast_reg))
#define  IPQ_DECONTOUR_De_Contour_Contrast_decont_contrast_th_y_shift            (16)
#define  IPQ_DECONTOUR_De_Contour_Contrast_decont_contrast_th_c_shift            (0)
#define  IPQ_DECONTOUR_De_Contour_Contrast_decont_contrast_th_y_mask             (0x03FF0000)
#define  IPQ_DECONTOUR_De_Contour_Contrast_decont_contrast_th_c_mask             (0x000003FF)
#define  IPQ_DECONTOUR_De_Contour_Contrast_decont_contrast_th_y(data)            (0x03FF0000&((data)<<16))
#define  IPQ_DECONTOUR_De_Contour_Contrast_decont_contrast_th_c(data)            (0x000003FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Contrast_get_decont_contrast_th_y(data)        ((0x03FF0000&(data))>>16)
#define  IPQ_DECONTOUR_De_Contour_Contrast_get_decont_contrast_th_c(data)        (0x000003FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff                                 0x18025710
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_reg_addr                         "0xB8025710"
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_reg                              0xB8025710
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_inst_addr                        "0x0004"
#define  set_IPQ_DECONTOUR_De_Contour_Neighbor_Diff_reg(data)                    (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Neighbor_Diff_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Neighbor_Diff_reg                          (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Neighbor_Diff_reg))
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th2_y_shift (24)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th_y_shift  (16)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th2_c_shift (8)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th_c_shift  (0)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th2_y_mask  (0x3F000000)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th_y_mask   (0x003F0000)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th2_c_mask  (0x00003F00)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th_c_mask   (0x0000003F)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th2_y(data) (0x3F000000&((data)<<24))
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th_y(data)  (0x003F0000&((data)<<16))
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th2_c(data) (0x00003F00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_decont_neighbor_diff_th_c(data)  (0x0000003F&(data))
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_get_decont_neighbor_diff_th2_y(data) ((0x3F000000&(data))>>24)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_get_decont_neighbor_diff_th_y(data) ((0x003F0000&(data))>>16)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_get_decont_neighbor_diff_th2_c(data) ((0x00003F00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_Neighbor_Diff_get_decont_neighbor_diff_th_c(data) (0x0000003F&(data))

#define  IPQ_DECONTOUR_De_Contour_Threshold                                     0x18025714
#define  IPQ_DECONTOUR_De_Contour_Threshold_reg_addr                             "0xB8025714"
#define  IPQ_DECONTOUR_De_Contour_Threshold_reg                                  0xB8025714
#define  IPQ_DECONTOUR_De_Contour_Threshold_inst_addr                            "0x0005"
#define  set_IPQ_DECONTOUR_De_Contour_Threshold_reg(data)                        (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Threshold_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Threshold_reg                              (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Threshold_reg))
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_gradation_th_y_shift          (26)
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_dark_th_shift                 (16)
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_gradation_th_c_shift          (10)
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_dark_contrast_th_shift        (0)
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_gradation_th_y_mask           (0x7C000000)
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_dark_th_mask                  (0x03FF0000)
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_gradation_th_c_mask           (0x00007C00)
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_dark_contrast_th_mask         (0x000003FF)
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_gradation_th_y(data)          (0x7C000000&((data)<<26))
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_dark_th(data)                 (0x03FF0000&((data)<<16))
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_gradation_th_c(data)          (0x00007C00&((data)<<10))
#define  IPQ_DECONTOUR_De_Contour_Threshold_decont_dark_contrast_th(data)        (0x000003FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Threshold_get_decont_gradation_th_y(data)      ((0x7C000000&(data))>>26)
#define  IPQ_DECONTOUR_De_Contour_Threshold_get_decont_dark_th(data)             ((0x03FF0000&(data))>>16)
#define  IPQ_DECONTOUR_De_Contour_Threshold_get_decont_gradation_th_c(data)      ((0x00007C00&(data))>>10)
#define  IPQ_DECONTOUR_De_Contour_Threshold_get_decont_dark_contrast_th(data)    (0x000003FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Diff_th                                       0x18025718
#define  IPQ_DECONTOUR_De_Contour_Diff_th_reg_addr                               "0xB8025718"
#define  IPQ_DECONTOUR_De_Contour_Diff_th_reg                                    0xB8025718
#define  IPQ_DECONTOUR_De_Contour_Diff_th_inst_addr                              "0x0006"
#define  set_IPQ_DECONTOUR_De_Contour_Diff_th_reg(data)                          (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Diff_th_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Diff_th_reg                                (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Diff_th_reg))
#define  IPQ_DECONTOUR_De_Contour_Diff_th_decont_maxmindiff_th_c_shift           (8)
#define  IPQ_DECONTOUR_De_Contour_Diff_th_decont_maxmindiff_th_y_shift           (0)
#define  IPQ_DECONTOUR_De_Contour_Diff_th_decont_maxmindiff_th_c_mask            (0x0000FF00)
#define  IPQ_DECONTOUR_De_Contour_Diff_th_decont_maxmindiff_th_y_mask            (0x000000FF)
#define  IPQ_DECONTOUR_De_Contour_Diff_th_decont_maxmindiff_th_c(data)           (0x0000FF00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_Diff_th_decont_maxmindiff_th_y(data)           (0x000000FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Diff_th_get_decont_maxmindiff_th_c(data)       ((0x0000FF00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_Diff_th_get_decont_maxmindiff_th_y(data)       (0x000000FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Counter                                       0x1802571C
#define  IPQ_DECONTOUR_De_Contour_Counter_reg_addr                               "0xB802571C"
#define  IPQ_DECONTOUR_De_Contour_Counter_reg                                    0xB802571C
#define  IPQ_DECONTOUR_De_Contour_Counter_inst_addr                              "0x0007"
#define  set_IPQ_DECONTOUR_De_Contour_Counter_reg(data)                          (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Counter_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Counter_reg                                (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Counter_reg))
#define  IPQ_DECONTOUR_De_Contour_Counter_decont_contour_cnt_shift               (0)
#define  IPQ_DECONTOUR_De_Contour_Counter_decont_contour_cnt_mask                (0x00FFFFFF)
#define  IPQ_DECONTOUR_De_Contour_Counter_decont_contour_cnt(data)               (0x00FFFFFF&(data))
#define  IPQ_DECONTOUR_De_Contour_Counter_get_decont_contour_cnt(data)           (0x00FFFFFF&(data))

#define  IPQ_DECONTOUR_De_Contour_Avfilter_Counter                              0x18025720
#define  IPQ_DECONTOUR_De_Contour_Avfilter_Counter_reg_addr                      "0xB8025720"
#define  IPQ_DECONTOUR_De_Contour_Avfilter_Counter_reg                           0xB8025720
#define  IPQ_DECONTOUR_De_Contour_Avfilter_Counter_inst_addr                     "0x0008"
#define  set_IPQ_DECONTOUR_De_Contour_Avfilter_Counter_reg(data)                 (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Avfilter_Counter_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Avfilter_Counter_reg                       (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Avfilter_Counter_reg))
#define  IPQ_DECONTOUR_De_Contour_Avfilter_Counter_decont_avfilter_cnt_shift     (0)
#define  IPQ_DECONTOUR_De_Contour_Avfilter_Counter_decont_avfilter_cnt_mask      (0x00FFFFFF)
#define  IPQ_DECONTOUR_De_Contour_Avfilter_Counter_decont_avfilter_cnt(data)     (0x00FFFFFF&(data))
#define  IPQ_DECONTOUR_De_Contour_Avfilter_Counter_get_decont_avfilter_cnt(data) (0x00FFFFFF&(data))

#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl                                     0x18025724
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_reg_addr                             "0xB8025724"
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_reg                                  0xB8025724
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_inst_addr                            "0x0009"
#define  set_IPQ_DECONTOUR_De_Contour_Hist_Ctrl_reg(data)                        (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Hist_Ctrl_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Hist_Ctrl_reg                              (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Hist_Ctrl_reg))
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_rden_shift  (31)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_read_mode_shift (30)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_locken_shift (29)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_raddr_shift (25)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_rden_mask   (0x80000000)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_read_mode_mask (0x40000000)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_locken_mask (0x20000000)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_raddr_mask  (0x1E000000)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_rden(data)  (0x80000000&((data)<<31))
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_read_mode(data) (0x40000000&((data)<<30))
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_locken(data) (0x20000000&((data)<<29))
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_decont_filter_range_hist_raddr(data) (0x1E000000&((data)<<25))
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_get_decont_filter_range_hist_rden(data) ((0x80000000&(data))>>31)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_get_decont_filter_range_hist_read_mode(data) ((0x40000000&(data))>>30)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_get_decont_filter_range_hist_locken(data) ((0x20000000&(data))>>29)
#define  IPQ_DECONTOUR_De_Contour_Hist_Ctrl_get_decont_filter_range_hist_raddr(data) ((0x1E000000&(data))>>25)

#define  IPQ_DECONTOUR_De_Contour_Hist_Data                                     0x18025728
#define  IPQ_DECONTOUR_De_Contour_Hist_Data_reg_addr                             "0xB8025728"
#define  IPQ_DECONTOUR_De_Contour_Hist_Data_reg                                  0xB8025728
#define  IPQ_DECONTOUR_De_Contour_Hist_Data_inst_addr                            "0x000A"
#define  set_IPQ_DECONTOUR_De_Contour_Hist_Data_reg(data)                        (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Hist_Data_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Hist_Data_reg                              (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Hist_Data_reg))
#define  IPQ_DECONTOUR_De_Contour_Hist_Data_decont_filter_range_hist_shift       (0)
#define  IPQ_DECONTOUR_De_Contour_Hist_Data_decont_filter_range_hist_mask        (0x00FFFFFF)
#define  IPQ_DECONTOUR_De_Contour_Hist_Data_decont_filter_range_hist(data)       (0x00FFFFFF&(data))
#define  IPQ_DECONTOUR_De_Contour_Hist_Data_get_decont_filter_range_hist(data)   (0x00FFFFFF&(data))

#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist                                    0x1802572C
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_reg_addr                            "0xB802572C"
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_reg                                 0xB802572C
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_inst_addr                           "0x000B"
#define  set_IPQ_DECONTOUR_De_Contour_YDIFF_Hist_reg(data)                       (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_YDIFF_Hist_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_YDIFF_Hist_reg                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_YDIFF_Hist_reg))
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_rden_shift   (31)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_read_mode_shift (30)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_locken_shift (29)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_raddr_shift  (26)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_shift        (0)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_rden_mask    (0x80000000)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_read_mode_mask (0x40000000)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_locken_mask  (0x20000000)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_raddr_mask   (0x1C000000)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_mask         (0x00FFFFFF)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_rden(data)   (0x80000000&((data)<<31))
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_read_mode(data) (0x40000000&((data)<<30))
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_locken(data) (0x20000000&((data)<<29))
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist_raddr(data)  (0x1C000000&((data)<<26))
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_decont_info_ydiff_hist(data)        (0x00FFFFFF&(data))
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_get_decont_info_ydiff_hist_rden(data) ((0x80000000&(data))>>31)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_get_decont_info_ydiff_hist_read_mode(data) ((0x40000000&(data))>>30)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_get_decont_info_ydiff_hist_locken(data) ((0x20000000&(data))>>29)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_get_decont_info_ydiff_hist_raddr(data) ((0x1C000000&(data))>>26)
#define  IPQ_DECONTOUR_De_Contour_YDIFF_Hist_get_decont_info_ydiff_hist(data)    (0x00FFFFFF&(data))

#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist                                    0x18025730
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_reg_addr                            "0xB8025730"
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_reg                                 0xB8025730
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_inst_addr                           "0x000C"
#define  set_IPQ_DECONTOUR_De_Contour_CDIFF_Hist_reg(data)                       (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_CDIFF_Hist_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_CDIFF_Hist_reg                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_CDIFF_Hist_reg))
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_rden_shift   (31)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_read_mode_shift (30)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_locken_shift (29)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_raddr_shift  (26)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_shift        (0)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_rden_mask    (0x80000000)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_read_mode_mask (0x40000000)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_locken_mask  (0x20000000)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_raddr_mask   (0x1C000000)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_mask         (0x00FFFFFF)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_rden(data)   (0x80000000&((data)<<31))
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_read_mode(data) (0x40000000&((data)<<30))
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_locken(data) (0x20000000&((data)<<29))
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist_raddr(data)  (0x1C000000&((data)<<26))
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_decont_info_cdiff_hist(data)        (0x00FFFFFF&(data))
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_get_decont_info_cdiff_hist_rden(data) ((0x80000000&(data))>>31)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_get_decont_info_cdiff_hist_read_mode(data) ((0x40000000&(data))>>30)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_get_decont_info_cdiff_hist_locken(data) ((0x20000000&(data))>>29)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_get_decont_info_cdiff_hist_raddr(data) ((0x1C000000&(data))>>26)
#define  IPQ_DECONTOUR_De_Contour_CDIFF_Hist_get_decont_info_cdiff_hist(data)    (0x00FFFFFF&(data))

#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl                                    0x18025734
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_reg_addr                            "0xB8025734"
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_reg                                 0xB8025734
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_inst_addr                           "0x000D"
#define  set_IPQ_DECONTOUR_De_Contour_db_reg_ctl_reg(data)                       (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_db_reg_ctl_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_db_reg_ctl_reg                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_db_reg_ctl_reg))
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_read_shift                       (2)
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_en_shift                         (1)
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_apply_shift                      (0)
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_read_mask                        (0x00000004)
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_en_mask                          (0x00000002)
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_apply_mask                       (0x00000001)
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_read(data)                       (0x00000004&((data)<<2))
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_en(data)                         (0x00000002&((data)<<1))
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_db_apply(data)                      (0x00000001&(data))
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_get_db_read(data)                   ((0x00000004&(data))>>2)
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_get_db_en(data)                     ((0x00000002&(data))>>1)
#define  IPQ_DECONTOUR_De_Contour_db_reg_ctl_get_db_apply(data)                  (0x00000001&(data))

#define  IPQ_DECONTOUR_De_Contour_Bottleneck                                    0x18025738
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_reg_addr                            "0xB8025738"
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_reg                                 0xB8025738
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_inst_addr                           "0x000E"
#define  set_IPQ_DECONTOUR_De_Contour_Bottleneck_reg(data)                       (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Bottleneck_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Bottleneck_reg                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Bottleneck_reg))
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range3_shift      (12)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range2_shift      (8)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range1_shift      (4)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range0_shift      (0)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range3_mask       (0x0000F000)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range2_mask       (0x00000F00)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range1_mask       (0x000000F0)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range0_mask       (0x0000000F)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range3(data)      (0x0000F000&((data)<<12))
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range2(data)      (0x00000F00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range1(data)      (0x000000F0&((data)<<4))
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_decont_bottleneck_range0(data)      (0x0000000F&(data))
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_get_decont_bottleneck_range3(data)  ((0x0000F000&(data))>>12)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_get_decont_bottleneck_range2(data)  ((0x00000F00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_get_decont_bottleneck_range1(data)  ((0x000000F0&(data))>>4)
#define  IPQ_DECONTOUR_De_Contour_Bottleneck_get_decont_bottleneck_range0(data)  (0x0000000F&(data))

#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp                                    0x1802573C
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_reg_addr                            "0xB802573C"
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_reg                                 0xB802573C
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_inst_addr                           "0x000F"
#define  set_IPQ_DECONTOUR_De_Contour_Diff_Clamp_reg(data)                       (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Diff_Clamp_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Diff_Clamp_reg                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Diff_Clamp_reg))
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_decont_diff_clamp_c_shift           (10)
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_decont_diff_clamp_y_shift           (0)
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_decont_diff_clamp_c_mask            (0x000FFC00)
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_decont_diff_clamp_y_mask            (0x000003FF)
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_decont_diff_clamp_c(data)           (0x000FFC00&((data)<<10))
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_decont_diff_clamp_y(data)           (0x000003FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_get_decont_diff_clamp_c(data)       ((0x000FFC00&(data))>>10)
#define  IPQ_DECONTOUR_De_Contour_Diff_Clamp_get_decont_diff_clamp_y(data)       (0x000003FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Contrast2                                     0x18025740
#define  IPQ_DECONTOUR_De_Contour_Contrast2_reg_addr                             "0xB8025740"
#define  IPQ_DECONTOUR_De_Contour_Contrast2_reg                                  0xB8025740
#define  IPQ_DECONTOUR_De_Contour_Contrast2_inst_addr                            "0x0010"
#define  set_IPQ_DECONTOUR_De_Contour_Contrast2_reg(data)                        (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast2_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Contrast2_reg                              (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast2_reg))
#define  IPQ_DECONTOUR_De_Contour_Contrast2_decont_contrast_th3_y_shift          (16)
#define  IPQ_DECONTOUR_De_Contour_Contrast2_decont_contrast_th2_y_shift          (0)
#define  IPQ_DECONTOUR_De_Contour_Contrast2_decont_contrast_th3_y_mask           (0x03FF0000)
#define  IPQ_DECONTOUR_De_Contour_Contrast2_decont_contrast_th2_y_mask           (0x000003FF)
#define  IPQ_DECONTOUR_De_Contour_Contrast2_decont_contrast_th3_y(data)          (0x03FF0000&((data)<<16))
#define  IPQ_DECONTOUR_De_Contour_Contrast2_decont_contrast_th2_y(data)          (0x000003FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Contrast2_get_decont_contrast_th3_y(data)      ((0x03FF0000&(data))>>16)
#define  IPQ_DECONTOUR_De_Contour_Contrast2_get_decont_contrast_th2_y(data)      (0x000003FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Contrast3                                     0x18025744
#define  IPQ_DECONTOUR_De_Contour_Contrast3_reg_addr                             "0xB8025744"
#define  IPQ_DECONTOUR_De_Contour_Contrast3_reg                                  0xB8025744
#define  IPQ_DECONTOUR_De_Contour_Contrast3_inst_addr                            "0x0011"
#define  set_IPQ_DECONTOUR_De_Contour_Contrast3_reg(data)                        (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast3_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Contrast3_reg                              (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Contrast3_reg))
#define  IPQ_DECONTOUR_De_Contour_Contrast3_decont_contrast_th3_c_shift          (16)
#define  IPQ_DECONTOUR_De_Contour_Contrast3_decont_contrast_th2_c_shift          (0)
#define  IPQ_DECONTOUR_De_Contour_Contrast3_decont_contrast_th3_c_mask           (0x03FF0000)
#define  IPQ_DECONTOUR_De_Contour_Contrast3_decont_contrast_th2_c_mask           (0x000003FF)
#define  IPQ_DECONTOUR_De_Contour_Contrast3_decont_contrast_th3_c(data)          (0x03FF0000&((data)<<16))
#define  IPQ_DECONTOUR_De_Contour_Contrast3_decont_contrast_th2_c(data)          (0x000003FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Contrast3_get_decont_contrast_th3_c(data)      ((0x03FF0000&(data))>>16)
#define  IPQ_DECONTOUR_De_Contour_Contrast3_get_decont_contrast_th2_c(data)      (0x000003FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Dark                                          0x18025748
#define  IPQ_DECONTOUR_De_Contour_Dark_reg_addr                                  "0xB8025748"
#define  IPQ_DECONTOUR_De_Contour_Dark_reg                                       0xB8025748
#define  IPQ_DECONTOUR_De_Contour_Dark_inst_addr                                 "0x0012"
#define  set_IPQ_DECONTOUR_De_Contour_Dark_reg(data)                             (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Dark_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Dark_reg                                   (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Dark_reg))
#define  IPQ_DECONTOUR_De_Contour_Dark_decont_dark_contrast_th3_shift            (16)
#define  IPQ_DECONTOUR_De_Contour_Dark_decont_dark_contrast_th2_shift            (0)
#define  IPQ_DECONTOUR_De_Contour_Dark_decont_dark_contrast_th3_mask             (0x03FF0000)
#define  IPQ_DECONTOUR_De_Contour_Dark_decont_dark_contrast_th2_mask             (0x000003FF)
#define  IPQ_DECONTOUR_De_Contour_Dark_decont_dark_contrast_th3(data)            (0x03FF0000&((data)<<16))
#define  IPQ_DECONTOUR_De_Contour_Dark_decont_dark_contrast_th2(data)            (0x000003FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Dark_get_decont_dark_contrast_th3(data)        ((0x03FF0000&(data))>>16)
#define  IPQ_DECONTOUR_De_Contour_Dark_get_decont_dark_contrast_th2(data)        (0x000003FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Gradation                                     0x1802574C
#define  IPQ_DECONTOUR_De_Contour_Gradation_reg_addr                             "0xB802574C"
#define  IPQ_DECONTOUR_De_Contour_Gradation_reg                                  0xB802574C
#define  IPQ_DECONTOUR_De_Contour_Gradation_inst_addr                            "0x0013"
#define  set_IPQ_DECONTOUR_De_Contour_Gradation_reg(data)                        (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Gradation_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Gradation_reg                              (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Gradation_reg))
#define  IPQ_DECONTOUR_De_Contour_Gradation_decont_gradation_th2_c_shift         (8)
#define  IPQ_DECONTOUR_De_Contour_Gradation_decont_gradation_th2_y_shift         (0)
#define  IPQ_DECONTOUR_De_Contour_Gradation_decont_gradation_th2_c_mask          (0x00001F00)
#define  IPQ_DECONTOUR_De_Contour_Gradation_decont_gradation_th2_y_mask          (0x0000001F)
#define  IPQ_DECONTOUR_De_Contour_Gradation_decont_gradation_th2_c(data)         (0x00001F00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_Gradation_decont_gradation_th2_y(data)         (0x0000001F&(data))
#define  IPQ_DECONTOUR_De_Contour_Gradation_get_decont_gradation_th2_c(data)     ((0x00001F00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_Gradation_get_decont_gradation_th2_y(data)     (0x0000001F&(data))

#define  IPQ_DECONTOUR_De_Contour_Minmax                                        0x18025750
#define  IPQ_DECONTOUR_De_Contour_Minmax_reg_addr                                "0xB8025750"
#define  IPQ_DECONTOUR_De_Contour_Minmax_reg                                     0xB8025750
#define  IPQ_DECONTOUR_De_Contour_Minmax_inst_addr                               "0x0014"
#define  set_IPQ_DECONTOUR_De_Contour_Minmax_reg(data)                           (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Minmax_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Minmax_reg                                 (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Minmax_reg))
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv3_shift                 (22)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv2_shift                 (20)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv1_shift                 (18)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv0_shift                 (16)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmindiff_th3_y_shift           (8)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmindiff_th2_y_shift           (0)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv3_mask                  (0x00C00000)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv2_mask                  (0x00300000)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv1_mask                  (0x000C0000)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv0_mask                  (0x00030000)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmindiff_th3_y_mask            (0x0000FF00)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmindiff_th2_y_mask            (0x000000FF)
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv3(data)                 (0x00C00000&((data)<<22))
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv2(data)                 (0x00300000&((data)<<20))
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv1(data)                 (0x000C0000&((data)<<18))
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmin_lv0(data)                 (0x00030000&((data)<<16))
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmindiff_th3_y(data)           (0x0000FF00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_Minmax_decont_maxmindiff_th2_y(data)           (0x000000FF&(data))
#define  IPQ_DECONTOUR_De_Contour_Minmax_get_decont_maxmin_lv3(data)             ((0x00C00000&(data))>>22)
#define  IPQ_DECONTOUR_De_Contour_Minmax_get_decont_maxmin_lv2(data)             ((0x00300000&(data))>>20)
#define  IPQ_DECONTOUR_De_Contour_Minmax_get_decont_maxmin_lv1(data)             ((0x000C0000&(data))>>18)
#define  IPQ_DECONTOUR_De_Contour_Minmax_get_decont_maxmin_lv0(data)             ((0x00030000&(data))>>16)
#define  IPQ_DECONTOUR_De_Contour_Minmax_get_decont_maxmindiff_th3_y(data)       ((0x0000FF00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_Minmax_get_decont_maxmindiff_th2_y(data)       (0x000000FF&(data))

#define  IPQ_DECONTOUR_De_Contour_Level                                         0x18025754
#define  IPQ_DECONTOUR_De_Contour_Level_reg_addr                                 "0xB8025754"
#define  IPQ_DECONTOUR_De_Contour_Level_reg                                      0xB8025754
#define  IPQ_DECONTOUR_De_Contour_Level_inst_addr                                "0x0015"
#define  set_IPQ_DECONTOUR_De_Contour_Level_reg(data)                            (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Level_reg)=data)
#define  get_IPQ_DECONTOUR_De_Contour_Level_reg                                  (*((volatile unsigned int*)IPQ_DECONTOUR_De_Contour_Level_reg))
#define  IPQ_DECONTOUR_De_Contour_Level_decont_blend_gain_md_shift               (16)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_blend_gain_lo_shift               (12)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_hi_shift              (8)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_md_shift              (4)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_lo_shift              (0)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_blend_gain_md_mask                (0x00070000)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_blend_gain_lo_mask                (0x00007000)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_hi_mask               (0x00000F00)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_md_mask               (0x000000F0)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_lo_mask               (0x0000000F)
#define  IPQ_DECONTOUR_De_Contour_Level_decont_blend_gain_md(data)               (0x00070000&((data)<<16))
#define  IPQ_DECONTOUR_De_Contour_Level_decont_blend_gain_lo(data)               (0x00007000&((data)<<12))
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_hi(data)              (0x00000F00&((data)<<8))
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_md(data)              (0x000000F0&((data)<<4))
#define  IPQ_DECONTOUR_De_Contour_Level_decont_level_range_lo(data)              (0x0000000F&(data))
#define  IPQ_DECONTOUR_De_Contour_Level_get_decont_blend_gain_md(data)           ((0x00070000&(data))>>16)
#define  IPQ_DECONTOUR_De_Contour_Level_get_decont_blend_gain_lo(data)           ((0x00007000&(data))>>12)
#define  IPQ_DECONTOUR_De_Contour_Level_get_decont_level_range_hi(data)          ((0x00000F00&(data))>>8)
#define  IPQ_DECONTOUR_De_Contour_Level_get_decont_level_range_md(data)          ((0x000000F0&(data))>>4)
#define  IPQ_DECONTOUR_De_Contour_Level_get_decont_level_range_lo(data)          (0x0000000F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======IPQ_DECONTOUR register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_en:1;
        RBus_UInt32  decont_neighbor_far:1;
        RBus_UInt32  decont_debug_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  decont_debug_mode:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  decont_yc_mode:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  decont_bottleneck_en:1;
        RBus_UInt32  decont_blend_weight_lpf_en:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  decont_blend_lowbd:8;
        RBus_UInt32  res6:2;
        RBus_UInt32  decont_blend_step:2;
        RBus_UInt32  res7:2;
        RBus_UInt32  decont_snr_blend_mode:2;
    };
}ipq_decontour_de_contour_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  decont_contrast_th_y_info:9;
        RBus_UInt32  decont_neighbor_diff_th_y_info:6;
        RBus_UInt32  decont_gradation_th_y_info:5;
        RBus_UInt32  decont_maxmindiff_th_y_info:8;
    };
}ipq_decontour_de_contour_contrast_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  decont_contrast_th_c_info:11;
        RBus_UInt32  decont_neighbor_diff_th_c_info:6;
        RBus_UInt32  decont_gradation_th_c_info:5;
        RBus_UInt32  decont_maxmindiff_th_c_info:8;
    };
}ipq_decontour_de_contour_contrast_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  decont_contrast_th_y:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  decont_contrast_th_c:10;
    };
}ipq_decontour_de_contour_contrast_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  decont_neighbor_diff_th2_y:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  decont_neighbor_diff_th_y:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  decont_neighbor_diff_th2_c:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  decont_neighbor_diff_th_c:6;
    };
}ipq_decontour_de_contour_neighbor_diff_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  decont_gradation_th_y:5;
        RBus_UInt32  decont_dark_th:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  decont_gradation_th_c:5;
        RBus_UInt32  decont_dark_contrast_th:10;
    };
}ipq_decontour_de_contour_threshold_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  decont_maxmindiff_th_c:8;
        RBus_UInt32  decont_maxmindiff_th_y:8;
    };
}ipq_decontour_de_contour_diff_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  decont_contour_cnt:24;
    };
}ipq_decontour_de_contour_counter_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  decont_avfilter_cnt:24;
    };
}ipq_decontour_de_contour_avfilter_counter_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_filter_range_hist_rden:1;
        RBus_UInt32  decont_filter_range_hist_read_mode:1;
        RBus_UInt32  decont_filter_range_hist_locken:1;
        RBus_UInt32  decont_filter_range_hist_raddr:4;
        RBus_UInt32  res1:25;
    };
}ipq_decontour_de_contour_hist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  decont_filter_range_hist:24;
    };
}ipq_decontour_de_contour_hist_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_info_ydiff_hist_rden:1;
        RBus_UInt32  decont_info_ydiff_hist_read_mode:1;
        RBus_UInt32  decont_info_ydiff_hist_locken:1;
        RBus_UInt32  decont_info_ydiff_hist_raddr:3;
        RBus_UInt32  res1:2;
        RBus_UInt32  decont_info_ydiff_hist:24;
    };
}ipq_decontour_de_contour_ydiff_hist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_info_cdiff_hist_rden:1;
        RBus_UInt32  decont_info_cdiff_hist_read_mode:1;
        RBus_UInt32  decont_info_cdiff_hist_locken:1;
        RBus_UInt32  decont_info_cdiff_hist_raddr:3;
        RBus_UInt32  res1:2;
        RBus_UInt32  decont_info_cdiff_hist:24;
    };
}ipq_decontour_de_contour_cdiff_hist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  db_read:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_apply:1;
    };
}ipq_decontour_de_contour_db_reg_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  decont_bottleneck_range3:4;
        RBus_UInt32  decont_bottleneck_range2:4;
        RBus_UInt32  decont_bottleneck_range1:4;
        RBus_UInt32  decont_bottleneck_range0:4;
    };
}ipq_decontour_de_contour_bottleneck_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  decont_diff_clamp_c:10;
        RBus_UInt32  decont_diff_clamp_y:10;
    };
}ipq_decontour_de_contour_diff_clamp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  decont_contrast_th3_y:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  decont_contrast_th2_y:10;
    };
}ipq_decontour_de_contour_contrast2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  decont_contrast_th3_c:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  decont_contrast_th2_c:10;
    };
}ipq_decontour_de_contour_contrast3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  decont_dark_contrast_th3:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  decont_dark_contrast_th2:10;
    };
}ipq_decontour_de_contour_dark_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  decont_gradation_th2_c:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  decont_gradation_th2_y:5;
    };
}ipq_decontour_de_contour_gradation_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  decont_maxmin_lv3:2;
        RBus_UInt32  decont_maxmin_lv2:2;
        RBus_UInt32  decont_maxmin_lv1:2;
        RBus_UInt32  decont_maxmin_lv0:2;
        RBus_UInt32  decont_maxmindiff_th3_y:8;
        RBus_UInt32  decont_maxmindiff_th2_y:8;
    };
}ipq_decontour_de_contour_minmax_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  decont_blend_gain_md:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  decont_blend_gain_lo:3;
        RBus_UInt32  decont_level_range_hi:4;
        RBus_UInt32  decont_level_range_md:4;
        RBus_UInt32  decont_level_range_lo:4;
    };
}ipq_decontour_de_contour_level_RBUS;

#else //apply LITTLE_ENDIAN

//======IPQ_DECONTOUR register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_snr_blend_mode:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  decont_blend_step:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  decont_blend_lowbd:8;
        RBus_UInt32  res3:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  decont_blend_weight_lpf_en:1;
        RBus_UInt32  decont_bottleneck_en:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  decont_yc_mode:2;
        RBus_UInt32  res6:1;
        RBus_UInt32  decont_debug_mode:2;
        RBus_UInt32  res7:1;
        RBus_UInt32  decont_debug_en:1;
        RBus_UInt32  decont_neighbor_far:1;
        RBus_UInt32  decont_en:1;
    };
}ipq_decontour_de_contour_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_maxmindiff_th_y_info:8;
        RBus_UInt32  decont_gradation_th_y_info:5;
        RBus_UInt32  decont_neighbor_diff_th_y_info:6;
        RBus_UInt32  decont_contrast_th_y_info:9;
        RBus_UInt32  res1:4;
    };
}ipq_decontour_de_contour_contrast_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_maxmindiff_th_c_info:8;
        RBus_UInt32  decont_gradation_th_c_info:5;
        RBus_UInt32  decont_neighbor_diff_th_c_info:6;
        RBus_UInt32  decont_contrast_th_c_info:11;
        RBus_UInt32  res1:2;
    };
}ipq_decontour_de_contour_contrast_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_contrast_th_c:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  decont_contrast_th_y:10;
        RBus_UInt32  res2:6;
    };
}ipq_decontour_de_contour_contrast_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_neighbor_diff_th_c:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  decont_neighbor_diff_th2_c:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  decont_neighbor_diff_th_y:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  decont_neighbor_diff_th2_y:6;
        RBus_UInt32  res4:2;
    };
}ipq_decontour_de_contour_neighbor_diff_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_dark_contrast_th:10;
        RBus_UInt32  decont_gradation_th_c:5;
        RBus_UInt32  res1:1;
        RBus_UInt32  decont_dark_th:10;
        RBus_UInt32  decont_gradation_th_y:5;
        RBus_UInt32  res2:1;
    };
}ipq_decontour_de_contour_threshold_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_maxmindiff_th_y:8;
        RBus_UInt32  decont_maxmindiff_th_c:8;
        RBus_UInt32  res1:16;
    };
}ipq_decontour_de_contour_diff_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_contour_cnt:24;
        RBus_UInt32  res1:8;
    };
}ipq_decontour_de_contour_counter_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_avfilter_cnt:24;
        RBus_UInt32  res1:8;
    };
}ipq_decontour_de_contour_avfilter_counter_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  decont_filter_range_hist_raddr:4;
        RBus_UInt32  decont_filter_range_hist_locken:1;
        RBus_UInt32  decont_filter_range_hist_read_mode:1;
        RBus_UInt32  decont_filter_range_hist_rden:1;
    };
}ipq_decontour_de_contour_hist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_filter_range_hist:24;
        RBus_UInt32  res1:8;
    };
}ipq_decontour_de_contour_hist_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_info_ydiff_hist:24;
        RBus_UInt32  res1:2;
        RBus_UInt32  decont_info_ydiff_hist_raddr:3;
        RBus_UInt32  decont_info_ydiff_hist_locken:1;
        RBus_UInt32  decont_info_ydiff_hist_read_mode:1;
        RBus_UInt32  decont_info_ydiff_hist_rden:1;
    };
}ipq_decontour_de_contour_ydiff_hist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_info_cdiff_hist:24;
        RBus_UInt32  res1:2;
        RBus_UInt32  decont_info_cdiff_hist_raddr:3;
        RBus_UInt32  decont_info_cdiff_hist_locken:1;
        RBus_UInt32  decont_info_cdiff_hist_read_mode:1;
        RBus_UInt32  decont_info_cdiff_hist_rden:1;
    };
}ipq_decontour_de_contour_cdiff_hist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_apply:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_read:1;
        RBus_UInt32  res1:29;
    };
}ipq_decontour_de_contour_db_reg_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_bottleneck_range0:4;
        RBus_UInt32  decont_bottleneck_range1:4;
        RBus_UInt32  decont_bottleneck_range2:4;
        RBus_UInt32  decont_bottleneck_range3:4;
        RBus_UInt32  res1:16;
    };
}ipq_decontour_de_contour_bottleneck_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_diff_clamp_y:10;
        RBus_UInt32  decont_diff_clamp_c:10;
        RBus_UInt32  res1:12;
    };
}ipq_decontour_de_contour_diff_clamp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_contrast_th2_y:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  decont_contrast_th3_y:10;
        RBus_UInt32  res2:6;
    };
}ipq_decontour_de_contour_contrast2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_contrast_th2_c:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  decont_contrast_th3_c:10;
        RBus_UInt32  res2:6;
    };
}ipq_decontour_de_contour_contrast3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_dark_contrast_th2:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  decont_dark_contrast_th3:10;
        RBus_UInt32  res2:6;
    };
}ipq_decontour_de_contour_dark_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_gradation_th2_y:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  decont_gradation_th2_c:5;
        RBus_UInt32  res2:19;
    };
}ipq_decontour_de_contour_gradation_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_maxmindiff_th2_y:8;
        RBus_UInt32  decont_maxmindiff_th3_y:8;
        RBus_UInt32  decont_maxmin_lv0:2;
        RBus_UInt32  decont_maxmin_lv1:2;
        RBus_UInt32  decont_maxmin_lv2:2;
        RBus_UInt32  decont_maxmin_lv3:2;
        RBus_UInt32  res1:8;
    };
}ipq_decontour_de_contour_minmax_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decont_level_range_lo:4;
        RBus_UInt32  decont_level_range_md:4;
        RBus_UInt32  decont_level_range_hi:4;
        RBus_UInt32  decont_blend_gain_lo:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  decont_blend_gain_md:3;
        RBus_UInt32  res2:13;
    };
}ipq_decontour_de_contour_level_RBUS;




#endif 


#endif 
