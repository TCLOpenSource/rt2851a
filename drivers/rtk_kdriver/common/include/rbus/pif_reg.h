/**
* @file Mac7p-DesignSpec-D_Domain_DISP_IF
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_PIF_REG_H_
#define _RBUS_PIF_REG_H_

#include "rbus_types.h"



//  PIF Register Address
#define  PIF_LVDS_CTRL1                                                         0x1802D000
#define  PIF_LVDS_CTRL1_reg_addr                                                 "0xB802D000"
#define  PIF_LVDS_CTRL1_reg                                                      0xB802D000
#define  PIF_LVDS_CTRL1_inst_addr                                                "0x0000"
#define  set_PIF_LVDS_CTRL1_reg(data)                                            (*((volatile unsigned int*)PIF_LVDS_CTRL1_reg)=data)
#define  get_PIF_LVDS_CTRL1_reg                                                  (*((volatile unsigned int*)PIF_LVDS_CTRL1_reg))
#define  PIF_LVDS_CTRL1_lvds_arsv1_sel_shift                                     (29)
#define  PIF_LVDS_CTRL1_lvds_arsv0_sel_shift                                     (26)
#define  PIF_LVDS_CTRL1_lvds_aden_sel_shift                                      (23)
#define  PIF_LVDS_CTRL1_lvds_avs_sel_shift                                       (20)
#define  PIF_LVDS_CTRL1_lvds_ahs_sel_shift                                       (17)
#define  PIF_LVDS_CTRL1_lvds_brsv1_sel_shift                                     (13)
#define  PIF_LVDS_CTRL1_lvds_brsv0_sel_shift                                     (10)
#define  PIF_LVDS_CTRL1_lvds_bden_sel_shift                                      (7)
#define  PIF_LVDS_CTRL1_lvds_bvs_sel_shift                                       (4)
#define  PIF_LVDS_CTRL1_lvds_bhs_sel_shift                                       (1)
#define  PIF_LVDS_CTRL1_lvds_arsv1_sel_mask                                      (0xE0000000)
#define  PIF_LVDS_CTRL1_lvds_arsv0_sel_mask                                      (0x1C000000)
#define  PIF_LVDS_CTRL1_lvds_aden_sel_mask                                       (0x03800000)
#define  PIF_LVDS_CTRL1_lvds_avs_sel_mask                                        (0x00700000)
#define  PIF_LVDS_CTRL1_lvds_ahs_sel_mask                                        (0x000E0000)
#define  PIF_LVDS_CTRL1_lvds_brsv1_sel_mask                                      (0x0000E000)
#define  PIF_LVDS_CTRL1_lvds_brsv0_sel_mask                                      (0x00001C00)
#define  PIF_LVDS_CTRL1_lvds_bden_sel_mask                                       (0x00000380)
#define  PIF_LVDS_CTRL1_lvds_bvs_sel_mask                                        (0x00000070)
#define  PIF_LVDS_CTRL1_lvds_bhs_sel_mask                                        (0x0000000E)
#define  PIF_LVDS_CTRL1_lvds_arsv1_sel(data)                                     (0xE0000000&((data)<<29))
#define  PIF_LVDS_CTRL1_lvds_arsv0_sel(data)                                     (0x1C000000&((data)<<26))
#define  PIF_LVDS_CTRL1_lvds_aden_sel(data)                                      (0x03800000&((data)<<23))
#define  PIF_LVDS_CTRL1_lvds_avs_sel(data)                                       (0x00700000&((data)<<20))
#define  PIF_LVDS_CTRL1_lvds_ahs_sel(data)                                       (0x000E0000&((data)<<17))
#define  PIF_LVDS_CTRL1_lvds_brsv1_sel(data)                                     (0x0000E000&((data)<<13))
#define  PIF_LVDS_CTRL1_lvds_brsv0_sel(data)                                     (0x00001C00&((data)<<10))
#define  PIF_LVDS_CTRL1_lvds_bden_sel(data)                                      (0x00000380&((data)<<7))
#define  PIF_LVDS_CTRL1_lvds_bvs_sel(data)                                       (0x00000070&((data)<<4))
#define  PIF_LVDS_CTRL1_lvds_bhs_sel(data)                                       (0x0000000E&((data)<<1))
#define  PIF_LVDS_CTRL1_get_lvds_arsv1_sel(data)                                 ((0xE0000000&(data))>>29)
#define  PIF_LVDS_CTRL1_get_lvds_arsv0_sel(data)                                 ((0x1C000000&(data))>>26)
#define  PIF_LVDS_CTRL1_get_lvds_aden_sel(data)                                  ((0x03800000&(data))>>23)
#define  PIF_LVDS_CTRL1_get_lvds_avs_sel(data)                                   ((0x00700000&(data))>>20)
#define  PIF_LVDS_CTRL1_get_lvds_ahs_sel(data)                                   ((0x000E0000&(data))>>17)
#define  PIF_LVDS_CTRL1_get_lvds_brsv1_sel(data)                                 ((0x0000E000&(data))>>13)
#define  PIF_LVDS_CTRL1_get_lvds_brsv0_sel(data)                                 ((0x00001C00&(data))>>10)
#define  PIF_LVDS_CTRL1_get_lvds_bden_sel(data)                                  ((0x00000380&(data))>>7)
#define  PIF_LVDS_CTRL1_get_lvds_bvs_sel(data)                                   ((0x00000070&(data))>>4)
#define  PIF_LVDS_CTRL1_get_lvds_bhs_sel(data)                                   ((0x0000000E&(data))>>1)

#define  PIF_LVDS_CTRL2                                                         0x1802D004
#define  PIF_LVDS_CTRL2_reg_addr                                                 "0xB802D004"
#define  PIF_LVDS_CTRL2_reg                                                      0xB802D004
#define  PIF_LVDS_CTRL2_inst_addr                                                "0x0001"
#define  set_PIF_LVDS_CTRL2_reg(data)                                            (*((volatile unsigned int*)PIF_LVDS_CTRL2_reg)=data)
#define  get_PIF_LVDS_CTRL2_reg                                                  (*((volatile unsigned int*)PIF_LVDS_CTRL2_reg))
#define  PIF_LVDS_CTRL2_lvds_crsv1_sel_shift                                     (29)
#define  PIF_LVDS_CTRL2_lvds_crsv0_sel_shift                                     (26)
#define  PIF_LVDS_CTRL2_lvds_cden_sel_shift                                      (23)
#define  PIF_LVDS_CTRL2_lvds_cvs_sel_shift                                       (20)
#define  PIF_LVDS_CTRL2_lvds_chs_sel_shift                                       (17)
#define  PIF_LVDS_CTRL2_lvds_drsv1_sel_shift                                     (13)
#define  PIF_LVDS_CTRL2_lvds_drsv0_sel_shift                                     (10)
#define  PIF_LVDS_CTRL2_lvds_dden_sel_shift                                      (7)
#define  PIF_LVDS_CTRL2_lvds_dvs_sel_shift                                       (4)
#define  PIF_LVDS_CTRL2_lvds_dhs_sel_shift                                       (1)
#define  PIF_LVDS_CTRL2_lvds_crsv1_sel_mask                                      (0xE0000000)
#define  PIF_LVDS_CTRL2_lvds_crsv0_sel_mask                                      (0x1C000000)
#define  PIF_LVDS_CTRL2_lvds_cden_sel_mask                                       (0x03800000)
#define  PIF_LVDS_CTRL2_lvds_cvs_sel_mask                                        (0x00700000)
#define  PIF_LVDS_CTRL2_lvds_chs_sel_mask                                        (0x000E0000)
#define  PIF_LVDS_CTRL2_lvds_drsv1_sel_mask                                      (0x0000E000)
#define  PIF_LVDS_CTRL2_lvds_drsv0_sel_mask                                      (0x00001C00)
#define  PIF_LVDS_CTRL2_lvds_dden_sel_mask                                       (0x00000380)
#define  PIF_LVDS_CTRL2_lvds_dvs_sel_mask                                        (0x00000070)
#define  PIF_LVDS_CTRL2_lvds_dhs_sel_mask                                        (0x0000000E)
#define  PIF_LVDS_CTRL2_lvds_crsv1_sel(data)                                     (0xE0000000&((data)<<29))
#define  PIF_LVDS_CTRL2_lvds_crsv0_sel(data)                                     (0x1C000000&((data)<<26))
#define  PIF_LVDS_CTRL2_lvds_cden_sel(data)                                      (0x03800000&((data)<<23))
#define  PIF_LVDS_CTRL2_lvds_cvs_sel(data)                                       (0x00700000&((data)<<20))
#define  PIF_LVDS_CTRL2_lvds_chs_sel(data)                                       (0x000E0000&((data)<<17))
#define  PIF_LVDS_CTRL2_lvds_drsv1_sel(data)                                     (0x0000E000&((data)<<13))
#define  PIF_LVDS_CTRL2_lvds_drsv0_sel(data)                                     (0x00001C00&((data)<<10))
#define  PIF_LVDS_CTRL2_lvds_dden_sel(data)                                      (0x00000380&((data)<<7))
#define  PIF_LVDS_CTRL2_lvds_dvs_sel(data)                                       (0x00000070&((data)<<4))
#define  PIF_LVDS_CTRL2_lvds_dhs_sel(data)                                       (0x0000000E&((data)<<1))
#define  PIF_LVDS_CTRL2_get_lvds_crsv1_sel(data)                                 ((0xE0000000&(data))>>29)
#define  PIF_LVDS_CTRL2_get_lvds_crsv0_sel(data)                                 ((0x1C000000&(data))>>26)
#define  PIF_LVDS_CTRL2_get_lvds_cden_sel(data)                                  ((0x03800000&(data))>>23)
#define  PIF_LVDS_CTRL2_get_lvds_cvs_sel(data)                                   ((0x00700000&(data))>>20)
#define  PIF_LVDS_CTRL2_get_lvds_chs_sel(data)                                   ((0x000E0000&(data))>>17)
#define  PIF_LVDS_CTRL2_get_lvds_drsv1_sel(data)                                 ((0x0000E000&(data))>>13)
#define  PIF_LVDS_CTRL2_get_lvds_drsv0_sel(data)                                 ((0x00001C00&(data))>>10)
#define  PIF_LVDS_CTRL2_get_lvds_dden_sel(data)                                  ((0x00000380&(data))>>7)
#define  PIF_LVDS_CTRL2_get_lvds_dvs_sel(data)                                   ((0x00000070&(data))>>4)
#define  PIF_LVDS_CTRL2_get_lvds_dhs_sel(data)                                   ((0x0000000E&(data))>>1)

#define  PIF_LVDS_CTRL3                                                         0x1802D008
#define  PIF_LVDS_CTRL3_reg_addr                                                 "0xB802D008"
#define  PIF_LVDS_CTRL3_reg                                                      0xB802D008
#define  PIF_LVDS_CTRL3_inst_addr                                                "0x0002"
#define  set_PIF_LVDS_CTRL3_reg(data)                                            (*((volatile unsigned int*)PIF_LVDS_CTRL3_reg)=data)
#define  get_PIF_LVDS_CTRL3_reg                                                  (*((volatile unsigned int*)PIF_LVDS_CTRL3_reg))
#define  PIF_LVDS_CTRL3_lvds_hsync_inv_shift                                     (17)
#define  PIF_LVDS_CTRL3_lvds_vsync_inv_shift                                     (16)
#define  PIF_LVDS_CTRL3_lvds_map_inv_shift                                       (14)
#define  PIF_LVDS_CTRL3_lvds_map_shift                                           (12)
#define  PIF_LVDS_CTRL3_lvds_aport_en_shift                                      (7)
#define  PIF_LVDS_CTRL3_lvds_bport_en_shift                                      (6)
#define  PIF_LVDS_CTRL3_lvds_cport_en_shift                                      (5)
#define  PIF_LVDS_CTRL3_lvds_dport_en_shift                                      (4)
#define  PIF_LVDS_CTRL3_lvds_hsync_inv_mask                                      (0x00020000)
#define  PIF_LVDS_CTRL3_lvds_vsync_inv_mask                                      (0x00010000)
#define  PIF_LVDS_CTRL3_lvds_map_inv_mask                                        (0x00004000)
#define  PIF_LVDS_CTRL3_lvds_map_mask                                            (0x00003000)
#define  PIF_LVDS_CTRL3_lvds_aport_en_mask                                       (0x00000080)
#define  PIF_LVDS_CTRL3_lvds_bport_en_mask                                       (0x00000040)
#define  PIF_LVDS_CTRL3_lvds_cport_en_mask                                       (0x00000020)
#define  PIF_LVDS_CTRL3_lvds_dport_en_mask                                       (0x00000010)
#define  PIF_LVDS_CTRL3_lvds_hsync_inv(data)                                     (0x00020000&((data)<<17))
#define  PIF_LVDS_CTRL3_lvds_vsync_inv(data)                                     (0x00010000&((data)<<16))
#define  PIF_LVDS_CTRL3_lvds_map_inv(data)                                       (0x00004000&((data)<<14))
#define  PIF_LVDS_CTRL3_lvds_map(data)                                           (0x00003000&((data)<<12))
#define  PIF_LVDS_CTRL3_lvds_aport_en(data)                                      (0x00000080&((data)<<7))
#define  PIF_LVDS_CTRL3_lvds_bport_en(data)                                      (0x00000040&((data)<<6))
#define  PIF_LVDS_CTRL3_lvds_cport_en(data)                                      (0x00000020&((data)<<5))
#define  PIF_LVDS_CTRL3_lvds_dport_en(data)                                      (0x00000010&((data)<<4))
#define  PIF_LVDS_CTRL3_get_lvds_hsync_inv(data)                                 ((0x00020000&(data))>>17)
#define  PIF_LVDS_CTRL3_get_lvds_vsync_inv(data)                                 ((0x00010000&(data))>>16)
#define  PIF_LVDS_CTRL3_get_lvds_map_inv(data)                                   ((0x00004000&(data))>>14)
#define  PIF_LVDS_CTRL3_get_lvds_map(data)                                       ((0x00003000&(data))>>12)
#define  PIF_LVDS_CTRL3_get_lvds_aport_en(data)                                  ((0x00000080&(data))>>7)
#define  PIF_LVDS_CTRL3_get_lvds_bport_en(data)                                  ((0x00000040&(data))>>6)
#define  PIF_LVDS_CTRL3_get_lvds_cport_en(data)                                  ((0x00000020&(data))>>5)
#define  PIF_LVDS_CTRL3_get_lvds_dport_en(data)                                  ((0x00000010&(data))>>4)

#define  PIF_LVDS_CTRL4                                                         0x1802D00C
#define  PIF_LVDS_CTRL4_reg_addr                                                 "0xB802D00C"
#define  PIF_LVDS_CTRL4_reg                                                      0xB802D00C
#define  PIF_LVDS_CTRL4_inst_addr                                                "0x0003"
#define  set_PIF_LVDS_CTRL4_reg(data)                                            (*((volatile unsigned int*)PIF_LVDS_CTRL4_reg)=data)
#define  get_PIF_LVDS_CTRL4_reg                                                  (*((volatile unsigned int*)PIF_LVDS_CTRL4_reg))
#define  PIF_LVDS_CTRL4_dummy_31_0_shift                                         (0)
#define  PIF_LVDS_CTRL4_dummy_31_0_mask                                          (0xFFFFFFFF)
#define  PIF_LVDS_CTRL4_dummy_31_0(data)                                         (0xFFFFFFFF&(data))
#define  PIF_LVDS_CTRL4_get_dummy_31_0(data)                                     (0xFFFFFFFF&(data))

#define  PIF_LVDS_CTRL5                                                         0x1802D010
#define  PIF_LVDS_CTRL5_reg_addr                                                 "0xB802D010"
#define  PIF_LVDS_CTRL5_reg                                                      0xB802D010
#define  PIF_LVDS_CTRL5_inst_addr                                                "0x0004"
#define  set_PIF_LVDS_CTRL5_reg(data)                                            (*((volatile unsigned int*)PIF_LVDS_CTRL5_reg)=data)
#define  get_PIF_LVDS_CTRL5_reg                                                  (*((volatile unsigned int*)PIF_LVDS_CTRL5_reg))
#define  PIF_LVDS_CTRL5_dummy_31_0_shift                                         (0)
#define  PIF_LVDS_CTRL5_dummy_31_0_mask                                          (0xFFFFFFFF)
#define  PIF_LVDS_CTRL5_dummy_31_0(data)                                         (0xFFFFFFFF&(data))
#define  PIF_LVDS_CTRL5_get_dummy_31_0(data)                                     (0xFFFFFFFF&(data))

#define  PIF_MLVDS_CTRL0                                                        0x1802D014
#define  PIF_MLVDS_CTRL0_reg_addr                                                "0xB802D014"
#define  PIF_MLVDS_CTRL0_reg                                                     0xB802D014
#define  PIF_MLVDS_CTRL0_inst_addr                                               "0x0005"
#define  set_PIF_MLVDS_CTRL0_reg(data)                                           (*((volatile unsigned int*)PIF_MLVDS_CTRL0_reg)=data)
#define  get_PIF_MLVDS_CTRL0_reg                                                 (*((volatile unsigned int*)PIF_MLVDS_CTRL0_reg))
#define  PIF_MLVDS_CTRL0_dummy_31_11_shift                                       (11)
#define  PIF_MLVDS_CTRL0_mlvds_map_type_sel_shift                                (8)
#define  PIF_MLVDS_CTRL0_mlvds_en_shift                                          (7)
#define  PIF_MLVDS_CTRL0_mlvds_map_inv_shift                                     (6)
#define  PIF_MLVDS_CTRL0_dummy_5_2_shift                                         (2)
#define  PIF_MLVDS_CTRL0_mlvds_mode_shift                                        (0)
#define  PIF_MLVDS_CTRL0_dummy_31_11_mask                                        (0xFFFFF800)
#define  PIF_MLVDS_CTRL0_mlvds_map_type_sel_mask                                 (0x00000700)
#define  PIF_MLVDS_CTRL0_mlvds_en_mask                                           (0x00000080)
#define  PIF_MLVDS_CTRL0_mlvds_map_inv_mask                                      (0x00000040)
#define  PIF_MLVDS_CTRL0_dummy_5_2_mask                                          (0x0000003C)
#define  PIF_MLVDS_CTRL0_mlvds_mode_mask                                         (0x00000003)
#define  PIF_MLVDS_CTRL0_dummy_31_11(data)                                       (0xFFFFF800&((data)<<11))
#define  PIF_MLVDS_CTRL0_mlvds_map_type_sel(data)                                (0x00000700&((data)<<8))
#define  PIF_MLVDS_CTRL0_mlvds_en(data)                                          (0x00000080&((data)<<7))
#define  PIF_MLVDS_CTRL0_mlvds_map_inv(data)                                     (0x00000040&((data)<<6))
#define  PIF_MLVDS_CTRL0_dummy_5_2(data)                                         (0x0000003C&((data)<<2))
#define  PIF_MLVDS_CTRL0_mlvds_mode(data)                                        (0x00000003&(data))
#define  PIF_MLVDS_CTRL0_get_dummy_31_11(data)                                   ((0xFFFFF800&(data))>>11)
#define  PIF_MLVDS_CTRL0_get_mlvds_map_type_sel(data)                            ((0x00000700&(data))>>8)
#define  PIF_MLVDS_CTRL0_get_mlvds_en(data)                                      ((0x00000080&(data))>>7)
#define  PIF_MLVDS_CTRL0_get_mlvds_map_inv(data)                                 ((0x00000040&(data))>>6)
#define  PIF_MLVDS_CTRL0_get_dummy_5_2(data)                                     ((0x0000003C&(data))>>2)
#define  PIF_MLVDS_CTRL0_get_mlvds_mode(data)                                    (0x00000003&(data))

#define  PIF_MLVDS_Reset_Pul_CTRL                                               0x1802D018
#define  PIF_MLVDS_Reset_Pul_CTRL_reg_addr                                       "0xB802D018"
#define  PIF_MLVDS_Reset_Pul_CTRL_reg                                            0xB802D018
#define  PIF_MLVDS_Reset_Pul_CTRL_inst_addr                                      "0x0006"
#define  set_PIF_MLVDS_Reset_Pul_CTRL_reg(data)                                  (*((volatile unsigned int*)PIF_MLVDS_Reset_Pul_CTRL_reg)=data)
#define  get_PIF_MLVDS_Reset_Pul_CTRL_reg                                        (*((volatile unsigned int*)PIF_MLVDS_Reset_Pul_CTRL_reg))
#define  PIF_MLVDS_Reset_Pul_CTRL_dummy_31_24_shift                              (24)
#define  PIF_MLVDS_Reset_Pul_CTRL_mlvds_reset_pul_sel_shift                      (0)
#define  PIF_MLVDS_Reset_Pul_CTRL_dummy_31_24_mask                               (0xFF000000)
#define  PIF_MLVDS_Reset_Pul_CTRL_mlvds_reset_pul_sel_mask                       (0x00FFFFFF)
#define  PIF_MLVDS_Reset_Pul_CTRL_dummy_31_24(data)                              (0xFF000000&((data)<<24))
#define  PIF_MLVDS_Reset_Pul_CTRL_mlvds_reset_pul_sel(data)                      (0x00FFFFFF&(data))
#define  PIF_MLVDS_Reset_Pul_CTRL_get_dummy_31_24(data)                          ((0xFF000000&(data))>>24)
#define  PIF_MLVDS_Reset_Pul_CTRL_get_mlvds_reset_pul_sel(data)                  (0x00FFFFFF&(data))

#define  PIF_MLVDS_CTRL1                                                        0x1802D01C
#define  PIF_MLVDS_CTRL1_reg_addr                                                "0xB802D01C"
#define  PIF_MLVDS_CTRL1_reg                                                     0xB802D01C
#define  PIF_MLVDS_CTRL1_inst_addr                                               "0x0007"
#define  set_PIF_MLVDS_CTRL1_reg(data)                                           (*((volatile unsigned int*)PIF_MLVDS_CTRL1_reg)=data)
#define  get_PIF_MLVDS_CTRL1_reg                                                 (*((volatile unsigned int*)PIF_MLVDS_CTRL1_reg))
#define  PIF_MLVDS_CTRL1_tcon_sel_shift                                          (24)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_7_shift                                  (22)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_6_shift                                  (20)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_5_shift                                  (18)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_4_shift                                  (16)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_3_shift                                  (14)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_2_shift                                  (12)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_1_shift                                  (10)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_0_shift                                  (8)
#define  PIF_MLVDS_CTRL1_mlvds_rst_tcon_en_shift                                 (7)
#define  PIF_MLVDS_CTRL1_mlvds_rst_high_shift                                    (0)
#define  PIF_MLVDS_CTRL1_tcon_sel_mask                                           (0xFF000000)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_7_mask                                   (0x00C00000)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_6_mask                                   (0x00300000)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_5_mask                                   (0x000C0000)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_4_mask                                   (0x00030000)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_3_mask                                   (0x0000C000)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_2_mask                                   (0x00003000)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_1_mask                                   (0x00000C00)
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_0_mask                                   (0x00000300)
#define  PIF_MLVDS_CTRL1_mlvds_rst_tcon_en_mask                                  (0x00000080)
#define  PIF_MLVDS_CTRL1_mlvds_rst_high_mask                                     (0x0000003F)
#define  PIF_MLVDS_CTRL1_tcon_sel(data)                                          (0xFF000000&((data)<<24))
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_7(data)                                  (0x00C00000&((data)<<22))
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_6(data)                                  (0x00300000&((data)<<20))
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_5(data)                                  (0x000C0000&((data)<<18))
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_4(data)                                  (0x00030000&((data)<<16))
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_3(data)                                  (0x0000C000&((data)<<14))
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_2(data)                                  (0x00003000&((data)<<12))
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_1(data)                                  (0x00000C00&((data)<<10))
#define  PIF_MLVDS_CTRL1_tcon_delay_sel_0(data)                                  (0x00000300&((data)<<8))
#define  PIF_MLVDS_CTRL1_mlvds_rst_tcon_en(data)                                 (0x00000080&((data)<<7))
#define  PIF_MLVDS_CTRL1_mlvds_rst_high(data)                                    (0x0000003F&(data))
#define  PIF_MLVDS_CTRL1_get_tcon_sel(data)                                      ((0xFF000000&(data))>>24)
#define  PIF_MLVDS_CTRL1_get_tcon_delay_sel_7(data)                              ((0x00C00000&(data))>>22)
#define  PIF_MLVDS_CTRL1_get_tcon_delay_sel_6(data)                              ((0x00300000&(data))>>20)
#define  PIF_MLVDS_CTRL1_get_tcon_delay_sel_5(data)                              ((0x000C0000&(data))>>18)
#define  PIF_MLVDS_CTRL1_get_tcon_delay_sel_4(data)                              ((0x00030000&(data))>>16)
#define  PIF_MLVDS_CTRL1_get_tcon_delay_sel_3(data)                              ((0x0000C000&(data))>>14)
#define  PIF_MLVDS_CTRL1_get_tcon_delay_sel_2(data)                              ((0x00003000&(data))>>12)
#define  PIF_MLVDS_CTRL1_get_tcon_delay_sel_1(data)                              ((0x00000C00&(data))>>10)
#define  PIF_MLVDS_CTRL1_get_tcon_delay_sel_0(data)                              ((0x00000300&(data))>>8)
#define  PIF_MLVDS_CTRL1_get_mlvds_rst_tcon_en(data)                             ((0x00000080&(data))>>7)
#define  PIF_MLVDS_CTRL1_get_mlvds_rst_high(data)                                (0x0000003F&(data))

#define  PIF_MLVDS_CTRL2                                                        0x1802D020
#define  PIF_MLVDS_CTRL2_reg_addr                                                "0xB802D020"
#define  PIF_MLVDS_CTRL2_reg                                                     0xB802D020
#define  PIF_MLVDS_CTRL2_inst_addr                                               "0x0008"
#define  set_PIF_MLVDS_CTRL2_reg(data)                                           (*((volatile unsigned int*)PIF_MLVDS_CTRL2_reg)=data)
#define  get_PIF_MLVDS_CTRL2_reg                                                 (*((volatile unsigned int*)PIF_MLVDS_CTRL2_reg))
#define  PIF_MLVDS_CTRL2_mlvds_rst_low_region_shift                              (31)
#define  PIF_MLVDS_CTRL2_mlvds_4ck_inv_shift                                     (29)
#define  PIF_MLVDS_CTRL2_mlvds_3ck_inv_shift                                     (28)
#define  PIF_MLVDS_CTRL2_mlvds_2ck_inv_shift                                     (27)
#define  PIF_MLVDS_CTRL2_mlvds_1ck_inv_shift                                     (26)
#define  PIF_MLVDS_CTRL2_fw_merge_tcon_en_shift                                  (24)
#define  PIF_MLVDS_CTRL2_p3_tcon_en_shift                                        (23)
#define  PIF_MLVDS_CTRL2_p3_tcon_sel_shift                                       (16)
#define  PIF_MLVDS_CTRL2_p2_tcon_en_shift                                        (15)
#define  PIF_MLVDS_CTRL2_p2_tcon_sel_shift                                       (8)
#define  PIF_MLVDS_CTRL2_p1_tcon_en_shift                                        (7)
#define  PIF_MLVDS_CTRL2_p1_tcon_sel_shift                                       (0)
#define  PIF_MLVDS_CTRL2_mlvds_rst_low_region_mask                               (0x80000000)
#define  PIF_MLVDS_CTRL2_mlvds_4ck_inv_mask                                      (0x20000000)
#define  PIF_MLVDS_CTRL2_mlvds_3ck_inv_mask                                      (0x10000000)
#define  PIF_MLVDS_CTRL2_mlvds_2ck_inv_mask                                      (0x08000000)
#define  PIF_MLVDS_CTRL2_mlvds_1ck_inv_mask                                      (0x04000000)
#define  PIF_MLVDS_CTRL2_fw_merge_tcon_en_mask                                   (0x01000000)
#define  PIF_MLVDS_CTRL2_p3_tcon_en_mask                                         (0x00800000)
#define  PIF_MLVDS_CTRL2_p3_tcon_sel_mask                                        (0x003F0000)
#define  PIF_MLVDS_CTRL2_p2_tcon_en_mask                                         (0x00008000)
#define  PIF_MLVDS_CTRL2_p2_tcon_sel_mask                                        (0x00003F00)
#define  PIF_MLVDS_CTRL2_p1_tcon_en_mask                                         (0x00000080)
#define  PIF_MLVDS_CTRL2_p1_tcon_sel_mask                                        (0x0000003F)
#define  PIF_MLVDS_CTRL2_mlvds_rst_low_region(data)                              (0x80000000&((data)<<31))
#define  PIF_MLVDS_CTRL2_mlvds_4ck_inv(data)                                     (0x20000000&((data)<<29))
#define  PIF_MLVDS_CTRL2_mlvds_3ck_inv(data)                                     (0x10000000&((data)<<28))
#define  PIF_MLVDS_CTRL2_mlvds_2ck_inv(data)                                     (0x08000000&((data)<<27))
#define  PIF_MLVDS_CTRL2_mlvds_1ck_inv(data)                                     (0x04000000&((data)<<26))
#define  PIF_MLVDS_CTRL2_fw_merge_tcon_en(data)                                  (0x01000000&((data)<<24))
#define  PIF_MLVDS_CTRL2_p3_tcon_en(data)                                        (0x00800000&((data)<<23))
#define  PIF_MLVDS_CTRL2_p3_tcon_sel(data)                                       (0x003F0000&((data)<<16))
#define  PIF_MLVDS_CTRL2_p2_tcon_en(data)                                        (0x00008000&((data)<<15))
#define  PIF_MLVDS_CTRL2_p2_tcon_sel(data)                                       (0x00003F00&((data)<<8))
#define  PIF_MLVDS_CTRL2_p1_tcon_en(data)                                        (0x00000080&((data)<<7))
#define  PIF_MLVDS_CTRL2_p1_tcon_sel(data)                                       (0x0000003F&(data))
#define  PIF_MLVDS_CTRL2_get_mlvds_rst_low_region(data)                          ((0x80000000&(data))>>31)
#define  PIF_MLVDS_CTRL2_get_mlvds_4ck_inv(data)                                 ((0x20000000&(data))>>29)
#define  PIF_MLVDS_CTRL2_get_mlvds_3ck_inv(data)                                 ((0x10000000&(data))>>28)
#define  PIF_MLVDS_CTRL2_get_mlvds_2ck_inv(data)                                 ((0x08000000&(data))>>27)
#define  PIF_MLVDS_CTRL2_get_mlvds_1ck_inv(data)                                 ((0x04000000&(data))>>26)
#define  PIF_MLVDS_CTRL2_get_fw_merge_tcon_en(data)                              ((0x01000000&(data))>>24)
#define  PIF_MLVDS_CTRL2_get_p3_tcon_en(data)                                    ((0x00800000&(data))>>23)
#define  PIF_MLVDS_CTRL2_get_p3_tcon_sel(data)                                   ((0x003F0000&(data))>>16)
#define  PIF_MLVDS_CTRL2_get_p2_tcon_en(data)                                    ((0x00008000&(data))>>15)
#define  PIF_MLVDS_CTRL2_get_p2_tcon_sel(data)                                   ((0x00003F00&(data))>>8)
#define  PIF_MLVDS_CTRL2_get_p1_tcon_en(data)                                    ((0x00000080&(data))>>7)
#define  PIF_MLVDS_CTRL2_get_p1_tcon_sel(data)                                   (0x0000003F&(data))

#define  PIF_MLVDS_CTRL3                                                        0x1802D024
#define  PIF_MLVDS_CTRL3_reg_addr                                                "0xB802D024"
#define  PIF_MLVDS_CTRL3_reg                                                     0xB802D024
#define  PIF_MLVDS_CTRL3_inst_addr                                               "0x0009"
#define  set_PIF_MLVDS_CTRL3_reg(data)                                           (*((volatile unsigned int*)PIF_MLVDS_CTRL3_reg)=data)
#define  get_PIF_MLVDS_CTRL3_reg                                                 (*((volatile unsigned int*)PIF_MLVDS_CTRL3_reg))
#define  PIF_MLVDS_CTRL3_mlvds_rst_low_0_shift                                   (0)
#define  PIF_MLVDS_CTRL3_mlvds_rst_low_0_mask                                    (0xFFFFFFFF)
#define  PIF_MLVDS_CTRL3_mlvds_rst_low_0(data)                                   (0xFFFFFFFF&(data))
#define  PIF_MLVDS_CTRL3_get_mlvds_rst_low_0(data)                               (0xFFFFFFFF&(data))

#define  PIF_MLVDS_CTRL4                                                        0x1802D028
#define  PIF_MLVDS_CTRL4_reg_addr                                                "0xB802D028"
#define  PIF_MLVDS_CTRL4_reg                                                     0xB802D028
#define  PIF_MLVDS_CTRL4_inst_addr                                               "0x000A"
#define  set_PIF_MLVDS_CTRL4_reg(data)                                           (*((volatile unsigned int*)PIF_MLVDS_CTRL4_reg)=data)
#define  get_PIF_MLVDS_CTRL4_reg                                                 (*((volatile unsigned int*)PIF_MLVDS_CTRL4_reg))
#define  PIF_MLVDS_CTRL4_mlvds_rst_low_1_shift                                   (0)
#define  PIF_MLVDS_CTRL4_mlvds_rst_low_1_mask                                    (0xFFFFFFFF)
#define  PIF_MLVDS_CTRL4_mlvds_rst_low_1(data)                                   (0xFFFFFFFF&(data))
#define  PIF_MLVDS_CTRL4_get_mlvds_rst_low_1(data)                               (0xFFFFFFFF&(data))

#define  PIF_LVDS_CTRL0                                                         0x1802D02C
#define  PIF_LVDS_CTRL0_reg_addr                                                 "0xB802D02C"
#define  PIF_LVDS_CTRL0_reg                                                      0xB802D02C
#define  PIF_LVDS_CTRL0_inst_addr                                                "0x000B"
#define  set_PIF_LVDS_CTRL0_reg(data)                                            (*((volatile unsigned int*)PIF_LVDS_CTRL0_reg)=data)
#define  get_PIF_LVDS_CTRL0_reg                                                  (*((volatile unsigned int*)PIF_LVDS_CTRL0_reg))
#define  PIF_LVDS_CTRL0_pif_debug_sel_shift                                      (4)
#define  PIF_LVDS_CTRL0_plt_lvds_mode_shift                                      (0)
#define  PIF_LVDS_CTRL0_pif_debug_sel_mask                                       (0x000000F0)
#define  PIF_LVDS_CTRL0_plt_lvds_mode_mask                                       (0x00000007)
#define  PIF_LVDS_CTRL0_pif_debug_sel(data)                                      (0x000000F0&((data)<<4))
#define  PIF_LVDS_CTRL0_plt_lvds_mode(data)                                      (0x00000007&(data))
#define  PIF_LVDS_CTRL0_get_pif_debug_sel(data)                                  ((0x000000F0&(data))>>4)
#define  PIF_LVDS_CTRL0_get_plt_lvds_mode(data)                                  (0x00000007&(data))

#define  PIF_PIF_PN_CTRL                                                        0x1802D030
#define  PIF_PIF_PN_CTRL_reg_addr                                                "0xB802D030"
#define  PIF_PIF_PN_CTRL_reg                                                     0xB802D030
#define  PIF_PIF_PN_CTRL_inst_addr                                               "0x000C"
#define  set_PIF_PIF_PN_CTRL_reg(data)                                           (*((volatile unsigned int*)PIF_PIF_PN_CTRL_reg)=data)
#define  get_PIF_PIF_PN_CTRL_reg                                                 (*((volatile unsigned int*)PIF_PIF_PN_CTRL_reg))
#define  PIF_PIF_PN_CTRL_pif_pn_swap_shift                                       (0)
#define  PIF_PIF_PN_CTRL_pif_pn_swap_mask                                        (0x0FFFFFFF)
#define  PIF_PIF_PN_CTRL_pif_pn_swap(data)                                       (0x0FFFFFFF&(data))
#define  PIF_PIF_PN_CTRL_get_pif_pn_swap(data)                                   (0x0FFFFFFF&(data))

#define  PIF_LVDS_pair_select_ctrl_0                                            0x1802D060
#define  PIF_LVDS_pair_select_ctrl_0_reg_addr                                    "0xB802D060"
#define  PIF_LVDS_pair_select_ctrl_0_reg                                         0xB802D060
#define  PIF_LVDS_pair_select_ctrl_0_inst_addr                                   "0x000D"
#define  set_PIF_LVDS_pair_select_ctrl_0_reg(data)                               (*((volatile unsigned int*)PIF_LVDS_pair_select_ctrl_0_reg)=data)
#define  get_PIF_LVDS_pair_select_ctrl_0_reg                                     (*((volatile unsigned int*)PIF_LVDS_pair_select_ctrl_0_reg))
#define  PIF_LVDS_pair_select_ctrl_0_lvds_pair_sel_00_shift                      (24)
#define  PIF_LVDS_pair_select_ctrl_0_lvds_pair_sel_01_shift                      (16)
#define  PIF_LVDS_pair_select_ctrl_0_lvds_pair_sel_02_shift                      (8)
#define  PIF_LVDS_pair_select_ctrl_0_lvds_pair_sel_03_shift                      (0)
#define  PIF_LVDS_pair_select_ctrl_0_lvds_pair_sel_00_mask                       (0x1F000000)
#define  PIF_LVDS_pair_select_ctrl_0_lvds_pair_sel_01_mask                       (0x001F0000)
#define  PIF_LVDS_pair_select_ctrl_0_lvds_pair_sel_02_mask                       (0x00001F00)
#define  PIF_LVDS_pair_select_ctrl_0_lvds_pair_sel_03_mask                       (0x0000001F)
#define  PIF_LVDS_pair_select_ctrl_0_lvds_pair_sel_00(data)                      (0x1F000000&((data)<<24))
#define  PIF_LVDS_pair_select_ctrl_0_lvds_pair_sel_01(data)                      (0x001F0000&((data)<<16))
#define  PIF_LVDS_pair_select_ctrl_0_lvds_pair_sel_02(data)                      (0x00001F00&((data)<<8))
#define  PIF_LVDS_pair_select_ctrl_0_lvds_pair_sel_03(data)                      (0x0000001F&(data))
#define  PIF_LVDS_pair_select_ctrl_0_get_lvds_pair_sel_00(data)                  ((0x1F000000&(data))>>24)
#define  PIF_LVDS_pair_select_ctrl_0_get_lvds_pair_sel_01(data)                  ((0x001F0000&(data))>>16)
#define  PIF_LVDS_pair_select_ctrl_0_get_lvds_pair_sel_02(data)                  ((0x00001F00&(data))>>8)
#define  PIF_LVDS_pair_select_ctrl_0_get_lvds_pair_sel_03(data)                  (0x0000001F&(data))

#define  PIF_LVDS_pair_select_ctrl_1                                            0x1802D064
#define  PIF_LVDS_pair_select_ctrl_1_reg_addr                                    "0xB802D064"
#define  PIF_LVDS_pair_select_ctrl_1_reg                                         0xB802D064
#define  PIF_LVDS_pair_select_ctrl_1_inst_addr                                   "0x000E"
#define  set_PIF_LVDS_pair_select_ctrl_1_reg(data)                               (*((volatile unsigned int*)PIF_LVDS_pair_select_ctrl_1_reg)=data)
#define  get_PIF_LVDS_pair_select_ctrl_1_reg                                     (*((volatile unsigned int*)PIF_LVDS_pair_select_ctrl_1_reg))
#define  PIF_LVDS_pair_select_ctrl_1_lvds_pair_sel_04_shift                      (24)
#define  PIF_LVDS_pair_select_ctrl_1_lvds_pair_sel_05_shift                      (16)
#define  PIF_LVDS_pair_select_ctrl_1_lvds_pair_sel_06_shift                      (8)
#define  PIF_LVDS_pair_select_ctrl_1_lvds_pair_sel_07_shift                      (0)
#define  PIF_LVDS_pair_select_ctrl_1_lvds_pair_sel_04_mask                       (0x1F000000)
#define  PIF_LVDS_pair_select_ctrl_1_lvds_pair_sel_05_mask                       (0x001F0000)
#define  PIF_LVDS_pair_select_ctrl_1_lvds_pair_sel_06_mask                       (0x00001F00)
#define  PIF_LVDS_pair_select_ctrl_1_lvds_pair_sel_07_mask                       (0x0000001F)
#define  PIF_LVDS_pair_select_ctrl_1_lvds_pair_sel_04(data)                      (0x1F000000&((data)<<24))
#define  PIF_LVDS_pair_select_ctrl_1_lvds_pair_sel_05(data)                      (0x001F0000&((data)<<16))
#define  PIF_LVDS_pair_select_ctrl_1_lvds_pair_sel_06(data)                      (0x00001F00&((data)<<8))
#define  PIF_LVDS_pair_select_ctrl_1_lvds_pair_sel_07(data)                      (0x0000001F&(data))
#define  PIF_LVDS_pair_select_ctrl_1_get_lvds_pair_sel_04(data)                  ((0x1F000000&(data))>>24)
#define  PIF_LVDS_pair_select_ctrl_1_get_lvds_pair_sel_05(data)                  ((0x001F0000&(data))>>16)
#define  PIF_LVDS_pair_select_ctrl_1_get_lvds_pair_sel_06(data)                  ((0x00001F00&(data))>>8)
#define  PIF_LVDS_pair_select_ctrl_1_get_lvds_pair_sel_07(data)                  (0x0000001F&(data))

#define  PIF_LVDS_pair_select_ctrl_2                                            0x1802D068
#define  PIF_LVDS_pair_select_ctrl_2_reg_addr                                    "0xB802D068"
#define  PIF_LVDS_pair_select_ctrl_2_reg                                         0xB802D068
#define  PIF_LVDS_pair_select_ctrl_2_inst_addr                                   "0x000F"
#define  set_PIF_LVDS_pair_select_ctrl_2_reg(data)                               (*((volatile unsigned int*)PIF_LVDS_pair_select_ctrl_2_reg)=data)
#define  get_PIF_LVDS_pair_select_ctrl_2_reg                                     (*((volatile unsigned int*)PIF_LVDS_pair_select_ctrl_2_reg))
#define  PIF_LVDS_pair_select_ctrl_2_lvds_pair_sel_08_shift                      (24)
#define  PIF_LVDS_pair_select_ctrl_2_lvds_pair_sel_09_shift                      (16)
#define  PIF_LVDS_pair_select_ctrl_2_lvds_pair_sel_10_shift                      (8)
#define  PIF_LVDS_pair_select_ctrl_2_lvds_pair_sel_11_shift                      (0)
#define  PIF_LVDS_pair_select_ctrl_2_lvds_pair_sel_08_mask                       (0x1F000000)
#define  PIF_LVDS_pair_select_ctrl_2_lvds_pair_sel_09_mask                       (0x001F0000)
#define  PIF_LVDS_pair_select_ctrl_2_lvds_pair_sel_10_mask                       (0x00001F00)
#define  PIF_LVDS_pair_select_ctrl_2_lvds_pair_sel_11_mask                       (0x0000001F)
#define  PIF_LVDS_pair_select_ctrl_2_lvds_pair_sel_08(data)                      (0x1F000000&((data)<<24))
#define  PIF_LVDS_pair_select_ctrl_2_lvds_pair_sel_09(data)                      (0x001F0000&((data)<<16))
#define  PIF_LVDS_pair_select_ctrl_2_lvds_pair_sel_10(data)                      (0x00001F00&((data)<<8))
#define  PIF_LVDS_pair_select_ctrl_2_lvds_pair_sel_11(data)                      (0x0000001F&(data))
#define  PIF_LVDS_pair_select_ctrl_2_get_lvds_pair_sel_08(data)                  ((0x1F000000&(data))>>24)
#define  PIF_LVDS_pair_select_ctrl_2_get_lvds_pair_sel_09(data)                  ((0x001F0000&(data))>>16)
#define  PIF_LVDS_pair_select_ctrl_2_get_lvds_pair_sel_10(data)                  ((0x00001F00&(data))>>8)
#define  PIF_LVDS_pair_select_ctrl_2_get_lvds_pair_sel_11(data)                  (0x0000001F&(data))

#define  PIF_LVDS_pair_select_ctrl_3                                            0x1802D06C
#define  PIF_LVDS_pair_select_ctrl_3_reg_addr                                    "0xB802D06C"
#define  PIF_LVDS_pair_select_ctrl_3_reg                                         0xB802D06C
#define  PIF_LVDS_pair_select_ctrl_3_inst_addr                                   "0x0010"
#define  set_PIF_LVDS_pair_select_ctrl_3_reg(data)                               (*((volatile unsigned int*)PIF_LVDS_pair_select_ctrl_3_reg)=data)
#define  get_PIF_LVDS_pair_select_ctrl_3_reg                                     (*((volatile unsigned int*)PIF_LVDS_pair_select_ctrl_3_reg))
#define  PIF_LVDS_pair_select_ctrl_3_lvds_pair_sel_12_shift                      (24)
#define  PIF_LVDS_pair_select_ctrl_3_lvds_pair_sel_13_shift                      (16)
#define  PIF_LVDS_pair_select_ctrl_3_lvds_pair_sel_14_shift                      (8)
#define  PIF_LVDS_pair_select_ctrl_3_lvds_pair_sel_15_shift                      (0)
#define  PIF_LVDS_pair_select_ctrl_3_lvds_pair_sel_12_mask                       (0x1F000000)
#define  PIF_LVDS_pair_select_ctrl_3_lvds_pair_sel_13_mask                       (0x001F0000)
#define  PIF_LVDS_pair_select_ctrl_3_lvds_pair_sel_14_mask                       (0x00001F00)
#define  PIF_LVDS_pair_select_ctrl_3_lvds_pair_sel_15_mask                       (0x0000001F)
#define  PIF_LVDS_pair_select_ctrl_3_lvds_pair_sel_12(data)                      (0x1F000000&((data)<<24))
#define  PIF_LVDS_pair_select_ctrl_3_lvds_pair_sel_13(data)                      (0x001F0000&((data)<<16))
#define  PIF_LVDS_pair_select_ctrl_3_lvds_pair_sel_14(data)                      (0x00001F00&((data)<<8))
#define  PIF_LVDS_pair_select_ctrl_3_lvds_pair_sel_15(data)                      (0x0000001F&(data))
#define  PIF_LVDS_pair_select_ctrl_3_get_lvds_pair_sel_12(data)                  ((0x1F000000&(data))>>24)
#define  PIF_LVDS_pair_select_ctrl_3_get_lvds_pair_sel_13(data)                  ((0x001F0000&(data))>>16)
#define  PIF_LVDS_pair_select_ctrl_3_get_lvds_pair_sel_14(data)                  ((0x00001F00&(data))>>8)
#define  PIF_LVDS_pair_select_ctrl_3_get_lvds_pair_sel_15(data)                  (0x0000001F&(data))

#define  PIF_LVDS_pair_select_ctrl_4                                            0x1802D070
#define  PIF_LVDS_pair_select_ctrl_4_reg_addr                                    "0xB802D070"
#define  PIF_LVDS_pair_select_ctrl_4_reg                                         0xB802D070
#define  PIF_LVDS_pair_select_ctrl_4_inst_addr                                   "0x0011"
#define  set_PIF_LVDS_pair_select_ctrl_4_reg(data)                               (*((volatile unsigned int*)PIF_LVDS_pair_select_ctrl_4_reg)=data)
#define  get_PIF_LVDS_pair_select_ctrl_4_reg                                     (*((volatile unsigned int*)PIF_LVDS_pair_select_ctrl_4_reg))
#define  PIF_LVDS_pair_select_ctrl_4_lvds_pair_sel_16_shift                      (24)
#define  PIF_LVDS_pair_select_ctrl_4_lvds_pair_sel_17_shift                      (16)
#define  PIF_LVDS_pair_select_ctrl_4_lvds_pair_sel_18_shift                      (8)
#define  PIF_LVDS_pair_select_ctrl_4_lvds_pair_sel_19_shift                      (0)
#define  PIF_LVDS_pair_select_ctrl_4_lvds_pair_sel_16_mask                       (0x1F000000)
#define  PIF_LVDS_pair_select_ctrl_4_lvds_pair_sel_17_mask                       (0x001F0000)
#define  PIF_LVDS_pair_select_ctrl_4_lvds_pair_sel_18_mask                       (0x00001F00)
#define  PIF_LVDS_pair_select_ctrl_4_lvds_pair_sel_19_mask                       (0x0000001F)
#define  PIF_LVDS_pair_select_ctrl_4_lvds_pair_sel_16(data)                      (0x1F000000&((data)<<24))
#define  PIF_LVDS_pair_select_ctrl_4_lvds_pair_sel_17(data)                      (0x001F0000&((data)<<16))
#define  PIF_LVDS_pair_select_ctrl_4_lvds_pair_sel_18(data)                      (0x00001F00&((data)<<8))
#define  PIF_LVDS_pair_select_ctrl_4_lvds_pair_sel_19(data)                      (0x0000001F&(data))
#define  PIF_LVDS_pair_select_ctrl_4_get_lvds_pair_sel_16(data)                  ((0x1F000000&(data))>>24)
#define  PIF_LVDS_pair_select_ctrl_4_get_lvds_pair_sel_17(data)                  ((0x001F0000&(data))>>16)
#define  PIF_LVDS_pair_select_ctrl_4_get_lvds_pair_sel_18(data)                  ((0x00001F00&(data))>>8)
#define  PIF_LVDS_pair_select_ctrl_4_get_lvds_pair_sel_19(data)                  (0x0000001F&(data))

#define  PIF_LVDS_pair_select_ctrl_5                                            0x1802D074
#define  PIF_LVDS_pair_select_ctrl_5_reg_addr                                    "0xB802D074"
#define  PIF_LVDS_pair_select_ctrl_5_reg                                         0xB802D074
#define  PIF_LVDS_pair_select_ctrl_5_inst_addr                                   "0x0012"
#define  set_PIF_LVDS_pair_select_ctrl_5_reg(data)                               (*((volatile unsigned int*)PIF_LVDS_pair_select_ctrl_5_reg)=data)
#define  get_PIF_LVDS_pair_select_ctrl_5_reg                                     (*((volatile unsigned int*)PIF_LVDS_pair_select_ctrl_5_reg))
#define  PIF_LVDS_pair_select_ctrl_5_lvds_pair_sel_20_shift                      (24)
#define  PIF_LVDS_pair_select_ctrl_5_lvds_pair_sel_21_shift                      (16)
#define  PIF_LVDS_pair_select_ctrl_5_lvds_pair_sel_22_shift                      (8)
#define  PIF_LVDS_pair_select_ctrl_5_lvds_pair_sel_23_shift                      (0)
#define  PIF_LVDS_pair_select_ctrl_5_lvds_pair_sel_20_mask                       (0x1F000000)
#define  PIF_LVDS_pair_select_ctrl_5_lvds_pair_sel_21_mask                       (0x001F0000)
#define  PIF_LVDS_pair_select_ctrl_5_lvds_pair_sel_22_mask                       (0x00001F00)
#define  PIF_LVDS_pair_select_ctrl_5_lvds_pair_sel_23_mask                       (0x0000001F)
#define  PIF_LVDS_pair_select_ctrl_5_lvds_pair_sel_20(data)                      (0x1F000000&((data)<<24))
#define  PIF_LVDS_pair_select_ctrl_5_lvds_pair_sel_21(data)                      (0x001F0000&((data)<<16))
#define  PIF_LVDS_pair_select_ctrl_5_lvds_pair_sel_22(data)                      (0x00001F00&((data)<<8))
#define  PIF_LVDS_pair_select_ctrl_5_lvds_pair_sel_23(data)                      (0x0000001F&(data))
#define  PIF_LVDS_pair_select_ctrl_5_get_lvds_pair_sel_20(data)                  ((0x1F000000&(data))>>24)
#define  PIF_LVDS_pair_select_ctrl_5_get_lvds_pair_sel_21(data)                  ((0x001F0000&(data))>>16)
#define  PIF_LVDS_pair_select_ctrl_5_get_lvds_pair_sel_22(data)                  ((0x00001F00&(data))>>8)
#define  PIF_LVDS_pair_select_ctrl_5_get_lvds_pair_sel_23(data)                  (0x0000001F&(data))

#define  PIF_LVDS_pair_select_ctrl_6                                            0x1802D078
#define  PIF_LVDS_pair_select_ctrl_6_reg_addr                                    "0xB802D078"
#define  PIF_LVDS_pair_select_ctrl_6_reg                                         0xB802D078
#define  PIF_LVDS_pair_select_ctrl_6_inst_addr                                   "0x0013"
#define  set_PIF_LVDS_pair_select_ctrl_6_reg(data)                               (*((volatile unsigned int*)PIF_LVDS_pair_select_ctrl_6_reg)=data)
#define  get_PIF_LVDS_pair_select_ctrl_6_reg                                     (*((volatile unsigned int*)PIF_LVDS_pair_select_ctrl_6_reg))
#define  PIF_LVDS_pair_select_ctrl_6_lvds_pair_sel_24_shift                      (24)
#define  PIF_LVDS_pair_select_ctrl_6_lvds_pair_sel_25_shift                      (16)
#define  PIF_LVDS_pair_select_ctrl_6_lvds_pair_sel_26_shift                      (8)
#define  PIF_LVDS_pair_select_ctrl_6_lvds_pair_sel_27_shift                      (0)
#define  PIF_LVDS_pair_select_ctrl_6_lvds_pair_sel_24_mask                       (0x1F000000)
#define  PIF_LVDS_pair_select_ctrl_6_lvds_pair_sel_25_mask                       (0x001F0000)
#define  PIF_LVDS_pair_select_ctrl_6_lvds_pair_sel_26_mask                       (0x00001F00)
#define  PIF_LVDS_pair_select_ctrl_6_lvds_pair_sel_27_mask                       (0x0000001F)
#define  PIF_LVDS_pair_select_ctrl_6_lvds_pair_sel_24(data)                      (0x1F000000&((data)<<24))
#define  PIF_LVDS_pair_select_ctrl_6_lvds_pair_sel_25(data)                      (0x001F0000&((data)<<16))
#define  PIF_LVDS_pair_select_ctrl_6_lvds_pair_sel_26(data)                      (0x00001F00&((data)<<8))
#define  PIF_LVDS_pair_select_ctrl_6_lvds_pair_sel_27(data)                      (0x0000001F&(data))
#define  PIF_LVDS_pair_select_ctrl_6_get_lvds_pair_sel_24(data)                  ((0x1F000000&(data))>>24)
#define  PIF_LVDS_pair_select_ctrl_6_get_lvds_pair_sel_25(data)                  ((0x001F0000&(data))>>16)
#define  PIF_LVDS_pair_select_ctrl_6_get_lvds_pair_sel_26(data)                  ((0x00001F00&(data))>>8)
#define  PIF_LVDS_pair_select_ctrl_6_get_lvds_pair_sel_27(data)                  (0x0000001F&(data))

#define  PIF_PIF_FIFO_EN                                                        0x1802D038
#define  PIF_PIF_FIFO_EN_reg_addr                                                "0xB802D038"
#define  PIF_PIF_FIFO_EN_reg                                                     0xB802D038
#define  PIF_PIF_FIFO_EN_inst_addr                                               "0x0014"
#define  set_PIF_PIF_FIFO_EN_reg(data)                                           (*((volatile unsigned int*)PIF_PIF_FIFO_EN_reg)=data)
#define  get_PIF_PIF_FIFO_EN_reg                                                 (*((volatile unsigned int*)PIF_PIF_FIFO_EN_reg))
#define  PIF_PIF_FIFO_EN_dbg_en_shift                                            (31)
#define  PIF_PIF_FIFO_EN_dbg_sel_shift                                           (24)
#define  PIF_PIF_FIFO_EN_pif_fifo_irq_shift                                      (4)
#define  PIF_PIF_FIFO_EN_pif_fifo_en_shift                                       (0)
#define  PIF_PIF_FIFO_EN_dbg_en_mask                                             (0x80000000)
#define  PIF_PIF_FIFO_EN_dbg_sel_mask                                            (0x1F000000)
#define  PIF_PIF_FIFO_EN_pif_fifo_irq_mask                                       (0x00000010)
#define  PIF_PIF_FIFO_EN_pif_fifo_en_mask                                        (0x00000001)
#define  PIF_PIF_FIFO_EN_dbg_en(data)                                            (0x80000000&((data)<<31))
#define  PIF_PIF_FIFO_EN_dbg_sel(data)                                           (0x1F000000&((data)<<24))
#define  PIF_PIF_FIFO_EN_pif_fifo_irq(data)                                      (0x00000010&((data)<<4))
#define  PIF_PIF_FIFO_EN_pif_fifo_en(data)                                       (0x00000001&(data))
#define  PIF_PIF_FIFO_EN_get_dbg_en(data)                                        ((0x80000000&(data))>>31)
#define  PIF_PIF_FIFO_EN_get_dbg_sel(data)                                       ((0x1F000000&(data))>>24)
#define  PIF_PIF_FIFO_EN_get_pif_fifo_irq(data)                                  ((0x00000010&(data))>>4)
#define  PIF_PIF_FIFO_EN_get_pif_fifo_en(data)                                   (0x00000001&(data))

#define  PIF_PIF_FIFO_RST                                                       0x1802D03C
#define  PIF_PIF_FIFO_RST_reg_addr                                               "0xB802D03C"
#define  PIF_PIF_FIFO_RST_reg                                                    0xB802D03C
#define  PIF_PIF_FIFO_RST_inst_addr                                              "0x0015"
#define  set_PIF_PIF_FIFO_RST_reg(data)                                          (*((volatile unsigned int*)PIF_PIF_FIFO_RST_reg)=data)
#define  get_PIF_PIF_FIFO_RST_reg                                                (*((volatile unsigned int*)PIF_PIF_FIFO_RST_reg))
#define  PIF_PIF_FIFO_RST_fifo_guard_error_shift                                 (20)
#define  PIF_PIF_FIFO_RST_fifo_vs_rst_type_shift                                 (17)
#define  PIF_PIF_FIFO_RST_fifo_vs_rst_en_shift                                   (16)
#define  PIF_PIF_FIFO_RST_fifo_vs_rst_delay_shift                                (0)
#define  PIF_PIF_FIFO_RST_fifo_guard_error_mask                                  (0xFFF00000)
#define  PIF_PIF_FIFO_RST_fifo_vs_rst_type_mask                                  (0x00060000)
#define  PIF_PIF_FIFO_RST_fifo_vs_rst_en_mask                                    (0x00010000)
#define  PIF_PIF_FIFO_RST_fifo_vs_rst_delay_mask                                 (0x0000FFFF)
#define  PIF_PIF_FIFO_RST_fifo_guard_error(data)                                 (0xFFF00000&((data)<<20))
#define  PIF_PIF_FIFO_RST_fifo_vs_rst_type(data)                                 (0x00060000&((data)<<17))
#define  PIF_PIF_FIFO_RST_fifo_vs_rst_en(data)                                   (0x00010000&((data)<<16))
#define  PIF_PIF_FIFO_RST_fifo_vs_rst_delay(data)                                (0x0000FFFF&(data))
#define  PIF_PIF_FIFO_RST_get_fifo_guard_error(data)                             ((0xFFF00000&(data))>>20)
#define  PIF_PIF_FIFO_RST_get_fifo_vs_rst_type(data)                             ((0x00060000&(data))>>17)
#define  PIF_PIF_FIFO_RST_get_fifo_vs_rst_en(data)                               ((0x00010000&(data))>>16)
#define  PIF_PIF_FIFO_RST_get_fifo_vs_rst_delay(data)                            (0x0000FFFF&(data))

#define  PIF_PIF_FIFO_ERR_STA                                                   0x1802D054
#define  PIF_PIF_FIFO_ERR_STA_reg_addr                                           "0xB802D054"
#define  PIF_PIF_FIFO_ERR_STA_reg                                                0xB802D054
#define  PIF_PIF_FIFO_ERR_STA_inst_addr                                          "0x0016"
#define  set_PIF_PIF_FIFO_ERR_STA_reg(data)                                      (*((volatile unsigned int*)PIF_PIF_FIFO_ERR_STA_reg)=data)
#define  get_PIF_PIF_FIFO_ERR_STA_reg                                            (*((volatile unsigned int*)PIF_PIF_FIFO_ERR_STA_reg))
#define  PIF_PIF_FIFO_ERR_STA_pif_fifo_error_ie_shift                            (1)
#define  PIF_PIF_FIFO_ERR_STA_pif_fifo_error_shift                               (0)
#define  PIF_PIF_FIFO_ERR_STA_pif_fifo_error_ie_mask                             (0x00000002)
#define  PIF_PIF_FIFO_ERR_STA_pif_fifo_error_mask                                (0x00000001)
#define  PIF_PIF_FIFO_ERR_STA_pif_fifo_error_ie(data)                            (0x00000002&((data)<<1))
#define  PIF_PIF_FIFO_ERR_STA_pif_fifo_error(data)                               (0x00000001&(data))
#define  PIF_PIF_FIFO_ERR_STA_get_pif_fifo_error_ie(data)                        ((0x00000002&(data))>>1)
#define  PIF_PIF_FIFO_ERR_STA_get_pif_fifo_error(data)                           (0x00000001&(data))

#define  PIF_PIF_FIFO_TST_OUT                                                   0x1802D058
#define  PIF_PIF_FIFO_TST_OUT_reg_addr                                           "0xB802D058"
#define  PIF_PIF_FIFO_TST_OUT_reg                                                0xB802D058
#define  PIF_PIF_FIFO_TST_OUT_inst_addr                                          "0x0017"
#define  set_PIF_PIF_FIFO_TST_OUT_reg(data)                                      (*((volatile unsigned int*)PIF_PIF_FIFO_TST_OUT_reg)=data)
#define  get_PIF_PIF_FIFO_TST_OUT_reg                                            (*((volatile unsigned int*)PIF_PIF_FIFO_TST_OUT_reg))
#define  PIF_PIF_FIFO_TST_OUT_pif_fifo_tst_out_shift                             (0)
#define  PIF_PIF_FIFO_TST_OUT_pif_fifo_tst_out_mask                              (0xFFFFFFFF)
#define  PIF_PIF_FIFO_TST_OUT_pif_fifo_tst_out(data)                             (0xFFFFFFFF&(data))
#define  PIF_PIF_FIFO_TST_OUT_get_pif_fifo_tst_out(data)                         (0xFFFFFFFF&(data))

#define  PIF_PIF_FIFO_BIST_PRBS                                                 0x1802D040
#define  PIF_PIF_FIFO_BIST_PRBS_reg_addr                                         "0xB802D040"
#define  PIF_PIF_FIFO_BIST_PRBS_reg                                              0xB802D040
#define  PIF_PIF_FIFO_BIST_PRBS_inst_addr                                        "0x0018"
#define  set_PIF_PIF_FIFO_BIST_PRBS_reg(data)                                    (*((volatile unsigned int*)PIF_PIF_FIFO_BIST_PRBS_reg)=data)
#define  get_PIF_PIF_FIFO_BIST_PRBS_reg                                          (*((volatile unsigned int*)PIF_PIF_FIFO_BIST_PRBS_reg))
#define  PIF_PIF_FIFO_BIST_PRBS_pif_bist_mode_select_shift                       (28)
#define  PIF_PIF_FIFO_BIST_PRBS_pif_bist_mode_select_mask                        (0xF0000000)
#define  PIF_PIF_FIFO_BIST_PRBS_pif_bist_mode_select(data)                       (0xF0000000&((data)<<28))
#define  PIF_PIF_FIFO_BIST_PRBS_get_pif_bist_mode_select(data)                   ((0xF0000000&(data))>>28)

#define  PIF_PIF_FIFO_BIST_LEN                                                  0x1802D044
#define  PIF_PIF_FIFO_BIST_LEN_reg_addr                                          "0xB802D044"
#define  PIF_PIF_FIFO_BIST_LEN_reg                                               0xB802D044
#define  PIF_PIF_FIFO_BIST_LEN_inst_addr                                         "0x0019"
#define  set_PIF_PIF_FIFO_BIST_LEN_reg(data)                                     (*((volatile unsigned int*)PIF_PIF_FIFO_BIST_LEN_reg)=data)
#define  get_PIF_PIF_FIFO_BIST_LEN_reg                                           (*((volatile unsigned int*)PIF_PIF_FIFO_BIST_LEN_reg))
#define  PIF_PIF_FIFO_BIST_LEN_pif_bist_length_shift                             (0)
#define  PIF_PIF_FIFO_BIST_LEN_pif_bist_length_mask                              (0x00FFFFFF)
#define  PIF_PIF_FIFO_BIST_LEN_pif_bist_length(data)                             (0x00FFFFFF&(data))
#define  PIF_PIF_FIFO_BIST_LEN_get_pif_bist_length(data)                         (0x00FFFFFF&(data))

#define  PIF_PIF_FIFO_BIST_RES1                                                 0x1802D048
#define  PIF_PIF_FIFO_BIST_RES1_reg_addr                                         "0xB802D048"
#define  PIF_PIF_FIFO_BIST_RES1_reg                                              0xB802D048
#define  PIF_PIF_FIFO_BIST_RES1_inst_addr                                        "0x001A"
#define  set_PIF_PIF_FIFO_BIST_RES1_reg(data)                                    (*((volatile unsigned int*)PIF_PIF_FIFO_BIST_RES1_reg)=data)
#define  get_PIF_PIF_FIFO_BIST_RES1_reg                                          (*((volatile unsigned int*)PIF_PIF_FIFO_BIST_RES1_reg))
#define  PIF_PIF_FIFO_BIST_RES1_pif_bist_done_shift                              (31)
#define  PIF_PIF_FIFO_BIST_RES1_pif_bist_result_shift                            (0)
#define  PIF_PIF_FIFO_BIST_RES1_pif_bist_done_mask                               (0x80000000)
#define  PIF_PIF_FIFO_BIST_RES1_pif_bist_result_mask                             (0x00000001)
#define  PIF_PIF_FIFO_BIST_RES1_pif_bist_done(data)                              (0x80000000&((data)<<31))
#define  PIF_PIF_FIFO_BIST_RES1_pif_bist_result(data)                            (0x00000001&(data))
#define  PIF_PIF_FIFO_BIST_RES1_get_pif_bist_done(data)                          ((0x80000000&(data))>>31)
#define  PIF_PIF_FIFO_BIST_RES1_get_pif_bist_result(data)                        (0x00000001&(data))

#define  PIF_PIF_FIFO_BIST_RES2                                                 0x1802D04C
#define  PIF_PIF_FIFO_BIST_RES2_reg_addr                                         "0xB802D04C"
#define  PIF_PIF_FIFO_BIST_RES2_reg                                              0xB802D04C
#define  PIF_PIF_FIFO_BIST_RES2_inst_addr                                        "0x001B"
#define  set_PIF_PIF_FIFO_BIST_RES2_reg(data)                                    (*((volatile unsigned int*)PIF_PIF_FIFO_BIST_RES2_reg)=data)
#define  get_PIF_PIF_FIFO_BIST_RES2_reg                                          (*((volatile unsigned int*)PIF_PIF_FIFO_BIST_RES2_reg))
#define  PIF_PIF_FIFO_BIST_RES2_pif_bist_result_port_shift                       (0)
#define  PIF_PIF_FIFO_BIST_RES2_pif_bist_result_port_mask                        (0x00000FFF)
#define  PIF_PIF_FIFO_BIST_RES2_pif_bist_result_port(data)                       (0x00000FFF&(data))
#define  PIF_PIF_FIFO_BIST_RES2_get_pif_bist_result_port(data)                   (0x00000FFF&(data))

#define  PIF_PIF_FIFO_BIST_CTL                                                  0x1802D050
#define  PIF_PIF_FIFO_BIST_CTL_reg_addr                                          "0xB802D050"
#define  PIF_PIF_FIFO_BIST_CTL_reg                                               0xB802D050
#define  PIF_PIF_FIFO_BIST_CTL_inst_addr                                         "0x001C"
#define  set_PIF_PIF_FIFO_BIST_CTL_reg(data)                                     (*((volatile unsigned int*)PIF_PIF_FIFO_BIST_CTL_reg)=data)
#define  get_PIF_PIF_FIFO_BIST_CTL_reg                                           (*((volatile unsigned int*)PIF_PIF_FIFO_BIST_CTL_reg))
#define  PIF_PIF_FIFO_BIST_CTL_pif_bist_enable_shift                             (0)
#define  PIF_PIF_FIFO_BIST_CTL_pif_bist_enable_mask                              (0x00000001)
#define  PIF_PIF_FIFO_BIST_CTL_pif_bist_enable(data)                             (0x00000001&(data))
#define  PIF_PIF_FIFO_BIST_CTL_get_pif_bist_enable(data)                         (0x00000001&(data))

#define  PIF_PIF_FIFO_MUX_CTRL0                                                 0x1802D080
#define  PIF_PIF_FIFO_MUX_CTRL0_reg_addr                                         "0xB802D080"
#define  PIF_PIF_FIFO_MUX_CTRL0_reg                                              0xB802D080
#define  PIF_PIF_FIFO_MUX_CTRL0_inst_addr                                        "0x001D"
#define  set_PIF_PIF_FIFO_MUX_CTRL0_reg(data)                                    (*((volatile unsigned int*)PIF_PIF_FIFO_MUX_CTRL0_reg)=data)
#define  get_PIF_PIF_FIFO_MUX_CTRL0_reg                                          (*((volatile unsigned int*)PIF_PIF_FIFO_MUX_CTRL0_reg))
#define  PIF_PIF_FIFO_MUX_CTRL0_video_osd_sel_shift                              (28)
#define  PIF_PIF_FIFO_MUX_CTRL0_phy_lane_en_shift                                (0)
#define  PIF_PIF_FIFO_MUX_CTRL0_video_osd_sel_mask                               (0x70000000)
#define  PIF_PIF_FIFO_MUX_CTRL0_phy_lane_en_mask                                 (0x0FFFFFFF)
#define  PIF_PIF_FIFO_MUX_CTRL0_video_osd_sel(data)                              (0x70000000&((data)<<28))
#define  PIF_PIF_FIFO_MUX_CTRL0_phy_lane_en(data)                                (0x0FFFFFFF&(data))
#define  PIF_PIF_FIFO_MUX_CTRL0_get_video_osd_sel(data)                          ((0x70000000&(data))>>28)
#define  PIF_PIF_FIFO_MUX_CTRL0_get_phy_lane_en(data)                            (0x0FFFFFFF&(data))

#define  PIF_PIF_FIFO_OSD_CTRL0                                                 0x1802D084
#define  PIF_PIF_FIFO_OSD_CTRL0_reg_addr                                         "0xB802D084"
#define  PIF_PIF_FIFO_OSD_CTRL0_reg                                              0xB802D084
#define  PIF_PIF_FIFO_OSD_CTRL0_inst_addr                                        "0x001E"
#define  set_PIF_PIF_FIFO_OSD_CTRL0_reg(data)                                    (*((volatile unsigned int*)PIF_PIF_FIFO_OSD_CTRL0_reg)=data)
#define  get_PIF_PIF_FIFO_OSD_CTRL0_reg                                          (*((volatile unsigned int*)PIF_PIF_FIFO_OSD_CTRL0_reg))
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_en_shift                            (31)
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_dbg_en_shift                        (24)
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_dbg_sel_shift                       (20)
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_irq_shift                           (16)
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error_ie_shift                      (12)
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error_shift                         (8)
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error_cnt_shift                     (0)
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_en_mask                             (0x80000000)
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_dbg_en_mask                         (0x01000000)
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_dbg_sel_mask                        (0x00300000)
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_irq_mask                            (0x00010000)
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error_ie_mask                       (0x00001000)
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error_mask                          (0x00000100)
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error_cnt_mask                      (0x000000FF)
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_en(data)                            (0x80000000&((data)<<31))
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_dbg_en(data)                        (0x01000000&((data)<<24))
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_dbg_sel(data)                       (0x00300000&((data)<<20))
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_irq(data)                           (0x00010000&((data)<<16))
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error_ie(data)                      (0x00001000&((data)<<12))
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error(data)                         (0x00000100&((data)<<8))
#define  PIF_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error_cnt(data)                     (0x000000FF&(data))
#define  PIF_PIF_FIFO_OSD_CTRL0_get_osd_pif_fifo_en(data)                        ((0x80000000&(data))>>31)
#define  PIF_PIF_FIFO_OSD_CTRL0_get_osd_pif_fifo_dbg_en(data)                    ((0x01000000&(data))>>24)
#define  PIF_PIF_FIFO_OSD_CTRL0_get_osd_pif_fifo_dbg_sel(data)                   ((0x00300000&(data))>>20)
#define  PIF_PIF_FIFO_OSD_CTRL0_get_osd_pif_fifo_irq(data)                       ((0x00010000&(data))>>16)
#define  PIF_PIF_FIFO_OSD_CTRL0_get_osd_pif_fifo_error_ie(data)                  ((0x00001000&(data))>>12)
#define  PIF_PIF_FIFO_OSD_CTRL0_get_osd_pif_fifo_error(data)                     ((0x00000100&(data))>>8)
#define  PIF_PIF_FIFO_OSD_CTRL0_get_osd_pif_fifo_error_cnt(data)                 (0x000000FF&(data))

#define  PIF_PIF_FIFO_OSD_CTRL1                                                 0x1802D088
#define  PIF_PIF_FIFO_OSD_CTRL1_reg_addr                                         "0xB802D088"
#define  PIF_PIF_FIFO_OSD_CTRL1_reg                                              0xB802D088
#define  PIF_PIF_FIFO_OSD_CTRL1_inst_addr                                        "0x001F"
#define  set_PIF_PIF_FIFO_OSD_CTRL1_reg(data)                                    (*((volatile unsigned int*)PIF_PIF_FIFO_OSD_CTRL1_reg)=data)
#define  get_PIF_PIF_FIFO_OSD_CTRL1_reg                                          (*((volatile unsigned int*)PIF_PIF_FIFO_OSD_CTRL1_reg))
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_pif_fifo_rst_type_shift                      (31)
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_5_error_shift                      (29)
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_4_error_shift                      (28)
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_3_error_shift                      (27)
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_2_error_shift                      (26)
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_1_error_shift                      (25)
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_0_error_shift                      (24)
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_lane_en_shift                                (0)
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_pif_fifo_rst_type_mask                       (0x80000000)
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_5_error_mask                       (0x20000000)
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_4_error_mask                       (0x10000000)
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_3_error_mask                       (0x08000000)
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_2_error_mask                       (0x04000000)
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_1_error_mask                       (0x02000000)
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_0_error_mask                       (0x01000000)
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_lane_en_mask                                 (0x0000000F)
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_pif_fifo_rst_type(data)                      (0x80000000&((data)<<31))
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_5_error(data)                      (0x20000000&((data)<<29))
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_4_error(data)                      (0x10000000&((data)<<28))
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_3_error(data)                      (0x08000000&((data)<<27))
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_2_error(data)                      (0x04000000&((data)<<26))
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_1_error(data)                      (0x02000000&((data)<<25))
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_0_error(data)                      (0x01000000&((data)<<24))
#define  PIF_PIF_FIFO_OSD_CTRL1_osd_lane_en(data)                                (0x0000000F&(data))
#define  PIF_PIF_FIFO_OSD_CTRL1_get_osd_pif_fifo_rst_type(data)                  ((0x80000000&(data))>>31)
#define  PIF_PIF_FIFO_OSD_CTRL1_get_osd_hit_r_cnt_5_error(data)                  ((0x20000000&(data))>>29)
#define  PIF_PIF_FIFO_OSD_CTRL1_get_osd_hit_r_cnt_4_error(data)                  ((0x10000000&(data))>>28)
#define  PIF_PIF_FIFO_OSD_CTRL1_get_osd_hit_r_cnt_3_error(data)                  ((0x08000000&(data))>>27)
#define  PIF_PIF_FIFO_OSD_CTRL1_get_osd_hit_r_cnt_2_error(data)                  ((0x04000000&(data))>>26)
#define  PIF_PIF_FIFO_OSD_CTRL1_get_osd_hit_r_cnt_1_error(data)                  ((0x02000000&(data))>>25)
#define  PIF_PIF_FIFO_OSD_CTRL1_get_osd_hit_r_cnt_0_error(data)                  ((0x01000000&(data))>>24)
#define  PIF_PIF_FIFO_OSD_CTRL1_get_osd_lane_en(data)                            (0x0000000F&(data))

#define  PIF_PIF_FIFO_OSD_CTRL2                                                 0x1802D08C
#define  PIF_PIF_FIFO_OSD_CTRL2_reg_addr                                         "0xB802D08C"
#define  PIF_PIF_FIFO_OSD_CTRL2_reg                                              0xB802D08C
#define  PIF_PIF_FIFO_OSD_CTRL2_inst_addr                                        "0x0020"
#define  set_PIF_PIF_FIFO_OSD_CTRL2_reg(data)                                    (*((volatile unsigned int*)PIF_PIF_FIFO_OSD_CTRL2_reg)=data)
#define  get_PIF_PIF_FIFO_OSD_CTRL2_reg                                          (*((volatile unsigned int*)PIF_PIF_FIFO_OSD_CTRL2_reg))
#define  PIF_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel3_shift                         (12)
#define  PIF_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel2_shift                         (8)
#define  PIF_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel1_shift                         (4)
#define  PIF_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel0_shift                         (0)
#define  PIF_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel3_mask                          (0x00003000)
#define  PIF_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel2_mask                          (0x00000300)
#define  PIF_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel1_mask                          (0x00000030)
#define  PIF_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel0_mask                          (0x00000003)
#define  PIF_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel3(data)                         (0x00003000&((data)<<12))
#define  PIF_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel2(data)                         (0x00000300&((data)<<8))
#define  PIF_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel1(data)                         (0x00000030&((data)<<4))
#define  PIF_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel0(data)                         (0x00000003&(data))
#define  PIF_PIF_FIFO_OSD_CTRL2_get_osd_lvds_pair_sel3(data)                     ((0x00003000&(data))>>12)
#define  PIF_PIF_FIFO_OSD_CTRL2_get_osd_lvds_pair_sel2(data)                     ((0x00000300&(data))>>8)
#define  PIF_PIF_FIFO_OSD_CTRL2_get_osd_lvds_pair_sel1(data)                     ((0x00000030&(data))>>4)
#define  PIF_PIF_FIFO_OSD_CTRL2_get_osd_lvds_pair_sel0(data)                     (0x00000003&(data))

#define  PIF_PIF_FIFO_OSD_CTRL3                                                 0x1802D090
#define  PIF_PIF_FIFO_OSD_CTRL3_reg_addr                                         "0xB802D090"
#define  PIF_PIF_FIFO_OSD_CTRL3_reg                                              0xB802D090
#define  PIF_PIF_FIFO_OSD_CTRL3_inst_addr                                        "0x0021"
#define  set_PIF_PIF_FIFO_OSD_CTRL3_reg(data)                                    (*((volatile unsigned int*)PIF_PIF_FIFO_OSD_CTRL3_reg)=data)
#define  get_PIF_PIF_FIFO_OSD_CTRL3_reg                                          (*((volatile unsigned int*)PIF_PIF_FIFO_OSD_CTRL3_reg))
#define  PIF_PIF_FIFO_OSD_CTRL3_osd_bist_en_shift                                (31)
#define  PIF_PIF_FIFO_OSD_CTRL3_dummy_27_24_shift                                (24)
#define  PIF_PIF_FIFO_OSD_CTRL3_osd_bist_length_shift                            (0)
#define  PIF_PIF_FIFO_OSD_CTRL3_osd_bist_en_mask                                 (0x80000000)
#define  PIF_PIF_FIFO_OSD_CTRL3_dummy_27_24_mask                                 (0x0F000000)
#define  PIF_PIF_FIFO_OSD_CTRL3_osd_bist_length_mask                             (0x00FFFFFF)
#define  PIF_PIF_FIFO_OSD_CTRL3_osd_bist_en(data)                                (0x80000000&((data)<<31))
#define  PIF_PIF_FIFO_OSD_CTRL3_dummy_27_24(data)                                (0x0F000000&((data)<<24))
#define  PIF_PIF_FIFO_OSD_CTRL3_osd_bist_length(data)                            (0x00FFFFFF&(data))
#define  PIF_PIF_FIFO_OSD_CTRL3_get_osd_bist_en(data)                            ((0x80000000&(data))>>31)
#define  PIF_PIF_FIFO_OSD_CTRL3_get_dummy_27_24(data)                            ((0x0F000000&(data))>>24)
#define  PIF_PIF_FIFO_OSD_CTRL3_get_osd_bist_length(data)                        (0x00FFFFFF&(data))

#define  PIF_PIF_FIFO_OSD_CTRL4                                                 0x1802D094
#define  PIF_PIF_FIFO_OSD_CTRL4_reg_addr                                         "0xB802D094"
#define  PIF_PIF_FIFO_OSD_CTRL4_reg                                              0xB802D094
#define  PIF_PIF_FIFO_OSD_CTRL4_inst_addr                                        "0x0022"
#define  set_PIF_PIF_FIFO_OSD_CTRL4_reg(data)                                    (*((volatile unsigned int*)PIF_PIF_FIFO_OSD_CTRL4_reg)=data)
#define  get_PIF_PIF_FIFO_OSD_CTRL4_reg                                          (*((volatile unsigned int*)PIF_PIF_FIFO_OSD_CTRL4_reg))
#define  PIF_PIF_FIFO_OSD_CTRL4_osd_bist_done_shift                              (20)
#define  PIF_PIF_FIFO_OSD_CTRL4_osd_bist_pass_shift                              (16)
#define  PIF_PIF_FIFO_OSD_CTRL4_osd_bist_lane_pass_shift                         (0)
#define  PIF_PIF_FIFO_OSD_CTRL4_osd_bist_done_mask                               (0x00100000)
#define  PIF_PIF_FIFO_OSD_CTRL4_osd_bist_pass_mask                               (0x00010000)
#define  PIF_PIF_FIFO_OSD_CTRL4_osd_bist_lane_pass_mask                          (0x0000000F)
#define  PIF_PIF_FIFO_OSD_CTRL4_osd_bist_done(data)                              (0x00100000&((data)<<20))
#define  PIF_PIF_FIFO_OSD_CTRL4_osd_bist_pass(data)                              (0x00010000&((data)<<16))
#define  PIF_PIF_FIFO_OSD_CTRL4_osd_bist_lane_pass(data)                         (0x0000000F&(data))
#define  PIF_PIF_FIFO_OSD_CTRL4_get_osd_bist_done(data)                          ((0x00100000&(data))>>20)
#define  PIF_PIF_FIFO_OSD_CTRL4_get_osd_bist_pass(data)                          ((0x00010000&(data))>>16)
#define  PIF_PIF_FIFO_OSD_CTRL4_get_osd_bist_lane_pass(data)                     (0x0000000F&(data))

#define  PIF_PIF_FIFO_OSD_CTRL5                                                 0x1802D098
#define  PIF_PIF_FIFO_OSD_CTRL5_reg_addr                                         "0xB802D098"
#define  PIF_PIF_FIFO_OSD_CTRL5_reg                                              0xB802D098
#define  PIF_PIF_FIFO_OSD_CTRL5_inst_addr                                        "0x0023"
#define  set_PIF_PIF_FIFO_OSD_CTRL5_reg(data)                                    (*((volatile unsigned int*)PIF_PIF_FIFO_OSD_CTRL5_reg)=data)
#define  get_PIF_PIF_FIFO_OSD_CTRL5_reg                                          (*((volatile unsigned int*)PIF_PIF_FIFO_OSD_CTRL5_reg))
#define  PIF_PIF_FIFO_OSD_CTRL5_osd_pif_fifo_tst_out_shift                       (0)
#define  PIF_PIF_FIFO_OSD_CTRL5_osd_pif_fifo_tst_out_mask                        (0xFFFFFFFF)
#define  PIF_PIF_FIFO_OSD_CTRL5_osd_pif_fifo_tst_out(data)                       (0xFFFFFFFF&(data))
#define  PIF_PIF_FIFO_OSD_CTRL5_get_osd_pif_fifo_tst_out(data)                   (0xFFFFFFFF&(data))

#define  PIF_PIF_FIFO_MUX_CTRL1                                                 0x1802D09C
#define  PIF_PIF_FIFO_MUX_CTRL1_reg_addr                                         "0xB802D09C"
#define  PIF_PIF_FIFO_MUX_CTRL1_reg                                              0xB802D09C
#define  PIF_PIF_FIFO_MUX_CTRL1_inst_addr                                        "0x0024"
#define  set_PIF_PIF_FIFO_MUX_CTRL1_reg(data)                                    (*((volatile unsigned int*)PIF_PIF_FIFO_MUX_CTRL1_reg)=data)
#define  get_PIF_PIF_FIFO_MUX_CTRL1_reg                                          (*((volatile unsigned int*)PIF_PIF_FIFO_MUX_CTRL1_reg))
#define  PIF_PIF_FIFO_MUX_CTRL1_fix_pattern_en_shift                             (31)
#define  PIF_PIF_FIFO_MUX_CTRL1_fix_pattern_shift                                (0)
#define  PIF_PIF_FIFO_MUX_CTRL1_fix_pattern_en_mask                              (0x80000000)
#define  PIF_PIF_FIFO_MUX_CTRL1_fix_pattern_mask                                 (0x07FFFFFF)
#define  PIF_PIF_FIFO_MUX_CTRL1_fix_pattern_en(data)                             (0x80000000&((data)<<31))
#define  PIF_PIF_FIFO_MUX_CTRL1_fix_pattern(data)                                (0x07FFFFFF&(data))
#define  PIF_PIF_FIFO_MUX_CTRL1_get_fix_pattern_en(data)                         ((0x80000000&(data))>>31)
#define  PIF_PIF_FIFO_MUX_CTRL1_get_fix_pattern(data)                            (0x07FFFFFF&(data))

#define  PIF_PIF_MISC                                                           0x1802D0A0
#define  PIF_PIF_MISC_reg_addr                                                   "0xB802D0A0"
#define  PIF_PIF_MISC_reg                                                        0xB802D0A0
#define  PIF_PIF_MISC_inst_addr                                                  "0x0025"
#define  set_PIF_PIF_MISC_reg(data)                                              (*((volatile unsigned int*)PIF_PIF_MISC_reg)=data)
#define  get_PIF_PIF_MISC_reg                                                    (*((volatile unsigned int*)PIF_PIF_MISC_reg))
#define  PIF_PIF_MISC_prbs_tx_en_shift                                           (31)
#define  PIF_PIF_MISC_prbs_mode_shift                                            (28)
#define  PIF_PIF_MISC_prbs_tx_en_mask                                            (0x80000000)
#define  PIF_PIF_MISC_prbs_mode_mask                                             (0x30000000)
#define  PIF_PIF_MISC_prbs_tx_en(data)                                           (0x80000000&((data)<<31))
#define  PIF_PIF_MISC_prbs_mode(data)                                            (0x30000000&((data)<<28))
#define  PIF_PIF_MISC_get_prbs_tx_en(data)                                       ((0x80000000&(data))>>31)
#define  PIF_PIF_MISC_get_prbs_mode(data)                                        ((0x30000000&(data))>>28)

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======PIF register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lvds_arsv1_sel:3;
        RBus_UInt32  lvds_arsv0_sel:3;
        RBus_UInt32  lvds_aden_sel:3;
        RBus_UInt32  lvds_avs_sel:3;
        RBus_UInt32  lvds_ahs_sel:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  lvds_brsv1_sel:3;
        RBus_UInt32  lvds_brsv0_sel:3;
        RBus_UInt32  lvds_bden_sel:3;
        RBus_UInt32  lvds_bvs_sel:3;
        RBus_UInt32  lvds_bhs_sel:3;
        RBus_UInt32  res2:1;
    };
}pif_lvds_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lvds_crsv1_sel:3;
        RBus_UInt32  lvds_crsv0_sel:3;
        RBus_UInt32  lvds_cden_sel:3;
        RBus_UInt32  lvds_cvs_sel:3;
        RBus_UInt32  lvds_chs_sel:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  lvds_drsv1_sel:3;
        RBus_UInt32  lvds_drsv0_sel:3;
        RBus_UInt32  lvds_dden_sel:3;
        RBus_UInt32  lvds_dvs_sel:3;
        RBus_UInt32  lvds_dhs_sel:3;
        RBus_UInt32  res2:1;
    };
}pif_lvds_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  lvds_hsync_inv:1;
        RBus_UInt32  lvds_vsync_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  lvds_map_inv:1;
        RBus_UInt32  lvds_map:2;
        RBus_UInt32  res3:4;
        RBus_UInt32  lvds_aport_en:1;
        RBus_UInt32  lvds_bport_en:1;
        RBus_UInt32  lvds_cport_en:1;
        RBus_UInt32  lvds_dport_en:1;
        RBus_UInt32  res4:4;
    };
}pif_lvds_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d00c_31_0:32;
    };
}pif_lvds_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d010_31_0:32;
    };
}pif_lvds_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d014_31_11:21;
        RBus_UInt32  mlvds_map_type_sel:3;
        RBus_UInt32  mlvds_en:1;
        RBus_UInt32  mlvds_map_inv:1;
        RBus_UInt32  dummy1802d014_5_2:4;
        RBus_UInt32  mlvds_mode:2;
    };
}pif_mlvds_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d018_31_24:8;
        RBus_UInt32  mlvds_reset_pul_sel:24;
    };
}pif_mlvds_reset_pul_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon_sel:8;
        RBus_UInt32  tcon_delay_sel_7:2;
        RBus_UInt32  tcon_delay_sel_6:2;
        RBus_UInt32  tcon_delay_sel_5:2;
        RBus_UInt32  tcon_delay_sel_4:2;
        RBus_UInt32  tcon_delay_sel_3:2;
        RBus_UInt32  tcon_delay_sel_2:2;
        RBus_UInt32  tcon_delay_sel_1:2;
        RBus_UInt32  tcon_delay_sel_0:2;
        RBus_UInt32  mlvds_rst_tcon_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  mlvds_rst_high:6;
    };
}pif_mlvds_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mlvds_rst_low_region:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  mlvds_4ck_inv:1;
        RBus_UInt32  mlvds_3ck_inv:1;
        RBus_UInt32  mlvds_2ck_inv:1;
        RBus_UInt32  mlvds_1ck_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  fw_merge_tcon_en:1;
        RBus_UInt32  p3_tcon_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  p3_tcon_sel:6;
        RBus_UInt32  p2_tcon_en:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  p2_tcon_sel:6;
        RBus_UInt32  p1_tcon_en:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  p1_tcon_sel:6;
    };
}pif_mlvds_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mlvds_rst_low_0:32;
    };
}pif_mlvds_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mlvds_rst_low_1:32;
    };
}pif_mlvds_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  pif_debug_sel:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  plt_lvds_mode:3;
    };
}pif_lvds_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_pn_swap:28;
    };
}pif_pif_pn_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  lvds_pair_sel_00:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lvds_pair_sel_01:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lvds_pair_sel_02:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  lvds_pair_sel_03:5;
    };
}pif_lvds_pair_select_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  lvds_pair_sel_04:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lvds_pair_sel_05:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lvds_pair_sel_06:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  lvds_pair_sel_07:5;
    };
}pif_lvds_pair_select_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  lvds_pair_sel_08:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lvds_pair_sel_09:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lvds_pair_sel_10:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  lvds_pair_sel_11:5;
    };
}pif_lvds_pair_select_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  lvds_pair_sel_12:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lvds_pair_sel_13:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lvds_pair_sel_14:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  lvds_pair_sel_15:5;
    };
}pif_lvds_pair_select_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  lvds_pair_sel_16:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lvds_pair_sel_17:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lvds_pair_sel_18:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  lvds_pair_sel_19:5;
    };
}pif_lvds_pair_select_ctrl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  lvds_pair_sel_20:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lvds_pair_sel_21:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lvds_pair_sel_22:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  lvds_pair_sel_23:5;
    };
}pif_lvds_pair_select_ctrl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  lvds_pair_sel_24:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lvds_pair_sel_25:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lvds_pair_sel_26:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  lvds_pair_sel_27:5;
    };
}pif_lvds_pair_select_ctrl_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  dbg_sel:5;
        RBus_UInt32  res2:19;
        RBus_UInt32  pif_fifo_irq:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_fifo_en:1;
    };
}pif_pif_fifo_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fifo_guard_error:12;
        RBus_UInt32  res1:1;
        RBus_UInt32  fifo_vs_rst_type:2;
        RBus_UInt32  fifo_vs_rst_en:1;
        RBus_UInt32  fifo_vs_rst_delay:16;
    };
}pif_pif_fifo_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  pif_fifo_error_ie:1;
        RBus_UInt32  pif_fifo_error:1;
    };
}pif_pif_fifo_err_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_fifo_tst_out:32;
    };
}pif_pif_fifo_tst_out_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_bist_mode_select:4;
        RBus_UInt32  res1:28;
    };
}pif_pif_fifo_bist_prbs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  pif_bist_length:24;
    };
}pif_pif_fifo_bist_len_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_bist_done:1;
        RBus_UInt32  res1:30;
        RBus_UInt32  pif_bist_result:1;
    };
}pif_pif_fifo_bist_res1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  pif_bist_result_port:12;
    };
}pif_pif_fifo_bist_res2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  pif_bist_enable:1;
    };
}pif_pif_fifo_bist_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  video_osd_sel:3;
        RBus_UInt32  phy_lane_en:28;
    };
}pif_pif_fifo_mux_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_pif_fifo_en:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  osd_pif_fifo_dbg_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  osd_pif_fifo_dbg_sel:2;
        RBus_UInt32  res3:3;
        RBus_UInt32  osd_pif_fifo_irq:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  osd_pif_fifo_error_ie:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  osd_pif_fifo_error:1;
        RBus_UInt32  osd_pif_fifo_error_cnt:8;
    };
}pif_pif_fifo_osd_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_pif_fifo_rst_type:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  osd_hit_r_cnt_5_error:1;
        RBus_UInt32  osd_hit_r_cnt_4_error:1;
        RBus_UInt32  osd_hit_r_cnt_3_error:1;
        RBus_UInt32  osd_hit_r_cnt_2_error:1;
        RBus_UInt32  osd_hit_r_cnt_1_error:1;
        RBus_UInt32  osd_hit_r_cnt_0_error:1;
        RBus_UInt32  res2:20;
        RBus_UInt32  osd_lane_en:4;
    };
}pif_pif_fifo_osd_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  osd_lvds_pair_sel3:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  osd_lvds_pair_sel2:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  osd_lvds_pair_sel1:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  osd_lvds_pair_sel0:2;
    };
}pif_pif_fifo_osd_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_bist_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  dummy1802d090_27_24:4;
        RBus_UInt32  osd_bist_length:24;
    };
}pif_pif_fifo_osd_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  osd_bist_done:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  osd_bist_pass:1;
        RBus_UInt32  res3:12;
        RBus_UInt32  osd_bist_lane_pass:4;
    };
}pif_pif_fifo_osd_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_pif_fifo_tst_out:32;
    };
}pif_pif_fifo_osd_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fix_pattern_en:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  fix_pattern:27;
    };
}pif_pif_fifo_mux_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prbs_tx_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  prbs_mode:2;
        RBus_UInt32  res2:28;
    };
}pif_pif_misc_RBUS;

#else //apply LITTLE_ENDIAN

//======PIF register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  lvds_bhs_sel:3;
        RBus_UInt32  lvds_bvs_sel:3;
        RBus_UInt32  lvds_bden_sel:3;
        RBus_UInt32  lvds_brsv0_sel:3;
        RBus_UInt32  lvds_brsv1_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  lvds_ahs_sel:3;
        RBus_UInt32  lvds_avs_sel:3;
        RBus_UInt32  lvds_aden_sel:3;
        RBus_UInt32  lvds_arsv0_sel:3;
        RBus_UInt32  lvds_arsv1_sel:3;
    };
}pif_lvds_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  lvds_dhs_sel:3;
        RBus_UInt32  lvds_dvs_sel:3;
        RBus_UInt32  lvds_dden_sel:3;
        RBus_UInt32  lvds_drsv0_sel:3;
        RBus_UInt32  lvds_drsv1_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  lvds_chs_sel:3;
        RBus_UInt32  lvds_cvs_sel:3;
        RBus_UInt32  lvds_cden_sel:3;
        RBus_UInt32  lvds_crsv0_sel:3;
        RBus_UInt32  lvds_crsv1_sel:3;
    };
}pif_lvds_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  lvds_dport_en:1;
        RBus_UInt32  lvds_cport_en:1;
        RBus_UInt32  lvds_bport_en:1;
        RBus_UInt32  lvds_aport_en:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  lvds_map:2;
        RBus_UInt32  lvds_map_inv:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  lvds_vsync_inv:1;
        RBus_UInt32  lvds_hsync_inv:1;
        RBus_UInt32  res4:14;
    };
}pif_lvds_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d00c_31_0:32;
    };
}pif_lvds_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d010_31_0:32;
    };
}pif_lvds_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mlvds_mode:2;
        RBus_UInt32  dummy1802d014_5_2:4;
        RBus_UInt32  mlvds_map_inv:1;
        RBus_UInt32  mlvds_en:1;
        RBus_UInt32  mlvds_map_type_sel:3;
        RBus_UInt32  dummy1802d014_31_11:21;
    };
}pif_mlvds_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mlvds_reset_pul_sel:24;
        RBus_UInt32  dummy1802d018_31_24:8;
    };
}pif_mlvds_reset_pul_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mlvds_rst_high:6;
        RBus_UInt32  res1:1;
        RBus_UInt32  mlvds_rst_tcon_en:1;
        RBus_UInt32  tcon_delay_sel_0:2;
        RBus_UInt32  tcon_delay_sel_1:2;
        RBus_UInt32  tcon_delay_sel_2:2;
        RBus_UInt32  tcon_delay_sel_3:2;
        RBus_UInt32  tcon_delay_sel_4:2;
        RBus_UInt32  tcon_delay_sel_5:2;
        RBus_UInt32  tcon_delay_sel_6:2;
        RBus_UInt32  tcon_delay_sel_7:2;
        RBus_UInt32  tcon_sel:8;
    };
}pif_mlvds_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_tcon_sel:6;
        RBus_UInt32  res1:1;
        RBus_UInt32  p1_tcon_en:1;
        RBus_UInt32  p2_tcon_sel:6;
        RBus_UInt32  res2:1;
        RBus_UInt32  p2_tcon_en:1;
        RBus_UInt32  p3_tcon_sel:6;
        RBus_UInt32  res3:1;
        RBus_UInt32  p3_tcon_en:1;
        RBus_UInt32  fw_merge_tcon_en:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  mlvds_1ck_inv:1;
        RBus_UInt32  mlvds_2ck_inv:1;
        RBus_UInt32  mlvds_3ck_inv:1;
        RBus_UInt32  mlvds_4ck_inv:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  mlvds_rst_low_region:1;
    };
}pif_mlvds_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mlvds_rst_low_0:32;
    };
}pif_mlvds_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mlvds_rst_low_1:32;
    };
}pif_mlvds_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plt_lvds_mode:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_debug_sel:4;
        RBus_UInt32  res2:24;
    };
}pif_lvds_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_pn_swap:28;
        RBus_UInt32  res1:4;
    };
}pif_pif_pn_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lvds_pair_sel_03:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  lvds_pair_sel_02:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lvds_pair_sel_01:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lvds_pair_sel_00:5;
        RBus_UInt32  res4:3;
    };
}pif_lvds_pair_select_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lvds_pair_sel_07:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  lvds_pair_sel_06:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lvds_pair_sel_05:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lvds_pair_sel_04:5;
        RBus_UInt32  res4:3;
    };
}pif_lvds_pair_select_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lvds_pair_sel_11:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  lvds_pair_sel_10:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lvds_pair_sel_09:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lvds_pair_sel_08:5;
        RBus_UInt32  res4:3;
    };
}pif_lvds_pair_select_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lvds_pair_sel_15:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  lvds_pair_sel_14:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lvds_pair_sel_13:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lvds_pair_sel_12:5;
        RBus_UInt32  res4:3;
    };
}pif_lvds_pair_select_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lvds_pair_sel_19:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  lvds_pair_sel_18:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lvds_pair_sel_17:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lvds_pair_sel_16:5;
        RBus_UInt32  res4:3;
    };
}pif_lvds_pair_select_ctrl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lvds_pair_sel_23:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  lvds_pair_sel_22:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lvds_pair_sel_21:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lvds_pair_sel_20:5;
        RBus_UInt32  res4:3;
    };
}pif_lvds_pair_select_ctrl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lvds_pair_sel_27:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  lvds_pair_sel_26:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  lvds_pair_sel_25:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  lvds_pair_sel_24:5;
        RBus_UInt32  res4:3;
    };
}pif_lvds_pair_select_ctrl_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_fifo_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  pif_fifo_irq:1;
        RBus_UInt32  res2:19;
        RBus_UInt32  dbg_sel:5;
        RBus_UInt32  res3:2;
        RBus_UInt32  dbg_en:1;
    };
}pif_pif_fifo_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fifo_vs_rst_delay:16;
        RBus_UInt32  fifo_vs_rst_en:1;
        RBus_UInt32  fifo_vs_rst_type:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  fifo_guard_error:12;
    };
}pif_pif_fifo_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_fifo_error:1;
        RBus_UInt32  pif_fifo_error_ie:1;
        RBus_UInt32  res1:30;
    };
}pif_pif_fifo_err_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_fifo_tst_out:32;
    };
}pif_pif_fifo_tst_out_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pif_bist_mode_select:4;
    };
}pif_pif_fifo_bist_prbs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_bist_length:24;
        RBus_UInt32  res1:8;
    };
}pif_pif_fifo_bist_len_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_bist_result:1;
        RBus_UInt32  res1:30;
        RBus_UInt32  pif_bist_done:1;
    };
}pif_pif_fifo_bist_res1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_bist_result_port:12;
        RBus_UInt32  res1:20;
    };
}pif_pif_fifo_bist_res2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_bist_enable:1;
        RBus_UInt32  res1:31;
    };
}pif_pif_fifo_bist_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  phy_lane_en:28;
        RBus_UInt32  video_osd_sel:3;
        RBus_UInt32  res1:1;
    };
}pif_pif_fifo_mux_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_pif_fifo_error_cnt:8;
        RBus_UInt32  osd_pif_fifo_error:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_pif_fifo_error_ie:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  osd_pif_fifo_irq:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  osd_pif_fifo_dbg_sel:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  osd_pif_fifo_dbg_en:1;
        RBus_UInt32  res5:6;
        RBus_UInt32  osd_pif_fifo_en:1;
    };
}pif_pif_fifo_osd_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_lane_en:4;
        RBus_UInt32  res1:20;
        RBus_UInt32  osd_hit_r_cnt_0_error:1;
        RBus_UInt32  osd_hit_r_cnt_1_error:1;
        RBus_UInt32  osd_hit_r_cnt_2_error:1;
        RBus_UInt32  osd_hit_r_cnt_3_error:1;
        RBus_UInt32  osd_hit_r_cnt_4_error:1;
        RBus_UInt32  osd_hit_r_cnt_5_error:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  osd_pif_fifo_rst_type:1;
    };
}pif_pif_fifo_osd_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_lvds_pair_sel0:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  osd_lvds_pair_sel1:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  osd_lvds_pair_sel2:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  osd_lvds_pair_sel3:2;
        RBus_UInt32  res4:18;
    };
}pif_pif_fifo_osd_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_bist_length:24;
        RBus_UInt32  dummy1802d090_27_24:4;
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_bist_en:1;
    };
}pif_pif_fifo_osd_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_bist_lane_pass:4;
        RBus_UInt32  res1:12;
        RBus_UInt32  osd_bist_pass:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  osd_bist_done:1;
        RBus_UInt32  res3:11;
    };
}pif_pif_fifo_osd_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_pif_fifo_tst_out:32;
    };
}pif_pif_fifo_osd_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fix_pattern:27;
        RBus_UInt32  res1:4;
        RBus_UInt32  fix_pattern_en:1;
    };
}pif_pif_fifo_mux_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  prbs_mode:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  prbs_tx_en:1;
    };
}pif_pif_misc_RBUS;




#endif 


#endif 
