/**
* @file Mac7p-DesignSpec-pad_lvdsphy_regif
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_PINMUX_LVDSPHY_REG_H_
#define _RBUS_PINMUX_LVDSPHY_REG_H_

#include "rbus_types.h"



//  PINMUX_LVDSPHY Register Address
#define  PINMUX_LVDSPHY_PIF_0                                                   0x18000CA0
#define  PINMUX_LVDSPHY_PIF_0_reg_addr                                           "0xB8000CA0"
#define  PINMUX_LVDSPHY_PIF_0_reg                                                0xB8000CA0
#define  PINMUX_LVDSPHY_PIF_0_inst_addr                                          "0x0000"
#define  set_PINMUX_LVDSPHY_PIF_0_reg(data)                                      (*((volatile unsigned int*)PINMUX_LVDSPHY_PIF_0_reg)=data)
#define  get_PINMUX_LVDSPHY_PIF_0_reg                                            (*((volatile unsigned int*)PINMUX_LVDSPHY_PIF_0_reg))
#define  PINMUX_LVDSPHY_PIF_0_pif_tx27p_ps_shift                                 (28)
#define  PINMUX_LVDSPHY_PIF_0_pif_tx27n_ps_shift                                 (24)
#define  PINMUX_LVDSPHY_PIF_0_pif_tx26p_ps_shift                                 (20)
#define  PINMUX_LVDSPHY_PIF_0_pif_tx26n_ps_shift                                 (16)
#define  PINMUX_LVDSPHY_PIF_0_pif_tx25p_ps_shift                                 (12)
#define  PINMUX_LVDSPHY_PIF_0_pif_tx25n_ps_shift                                 (8)
#define  PINMUX_LVDSPHY_PIF_0_pif_tx24p_ps_shift                                 (4)
#define  PINMUX_LVDSPHY_PIF_0_pif_tx24n_ps_shift                                 (0)
#define  PINMUX_LVDSPHY_PIF_0_pif_tx27p_ps_mask                                  (0xF0000000)
#define  PINMUX_LVDSPHY_PIF_0_pif_tx27n_ps_mask                                  (0x0F000000)
#define  PINMUX_LVDSPHY_PIF_0_pif_tx26p_ps_mask                                  (0x00F00000)
#define  PINMUX_LVDSPHY_PIF_0_pif_tx26n_ps_mask                                  (0x000F0000)
#define  PINMUX_LVDSPHY_PIF_0_pif_tx25p_ps_mask                                  (0x0000F000)
#define  PINMUX_LVDSPHY_PIF_0_pif_tx25n_ps_mask                                  (0x00000F00)
#define  PINMUX_LVDSPHY_PIF_0_pif_tx24p_ps_mask                                  (0x000000F0)
#define  PINMUX_LVDSPHY_PIF_0_pif_tx24n_ps_mask                                  (0x0000000F)
#define  PINMUX_LVDSPHY_PIF_0_pif_tx27p_ps(data)                                 (0xF0000000&((data)<<28))
#define  PINMUX_LVDSPHY_PIF_0_pif_tx27n_ps(data)                                 (0x0F000000&((data)<<24))
#define  PINMUX_LVDSPHY_PIF_0_pif_tx26p_ps(data)                                 (0x00F00000&((data)<<20))
#define  PINMUX_LVDSPHY_PIF_0_pif_tx26n_ps(data)                                 (0x000F0000&((data)<<16))
#define  PINMUX_LVDSPHY_PIF_0_pif_tx25p_ps(data)                                 (0x0000F000&((data)<<12))
#define  PINMUX_LVDSPHY_PIF_0_pif_tx25n_ps(data)                                 (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_PIF_0_pif_tx24p_ps(data)                                 (0x000000F0&((data)<<4))
#define  PINMUX_LVDSPHY_PIF_0_pif_tx24n_ps(data)                                 (0x0000000F&(data))
#define  PINMUX_LVDSPHY_PIF_0_get_pif_tx27p_ps(data)                             ((0xF0000000&(data))>>28)
#define  PINMUX_LVDSPHY_PIF_0_get_pif_tx27n_ps(data)                             ((0x0F000000&(data))>>24)
#define  PINMUX_LVDSPHY_PIF_0_get_pif_tx26p_ps(data)                             ((0x00F00000&(data))>>20)
#define  PINMUX_LVDSPHY_PIF_0_get_pif_tx26n_ps(data)                             ((0x000F0000&(data))>>16)
#define  PINMUX_LVDSPHY_PIF_0_get_pif_tx25p_ps(data)                             ((0x0000F000&(data))>>12)
#define  PINMUX_LVDSPHY_PIF_0_get_pif_tx25n_ps(data)                             ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_PIF_0_get_pif_tx24p_ps(data)                             ((0x000000F0&(data))>>4)
#define  PINMUX_LVDSPHY_PIF_0_get_pif_tx24n_ps(data)                             (0x0000000F&(data))

#define  PINMUX_LVDSPHY_PIF_1                                                   0x18000CA4
#define  PINMUX_LVDSPHY_PIF_1_reg_addr                                           "0xB8000CA4"
#define  PINMUX_LVDSPHY_PIF_1_reg                                                0xB8000CA4
#define  PINMUX_LVDSPHY_PIF_1_inst_addr                                          "0x0001"
#define  set_PINMUX_LVDSPHY_PIF_1_reg(data)                                      (*((volatile unsigned int*)PINMUX_LVDSPHY_PIF_1_reg)=data)
#define  get_PINMUX_LVDSPHY_PIF_1_reg                                            (*((volatile unsigned int*)PINMUX_LVDSPHY_PIF_1_reg))
#define  PINMUX_LVDSPHY_PIF_1_pif_tx23p_ps_shift                                 (28)
#define  PINMUX_LVDSPHY_PIF_1_pif_tx23n_ps_shift                                 (24)
#define  PINMUX_LVDSPHY_PIF_1_pif_tx22p_ps_shift                                 (20)
#define  PINMUX_LVDSPHY_PIF_1_pif_tx22n_ps_shift                                 (16)
#define  PINMUX_LVDSPHY_PIF_1_pif_tx21p_ps_shift                                 (12)
#define  PINMUX_LVDSPHY_PIF_1_pif_tx21n_ps_shift                                 (8)
#define  PINMUX_LVDSPHY_PIF_1_pif_tx20p_ps_shift                                 (4)
#define  PINMUX_LVDSPHY_PIF_1_pif_tx20n_ps_shift                                 (0)
#define  PINMUX_LVDSPHY_PIF_1_pif_tx23p_ps_mask                                  (0xF0000000)
#define  PINMUX_LVDSPHY_PIF_1_pif_tx23n_ps_mask                                  (0x0F000000)
#define  PINMUX_LVDSPHY_PIF_1_pif_tx22p_ps_mask                                  (0x00F00000)
#define  PINMUX_LVDSPHY_PIF_1_pif_tx22n_ps_mask                                  (0x000F0000)
#define  PINMUX_LVDSPHY_PIF_1_pif_tx21p_ps_mask                                  (0x0000F000)
#define  PINMUX_LVDSPHY_PIF_1_pif_tx21n_ps_mask                                  (0x00000F00)
#define  PINMUX_LVDSPHY_PIF_1_pif_tx20p_ps_mask                                  (0x000000F0)
#define  PINMUX_LVDSPHY_PIF_1_pif_tx20n_ps_mask                                  (0x0000000F)
#define  PINMUX_LVDSPHY_PIF_1_pif_tx23p_ps(data)                                 (0xF0000000&((data)<<28))
#define  PINMUX_LVDSPHY_PIF_1_pif_tx23n_ps(data)                                 (0x0F000000&((data)<<24))
#define  PINMUX_LVDSPHY_PIF_1_pif_tx22p_ps(data)                                 (0x00F00000&((data)<<20))
#define  PINMUX_LVDSPHY_PIF_1_pif_tx22n_ps(data)                                 (0x000F0000&((data)<<16))
#define  PINMUX_LVDSPHY_PIF_1_pif_tx21p_ps(data)                                 (0x0000F000&((data)<<12))
#define  PINMUX_LVDSPHY_PIF_1_pif_tx21n_ps(data)                                 (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_PIF_1_pif_tx20p_ps(data)                                 (0x000000F0&((data)<<4))
#define  PINMUX_LVDSPHY_PIF_1_pif_tx20n_ps(data)                                 (0x0000000F&(data))
#define  PINMUX_LVDSPHY_PIF_1_get_pif_tx23p_ps(data)                             ((0xF0000000&(data))>>28)
#define  PINMUX_LVDSPHY_PIF_1_get_pif_tx23n_ps(data)                             ((0x0F000000&(data))>>24)
#define  PINMUX_LVDSPHY_PIF_1_get_pif_tx22p_ps(data)                             ((0x00F00000&(data))>>20)
#define  PINMUX_LVDSPHY_PIF_1_get_pif_tx22n_ps(data)                             ((0x000F0000&(data))>>16)
#define  PINMUX_LVDSPHY_PIF_1_get_pif_tx21p_ps(data)                             ((0x0000F000&(data))>>12)
#define  PINMUX_LVDSPHY_PIF_1_get_pif_tx21n_ps(data)                             ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_PIF_1_get_pif_tx20p_ps(data)                             ((0x000000F0&(data))>>4)
#define  PINMUX_LVDSPHY_PIF_1_get_pif_tx20n_ps(data)                             (0x0000000F&(data))

#define  PINMUX_LVDSPHY_PIF_2                                                   0x18000CA8
#define  PINMUX_LVDSPHY_PIF_2_reg_addr                                           "0xB8000CA8"
#define  PINMUX_LVDSPHY_PIF_2_reg                                                0xB8000CA8
#define  PINMUX_LVDSPHY_PIF_2_inst_addr                                          "0x0002"
#define  set_PINMUX_LVDSPHY_PIF_2_reg(data)                                      (*((volatile unsigned int*)PINMUX_LVDSPHY_PIF_2_reg)=data)
#define  get_PINMUX_LVDSPHY_PIF_2_reg                                            (*((volatile unsigned int*)PINMUX_LVDSPHY_PIF_2_reg))
#define  PINMUX_LVDSPHY_PIF_2_pif_tx19p_ps_shift                                 (28)
#define  PINMUX_LVDSPHY_PIF_2_pif_tx19n_ps_shift                                 (24)
#define  PINMUX_LVDSPHY_PIF_2_pif_tx18p_ps_shift                                 (20)
#define  PINMUX_LVDSPHY_PIF_2_pif_tx18n_ps_shift                                 (16)
#define  PINMUX_LVDSPHY_PIF_2_pif_tx17p_ps_shift                                 (12)
#define  PINMUX_LVDSPHY_PIF_2_pif_tx17n_ps_shift                                 (8)
#define  PINMUX_LVDSPHY_PIF_2_pif_tx16p_ps_shift                                 (4)
#define  PINMUX_LVDSPHY_PIF_2_pif_tx16n_ps_shift                                 (0)
#define  PINMUX_LVDSPHY_PIF_2_pif_tx19p_ps_mask                                  (0xF0000000)
#define  PINMUX_LVDSPHY_PIF_2_pif_tx19n_ps_mask                                  (0x0F000000)
#define  PINMUX_LVDSPHY_PIF_2_pif_tx18p_ps_mask                                  (0x00F00000)
#define  PINMUX_LVDSPHY_PIF_2_pif_tx18n_ps_mask                                  (0x000F0000)
#define  PINMUX_LVDSPHY_PIF_2_pif_tx17p_ps_mask                                  (0x0000F000)
#define  PINMUX_LVDSPHY_PIF_2_pif_tx17n_ps_mask                                  (0x00000F00)
#define  PINMUX_LVDSPHY_PIF_2_pif_tx16p_ps_mask                                  (0x000000F0)
#define  PINMUX_LVDSPHY_PIF_2_pif_tx16n_ps_mask                                  (0x0000000F)
#define  PINMUX_LVDSPHY_PIF_2_pif_tx19p_ps(data)                                 (0xF0000000&((data)<<28))
#define  PINMUX_LVDSPHY_PIF_2_pif_tx19n_ps(data)                                 (0x0F000000&((data)<<24))
#define  PINMUX_LVDSPHY_PIF_2_pif_tx18p_ps(data)                                 (0x00F00000&((data)<<20))
#define  PINMUX_LVDSPHY_PIF_2_pif_tx18n_ps(data)                                 (0x000F0000&((data)<<16))
#define  PINMUX_LVDSPHY_PIF_2_pif_tx17p_ps(data)                                 (0x0000F000&((data)<<12))
#define  PINMUX_LVDSPHY_PIF_2_pif_tx17n_ps(data)                                 (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_PIF_2_pif_tx16p_ps(data)                                 (0x000000F0&((data)<<4))
#define  PINMUX_LVDSPHY_PIF_2_pif_tx16n_ps(data)                                 (0x0000000F&(data))
#define  PINMUX_LVDSPHY_PIF_2_get_pif_tx19p_ps(data)                             ((0xF0000000&(data))>>28)
#define  PINMUX_LVDSPHY_PIF_2_get_pif_tx19n_ps(data)                             ((0x0F000000&(data))>>24)
#define  PINMUX_LVDSPHY_PIF_2_get_pif_tx18p_ps(data)                             ((0x00F00000&(data))>>20)
#define  PINMUX_LVDSPHY_PIF_2_get_pif_tx18n_ps(data)                             ((0x000F0000&(data))>>16)
#define  PINMUX_LVDSPHY_PIF_2_get_pif_tx17p_ps(data)                             ((0x0000F000&(data))>>12)
#define  PINMUX_LVDSPHY_PIF_2_get_pif_tx17n_ps(data)                             ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_PIF_2_get_pif_tx16p_ps(data)                             ((0x000000F0&(data))>>4)
#define  PINMUX_LVDSPHY_PIF_2_get_pif_tx16n_ps(data)                             (0x0000000F&(data))

#define  PINMUX_LVDSPHY_PIF_3                                                   0x18000CAC
#define  PINMUX_LVDSPHY_PIF_3_reg_addr                                           "0xB8000CAC"
#define  PINMUX_LVDSPHY_PIF_3_reg                                                0xB8000CAC
#define  PINMUX_LVDSPHY_PIF_3_inst_addr                                          "0x0003"
#define  set_PINMUX_LVDSPHY_PIF_3_reg(data)                                      (*((volatile unsigned int*)PINMUX_LVDSPHY_PIF_3_reg)=data)
#define  get_PINMUX_LVDSPHY_PIF_3_reg                                            (*((volatile unsigned int*)PINMUX_LVDSPHY_PIF_3_reg))
#define  PINMUX_LVDSPHY_PIF_3_pif_tx15p_ps_shift                                 (28)
#define  PINMUX_LVDSPHY_PIF_3_pif_tx15n_ps_shift                                 (24)
#define  PINMUX_LVDSPHY_PIF_3_pif_tx14p_ps_shift                                 (20)
#define  PINMUX_LVDSPHY_PIF_3_pif_tx14n_ps_shift                                 (16)
#define  PINMUX_LVDSPHY_PIF_3_pif_tx13p_ps_shift                                 (12)
#define  PINMUX_LVDSPHY_PIF_3_pif_tx13n_ps_shift                                 (8)
#define  PINMUX_LVDSPHY_PIF_3_pif_tx12p_ps_shift                                 (4)
#define  PINMUX_LVDSPHY_PIF_3_pif_tx12n_ps_shift                                 (0)
#define  PINMUX_LVDSPHY_PIF_3_pif_tx15p_ps_mask                                  (0xF0000000)
#define  PINMUX_LVDSPHY_PIF_3_pif_tx15n_ps_mask                                  (0x0F000000)
#define  PINMUX_LVDSPHY_PIF_3_pif_tx14p_ps_mask                                  (0x00F00000)
#define  PINMUX_LVDSPHY_PIF_3_pif_tx14n_ps_mask                                  (0x000F0000)
#define  PINMUX_LVDSPHY_PIF_3_pif_tx13p_ps_mask                                  (0x0000F000)
#define  PINMUX_LVDSPHY_PIF_3_pif_tx13n_ps_mask                                  (0x00000F00)
#define  PINMUX_LVDSPHY_PIF_3_pif_tx12p_ps_mask                                  (0x000000F0)
#define  PINMUX_LVDSPHY_PIF_3_pif_tx12n_ps_mask                                  (0x0000000F)
#define  PINMUX_LVDSPHY_PIF_3_pif_tx15p_ps(data)                                 (0xF0000000&((data)<<28))
#define  PINMUX_LVDSPHY_PIF_3_pif_tx15n_ps(data)                                 (0x0F000000&((data)<<24))
#define  PINMUX_LVDSPHY_PIF_3_pif_tx14p_ps(data)                                 (0x00F00000&((data)<<20))
#define  PINMUX_LVDSPHY_PIF_3_pif_tx14n_ps(data)                                 (0x000F0000&((data)<<16))
#define  PINMUX_LVDSPHY_PIF_3_pif_tx13p_ps(data)                                 (0x0000F000&((data)<<12))
#define  PINMUX_LVDSPHY_PIF_3_pif_tx13n_ps(data)                                 (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_PIF_3_pif_tx12p_ps(data)                                 (0x000000F0&((data)<<4))
#define  PINMUX_LVDSPHY_PIF_3_pif_tx12n_ps(data)                                 (0x0000000F&(data))
#define  PINMUX_LVDSPHY_PIF_3_get_pif_tx15p_ps(data)                             ((0xF0000000&(data))>>28)
#define  PINMUX_LVDSPHY_PIF_3_get_pif_tx15n_ps(data)                             ((0x0F000000&(data))>>24)
#define  PINMUX_LVDSPHY_PIF_3_get_pif_tx14p_ps(data)                             ((0x00F00000&(data))>>20)
#define  PINMUX_LVDSPHY_PIF_3_get_pif_tx14n_ps(data)                             ((0x000F0000&(data))>>16)
#define  PINMUX_LVDSPHY_PIF_3_get_pif_tx13p_ps(data)                             ((0x0000F000&(data))>>12)
#define  PINMUX_LVDSPHY_PIF_3_get_pif_tx13n_ps(data)                             ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_PIF_3_get_pif_tx12p_ps(data)                             ((0x000000F0&(data))>>4)
#define  PINMUX_LVDSPHY_PIF_3_get_pif_tx12n_ps(data)                             (0x0000000F&(data))

#define  PINMUX_LVDSPHY_PIF_4                                                   0x18000CB0
#define  PINMUX_LVDSPHY_PIF_4_reg_addr                                           "0xB8000CB0"
#define  PINMUX_LVDSPHY_PIF_4_reg                                                0xB8000CB0
#define  PINMUX_LVDSPHY_PIF_4_inst_addr                                          "0x0004"
#define  set_PINMUX_LVDSPHY_PIF_4_reg(data)                                      (*((volatile unsigned int*)PINMUX_LVDSPHY_PIF_4_reg)=data)
#define  get_PINMUX_LVDSPHY_PIF_4_reg                                            (*((volatile unsigned int*)PINMUX_LVDSPHY_PIF_4_reg))
#define  PINMUX_LVDSPHY_PIF_4_pif_tx11p_ps_shift                                 (28)
#define  PINMUX_LVDSPHY_PIF_4_pif_tx11n_ps_shift                                 (24)
#define  PINMUX_LVDSPHY_PIF_4_pif_tx10p_ps_shift                                 (20)
#define  PINMUX_LVDSPHY_PIF_4_pif_tx10n_ps_shift                                 (16)
#define  PINMUX_LVDSPHY_PIF_4_pif_tx9p_ps_shift                                  (12)
#define  PINMUX_LVDSPHY_PIF_4_pif_tx9n_ps_shift                                  (8)
#define  PINMUX_LVDSPHY_PIF_4_pif_tx8p_ps_shift                                  (4)
#define  PINMUX_LVDSPHY_PIF_4_pif_tx8n_ps_shift                                  (0)
#define  PINMUX_LVDSPHY_PIF_4_pif_tx11p_ps_mask                                  (0xF0000000)
#define  PINMUX_LVDSPHY_PIF_4_pif_tx11n_ps_mask                                  (0x0F000000)
#define  PINMUX_LVDSPHY_PIF_4_pif_tx10p_ps_mask                                  (0x00F00000)
#define  PINMUX_LVDSPHY_PIF_4_pif_tx10n_ps_mask                                  (0x000F0000)
#define  PINMUX_LVDSPHY_PIF_4_pif_tx9p_ps_mask                                   (0x0000F000)
#define  PINMUX_LVDSPHY_PIF_4_pif_tx9n_ps_mask                                   (0x00000F00)
#define  PINMUX_LVDSPHY_PIF_4_pif_tx8p_ps_mask                                   (0x000000F0)
#define  PINMUX_LVDSPHY_PIF_4_pif_tx8n_ps_mask                                   (0x0000000F)
#define  PINMUX_LVDSPHY_PIF_4_pif_tx11p_ps(data)                                 (0xF0000000&((data)<<28))
#define  PINMUX_LVDSPHY_PIF_4_pif_tx11n_ps(data)                                 (0x0F000000&((data)<<24))
#define  PINMUX_LVDSPHY_PIF_4_pif_tx10p_ps(data)                                 (0x00F00000&((data)<<20))
#define  PINMUX_LVDSPHY_PIF_4_pif_tx10n_ps(data)                                 (0x000F0000&((data)<<16))
#define  PINMUX_LVDSPHY_PIF_4_pif_tx9p_ps(data)                                  (0x0000F000&((data)<<12))
#define  PINMUX_LVDSPHY_PIF_4_pif_tx9n_ps(data)                                  (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_PIF_4_pif_tx8p_ps(data)                                  (0x000000F0&((data)<<4))
#define  PINMUX_LVDSPHY_PIF_4_pif_tx8n_ps(data)                                  (0x0000000F&(data))
#define  PINMUX_LVDSPHY_PIF_4_get_pif_tx11p_ps(data)                             ((0xF0000000&(data))>>28)
#define  PINMUX_LVDSPHY_PIF_4_get_pif_tx11n_ps(data)                             ((0x0F000000&(data))>>24)
#define  PINMUX_LVDSPHY_PIF_4_get_pif_tx10p_ps(data)                             ((0x00F00000&(data))>>20)
#define  PINMUX_LVDSPHY_PIF_4_get_pif_tx10n_ps(data)                             ((0x000F0000&(data))>>16)
#define  PINMUX_LVDSPHY_PIF_4_get_pif_tx9p_ps(data)                              ((0x0000F000&(data))>>12)
#define  PINMUX_LVDSPHY_PIF_4_get_pif_tx9n_ps(data)                              ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_PIF_4_get_pif_tx8p_ps(data)                              ((0x000000F0&(data))>>4)
#define  PINMUX_LVDSPHY_PIF_4_get_pif_tx8n_ps(data)                              (0x0000000F&(data))

#define  PINMUX_LVDSPHY_PIF_5                                                   0x18000CB4
#define  PINMUX_LVDSPHY_PIF_5_reg_addr                                           "0xB8000CB4"
#define  PINMUX_LVDSPHY_PIF_5_reg                                                0xB8000CB4
#define  PINMUX_LVDSPHY_PIF_5_inst_addr                                          "0x0005"
#define  set_PINMUX_LVDSPHY_PIF_5_reg(data)                                      (*((volatile unsigned int*)PINMUX_LVDSPHY_PIF_5_reg)=data)
#define  get_PINMUX_LVDSPHY_PIF_5_reg                                            (*((volatile unsigned int*)PINMUX_LVDSPHY_PIF_5_reg))
#define  PINMUX_LVDSPHY_PIF_5_pif_tx7p_ps_shift                                  (28)
#define  PINMUX_LVDSPHY_PIF_5_pif_tx7n_ps_shift                                  (24)
#define  PINMUX_LVDSPHY_PIF_5_pif_tx6p_ps_shift                                  (20)
#define  PINMUX_LVDSPHY_PIF_5_pif_tx6n_ps_shift                                  (16)
#define  PINMUX_LVDSPHY_PIF_5_pif_tx5p_ps_shift                                  (12)
#define  PINMUX_LVDSPHY_PIF_5_pif_tx5n_ps_shift                                  (8)
#define  PINMUX_LVDSPHY_PIF_5_pif_tx4p_ps_shift                                  (4)
#define  PINMUX_LVDSPHY_PIF_5_pif_tx4n_ps_shift                                  (0)
#define  PINMUX_LVDSPHY_PIF_5_pif_tx7p_ps_mask                                   (0xF0000000)
#define  PINMUX_LVDSPHY_PIF_5_pif_tx7n_ps_mask                                   (0x0F000000)
#define  PINMUX_LVDSPHY_PIF_5_pif_tx6p_ps_mask                                   (0x00F00000)
#define  PINMUX_LVDSPHY_PIF_5_pif_tx6n_ps_mask                                   (0x000F0000)
#define  PINMUX_LVDSPHY_PIF_5_pif_tx5p_ps_mask                                   (0x0000F000)
#define  PINMUX_LVDSPHY_PIF_5_pif_tx5n_ps_mask                                   (0x00000F00)
#define  PINMUX_LVDSPHY_PIF_5_pif_tx4p_ps_mask                                   (0x000000F0)
#define  PINMUX_LVDSPHY_PIF_5_pif_tx4n_ps_mask                                   (0x0000000F)
#define  PINMUX_LVDSPHY_PIF_5_pif_tx7p_ps(data)                                  (0xF0000000&((data)<<28))
#define  PINMUX_LVDSPHY_PIF_5_pif_tx7n_ps(data)                                  (0x0F000000&((data)<<24))
#define  PINMUX_LVDSPHY_PIF_5_pif_tx6p_ps(data)                                  (0x00F00000&((data)<<20))
#define  PINMUX_LVDSPHY_PIF_5_pif_tx6n_ps(data)                                  (0x000F0000&((data)<<16))
#define  PINMUX_LVDSPHY_PIF_5_pif_tx5p_ps(data)                                  (0x0000F000&((data)<<12))
#define  PINMUX_LVDSPHY_PIF_5_pif_tx5n_ps(data)                                  (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_PIF_5_pif_tx4p_ps(data)                                  (0x000000F0&((data)<<4))
#define  PINMUX_LVDSPHY_PIF_5_pif_tx4n_ps(data)                                  (0x0000000F&(data))
#define  PINMUX_LVDSPHY_PIF_5_get_pif_tx7p_ps(data)                              ((0xF0000000&(data))>>28)
#define  PINMUX_LVDSPHY_PIF_5_get_pif_tx7n_ps(data)                              ((0x0F000000&(data))>>24)
#define  PINMUX_LVDSPHY_PIF_5_get_pif_tx6p_ps(data)                              ((0x00F00000&(data))>>20)
#define  PINMUX_LVDSPHY_PIF_5_get_pif_tx6n_ps(data)                              ((0x000F0000&(data))>>16)
#define  PINMUX_LVDSPHY_PIF_5_get_pif_tx5p_ps(data)                              ((0x0000F000&(data))>>12)
#define  PINMUX_LVDSPHY_PIF_5_get_pif_tx5n_ps(data)                              ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_PIF_5_get_pif_tx4p_ps(data)                              ((0x000000F0&(data))>>4)
#define  PINMUX_LVDSPHY_PIF_5_get_pif_tx4n_ps(data)                              (0x0000000F&(data))

#define  PINMUX_LVDSPHY_PIF_6                                                   0x18000CB8
#define  PINMUX_LVDSPHY_PIF_6_reg_addr                                           "0xB8000CB8"
#define  PINMUX_LVDSPHY_PIF_6_reg                                                0xB8000CB8
#define  PINMUX_LVDSPHY_PIF_6_inst_addr                                          "0x0006"
#define  set_PINMUX_LVDSPHY_PIF_6_reg(data)                                      (*((volatile unsigned int*)PINMUX_LVDSPHY_PIF_6_reg)=data)
#define  get_PINMUX_LVDSPHY_PIF_6_reg                                            (*((volatile unsigned int*)PINMUX_LVDSPHY_PIF_6_reg))
#define  PINMUX_LVDSPHY_PIF_6_pif_tx3p_ps_shift                                  (28)
#define  PINMUX_LVDSPHY_PIF_6_pif_tx3n_ps_shift                                  (24)
#define  PINMUX_LVDSPHY_PIF_6_pif_tx2p_ps_shift                                  (20)
#define  PINMUX_LVDSPHY_PIF_6_pif_tx2n_ps_shift                                  (16)
#define  PINMUX_LVDSPHY_PIF_6_pif_tx1p_ps_shift                                  (12)
#define  PINMUX_LVDSPHY_PIF_6_pif_tx1n_ps_shift                                  (8)
#define  PINMUX_LVDSPHY_PIF_6_pif_tx0p_ps_shift                                  (4)
#define  PINMUX_LVDSPHY_PIF_6_pif_tx0n_ps_shift                                  (0)
#define  PINMUX_LVDSPHY_PIF_6_pif_tx3p_ps_mask                                   (0xF0000000)
#define  PINMUX_LVDSPHY_PIF_6_pif_tx3n_ps_mask                                   (0x0F000000)
#define  PINMUX_LVDSPHY_PIF_6_pif_tx2p_ps_mask                                   (0x00F00000)
#define  PINMUX_LVDSPHY_PIF_6_pif_tx2n_ps_mask                                   (0x000F0000)
#define  PINMUX_LVDSPHY_PIF_6_pif_tx1p_ps_mask                                   (0x0000F000)
#define  PINMUX_LVDSPHY_PIF_6_pif_tx1n_ps_mask                                   (0x00000F00)
#define  PINMUX_LVDSPHY_PIF_6_pif_tx0p_ps_mask                                   (0x000000F0)
#define  PINMUX_LVDSPHY_PIF_6_pif_tx0n_ps_mask                                   (0x0000000F)
#define  PINMUX_LVDSPHY_PIF_6_pif_tx3p_ps(data)                                  (0xF0000000&((data)<<28))
#define  PINMUX_LVDSPHY_PIF_6_pif_tx3n_ps(data)                                  (0x0F000000&((data)<<24))
#define  PINMUX_LVDSPHY_PIF_6_pif_tx2p_ps(data)                                  (0x00F00000&((data)<<20))
#define  PINMUX_LVDSPHY_PIF_6_pif_tx2n_ps(data)                                  (0x000F0000&((data)<<16))
#define  PINMUX_LVDSPHY_PIF_6_pif_tx1p_ps(data)                                  (0x0000F000&((data)<<12))
#define  PINMUX_LVDSPHY_PIF_6_pif_tx1n_ps(data)                                  (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_PIF_6_pif_tx0p_ps(data)                                  (0x000000F0&((data)<<4))
#define  PINMUX_LVDSPHY_PIF_6_pif_tx0n_ps(data)                                  (0x0000000F&(data))
#define  PINMUX_LVDSPHY_PIF_6_get_pif_tx3p_ps(data)                              ((0xF0000000&(data))>>28)
#define  PINMUX_LVDSPHY_PIF_6_get_pif_tx3n_ps(data)                              ((0x0F000000&(data))>>24)
#define  PINMUX_LVDSPHY_PIF_6_get_pif_tx2p_ps(data)                              ((0x00F00000&(data))>>20)
#define  PINMUX_LVDSPHY_PIF_6_get_pif_tx2n_ps(data)                              ((0x000F0000&(data))>>16)
#define  PINMUX_LVDSPHY_PIF_6_get_pif_tx1p_ps(data)                              ((0x0000F000&(data))>>12)
#define  PINMUX_LVDSPHY_PIF_6_get_pif_tx1n_ps(data)                              ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_PIF_6_get_pif_tx0p_ps(data)                              ((0x000000F0&(data))>>4)
#define  PINMUX_LVDSPHY_PIF_6_get_pif_tx0n_ps(data)                              (0x0000000F&(data))

#define  PINMUX_LVDSPHY_Pin_Mux_LVDS                                            0x18000CBC
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_reg_addr                                    "0xB8000CBC"
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_reg                                         0xB8000CBC
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_inst_addr                                   "0x0007"
#define  set_PINMUX_LVDSPHY_Pin_Mux_LVDS_reg(data)                               (*((volatile unsigned int*)PINMUX_LVDSPHY_Pin_Mux_LVDS_reg)=data)
#define  get_PINMUX_LVDSPHY_Pin_Mux_LVDS_reg                                     (*((volatile unsigned int*)PINMUX_LVDSPHY_Pin_Mux_LVDS_reg))
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_vby1_osd_htpd_sel_shift                     (12)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_vby1_osd_lock_sel_shift                     (10)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_isp_sdlock_sel_shift                        (8)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_boe_bcc_in_sel_shift                        (6)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_vby1_htpd_sel_shift                         (4)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_vby1_lock_sel_shift                         (2)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_epi_lock_sel_shift                          (0)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_vby1_osd_htpd_sel_mask                      (0x00003000)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_vby1_osd_lock_sel_mask                      (0x00000C00)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_isp_sdlock_sel_mask                         (0x00000300)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_boe_bcc_in_sel_mask                         (0x000000C0)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_vby1_htpd_sel_mask                          (0x00000030)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_vby1_lock_sel_mask                          (0x0000000C)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_epi_lock_sel_mask                           (0x00000003)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_vby1_osd_htpd_sel(data)                     (0x00003000&((data)<<12))
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_vby1_osd_lock_sel(data)                     (0x00000C00&((data)<<10))
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_isp_sdlock_sel(data)                        (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_boe_bcc_in_sel(data)                        (0x000000C0&((data)<<6))
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_vby1_htpd_sel(data)                         (0x00000030&((data)<<4))
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_vby1_lock_sel(data)                         (0x0000000C&((data)<<2))
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_epi_lock_sel(data)                          (0x00000003&(data))
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_get_vby1_osd_htpd_sel(data)                 ((0x00003000&(data))>>12)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_get_vby1_osd_lock_sel(data)                 ((0x00000C00&(data))>>10)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_get_isp_sdlock_sel(data)                    ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_get_boe_bcc_in_sel(data)                    ((0x000000C0&(data))>>6)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_get_vby1_htpd_sel(data)                     ((0x00000030&(data))>>4)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_get_vby1_lock_sel(data)                     ((0x0000000C&(data))>>2)
#define  PINMUX_LVDSPHY_Pin_Mux_LVDS_get_epi_lock_sel(data)                      (0x00000003&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0                                0x18000C00
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_reg_addr                        "0xB8000C00"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_reg                             0xB8000C00
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_inst_addr                       "0x0008"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_reg(data)                   (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_reg                         (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_a1_pi_phsel_shift           (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_a2_pi_phsel_shift           (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_a_pi_freq_shift             (4)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_a1_sel_2xi_shift            (3)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_a2_sel_2xi_shift            (2)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_sbg_shift                   (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_a1_pi_phsel_mask            (0xFFF00000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_a2_pi_phsel_mask            (0x000FFF00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_a_pi_freq_mask              (0x00000030)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_a1_sel_2xi_mask             (0x00000008)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_a2_sel_2xi_mask             (0x00000004)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_sbg_mask                    (0x00000003)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_a1_pi_phsel(data)           (0xFFF00000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_a2_pi_phsel(data)           (0x000FFF00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_a_pi_freq(data)             (0x00000030&((data)<<4))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_a1_sel_2xi(data)            (0x00000008&((data)<<3))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_a2_sel_2xi(data)            (0x00000004&((data)<<2))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_pif_sbg(data)                   (0x00000003&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_get_pif_a1_pi_phsel(data)       ((0xFFF00000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_get_pif_a2_pi_phsel(data)       ((0x000FFF00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_get_pif_a_pi_freq(data)         ((0x00000030&(data))>>4)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_get_pif_a1_sel_2xi(data)        ((0x00000008&(data))>>3)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_get_pif_a2_sel_2xi(data)        ((0x00000004&(data))>>2)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_get_pif_sbg(data)               (0x00000003&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2                                0x18000C08
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_reg_addr                        "0xB8000C08"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_reg                             0xB8000C08
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_inst_addr                       "0x0009"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_reg(data)                   (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_reg                         (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_pif_ab_pi_phsel_shift           (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_pif_ab_freq_shift               (18)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_pif_ab_sel_2xi_shift            (17)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_pif_h_cmu_sel_lv_vldo_shift     (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_pif_h_cmu_bw_set_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_pif_ab_pi_phsel_mask            (0xFFF00000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_pif_ab_freq_mask                (0x000C0000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_pif_ab_sel_2xi_mask             (0x00020000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_pif_h_cmu_sel_lv_vldo_mask      (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_pif_h_cmu_bw_set_mask           (0x00000003)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_pif_ab_pi_phsel(data)           (0xFFF00000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_pif_ab_freq(data)               (0x000C0000&((data)<<18))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_pif_ab_sel_2xi(data)            (0x00020000&((data)<<17))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_pif_h_cmu_sel_lv_vldo(data)     (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_pif_h_cmu_bw_set(data)          (0x00000003&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_get_pif_ab_pi_phsel(data)       ((0xFFF00000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_get_pif_ab_freq(data)           ((0x000C0000&(data))>>18)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_get_pif_ab_sel_2xi(data)        ((0x00020000&(data))>>17)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_get_pif_h_cmu_sel_lv_vldo(data) ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_get_pif_h_cmu_bw_set(data)      (0x00000003&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1                                0x18000C04
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_reg_addr                        "0xB8000C04"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_reg                             0xB8000C04
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_inst_addr                       "0x000A"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_reg(data)                   (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_reg                         (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_pif_b1_pi_phsel_shift           (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_pif_b2_pi_phsel_shift           (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_pif_b_pi_freq_shift             (4)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_pif_b1_sel_2xi_shift            (3)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_pif_b2_sel_2xi_shift            (2)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_pif_b1_pi_phsel_mask            (0xFFF00000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_pif_b2_pi_phsel_mask            (0x000FFF00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_pif_b_pi_freq_mask              (0x00000030)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_pif_b1_sel_2xi_mask             (0x00000008)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_pif_b2_sel_2xi_mask             (0x00000004)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_pif_b1_pi_phsel(data)           (0xFFF00000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_pif_b2_pi_phsel(data)           (0x000FFF00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_pif_b_pi_freq(data)             (0x00000030&((data)<<4))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_pif_b1_sel_2xi(data)            (0x00000008&((data)<<3))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_pif_b2_sel_2xi(data)            (0x00000004&((data)<<2))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_get_pif_b1_pi_phsel(data)       ((0xFFF00000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_get_pif_b2_pi_phsel(data)       ((0x000FFF00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_get_pif_b_pi_freq(data)         ((0x00000030&(data))>>4)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_get_pif_b1_sel_2xi(data)        ((0x00000008&(data))>>3)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_get_pif_b2_sel_2xi(data)        ((0x00000004&(data))>>2)

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3                                0x18000C0C
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_reg_addr                        "0xB8000C0C"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_reg                             0xB8000C0C
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_inst_addr                       "0x000B"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_reg(data)                   (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_reg                         (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_big_kvco_shift          (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_ckpixel_inv_shift       (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_ck_ref_inv_shift        (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_cmu_bpsdivm_shift               (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_sel_cp_i_shift          (16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_sel_sc1_shift           (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_sel_sc2_shift           (11)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_sel_sr_shift            (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_sel_vldo_shift          (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_a_pi_bypass_shift       (5)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_b_pi_bypass_shift       (4)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_wdrst_shift             (2)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_wdset_shift             (1)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_cmu_wdo_shift                   (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_big_kvco_mask           (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_ckpixel_inv_mask        (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_ck_ref_inv_mask         (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_cmu_bpsdivm_mask                (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_sel_cp_i_mask           (0x00070000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_sel_sc1_mask            (0x0000E000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_sel_sc2_mask            (0x00001800)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_sel_sr_mask             (0x00000700)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_sel_vldo_mask           (0x000000C0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_a_pi_bypass_mask        (0x00000020)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_b_pi_bypass_mask        (0x00000010)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_wdrst_mask              (0x00000004)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_wdset_mask              (0x00000002)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_cmu_wdo_mask                    (0x00000001)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_big_kvco(data)          (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_ckpixel_inv(data)       (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_ck_ref_inv(data)        (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_cmu_bpsdivm(data)               (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_sel_cp_i(data)          (0x00070000&((data)<<16))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_sel_sc1(data)           (0x0000E000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_sel_sc2(data)           (0x00001800&((data)<<11))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_sel_sr(data)            (0x00000700&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_sel_vldo(data)          (0x000000C0&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_a_pi_bypass(data)       (0x00000020&((data)<<5))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_b_pi_bypass(data)       (0x00000010&((data)<<4))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_wdrst(data)             (0x00000004&((data)<<2))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_pif_cmu_wdset(data)             (0x00000002&((data)<<1))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_cmu_wdo(data)                   (0x00000001&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_get_pif_cmu_big_kvco(data)      ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_get_pif_cmu_ckpixel_inv(data)   ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_get_pif_cmu_ck_ref_inv(data)    ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_get_cmu_bpsdivm(data)           ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_get_pif_cmu_sel_cp_i(data)      ((0x00070000&(data))>>16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_get_pif_cmu_sel_sc1(data)       ((0x0000E000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_get_pif_cmu_sel_sc2(data)       ((0x00001800&(data))>>11)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_get_pif_cmu_sel_sr(data)        ((0x00000700&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_get_pif_cmu_sel_vldo(data)      ((0x000000C0&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_get_pif_cmu_a_pi_bypass(data)   ((0x00000020&(data))>>5)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_get_pif_cmu_b_pi_bypass(data)   ((0x00000010&(data))>>4)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_get_pif_cmu_wdrst(data)         ((0x00000004&(data))>>2)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_get_pif_cmu_wdset(data)         ((0x00000002&(data))>>1)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_get_cmu_wdo(data)               (0x00000001&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4                                0x18000C18
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_reg_addr                        "0xB8000C18"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_reg                             0xB8000C18
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_inst_addr                       "0x000C"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_reg(data)                   (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_reg                         (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_pif_h_cmu_macpll_divm_shift     (4)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_pif_h_cmu_mode_shift            (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_pif_h_cmu_macpll_divm_mask      (0x000000F0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_pif_h_cmu_mode_mask             (0x00000007)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_pif_h_cmu_macpll_divm(data)     (0x000000F0&((data)<<4))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_pif_h_cmu_mode(data)            (0x00000007&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_get_pif_h_cmu_macpll_divm(data) ((0x000000F0&(data))>>4)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_get_pif_h_cmu_mode(data)        (0x00000007&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18                               0x18000C50
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_reg_addr                       "0xB8000C50"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_reg                            0xB8000C50
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_inst_addr                      "0x000D"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_pif_sel_tx_i_shift             (22)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_pif_sel_vcm_shift              (17)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_pif_en_lv_ldo_shift            (15)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_pif_en_txl_ldo_shift           (14)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_pif_boe_vcmsel_shift           (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_pif_sel_tx_i_mask              (0x03C00000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_pif_sel_vcm_mask               (0x003E0000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_pif_en_lv_ldo_mask             (0x00008000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_pif_en_txl_ldo_mask            (0x00004000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_pif_boe_vcmsel_mask            (0x00000001)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_pif_sel_tx_i(data)             (0x03C00000&((data)<<22))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_pif_sel_vcm(data)              (0x003E0000&((data)<<17))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_pif_en_lv_ldo(data)            (0x00008000&((data)<<15))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_pif_en_txl_ldo(data)           (0x00004000&((data)<<14))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_pif_boe_vcmsel(data)           (0x00000001&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_get_pif_sel_tx_i(data)         ((0x03C00000&(data))>>22)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_get_pif_sel_vcm(data)          ((0x003E0000&(data))>>17)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_get_pif_en_lv_ldo(data)        ((0x00008000&(data))>>15)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_get_pif_en_txl_ldo(data)       ((0x00004000&(data))>>14)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_get_pif_boe_vcmsel(data)       (0x00000001&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27                               0x18000C74
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_reg_addr                       "0xB8000C74"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_reg                            0xB8000C74
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_inst_addr                      "0x000E"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_pow_pif_shift                  (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_pow_pif_mask                   (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_pow_pif(data)                  (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_get_pow_pif(data)              ((0x80000000&(data))>>31)

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3                                0x18000C20
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_reg_addr                        "0xB8000C20"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_reg                             0xB8000C20
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_inst_addr                       "0x000F"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_reg(data)                   (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_reg                         (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_lvds_dummy_shift                (16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_pif_h_cmu_rstb_shift            (10)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_pif_h_cmu_pow_shift             (9)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_lvds_dummy_mask                 (0xFFFF0000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_pif_h_cmu_rstb_mask             (0x00000400)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_pif_h_cmu_pow_mask              (0x00000200)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_lvds_dummy(data)                (0xFFFF0000&((data)<<16))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_pif_h_cmu_rstb(data)            (0x00000400&((data)<<10))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_pif_h_cmu_pow(data)             (0x00000200&((data)<<9))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_get_lvds_dummy(data)            ((0xFFFF0000&(data))>>16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_get_pif_h_cmu_rstb(data)        ((0x00000400&(data))>>10)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_get_pif_h_cmu_pow(data)         ((0x00000200&(data))>>9)

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2                                0x18000C10
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_reg_addr                        "0xB8000C10"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_reg                             0xB8000C10
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_inst_addr                       "0x0010"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_reg(data)                   (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_reg                         (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_test_en_shift         (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_lvdscmpi_divm_shift   (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_macpll_cko_inv_shift  (23)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_ck20xp_inv_shift      (21)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_ck1xp_inv_shift       (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_tst_div_shift         (16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_prescalerdiv_ls_shift (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_prescalerdiv_hs_shift (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_epi_div_sel_shift     (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_test_en_mask          (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_lvdscmpi_divm_mask    (0x7E000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_macpll_cko_inv_mask   (0x00800000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_ck20xp_inv_mask       (0x00200000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_ck1xp_inv_mask        (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_tst_div_mask          (0x00070000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_prescalerdiv_ls_mask  (0x00007000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_prescalerdiv_hs_mask  (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_epi_div_sel_mask      (0x00000007)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_test_en(data)         (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_lvdscmpi_divm(data)   (0x7E000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_macpll_cko_inv(data)  (0x00800000&((data)<<23))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_ck20xp_inv(data)      (0x00200000&((data)<<21))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_ck1xp_inv(data)       (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_tst_div(data)         (0x00070000&((data)<<16))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_prescalerdiv_ls(data) (0x00007000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_prescalerdiv_hs(data) (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_pif_h_cmu_epi_div_sel(data)     (0x00000007&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_get_pif_h_cmu_test_en(data)     ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_get_pif_h_cmu_lvdscmpi_divm(data) ((0x7E000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_get_pif_h_cmu_macpll_cko_inv(data) ((0x00800000&(data))>>23)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_get_pif_h_cmu_ck20xp_inv(data)  ((0x00200000&(data))>>21)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_get_pif_h_cmu_ck1xp_inv(data)   ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_get_pif_h_cmu_tst_div(data)     ((0x00070000&(data))>>16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_get_pif_h_cmu_prescalerdiv_ls(data) ((0x00007000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_get_pif_h_cmu_prescalerdiv_hs(data) ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_get_pif_h_cmu_epi_div_sel(data) (0x00000007&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_4                                0x18000C14
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_4_reg_addr                        "0xB8000C14"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_4_reg                             0xB8000C14
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_4_inst_addr                       "0x0011"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_4_reg(data)                   (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_4_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_4_reg                         (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_4_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_4_pif_h_cmu_dummy_shift           (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_4_pif_h_cmu_dummy_mask            (0x000003FF)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_4_pif_h_cmu_dummy(data)           (0x000003FF&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_4_get_pif_h_cmu_dummy(data)       (0x000003FF&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5                                0x18000C78
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_reg_addr                        "0xB8000C78"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_reg                             0xB8000C78
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_inst_addr                       "0x0012"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_reg(data)                   (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_reg                         (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_txpll_ckin_div_n_shift          (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_txpll_prediv_bypass_shift       (5)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_txpll_ckin_div_n_mask           (0x00003F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_txpll_prediv_bypass_mask        (0x00000020)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_txpll_ckin_div_n(data)          (0x00003F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_txpll_prediv_bypass(data)       (0x00000020&((data)<<5))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_get_txpll_ckin_div_n(data)      ((0x00003F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_get_txpll_prediv_bypass(data)   ((0x00000020&(data))>>5)

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0                                0x18000D00
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_reg_addr                        "0xB8000D00"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_reg                             0xB8000D00
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_inst_addr                       "0x0013"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_reg(data)                   (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_reg                         (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0n_mode_shift             (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0p_mode_shift             (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0_vcmsel_shift            (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0_ckphs_shift             (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0_sr_shift                (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0_term_shift              (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0_idrv_sel_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0n_mode_mask              (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0p_mode_mask              (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0_vcmsel_mask             (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0_ckphs_mask              (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0_sr_mask                 (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0_term_mask               (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0_idrv_sel_mask           (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0n_mode(data)             (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0p_mode(data)             (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0_vcmsel(data)            (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0_ckphs(data)             (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0_sr(data)                (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0_term(data)              (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_pif_tx0_idrv_sel(data)          (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_get_pif_tx0n_mode(data)         ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_get_pif_tx0p_mode(data)         ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_get_pif_tx0_vcmsel(data)        ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_get_pif_tx0_ckphs(data)         ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_get_pif_tx0_sr(data)            ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_get_pif_tx0_term(data)          ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_get_pif_tx0_idrv_sel(data)      (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4                                0x18000D10
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_reg_addr                        "0xB8000D10"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_reg                             0xB8000D10
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_inst_addr                       "0x0014"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_reg(data)                   (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_reg                         (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1n_mode_shift             (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1p_mode_shift             (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1_vcmsel_shift            (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1_ckphs_shift             (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1_sr_shift                (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1_term_shift              (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1_idrv_sel_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1n_mode_mask              (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1p_mode_mask              (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1_vcmsel_mask             (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1_ckphs_mask              (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1_sr_mask                 (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1_term_mask               (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1_idrv_sel_mask           (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1n_mode(data)             (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1p_mode(data)             (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1_vcmsel(data)            (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1_ckphs(data)             (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1_sr(data)                (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1_term(data)              (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_pif_tx1_idrv_sel(data)          (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_get_pif_tx1n_mode(data)         ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_get_pif_tx1p_mode(data)         ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_get_pif_tx1_vcmsel(data)        ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_get_pif_tx1_ckphs(data)         ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_get_pif_tx1_sr(data)            ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_get_pif_tx1_term(data)          ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_get_pif_tx1_idrv_sel(data)      (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8                                0x18000D20
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_reg_addr                        "0xB8000D20"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_reg                             0xB8000D20
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_inst_addr                       "0x0015"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_reg(data)                   (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_reg                         (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2n_mode_shift             (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2p_mode_shift             (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2_vcmsel_shift            (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2_ckphs_shift             (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2_sr_shift                (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2_term_shift              (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2_idrv_sel_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2n_mode_mask              (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2p_mode_mask              (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2_vcmsel_mask             (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2_ckphs_mask              (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2_sr_mask                 (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2_term_mask               (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2_idrv_sel_mask           (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2n_mode(data)             (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2p_mode(data)             (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2_vcmsel(data)            (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2_ckphs(data)             (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2_sr(data)                (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2_term(data)              (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_pif_tx2_idrv_sel(data)          (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_get_pif_tx2n_mode(data)         ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_get_pif_tx2p_mode(data)         ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_get_pif_tx2_vcmsel(data)        ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_get_pif_tx2_ckphs(data)         ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_get_pif_tx2_sr(data)            ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_get_pif_tx2_term(data)          ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_get_pif_tx2_idrv_sel(data)      (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12                               0x18000D30
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_reg_addr                       "0xB8000D30"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_reg                            0xB8000D30
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_inst_addr                      "0x0016"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3n_mode_shift            (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3p_mode_shift            (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3_vcmsel_shift           (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3_ckphs_shift            (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3_sr_shift               (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3_term_shift             (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3_idrv_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3n_mode_mask             (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3p_mode_mask             (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3_vcmsel_mask            (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3_ckphs_mask             (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3_sr_mask                (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3_term_mask              (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3_idrv_sel_mask          (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3n_mode(data)            (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3p_mode(data)            (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3_vcmsel(data)           (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3_ckphs(data)            (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3_sr(data)               (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3_term(data)             (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_pif_tx3_idrv_sel(data)         (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_get_pif_tx3n_mode(data)        ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_get_pif_tx3p_mode(data)        ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_get_pif_tx3_vcmsel(data)       ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_get_pif_tx3_ckphs(data)        ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_get_pif_tx3_sr(data)           ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_get_pif_tx3_term(data)         ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_get_pif_tx3_idrv_sel(data)     (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16                               0x18000D40
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_reg_addr                       "0xB8000D40"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_reg                            0xB8000D40
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_inst_addr                      "0x0017"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4n_mode_shift            (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4p_mode_shift            (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4_vcmsel_shift           (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4_ckphs_shift            (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4_sr_shift               (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4_term_shift             (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4_idrv_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4n_mode_mask             (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4p_mode_mask             (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4_vcmsel_mask            (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4_ckphs_mask             (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4_sr_mask                (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4_term_mask              (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4_idrv_sel_mask          (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4n_mode(data)            (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4p_mode(data)            (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4_vcmsel(data)           (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4_ckphs(data)            (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4_sr(data)               (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4_term(data)             (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_pif_tx4_idrv_sel(data)         (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_get_pif_tx4n_mode(data)        ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_get_pif_tx4p_mode(data)        ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_get_pif_tx4_vcmsel(data)       ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_get_pif_tx4_ckphs(data)        ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_get_pif_tx4_sr(data)           ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_get_pif_tx4_term(data)         ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_get_pif_tx4_idrv_sel(data)     (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20                               0x18000D50
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_reg_addr                       "0xB8000D50"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_reg                            0xB8000D50
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_inst_addr                      "0x0018"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5n_mode_shift            (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5p_mode_shift            (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5_vcmsel_shift           (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5_ckphs_shift            (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5_sr_shift               (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5_term_shift             (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5_idrv_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5n_mode_mask             (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5p_mode_mask             (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5_vcmsel_mask            (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5_ckphs_mask             (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5_sr_mask                (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5_term_mask              (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5_idrv_sel_mask          (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5n_mode(data)            (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5p_mode(data)            (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5_vcmsel(data)           (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5_ckphs(data)            (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5_sr(data)               (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5_term(data)             (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_pif_tx5_idrv_sel(data)         (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_get_pif_tx5n_mode(data)        ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_get_pif_tx5p_mode(data)        ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_get_pif_tx5_vcmsel(data)       ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_get_pif_tx5_ckphs(data)        ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_get_pif_tx5_sr(data)           ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_get_pif_tx5_term(data)         ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_get_pif_tx5_idrv_sel(data)     (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24                               0x18000D60
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_reg_addr                       "0xB8000D60"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_reg                            0xB8000D60
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_inst_addr                      "0x0019"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6n_mode_shift            (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6p_mode_shift            (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6_vcmsel_shift           (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6_ckphs_shift            (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6_sr_shift               (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6_term_shift             (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6_idrv_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6n_mode_mask             (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6p_mode_mask             (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6_vcmsel_mask            (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6_ckphs_mask             (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6_sr_mask                (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6_term_mask              (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6_idrv_sel_mask          (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6n_mode(data)            (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6p_mode(data)            (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6_vcmsel(data)           (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6_ckphs(data)            (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6_sr(data)               (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6_term(data)             (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_pif_tx6_idrv_sel(data)         (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_get_pif_tx6n_mode(data)        ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_get_pif_tx6p_mode(data)        ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_get_pif_tx6_vcmsel(data)       ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_get_pif_tx6_ckphs(data)        ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_get_pif_tx6_sr(data)           ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_get_pif_tx6_term(data)         ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_get_pif_tx6_idrv_sel(data)     (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28                               0x18000D70
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_reg_addr                       "0xB8000D70"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_reg                            0xB8000D70
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_inst_addr                      "0x001A"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7n_mode_shift            (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7p_mode_shift            (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7_vcmsel_shift           (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7_ckphs_shift            (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7_sr_shift               (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7_term_shift             (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7_idrv_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7n_mode_mask             (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7p_mode_mask             (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7_vcmsel_mask            (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7_ckphs_mask             (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7_sr_mask                (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7_term_mask              (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7_idrv_sel_mask          (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7n_mode(data)            (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7p_mode(data)            (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7_vcmsel(data)           (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7_ckphs(data)            (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7_sr(data)               (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7_term(data)             (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_pif_tx7_idrv_sel(data)         (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_get_pif_tx7n_mode(data)        ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_get_pif_tx7p_mode(data)        ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_get_pif_tx7_vcmsel(data)       ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_get_pif_tx7_ckphs(data)        ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_get_pif_tx7_sr(data)           ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_get_pif_tx7_term(data)         ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_get_pif_tx7_idrv_sel(data)     (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32                               0x18000D80
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_reg_addr                       "0xB8000D80"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_reg                            0xB8000D80
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_inst_addr                      "0x001B"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8n_mode_shift            (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8p_mode_shift            (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8_vcmsel_shift           (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8_ckphs_shift            (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8_sr_shift               (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8_term_shift             (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8_idrv_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8n_mode_mask             (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8p_mode_mask             (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8_vcmsel_mask            (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8_ckphs_mask             (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8_sr_mask                (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8_term_mask              (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8_idrv_sel_mask          (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8n_mode(data)            (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8p_mode(data)            (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8_vcmsel(data)           (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8_ckphs(data)            (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8_sr(data)               (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8_term(data)             (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_pif_tx8_idrv_sel(data)         (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_get_pif_tx8n_mode(data)        ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_get_pif_tx8p_mode(data)        ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_get_pif_tx8_vcmsel(data)       ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_get_pif_tx8_ckphs(data)        ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_get_pif_tx8_sr(data)           ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_get_pif_tx8_term(data)         ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_get_pif_tx8_idrv_sel(data)     (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36                               0x18000D90
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_reg_addr                       "0xB8000D90"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_reg                            0xB8000D90
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_inst_addr                      "0x001C"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9n_mode_shift            (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9p_mode_shift            (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9_vcmsel_shift           (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9_ckphs_shift            (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9_sr_shift               (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9_term_shift             (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9_idrv_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9n_mode_mask             (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9p_mode_mask             (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9_vcmsel_mask            (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9_ckphs_mask             (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9_sr_mask                (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9_term_mask              (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9_idrv_sel_mask          (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9n_mode(data)            (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9p_mode(data)            (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9_vcmsel(data)           (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9_ckphs(data)            (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9_sr(data)               (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9_term(data)             (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_pif_tx9_idrv_sel(data)         (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_get_pif_tx9n_mode(data)        ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_get_pif_tx9p_mode(data)        ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_get_pif_tx9_vcmsel(data)       ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_get_pif_tx9_ckphs(data)        ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_get_pif_tx9_sr(data)           ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_get_pif_tx9_term(data)         ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_get_pif_tx9_idrv_sel(data)     (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40                               0x18000DA0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_reg_addr                       "0xB8000DA0"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_reg                            0xB8000DA0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_inst_addr                      "0x001D"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10n_mode_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10p_mode_shift           (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10_vcmsel_shift          (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10_ckphs_shift           (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10_sr_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10_term_shift            (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10_idrv_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10n_mode_mask            (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10p_mode_mask            (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10_vcmsel_mask           (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10_ckphs_mask            (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10_sr_mask               (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10_term_mask             (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10_idrv_sel_mask         (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10n_mode(data)           (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10p_mode(data)           (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10_vcmsel(data)          (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10_ckphs(data)           (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10_sr(data)              (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10_term(data)            (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_pif_tx10_idrv_sel(data)        (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_get_pif_tx10n_mode(data)       ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_get_pif_tx10p_mode(data)       ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_get_pif_tx10_vcmsel(data)      ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_get_pif_tx10_ckphs(data)       ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_get_pif_tx10_sr(data)          ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_get_pif_tx10_term(data)        ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_get_pif_tx10_idrv_sel(data)    (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44                               0x18000DB0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_reg_addr                       "0xB8000DB0"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_reg                            0xB8000DB0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_inst_addr                      "0x001E"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11n_mode_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11p_mode_shift           (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11_vcmsel_shift          (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11_ckphs_shift           (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11_sr_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11_term_shift            (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11_idrv_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11n_mode_mask            (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11p_mode_mask            (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11_vcmsel_mask           (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11_ckphs_mask            (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11_sr_mask               (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11_term_mask             (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11_idrv_sel_mask         (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11n_mode(data)           (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11p_mode(data)           (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11_vcmsel(data)          (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11_ckphs(data)           (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11_sr(data)              (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11_term(data)            (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_pif_tx11_idrv_sel(data)        (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_get_pif_tx11n_mode(data)       ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_get_pif_tx11p_mode(data)       ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_get_pif_tx11_vcmsel(data)      ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_get_pif_tx11_ckphs(data)       ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_get_pif_tx11_sr(data)          ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_get_pif_tx11_term(data)        ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_get_pif_tx11_idrv_sel(data)    (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48                               0x18000DC0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_reg_addr                       "0xB8000DC0"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_reg                            0xB8000DC0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_inst_addr                      "0x001F"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12n_mode_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12p_mode_shift           (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12_vcmsel_shift          (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12_ckphs_shift           (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12_sr_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12_term_shift            (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12_idrv_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12n_mode_mask            (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12p_mode_mask            (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12_vcmsel_mask           (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12_ckphs_mask            (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12_sr_mask               (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12_term_mask             (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12_idrv_sel_mask         (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12n_mode(data)           (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12p_mode(data)           (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12_vcmsel(data)          (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12_ckphs(data)           (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12_sr(data)              (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12_term(data)            (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_pif_tx12_idrv_sel(data)        (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_get_pif_tx12n_mode(data)       ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_get_pif_tx12p_mode(data)       ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_get_pif_tx12_vcmsel(data)      ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_get_pif_tx12_ckphs(data)       ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_get_pif_tx12_sr(data)          ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_get_pif_tx12_term(data)        ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_get_pif_tx12_idrv_sel(data)    (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52                               0x18000DD0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_reg_addr                       "0xB8000DD0"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_reg                            0xB8000DD0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_inst_addr                      "0x0020"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13n_mode_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13p_mode_shift           (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13_vcmsel_shift          (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13_ckphs_shift           (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13_sr_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13_term_shift            (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13_idrv_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13n_mode_mask            (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13p_mode_mask            (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13_vcmsel_mask           (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13_ckphs_mask            (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13_sr_mask               (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13_term_mask             (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13_idrv_sel_mask         (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13n_mode(data)           (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13p_mode(data)           (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13_vcmsel(data)          (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13_ckphs(data)           (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13_sr(data)              (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13_term(data)            (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_pif_tx13_idrv_sel(data)        (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_get_pif_tx13n_mode(data)       ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_get_pif_tx13p_mode(data)       ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_get_pif_tx13_vcmsel(data)      ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_get_pif_tx13_ckphs(data)       ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_get_pif_tx13_sr(data)          ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_get_pif_tx13_term(data)        ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_get_pif_tx13_idrv_sel(data)    (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56                               0x18000DE0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_reg_addr                       "0xB8000DE0"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_reg                            0xB8000DE0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_inst_addr                      "0x0021"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14n_mode_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14p_mode_shift           (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14_vcmsel_shift          (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14_ckphs_shift           (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14_sr_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14_term_shift            (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14_idrv_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14n_mode_mask            (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14p_mode_mask            (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14_vcmsel_mask           (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14_ckphs_mask            (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14_sr_mask               (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14_term_mask             (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14_idrv_sel_mask         (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14n_mode(data)           (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14p_mode(data)           (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14_vcmsel(data)          (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14_ckphs(data)           (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14_sr(data)              (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14_term(data)            (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_pif_tx14_idrv_sel(data)        (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_get_pif_tx14n_mode(data)       ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_get_pif_tx14p_mode(data)       ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_get_pif_tx14_vcmsel(data)      ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_get_pif_tx14_ckphs(data)       ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_get_pif_tx14_sr(data)          ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_get_pif_tx14_term(data)        ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_get_pif_tx14_idrv_sel(data)    (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60                               0x18000DF0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_reg_addr                       "0xB8000DF0"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_reg                            0xB8000DF0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_inst_addr                      "0x0022"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15n_mode_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15p_mode_shift           (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15_vcmsel_shift          (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15_ckphs_shift           (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15_sr_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15_term_shift            (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15_idrv_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15n_mode_mask            (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15p_mode_mask            (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15_vcmsel_mask           (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15_ckphs_mask            (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15_sr_mask               (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15_term_mask             (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15_idrv_sel_mask         (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15n_mode(data)           (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15p_mode(data)           (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15_vcmsel(data)          (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15_ckphs(data)           (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15_sr(data)              (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15_term(data)            (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_pif_tx15_idrv_sel(data)        (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_get_pif_tx15n_mode(data)       ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_get_pif_tx15p_mode(data)       ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_get_pif_tx15_vcmsel(data)      ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_get_pif_tx15_ckphs(data)       ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_get_pif_tx15_sr(data)          ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_get_pif_tx15_term(data)        ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_get_pif_tx15_idrv_sel(data)    (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64                               0x18000E00
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_reg_addr                       "0xB8000E00"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_reg                            0xB8000E00
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_inst_addr                      "0x0023"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16n_mode_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16p_mode_shift           (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16_vcmsel_shift          (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16_ckphs_shift           (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16_sr_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16_term_shift            (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16_idrv_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16n_mode_mask            (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16p_mode_mask            (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16_vcmsel_mask           (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16_ckphs_mask            (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16_sr_mask               (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16_term_mask             (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16_idrv_sel_mask         (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16n_mode(data)           (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16p_mode(data)           (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16_vcmsel(data)          (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16_ckphs(data)           (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16_sr(data)              (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16_term(data)            (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_pif_tx16_idrv_sel(data)        (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_get_pif_tx16n_mode(data)       ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_get_pif_tx16p_mode(data)       ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_get_pif_tx16_vcmsel(data)      ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_get_pif_tx16_ckphs(data)       ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_get_pif_tx16_sr(data)          ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_get_pif_tx16_term(data)        ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_64_get_pif_tx16_idrv_sel(data)    (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68                               0x18000E10
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_reg_addr                       "0xB8000E10"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_reg                            0xB8000E10
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_inst_addr                      "0x0024"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17n_mode_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17p_mode_shift           (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17_vcmsel_shift          (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17_ckphs_shift           (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17_sr_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17_term_shift            (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17_idrv_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17n_mode_mask            (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17p_mode_mask            (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17_vcmsel_mask           (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17_ckphs_mask            (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17_sr_mask               (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17_term_mask             (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17_idrv_sel_mask         (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17n_mode(data)           (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17p_mode(data)           (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17_vcmsel(data)          (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17_ckphs(data)           (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17_sr(data)              (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17_term(data)            (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_pif_tx17_idrv_sel(data)        (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_get_pif_tx17n_mode(data)       ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_get_pif_tx17p_mode(data)       ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_get_pif_tx17_vcmsel(data)      ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_get_pif_tx17_ckphs(data)       ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_get_pif_tx17_sr(data)          ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_get_pif_tx17_term(data)        ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_68_get_pif_tx17_idrv_sel(data)    (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72                               0x18000E20
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_reg_addr                       "0xB8000E20"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_reg                            0xB8000E20
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_inst_addr                      "0x0025"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18n_mode_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18p_mode_shift           (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18_vcmsel_shift          (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18_ckphs_shift           (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18_sr_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18_term_shift            (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18_idrv_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18n_mode_mask            (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18p_mode_mask            (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18_vcmsel_mask           (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18_ckphs_mask            (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18_sr_mask               (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18_term_mask             (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18_idrv_sel_mask         (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18n_mode(data)           (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18p_mode(data)           (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18_vcmsel(data)          (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18_ckphs(data)           (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18_sr(data)              (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18_term(data)            (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_pif_tx18_idrv_sel(data)        (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_get_pif_tx18n_mode(data)       ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_get_pif_tx18p_mode(data)       ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_get_pif_tx18_vcmsel(data)      ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_get_pif_tx18_ckphs(data)       ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_get_pif_tx18_sr(data)          ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_get_pif_tx18_term(data)        ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_72_get_pif_tx18_idrv_sel(data)    (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76                               0x18000E30
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_reg_addr                       "0xB8000E30"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_reg                            0xB8000E30
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_inst_addr                      "0x0026"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19n_mode_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19p_mode_shift           (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19_vcmsel_shift          (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19_ckphs_shift           (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19_sr_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19_term_shift            (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19_idrv_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19n_mode_mask            (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19p_mode_mask            (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19_vcmsel_mask           (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19_ckphs_mask            (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19_sr_mask               (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19_term_mask             (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19_idrv_sel_mask         (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19n_mode(data)           (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19p_mode(data)           (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19_vcmsel(data)          (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19_ckphs(data)           (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19_sr(data)              (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19_term(data)            (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_pif_tx19_idrv_sel(data)        (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_get_pif_tx19n_mode(data)       ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_get_pif_tx19p_mode(data)       ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_get_pif_tx19_vcmsel(data)      ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_get_pif_tx19_ckphs(data)       ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_get_pif_tx19_sr(data)          ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_get_pif_tx19_term(data)        ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_76_get_pif_tx19_idrv_sel(data)    (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80                               0x18000E40
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_reg_addr                       "0xB8000E40"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_reg                            0xB8000E40
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_inst_addr                      "0x0027"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20n_mode_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20p_mode_shift           (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20_vcmsel_shift          (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20_ckphs_shift           (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20_sr_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20_term_shift            (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20_idrv_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20n_mode_mask            (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20p_mode_mask            (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20_vcmsel_mask           (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20_ckphs_mask            (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20_sr_mask               (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20_term_mask             (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20_idrv_sel_mask         (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20n_mode(data)           (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20p_mode(data)           (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20_vcmsel(data)          (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20_ckphs(data)           (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20_sr(data)              (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20_term(data)            (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_pif_tx20_idrv_sel(data)        (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_get_pif_tx20n_mode(data)       ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_get_pif_tx20p_mode(data)       ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_get_pif_tx20_vcmsel(data)      ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_get_pif_tx20_ckphs(data)       ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_get_pif_tx20_sr(data)          ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_get_pif_tx20_term(data)        ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_80_get_pif_tx20_idrv_sel(data)    (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84                               0x18000E50
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_reg_addr                       "0xB8000E50"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_reg                            0xB8000E50
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_inst_addr                      "0x0028"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21n_mode_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21p_mode_shift           (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21_vcmsel_shift          (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21_ckphs_shift           (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21_sr_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21_term_shift            (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21_idrv_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21n_mode_mask            (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21p_mode_mask            (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21_vcmsel_mask           (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21_ckphs_mask            (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21_sr_mask               (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21_term_mask             (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21_idrv_sel_mask         (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21n_mode(data)           (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21p_mode(data)           (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21_vcmsel(data)          (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21_ckphs(data)           (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21_sr(data)              (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21_term(data)            (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_pif_tx21_idrv_sel(data)        (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_get_pif_tx21n_mode(data)       ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_get_pif_tx21p_mode(data)       ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_get_pif_tx21_vcmsel(data)      ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_get_pif_tx21_ckphs(data)       ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_get_pif_tx21_sr(data)          ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_get_pif_tx21_term(data)        ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_84_get_pif_tx21_idrv_sel(data)    (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88                               0x18000E60
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_reg_addr                       "0xB8000E60"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_reg                            0xB8000E60
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_inst_addr                      "0x0029"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22n_mode_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22p_mode_shift           (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22_vcmsel_shift          (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22_ckphs_shift           (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22_sr_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22_term_shift            (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22_idrv_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22n_mode_mask            (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22p_mode_mask            (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22_vcmsel_mask           (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22_ckphs_mask            (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22_sr_mask               (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22_term_mask             (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22_idrv_sel_mask         (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22n_mode(data)           (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22p_mode(data)           (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22_vcmsel(data)          (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22_ckphs(data)           (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22_sr(data)              (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22_term(data)            (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_pif_tx22_idrv_sel(data)        (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_get_pif_tx22n_mode(data)       ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_get_pif_tx22p_mode(data)       ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_get_pif_tx22_vcmsel(data)      ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_get_pif_tx22_ckphs(data)       ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_get_pif_tx22_sr(data)          ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_get_pif_tx22_term(data)        ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_88_get_pif_tx22_idrv_sel(data)    (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92                               0x18000E70
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_reg_addr                       "0xB8000E70"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_reg                            0xB8000E70
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_inst_addr                      "0x002A"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23n_mode_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23p_mode_shift           (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23_vcmsel_shift          (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23_ckphs_shift           (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23_sr_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23_term_shift            (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23_idrv_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23n_mode_mask            (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23p_mode_mask            (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23_vcmsel_mask           (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23_ckphs_mask            (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23_sr_mask               (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23_term_mask             (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23_idrv_sel_mask         (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23n_mode(data)           (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23p_mode(data)           (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23_vcmsel(data)          (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23_ckphs(data)           (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23_sr(data)              (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23_term(data)            (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_pif_tx23_idrv_sel(data)        (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_get_pif_tx23n_mode(data)       ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_get_pif_tx23p_mode(data)       ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_get_pif_tx23_vcmsel(data)      ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_get_pif_tx23_ckphs(data)       ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_get_pif_tx23_sr(data)          ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_get_pif_tx23_term(data)        ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_92_get_pif_tx23_idrv_sel(data)    (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96                               0x18000E80
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_reg_addr                       "0xB8000E80"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_reg                            0xB8000E80
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_inst_addr                      "0x002B"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24n_mode_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24p_mode_shift           (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24_vcmsel_shift          (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24_ckphs_shift           (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24_sr_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24_term_shift            (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24_idrv_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24n_mode_mask            (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24p_mode_mask            (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24_vcmsel_mask           (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24_ckphs_mask            (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24_sr_mask               (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24_term_mask             (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24_idrv_sel_mask         (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24n_mode(data)           (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24p_mode(data)           (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24_vcmsel(data)          (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24_ckphs(data)           (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24_sr(data)              (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24_term(data)            (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_pif_tx24_idrv_sel(data)        (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_get_pif_tx24n_mode(data)       ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_get_pif_tx24p_mode(data)       ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_get_pif_tx24_vcmsel(data)      ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_get_pif_tx24_ckphs(data)       ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_get_pif_tx24_sr(data)          ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_get_pif_tx24_term(data)        ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_96_get_pif_tx24_idrv_sel(data)    (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100                              0x18000E90
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_reg_addr                      "0xB8000E90"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_reg                           0xB8000E90
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_inst_addr                     "0x002C"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_reg(data)                 (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_reg                       (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25n_mode_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25p_mode_shift          (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25_vcmsel_shift         (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25_ckphs_shift          (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25_sr_shift             (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25_term_shift           (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25_idrv_sel_shift       (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25n_mode_mask           (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25p_mode_mask           (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25_vcmsel_mask          (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25_ckphs_mask           (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25_sr_mask              (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25_term_mask            (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25_idrv_sel_mask        (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25n_mode(data)          (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25p_mode(data)          (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25_vcmsel(data)         (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25_ckphs(data)          (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25_sr(data)             (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25_term(data)           (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_pif_tx25_idrv_sel(data)       (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_get_pif_tx25n_mode(data)      ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_get_pif_tx25p_mode(data)      ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_get_pif_tx25_vcmsel(data)     ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_get_pif_tx25_ckphs(data)      ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_get_pif_tx25_sr(data)         ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_get_pif_tx25_term(data)       ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_100_get_pif_tx25_idrv_sel(data)   (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104                              0x18000EA0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_reg_addr                      "0xB8000EA0"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_reg                           0xB8000EA0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_inst_addr                     "0x002D"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_reg(data)                 (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_reg                       (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26n_mode_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26p_mode_shift          (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26_vcmsel_shift         (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26_ckphs_shift          (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26_sr_shift             (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26_term_shift           (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26_idrv_sel_shift       (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26n_mode_mask           (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26p_mode_mask           (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26_vcmsel_mask          (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26_ckphs_mask           (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26_sr_mask              (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26_term_mask            (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26_idrv_sel_mask        (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26n_mode(data)          (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26p_mode(data)          (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26_vcmsel(data)         (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26_ckphs(data)          (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26_sr(data)             (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26_term(data)           (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_pif_tx26_idrv_sel(data)       (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_get_pif_tx26n_mode(data)      ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_get_pif_tx26p_mode(data)      ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_get_pif_tx26_vcmsel(data)     ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_get_pif_tx26_ckphs(data)      ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_get_pif_tx26_sr(data)         ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_get_pif_tx26_term(data)       ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_104_get_pif_tx26_idrv_sel(data)   (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108                              0x18000EB0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_reg_addr                      "0xB8000EB0"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_reg                           0xB8000EB0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_inst_addr                     "0x002E"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_reg(data)                 (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_reg                       (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27n_mode_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27p_mode_shift          (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27_vcmsel_shift         (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27_ckphs_shift          (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27_sr_shift             (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27_term_shift           (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27_idrv_sel_shift       (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27n_mode_mask           (0x70000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27p_mode_mask           (0x07000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27_vcmsel_mask          (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27_ckphs_mask           (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27_sr_mask              (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27_term_mask            (0x00000F00)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27_idrv_sel_mask        (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27n_mode(data)          (0x70000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27p_mode(data)          (0x07000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27_vcmsel(data)         (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27_ckphs(data)          (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27_sr(data)             (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27_term(data)           (0x00000F00&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_pif_tx27_idrv_sel(data)       (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_get_pif_tx27n_mode(data)      ((0x70000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_get_pif_tx27p_mode(data)      ((0x07000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_get_pif_tx27_vcmsel(data)     ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_get_pif_tx27_ckphs(data)      ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_get_pif_tx27_sr(data)         ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_get_pif_tx27_term(data)       ((0x00000F00&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_108_get_pif_tx27_idrv_sel(data)   (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1                                0x18000D04
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_reg_addr                        "0xB8000D04"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_reg                             0xB8000D04
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_inst_addr                       "0x002F"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_reg(data)                   (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_reg                         (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_ck7x_lag_shift          (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_emph_shift              (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_env2i_shift             (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_epicml_shift            (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_rten_shift              (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_testen_shift            (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_sel_test_shift          (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_ttl_str_shift           (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_iem_sel_shift           (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_ck7x_lag_mask           (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_emph_mask               (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_env2i_mask              (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_epicml_mask             (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_rten_mask               (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_testen_mask             (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_sel_test_mask           (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_ttl_str_mask            (0x00000040)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_iem_sel_mask            (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_ck7x_lag(data)          (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_emph(data)              (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_env2i(data)             (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_epicml(data)            (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_rten(data)              (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_testen(data)            (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_sel_test(data)          (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_ttl_str(data)           (0x00000040&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_pif_tx0_iem_sel(data)           (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_get_pif_tx0_ck7x_lag(data)      ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_get_pif_tx0_emph(data)          ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_get_pif_tx0_env2i(data)         ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_get_pif_tx0_epicml(data)        ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_get_pif_tx0_rten(data)          ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_get_pif_tx0_testen(data)        ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_get_pif_tx0_sel_test(data)      ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_get_pif_tx0_ttl_str(data)       ((0x00000040&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_get_pif_tx0_iem_sel(data)       (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5                                0x18000D14
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_reg_addr                        "0xB8000D14"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_reg                             0xB8000D14
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_inst_addr                       "0x0030"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_reg(data)                   (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_reg                         (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_ck7x_lag_shift          (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_emph_shift              (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_env2i_shift             (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_epicml_shift            (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_rten_shift              (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_testen_shift            (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_sel_test_shift          (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_ttl_str_shift           (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_iem_sel_shift           (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_ck7x_lag_mask           (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_emph_mask               (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_env2i_mask              (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_epicml_mask             (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_rten_mask               (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_testen_mask             (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_sel_test_mask           (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_ttl_str_mask            (0x00000040)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_iem_sel_mask            (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_ck7x_lag(data)          (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_emph(data)              (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_env2i(data)             (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_epicml(data)            (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_rten(data)              (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_testen(data)            (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_sel_test(data)          (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_ttl_str(data)           (0x00000040&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_pif_tx1_iem_sel(data)           (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_get_pif_tx1_ck7x_lag(data)      ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_get_pif_tx1_emph(data)          ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_get_pif_tx1_env2i(data)         ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_get_pif_tx1_epicml(data)        ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_get_pif_tx1_rten(data)          ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_get_pif_tx1_testen(data)        ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_get_pif_tx1_sel_test(data)      ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_get_pif_tx1_ttl_str(data)       ((0x00000040&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_get_pif_tx1_iem_sel(data)       (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9                                0x18000D24
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_reg_addr                        "0xB8000D24"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_reg                             0xB8000D24
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_inst_addr                       "0x0031"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_reg(data)                   (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_reg                         (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_ck7x_lag_shift          (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_emph_shift              (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_env2i_shift             (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_epicml_shift            (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_rten_shift              (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_testen_shift            (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_sel_test_shift          (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_ttl_str_shift           (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_iem_sel_shift           (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_ck7x_lag_mask           (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_emph_mask               (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_env2i_mask              (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_epicml_mask             (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_rten_mask               (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_testen_mask             (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_sel_test_mask           (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_ttl_str_mask            (0x00000040)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_iem_sel_mask            (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_ck7x_lag(data)          (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_emph(data)              (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_env2i(data)             (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_epicml(data)            (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_rten(data)              (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_testen(data)            (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_sel_test(data)          (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_ttl_str(data)           (0x00000040&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_pif_tx2_iem_sel(data)           (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_get_pif_tx2_ck7x_lag(data)      ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_get_pif_tx2_emph(data)          ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_get_pif_tx2_env2i(data)         ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_get_pif_tx2_epicml(data)        ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_get_pif_tx2_rten(data)          ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_get_pif_tx2_testen(data)        ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_get_pif_tx2_sel_test(data)      ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_get_pif_tx2_ttl_str(data)       ((0x00000040&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_get_pif_tx2_iem_sel(data)       (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13                               0x18000D34
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_reg_addr                       "0xB8000D34"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_reg                            0xB8000D34
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_inst_addr                      "0x0032"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_ck7x_lag_shift         (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_emph_shift             (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_env2i_shift            (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_epicml_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_rten_shift             (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_testen_shift           (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_sel_test_shift         (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_ttl_str_shift          (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_iem_sel_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_ck7x_lag_mask          (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_emph_mask              (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_env2i_mask             (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_epicml_mask            (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_rten_mask              (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_testen_mask            (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_sel_test_mask          (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_ttl_str_mask           (0x00000040)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_iem_sel_mask           (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_ck7x_lag(data)         (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_emph(data)             (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_env2i(data)            (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_epicml(data)           (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_rten(data)             (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_testen(data)           (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_sel_test(data)         (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_ttl_str(data)          (0x00000040&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_pif_tx3_iem_sel(data)          (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_get_pif_tx3_ck7x_lag(data)     ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_get_pif_tx3_emph(data)         ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_get_pif_tx3_env2i(data)        ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_get_pif_tx3_epicml(data)       ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_get_pif_tx3_rten(data)         ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_get_pif_tx3_testen(data)       ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_get_pif_tx3_sel_test(data)     ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_get_pif_tx3_ttl_str(data)      ((0x00000040&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_get_pif_tx3_iem_sel(data)      (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17                               0x18000D44
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_reg_addr                       "0xB8000D44"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_reg                            0xB8000D44
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_inst_addr                      "0x0033"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_ck7x_lag_shift         (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_emph_shift             (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_env2i_shift            (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_epicml_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_rten_shift             (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_testen_shift           (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_sel_test_shift         (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_ttl_str_shift          (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_iem_sel_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_ck7x_lag_mask          (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_emph_mask              (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_env2i_mask             (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_epicml_mask            (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_rten_mask              (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_testen_mask            (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_sel_test_mask          (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_ttl_str_mask           (0x00000040)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_iem_sel_mask           (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_ck7x_lag(data)         (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_emph(data)             (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_env2i(data)            (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_epicml(data)           (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_rten(data)             (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_testen(data)           (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_sel_test(data)         (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_ttl_str(data)          (0x00000040&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_pif_tx4_iem_sel(data)          (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_get_pif_tx4_ck7x_lag(data)     ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_get_pif_tx4_emph(data)         ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_get_pif_tx4_env2i(data)        ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_get_pif_tx4_epicml(data)       ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_get_pif_tx4_rten(data)         ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_get_pif_tx4_testen(data)       ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_get_pif_tx4_sel_test(data)     ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_get_pif_tx4_ttl_str(data)      ((0x00000040&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_get_pif_tx4_iem_sel(data)      (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21                               0x18000D54
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_reg_addr                       "0xB8000D54"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_reg                            0xB8000D54
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_inst_addr                      "0x0034"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_ck7x_lag_shift         (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_emph_shift             (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_env2i_shift            (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_epicml_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_rten_shift             (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_testen_shift           (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_sel_test_shift         (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_ttl_str_shift          (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_iem_sel_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_ck7x_lag_mask          (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_emph_mask              (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_env2i_mask             (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_epicml_mask            (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_rten_mask              (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_testen_mask            (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_sel_test_mask          (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_ttl_str_mask           (0x00000040)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_iem_sel_mask           (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_ck7x_lag(data)         (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_emph(data)             (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_env2i(data)            (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_epicml(data)           (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_rten(data)             (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_testen(data)           (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_sel_test(data)         (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_ttl_str(data)          (0x00000040&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_pif_tx5_iem_sel(data)          (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_get_pif_tx5_ck7x_lag(data)     ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_get_pif_tx5_emph(data)         ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_get_pif_tx5_env2i(data)        ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_get_pif_tx5_epicml(data)       ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_get_pif_tx5_rten(data)         ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_get_pif_tx5_testen(data)       ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_get_pif_tx5_sel_test(data)     ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_get_pif_tx5_ttl_str(data)      ((0x00000040&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_get_pif_tx5_iem_sel(data)      (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25                               0x18000D64
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_reg_addr                       "0xB8000D64"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_reg                            0xB8000D64
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_inst_addr                      "0x0035"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_ck7x_lag_shift         (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_emph_shift             (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_env2i_shift            (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_epicml_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_rten_shift             (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_testen_shift           (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_sel_test_shift         (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_ttl_str_shift          (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_iem_sel_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_ck7x_lag_mask          (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_emph_mask              (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_env2i_mask             (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_epicml_mask            (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_rten_mask              (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_testen_mask            (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_sel_test_mask          (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_ttl_str_mask           (0x00000040)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_iem_sel_mask           (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_ck7x_lag(data)         (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_emph(data)             (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_env2i(data)            (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_epicml(data)           (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_rten(data)             (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_testen(data)           (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_sel_test(data)         (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_ttl_str(data)          (0x00000040&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_pif_tx6_iem_sel(data)          (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_get_pif_tx6_ck7x_lag(data)     ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_get_pif_tx6_emph(data)         ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_get_pif_tx6_env2i(data)        ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_get_pif_tx6_epicml(data)       ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_get_pif_tx6_rten(data)         ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_get_pif_tx6_testen(data)       ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_get_pif_tx6_sel_test(data)     ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_get_pif_tx6_ttl_str(data)      ((0x00000040&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_get_pif_tx6_iem_sel(data)      (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29                               0x18000D74
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_reg_addr                       "0xB8000D74"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_reg                            0xB8000D74
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_inst_addr                      "0x0036"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_ck7x_lag_shift         (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_emph_shift             (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_env2i_shift            (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_epicml_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_rten_shift             (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_testen_shift           (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_sel_test_shift         (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_ttl_str_shift          (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_iem_sel_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_ck7x_lag_mask          (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_emph_mask              (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_env2i_mask             (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_epicml_mask            (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_rten_mask              (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_testen_mask            (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_sel_test_mask          (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_ttl_str_mask           (0x00000040)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_iem_sel_mask           (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_ck7x_lag(data)         (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_emph(data)             (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_env2i(data)            (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_epicml(data)           (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_rten(data)             (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_testen(data)           (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_sel_test(data)         (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_ttl_str(data)          (0x00000040&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_pif_tx7_iem_sel(data)          (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_get_pif_tx7_ck7x_lag(data)     ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_get_pif_tx7_emph(data)         ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_get_pif_tx7_env2i(data)        ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_get_pif_tx7_epicml(data)       ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_get_pif_tx7_rten(data)         ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_get_pif_tx7_testen(data)       ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_get_pif_tx7_sel_test(data)     ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_get_pif_tx7_ttl_str(data)      ((0x00000040&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_get_pif_tx7_iem_sel(data)      (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33                               0x18000D84
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_reg_addr                       "0xB8000D84"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_reg                            0xB8000D84
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_inst_addr                      "0x0037"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_ck7x_lag_shift         (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_emph_shift             (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_env2i_shift            (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_epicml_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_rten_shift             (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_testen_shift           (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_ndrv_shift             (16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_rp_shift               (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_sel_test_shift         (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_iem_sel_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_ck7x_lag_mask          (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_emph_mask              (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_env2i_mask             (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_epicml_mask            (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_rten_mask              (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_testen_mask            (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_ndrv_mask              (0x00030000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_rp_mask                (0x00003000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_sel_test_mask          (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_iem_sel_mask           (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_ck7x_lag(data)         (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_emph(data)             (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_env2i(data)            (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_epicml(data)           (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_rten(data)             (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_testen(data)           (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_ndrv(data)             (0x00030000&((data)<<16))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_rp(data)               (0x00003000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_sel_test(data)         (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_pif_tx8_iem_sel(data)          (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_get_pif_tx8_ck7x_lag(data)     ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_get_pif_tx8_emph(data)         ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_get_pif_tx8_env2i(data)        ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_get_pif_tx8_epicml(data)       ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_get_pif_tx8_rten(data)         ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_get_pif_tx8_testen(data)       ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_get_pif_tx8_ndrv(data)         ((0x00030000&(data))>>16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_get_pif_tx8_rp(data)           ((0x00003000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_get_pif_tx8_sel_test(data)     ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_get_pif_tx8_iem_sel(data)      (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37                               0x18000D94
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_reg_addr                       "0xB8000D94"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_reg                            0xB8000D94
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_inst_addr                      "0x0038"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_ck7x_lag_shift         (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_emph_shift             (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_env2i_shift            (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_epicml_shift           (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_rten_shift             (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_testen_shift           (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_ndrv_shift             (16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_rp_shift               (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_sel_test_shift         (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_iem_sel_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_ck7x_lag_mask          (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_emph_mask              (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_env2i_mask             (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_epicml_mask            (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_rten_mask              (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_testen_mask            (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_ndrv_mask              (0x00030000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_rp_mask                (0x00003000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_sel_test_mask          (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_iem_sel_mask           (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_ck7x_lag(data)         (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_emph(data)             (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_env2i(data)            (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_epicml(data)           (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_rten(data)             (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_testen(data)           (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_ndrv(data)             (0x00030000&((data)<<16))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_rp(data)               (0x00003000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_sel_test(data)         (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_pif_tx9_iem_sel(data)          (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_get_pif_tx9_ck7x_lag(data)     ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_get_pif_tx9_emph(data)         ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_get_pif_tx9_env2i(data)        ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_get_pif_tx9_epicml(data)       ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_get_pif_tx9_rten(data)         ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_get_pif_tx9_testen(data)       ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_get_pif_tx9_ndrv(data)         ((0x00030000&(data))>>16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_get_pif_tx9_rp(data)           ((0x00003000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_get_pif_tx9_sel_test(data)     ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_get_pif_tx9_iem_sel(data)      (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41                               0x18000DA4
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_reg_addr                       "0xB8000DA4"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_reg                            0xB8000DA4
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_inst_addr                      "0x0039"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_ck7x_lag_shift        (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_emph_shift            (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_env2i_shift           (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_epicml_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_rten_shift            (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_testen_shift          (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_ndrv_shift            (16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_rp_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_sel_test_shift        (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_iem_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_ck7x_lag_mask         (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_emph_mask             (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_env2i_mask            (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_epicml_mask           (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_rten_mask             (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_testen_mask           (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_ndrv_mask             (0x00030000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_rp_mask               (0x00003000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_sel_test_mask         (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_iem_sel_mask          (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_ck7x_lag(data)        (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_emph(data)            (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_env2i(data)           (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_epicml(data)          (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_rten(data)            (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_testen(data)          (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_ndrv(data)            (0x00030000&((data)<<16))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_rp(data)              (0x00003000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_sel_test(data)        (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_pif_tx10_iem_sel(data)         (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_get_pif_tx10_ck7x_lag(data)    ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_get_pif_tx10_emph(data)        ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_get_pif_tx10_env2i(data)       ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_get_pif_tx10_epicml(data)      ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_get_pif_tx10_rten(data)        ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_get_pif_tx10_testen(data)      ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_get_pif_tx10_ndrv(data)        ((0x00030000&(data))>>16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_get_pif_tx10_rp(data)          ((0x00003000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_get_pif_tx10_sel_test(data)    ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_get_pif_tx10_iem_sel(data)     (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45                               0x18000DB4
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_reg_addr                       "0xB8000DB4"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_reg                            0xB8000DB4
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_inst_addr                      "0x003A"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_ck7x_lag_shift        (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_emph_shift            (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_env2i_shift           (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_epicml_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_rten_shift            (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_testen_shift          (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_ndrv_shift            (16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_rp_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_sel_test_shift        (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_iem_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_ck7x_lag_mask         (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_emph_mask             (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_env2i_mask            (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_epicml_mask           (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_rten_mask             (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_testen_mask           (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_ndrv_mask             (0x00030000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_rp_mask               (0x00003000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_sel_test_mask         (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_iem_sel_mask          (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_ck7x_lag(data)        (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_emph(data)            (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_env2i(data)           (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_epicml(data)          (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_rten(data)            (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_testen(data)          (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_ndrv(data)            (0x00030000&((data)<<16))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_rp(data)              (0x00003000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_sel_test(data)        (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_pif_tx11_iem_sel(data)         (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_get_pif_tx11_ck7x_lag(data)    ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_get_pif_tx11_emph(data)        ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_get_pif_tx11_env2i(data)       ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_get_pif_tx11_epicml(data)      ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_get_pif_tx11_rten(data)        ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_get_pif_tx11_testen(data)      ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_get_pif_tx11_ndrv(data)        ((0x00030000&(data))>>16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_get_pif_tx11_rp(data)          ((0x00003000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_get_pif_tx11_sel_test(data)    ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_get_pif_tx11_iem_sel(data)     (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49                               0x18000DC4
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_reg_addr                       "0xB8000DC4"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_reg                            0xB8000DC4
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_inst_addr                      "0x003B"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_ck7x_lag_shift        (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_emph_shift            (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_env2i_shift           (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_epicml_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_rten_shift            (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_testen_shift          (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_ndrv_shift            (16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_rp_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_sel_test_shift        (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_iem_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_ck7x_lag_mask         (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_emph_mask             (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_env2i_mask            (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_epicml_mask           (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_rten_mask             (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_testen_mask           (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_ndrv_mask             (0x00030000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_rp_mask               (0x00003000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_sel_test_mask         (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_iem_sel_mask          (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_ck7x_lag(data)        (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_emph(data)            (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_env2i(data)           (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_epicml(data)          (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_rten(data)            (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_testen(data)          (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_ndrv(data)            (0x00030000&((data)<<16))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_rp(data)              (0x00003000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_sel_test(data)        (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_pif_tx12_iem_sel(data)         (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_get_pif_tx12_ck7x_lag(data)    ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_get_pif_tx12_emph(data)        ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_get_pif_tx12_env2i(data)       ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_get_pif_tx12_epicml(data)      ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_get_pif_tx12_rten(data)        ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_get_pif_tx12_testen(data)      ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_get_pif_tx12_ndrv(data)        ((0x00030000&(data))>>16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_get_pif_tx12_rp(data)          ((0x00003000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_get_pif_tx12_sel_test(data)    ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_get_pif_tx12_iem_sel(data)     (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53                               0x18000DD4
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_reg_addr                       "0xB8000DD4"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_reg                            0xB8000DD4
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_inst_addr                      "0x003C"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_ck7x_lag_shift        (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_emph_shift            (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx14_env2i_shift           (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_epicml_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_rten_shift            (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_testen_shift          (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_ndrv_shift            (16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_rp_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_sel_test_shift        (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_iem_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_ck7x_lag_mask         (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_emph_mask             (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx14_env2i_mask            (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_epicml_mask           (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_rten_mask             (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_testen_mask           (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_ndrv_mask             (0x00030000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_rp_mask               (0x00003000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_sel_test_mask         (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_iem_sel_mask          (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_ck7x_lag(data)        (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_emph(data)            (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx14_env2i(data)           (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_epicml(data)          (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_rten(data)            (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_testen(data)          (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_ndrv(data)            (0x00030000&((data)<<16))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_rp(data)              (0x00003000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_sel_test(data)        (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_pif_tx13_iem_sel(data)         (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_get_pif_tx13_ck7x_lag(data)    ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_get_pif_tx13_emph(data)        ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_get_pif_tx14_env2i(data)       ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_get_pif_tx13_epicml(data)      ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_get_pif_tx13_rten(data)        ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_get_pif_tx13_testen(data)      ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_get_pif_tx13_ndrv(data)        ((0x00030000&(data))>>16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_get_pif_tx13_rp(data)          ((0x00003000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_get_pif_tx13_sel_test(data)    ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_get_pif_tx13_iem_sel(data)     (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57                               0x18000DE4
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_reg_addr                       "0xB8000DE4"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_reg                            0xB8000DE4
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_inst_addr                      "0x003D"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_ck7x_lag_shift        (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_emph_shift            (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx13_env2i_shift           (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_epicml_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_rten_shift            (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_testen_shift          (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_ndrv_shift            (16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_rp_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_sel_test_shift        (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_iem_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_ck7x_lag_mask         (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_emph_mask             (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx13_env2i_mask            (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_epicml_mask           (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_rten_mask             (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_testen_mask           (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_ndrv_mask             (0x00030000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_rp_mask               (0x00003000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_sel_test_mask         (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_iem_sel_mask          (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_ck7x_lag(data)        (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_emph(data)            (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx13_env2i(data)           (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_epicml(data)          (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_rten(data)            (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_testen(data)          (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_ndrv(data)            (0x00030000&((data)<<16))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_rp(data)              (0x00003000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_sel_test(data)        (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_pif_tx14_iem_sel(data)         (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_get_pif_tx14_ck7x_lag(data)    ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_get_pif_tx14_emph(data)        ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_get_pif_tx13_env2i(data)       ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_get_pif_tx14_epicml(data)      ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_get_pif_tx14_rten(data)        ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_get_pif_tx14_testen(data)      ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_get_pif_tx14_ndrv(data)        ((0x00030000&(data))>>16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_get_pif_tx14_rp(data)          ((0x00003000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_get_pif_tx14_sel_test(data)    ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_get_pif_tx14_iem_sel(data)     (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61                               0x18000DF4
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_reg_addr                       "0xB8000DF4"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_reg                            0xB8000DF4
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_inst_addr                      "0x003E"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_ck7x_lag_shift        (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_emph_shift            (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_env2i_shift           (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_epicml_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_rten_shift            (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_testen_shift          (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_ndrv_shift            (16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_rp_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_sel_test_shift        (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_iem_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_ck7x_lag_mask         (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_emph_mask             (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_env2i_mask            (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_epicml_mask           (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_rten_mask             (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_testen_mask           (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_ndrv_mask             (0x00030000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_rp_mask               (0x00003000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_sel_test_mask         (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_iem_sel_mask          (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_ck7x_lag(data)        (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_emph(data)            (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_env2i(data)           (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_epicml(data)          (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_rten(data)            (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_testen(data)          (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_ndrv(data)            (0x00030000&((data)<<16))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_rp(data)              (0x00003000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_sel_test(data)        (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_pif_tx15_iem_sel(data)         (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_get_pif_tx15_ck7x_lag(data)    ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_get_pif_tx15_emph(data)        ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_get_pif_tx15_env2i(data)       ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_get_pif_tx15_epicml(data)      ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_get_pif_tx15_rten(data)        ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_get_pif_tx15_testen(data)      ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_get_pif_tx15_ndrv(data)        ((0x00030000&(data))>>16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_get_pif_tx15_rp(data)          ((0x00003000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_get_pif_tx15_sel_test(data)    ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_get_pif_tx15_iem_sel(data)     (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65                               0x18000E04
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_reg_addr                       "0xB8000E04"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_reg                            0xB8000E04
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_inst_addr                      "0x003F"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_ck7x_lag_shift        (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_emph_shift            (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_env2i_shift           (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_epicml_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_rten_shift            (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_testen_shift          (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_ndrv_shift            (16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_rp_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_sel_test_shift        (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_iem_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_ck7x_lag_mask         (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_emph_mask             (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_env2i_mask            (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_epicml_mask           (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_rten_mask             (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_testen_mask           (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_ndrv_mask             (0x00030000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_rp_mask               (0x00003000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_sel_test_mask         (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_iem_sel_mask          (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_ck7x_lag(data)        (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_emph(data)            (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_env2i(data)           (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_epicml(data)          (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_rten(data)            (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_testen(data)          (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_ndrv(data)            (0x00030000&((data)<<16))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_rp(data)              (0x00003000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_sel_test(data)        (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_pif_tx16_iem_sel(data)         (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_get_pif_tx16_ck7x_lag(data)    ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_get_pif_tx16_emph(data)        ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_get_pif_tx16_env2i(data)       ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_get_pif_tx16_epicml(data)      ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_get_pif_tx16_rten(data)        ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_get_pif_tx16_testen(data)      ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_get_pif_tx16_ndrv(data)        ((0x00030000&(data))>>16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_get_pif_tx16_rp(data)          ((0x00003000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_get_pif_tx16_sel_test(data)    ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_65_get_pif_tx16_iem_sel(data)     (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69                               0x18000E14
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_reg_addr                       "0xB8000E14"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_reg                            0xB8000E14
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_inst_addr                      "0x0040"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_ck7x_lag_shift        (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_emph_shift            (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_env2i_shift           (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_epicml_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_rten_shift            (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_testen_shift          (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_ndrv_shift            (16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_rp_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_sel_test_shift        (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_iem_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_ck7x_lag_mask         (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_emph_mask             (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_env2i_mask            (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_epicml_mask           (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_rten_mask             (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_testen_mask           (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_ndrv_mask             (0x00030000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_rp_mask               (0x00003000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_sel_test_mask         (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_iem_sel_mask          (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_ck7x_lag(data)        (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_emph(data)            (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_env2i(data)           (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_epicml(data)          (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_rten(data)            (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_testen(data)          (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_ndrv(data)            (0x00030000&((data)<<16))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_rp(data)              (0x00003000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_sel_test(data)        (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_pif_tx17_iem_sel(data)         (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_get_pif_tx17_ck7x_lag(data)    ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_get_pif_tx17_emph(data)        ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_get_pif_tx17_env2i(data)       ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_get_pif_tx17_epicml(data)      ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_get_pif_tx17_rten(data)        ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_get_pif_tx17_testen(data)      ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_get_pif_tx17_ndrv(data)        ((0x00030000&(data))>>16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_get_pif_tx17_rp(data)          ((0x00003000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_get_pif_tx17_sel_test(data)    ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_69_get_pif_tx17_iem_sel(data)     (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73                               0x18000E24
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_reg_addr                       "0xB8000E24"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_reg                            0xB8000E24
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_inst_addr                      "0x0041"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_ck7x_lag_shift        (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_emph_shift            (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_env2i_shift           (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_epicml_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_rten_shift            (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_testen_shift          (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_ndrv_shift            (16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_rp_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_sel_test_shift        (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_iem_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_ck7x_lag_mask         (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_emph_mask             (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_env2i_mask            (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_epicml_mask           (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_rten_mask             (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_testen_mask           (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_ndrv_mask             (0x00030000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_rp_mask               (0x00003000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_sel_test_mask         (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_iem_sel_mask          (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_ck7x_lag(data)        (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_emph(data)            (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_env2i(data)           (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_epicml(data)          (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_rten(data)            (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_testen(data)          (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_ndrv(data)            (0x00030000&((data)<<16))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_rp(data)              (0x00003000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_sel_test(data)        (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_pif_tx18_iem_sel(data)         (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_get_pif_tx18_ck7x_lag(data)    ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_get_pif_tx18_emph(data)        ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_get_pif_tx18_env2i(data)       ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_get_pif_tx18_epicml(data)      ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_get_pif_tx18_rten(data)        ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_get_pif_tx18_testen(data)      ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_get_pif_tx18_ndrv(data)        ((0x00030000&(data))>>16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_get_pif_tx18_rp(data)          ((0x00003000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_get_pif_tx18_sel_test(data)    ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_73_get_pif_tx18_iem_sel(data)     (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77                               0x18000E34
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_reg_addr                       "0xB8000E34"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_reg                            0xB8000E34
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_inst_addr                      "0x0042"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_ck7x_lag_shift        (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_emph_shift            (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_env2i_shift           (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_epicml_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_rten_shift            (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_testen_shift          (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_ndrv_shift            (16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_rp_shift              (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_sel_test_shift        (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_iem_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_ck7x_lag_mask         (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_emph_mask             (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_env2i_mask            (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_epicml_mask           (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_rten_mask             (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_testen_mask           (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_ndrv_mask             (0x00030000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_rp_mask               (0x00003000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_sel_test_mask         (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_iem_sel_mask          (0x0000003F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_ck7x_lag(data)        (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_emph(data)            (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_env2i(data)           (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_epicml(data)          (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_rten(data)            (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_testen(data)          (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_ndrv(data)            (0x00030000&((data)<<16))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_rp(data)              (0x00003000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_sel_test(data)        (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_pif_tx19_iem_sel(data)         (0x0000003F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_get_pif_tx19_ck7x_lag(data)    ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_get_pif_tx19_emph(data)        ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_get_pif_tx19_env2i(data)       ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_get_pif_tx19_epicml(data)      ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_get_pif_tx19_rten(data)        ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_get_pif_tx19_testen(data)      ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_get_pif_tx19_ndrv(data)        ((0x00030000&(data))>>16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_get_pif_tx19_rp(data)          ((0x00003000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_get_pif_tx19_sel_test(data)    ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_77_get_pif_tx19_iem_sel(data)     (0x0000003F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81                               0x18000E44
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_reg_addr                       "0xB8000E44"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_reg                            0xB8000E44
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_inst_addr                      "0x0043"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_ck7x_lag_shift        (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_emph_shift            (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_env2i_shift           (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_epicml_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_rten_shift            (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_testen_shift          (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_sel_test_shift        (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_ttl_str_shift         (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_iem_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_ck7x_lag_mask         (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_emph_mask             (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_env2i_mask            (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_epicml_mask           (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_rten_mask             (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_testen_mask           (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_sel_test_mask         (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_ttl_str_mask          (0x00000040)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_iem_sel_mask          (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_ck7x_lag(data)        (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_emph(data)            (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_env2i(data)           (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_epicml(data)          (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_rten(data)            (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_testen(data)          (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_sel_test(data)        (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_ttl_str(data)         (0x00000040&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_pif_tx20_iem_sel(data)         (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_get_pif_tx20_ck7x_lag(data)    ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_get_pif_tx20_emph(data)        ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_get_pif_tx20_env2i(data)       ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_get_pif_tx20_epicml(data)      ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_get_pif_tx20_rten(data)        ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_get_pif_tx20_testen(data)      ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_get_pif_tx20_sel_test(data)    ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_get_pif_tx20_ttl_str(data)     ((0x00000040&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_81_get_pif_tx20_iem_sel(data)     (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85                               0x18000E54
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_reg_addr                       "0xB8000E54"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_reg                            0xB8000E54
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_inst_addr                      "0x0044"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_ck7x_lag_shift        (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_emph_shift            (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_env2i_shift           (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_epicml_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_rten_shift            (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_testen_shift          (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_sel_test_shift        (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_ttl_str_shift         (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_iem_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_ck7x_lag_mask         (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_emph_mask             (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_env2i_mask            (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_epicml_mask           (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_rten_mask             (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_testen_mask           (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_sel_test_mask         (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_ttl_str_mask          (0x00000040)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_iem_sel_mask          (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_ck7x_lag(data)        (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_emph(data)            (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_env2i(data)           (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_epicml(data)          (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_rten(data)            (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_testen(data)          (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_sel_test(data)        (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_ttl_str(data)         (0x00000040&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_pif_tx21_iem_sel(data)         (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_get_pif_tx21_ck7x_lag(data)    ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_get_pif_tx21_emph(data)        ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_get_pif_tx21_env2i(data)       ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_get_pif_tx21_epicml(data)      ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_get_pif_tx21_rten(data)        ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_get_pif_tx21_testen(data)      ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_get_pif_tx21_sel_test(data)    ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_get_pif_tx21_ttl_str(data)     ((0x00000040&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_85_get_pif_tx21_iem_sel(data)     (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89                               0x18000E64
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_reg_addr                       "0xB8000E64"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_reg                            0xB8000E64
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_inst_addr                      "0x0045"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_ck7x_lag_shift        (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_emph_shift            (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_env2i_shift           (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_epicml_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_rten_shift            (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_testen_shift          (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_sel_test_shift        (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_ttl_str_shift         (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_iem_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_ck7x_lag_mask         (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_emph_mask             (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_env2i_mask            (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_epicml_mask           (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_rten_mask             (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_testen_mask           (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_sel_test_mask         (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_ttl_str_mask          (0x00000040)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_iem_sel_mask          (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_ck7x_lag(data)        (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_emph(data)            (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_env2i(data)           (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_epicml(data)          (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_rten(data)            (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_testen(data)          (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_sel_test(data)        (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_ttl_str(data)         (0x00000040&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_pif_tx22_iem_sel(data)         (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_get_pif_tx22_ck7x_lag(data)    ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_get_pif_tx22_emph(data)        ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_get_pif_tx22_env2i(data)       ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_get_pif_tx22_epicml(data)      ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_get_pif_tx22_rten(data)        ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_get_pif_tx22_testen(data)      ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_get_pif_tx22_sel_test(data)    ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_get_pif_tx22_ttl_str(data)     ((0x00000040&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_89_get_pif_tx22_iem_sel(data)     (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93                               0x18000E74
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_reg_addr                       "0xB8000E74"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_reg                            0xB8000E74
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_inst_addr                      "0x0046"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_ck7x_lag_shift        (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_emph_shift            (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_env2i_shift           (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_epicml_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_rten_shift            (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_testen_shift          (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_sel_test_shift        (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_ttl_str_shift         (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_iem_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_ck7x_lag_mask         (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_emph_mask             (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_env2i_mask            (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_epicml_mask           (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_rten_mask             (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_testen_mask           (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_sel_test_mask         (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_ttl_str_mask          (0x00000040)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_iem_sel_mask          (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_ck7x_lag(data)        (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_emph(data)            (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_env2i(data)           (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_epicml(data)          (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_rten(data)            (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_testen(data)          (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_sel_test(data)        (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_ttl_str(data)         (0x00000040&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_pif_tx23_iem_sel(data)         (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_get_pif_tx23_ck7x_lag(data)    ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_get_pif_tx23_emph(data)        ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_get_pif_tx23_env2i(data)       ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_get_pif_tx23_epicml(data)      ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_get_pif_tx23_rten(data)        ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_get_pif_tx23_testen(data)      ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_get_pif_tx23_sel_test(data)    ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_get_pif_tx23_ttl_str(data)     ((0x00000040&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_93_get_pif_tx23_iem_sel(data)     (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97                               0x18000E84
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_reg_addr                       "0xB8000E84"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_reg                            0xB8000E84
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_inst_addr                      "0x0047"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_ck7x_lag_shift        (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_emph_shift            (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_env2i_shift           (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_epicml_shift          (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_rten_shift            (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_testen_shift          (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_sel_test_shift        (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_ttl_str_shift         (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_iem_sel_shift         (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_ck7x_lag_mask         (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_emph_mask             (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_env2i_mask            (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_epicml_mask           (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_rten_mask             (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_testen_mask           (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_sel_test_mask         (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_ttl_str_mask          (0x00000040)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_iem_sel_mask          (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_ck7x_lag(data)        (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_emph(data)            (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_env2i(data)           (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_epicml(data)          (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_rten(data)            (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_testen(data)          (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_sel_test(data)        (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_ttl_str(data)         (0x00000040&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_pif_tx24_iem_sel(data)         (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_get_pif_tx24_ck7x_lag(data)    ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_get_pif_tx24_emph(data)        ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_get_pif_tx24_env2i(data)       ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_get_pif_tx24_epicml(data)      ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_get_pif_tx24_rten(data)        ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_get_pif_tx24_testen(data)      ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_get_pif_tx24_sel_test(data)    ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_get_pif_tx24_ttl_str(data)     ((0x00000040&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_97_get_pif_tx24_iem_sel(data)     (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101                              0x18000E94
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_reg_addr                      "0xB8000E94"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_reg                           0xB8000E94
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_inst_addr                     "0x0048"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_reg(data)                 (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_reg                       (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_ck7x_lag_shift       (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_emph_shift           (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_env2i_shift          (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_epicml_shift         (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_rten_shift           (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_testen_shift         (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_sel_test_shift       (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_ttl_str_shift        (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_iem_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_ck7x_lag_mask        (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_emph_mask            (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_env2i_mask           (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_epicml_mask          (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_rten_mask            (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_testen_mask          (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_sel_test_mask        (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_ttl_str_mask         (0x00000040)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_iem_sel_mask         (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_ck7x_lag(data)       (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_emph(data)           (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_env2i(data)          (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_epicml(data)         (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_rten(data)           (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_testen(data)         (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_sel_test(data)       (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_ttl_str(data)        (0x00000040&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_pif_tx25_iem_sel(data)        (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_get_pif_tx25_ck7x_lag(data)   ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_get_pif_tx25_emph(data)       ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_get_pif_tx25_env2i(data)      ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_get_pif_tx25_epicml(data)     ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_get_pif_tx25_rten(data)       ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_get_pif_tx25_testen(data)     ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_get_pif_tx25_sel_test(data)   ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_get_pif_tx25_ttl_str(data)    ((0x00000040&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_101_get_pif_tx25_iem_sel(data)    (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105                              0x18000EA4
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_reg_addr                      "0xB8000EA4"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_reg                           0xB8000EA4
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_inst_addr                     "0x0049"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_reg(data)                 (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_reg                       (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_ck7x_lag_shift       (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_emph_shift           (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_env2i_shift          (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_epicml_shift         (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_rten_shift           (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_testen_shift         (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_sel_test_shift       (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_ttl_str_shift        (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_iem_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_ck7x_lag_mask        (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_emph_mask            (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_env2i_mask           (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_epicml_mask          (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_rten_mask            (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_testen_mask          (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_sel_test_mask        (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_ttl_str_mask         (0x00000040)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_iem_sel_mask         (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_ck7x_lag(data)       (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_emph(data)           (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_env2i(data)          (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_epicml(data)         (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_rten(data)           (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_testen(data)         (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_sel_test(data)       (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_ttl_str(data)        (0x00000040&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_pif_tx26_iem_sel(data)        (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_get_pif_tx26_ck7x_lag(data)   ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_get_pif_tx26_emph(data)       ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_get_pif_tx26_env2i(data)      ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_get_pif_tx26_epicml(data)     ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_get_pif_tx26_rten(data)       ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_get_pif_tx26_testen(data)     ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_get_pif_tx26_sel_test(data)   ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_get_pif_tx26_ttl_str(data)    ((0x00000040&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_105_get_pif_tx26_iem_sel(data)    (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109                              0x18000EB4
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_reg_addr                      "0xB8000EB4"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_reg                           0xB8000EB4
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_inst_addr                     "0x004A"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_reg(data)                 (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_reg                       (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_ck7x_lag_shift       (31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_emph_shift           (30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_env2i_shift          (29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_epicml_shift         (28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_rten_shift           (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_testen_shift         (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_sel_test_shift       (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_ttl_str_shift        (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_iem_sel_shift        (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_ck7x_lag_mask        (0x80000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_emph_mask            (0x40000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_env2i_mask           (0x20000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_epicml_mask          (0x10000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_rten_mask            (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_testen_mask          (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_sel_test_mask        (0x00000300)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_ttl_str_mask         (0x00000040)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_iem_sel_mask         (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_ck7x_lag(data)       (0x80000000&((data)<<31))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_emph(data)           (0x40000000&((data)<<30))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_env2i(data)          (0x20000000&((data)<<29))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_epicml(data)         (0x10000000&((data)<<28))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_rten(data)           (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_testen(data)         (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_sel_test(data)       (0x00000300&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_ttl_str(data)        (0x00000040&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_pif_tx27_iem_sel(data)        (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_get_pif_tx27_ck7x_lag(data)   ((0x80000000&(data))>>31)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_get_pif_tx27_emph(data)       ((0x40000000&(data))>>30)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_get_pif_tx27_env2i(data)      ((0x20000000&(data))>>29)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_get_pif_tx27_epicml(data)     ((0x10000000&(data))>>28)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_get_pif_tx27_rten(data)       ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_get_pif_tx27_testen(data)     ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_get_pif_tx27_sel_test(data)   ((0x00000300&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_get_pif_tx27_ttl_str(data)    ((0x00000040&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_109_get_pif_tx27_iem_sel(data)    (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28                               0x18000CC0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_reg_addr                       "0xB8000CC0"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_reg                            0xB8000CC0
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_inst_addr                      "0x004B"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx27_pow_shift             (27)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx26_pow_shift             (26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx25_pow_shift             (25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx24_pow_shift             (24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx23_pow_shift             (23)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx22_pow_shift             (22)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx21_pow_shift             (21)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx20_pow_shift             (20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx19_pow_shift             (19)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx18_pow_shift             (18)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx17_pow_shift             (17)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx16_pow_shift             (16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx15_pow_shift             (15)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx14_pow_shift             (14)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx13_pow_shift             (13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx12_pow_shift             (12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx11_pow_shift             (11)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx10_pow_shift             (10)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx9_pow_shift              (9)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx8_pow_shift              (8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx7_pow_shift              (7)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx6_pow_shift              (6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx5_pow_shift              (5)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx4_pow_shift              (4)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx3_pow_shift              (3)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx2_pow_shift              (2)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx1_pow_shift              (1)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx0_pow_shift              (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx27_pow_mask              (0x08000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx26_pow_mask              (0x04000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx25_pow_mask              (0x02000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx24_pow_mask              (0x01000000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx23_pow_mask              (0x00800000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx22_pow_mask              (0x00400000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx21_pow_mask              (0x00200000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx20_pow_mask              (0x00100000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx19_pow_mask              (0x00080000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx18_pow_mask              (0x00040000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx17_pow_mask              (0x00020000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx16_pow_mask              (0x00010000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx15_pow_mask              (0x00008000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx14_pow_mask              (0x00004000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx13_pow_mask              (0x00002000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx12_pow_mask              (0x00001000)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx11_pow_mask              (0x00000800)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx10_pow_mask              (0x00000400)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx9_pow_mask               (0x00000200)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx8_pow_mask               (0x00000100)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx7_pow_mask               (0x00000080)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx6_pow_mask               (0x00000040)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx5_pow_mask               (0x00000020)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx4_pow_mask               (0x00000010)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx3_pow_mask               (0x00000008)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx2_pow_mask               (0x00000004)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx1_pow_mask               (0x00000002)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx0_pow_mask               (0x00000001)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx27_pow(data)             (0x08000000&((data)<<27))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx26_pow(data)             (0x04000000&((data)<<26))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx25_pow(data)             (0x02000000&((data)<<25))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx24_pow(data)             (0x01000000&((data)<<24))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx23_pow(data)             (0x00800000&((data)<<23))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx22_pow(data)             (0x00400000&((data)<<22))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx21_pow(data)             (0x00200000&((data)<<21))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx20_pow(data)             (0x00100000&((data)<<20))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx19_pow(data)             (0x00080000&((data)<<19))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx18_pow(data)             (0x00040000&((data)<<18))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx17_pow(data)             (0x00020000&((data)<<17))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx16_pow(data)             (0x00010000&((data)<<16))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx15_pow(data)             (0x00008000&((data)<<15))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx14_pow(data)             (0x00004000&((data)<<14))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx13_pow(data)             (0x00002000&((data)<<13))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx12_pow(data)             (0x00001000&((data)<<12))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx11_pow(data)             (0x00000800&((data)<<11))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx10_pow(data)             (0x00000400&((data)<<10))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx9_pow(data)              (0x00000200&((data)<<9))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx8_pow(data)              (0x00000100&((data)<<8))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx7_pow(data)              (0x00000080&((data)<<7))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx6_pow(data)              (0x00000040&((data)<<6))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx5_pow(data)              (0x00000020&((data)<<5))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx4_pow(data)              (0x00000010&((data)<<4))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx3_pow(data)              (0x00000008&((data)<<3))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx2_pow(data)              (0x00000004&((data)<<2))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx1_pow(data)              (0x00000002&((data)<<1))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_pif_tx0_pow(data)              (0x00000001&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx27_pow(data)         ((0x08000000&(data))>>27)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx26_pow(data)         ((0x04000000&(data))>>26)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx25_pow(data)         ((0x02000000&(data))>>25)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx24_pow(data)         ((0x01000000&(data))>>24)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx23_pow(data)         ((0x00800000&(data))>>23)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx22_pow(data)         ((0x00400000&(data))>>22)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx21_pow(data)         ((0x00200000&(data))>>21)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx20_pow(data)         ((0x00100000&(data))>>20)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx19_pow(data)         ((0x00080000&(data))>>19)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx18_pow(data)         ((0x00040000&(data))>>18)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx17_pow(data)         ((0x00020000&(data))>>17)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx16_pow(data)         ((0x00010000&(data))>>16)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx15_pow(data)         ((0x00008000&(data))>>15)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx14_pow(data)         ((0x00004000&(data))>>14)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx13_pow(data)         ((0x00002000&(data))>>13)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx12_pow(data)         ((0x00001000&(data))>>12)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx11_pow(data)         ((0x00000800&(data))>>11)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx10_pow(data)         ((0x00000400&(data))>>10)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx9_pow(data)          ((0x00000200&(data))>>9)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx8_pow(data)          ((0x00000100&(data))>>8)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx7_pow(data)          ((0x00000080&(data))>>7)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx6_pow(data)          ((0x00000040&(data))>>6)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx5_pow(data)          ((0x00000020&(data))>>5)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx4_pow(data)          ((0x00000010&(data))>>4)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx3_pow(data)          ((0x00000008&(data))>>3)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx2_pow(data)          ((0x00000004&(data))>>2)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx1_pow(data)          ((0x00000002&(data))>>1)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_get_pif_tx0_pow(data)          (0x00000001&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_34                               0x18000D08
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_34_reg_addr                       "0xB8000D08"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_34_reg                            0xB8000D08
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_34_inst_addr                      "0x004C"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_34_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_34_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_34_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_34_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_34_pif_tx0_dummy_shift            (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_34_pif_tx0_dummy_mask             (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_34_pif_tx0_dummy(data)            (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_34_get_pif_tx0_dummy(data)        (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_38                               0x18000D18
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_38_reg_addr                       "0xB8000D18"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_38_reg                            0xB8000D18
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_38_inst_addr                      "0x004D"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_38_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_38_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_38_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_38_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_38_pif_tx1_dummy_shift            (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_38_pif_tx1_dummy_mask             (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_38_pif_tx1_dummy(data)            (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_38_get_pif_tx1_dummy(data)        (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_42                               0x18000D28
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_42_reg_addr                       "0xB8000D28"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_42_reg                            0xB8000D28
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_42_inst_addr                      "0x004E"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_42_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_42_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_42_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_42_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_42_pif_tx2_dummy_shift            (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_42_pif_tx2_dummy_mask             (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_42_pif_tx2_dummy(data)            (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_42_get_pif_tx2_dummy(data)        (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_46                               0x18000D38
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_46_reg_addr                       "0xB8000D38"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_46_reg                            0xB8000D38
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_46_inst_addr                      "0x004F"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_46_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_46_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_46_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_46_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_46_pif_tx3_dummy_shift            (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_46_pif_tx3_dummy_mask             (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_46_pif_tx3_dummy(data)            (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_46_get_pif_tx3_dummy(data)        (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_50                               0x18000D48
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_50_reg_addr                       "0xB8000D48"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_50_reg                            0xB8000D48
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_50_inst_addr                      "0x0050"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_50_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_50_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_50_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_50_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_50_pif_tx4_dummy_shift            (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_50_pif_tx4_dummy_mask             (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_50_pif_tx4_dummy(data)            (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_50_get_pif_tx4_dummy(data)        (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_54                               0x18000D58
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_54_reg_addr                       "0xB8000D58"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_54_reg                            0xB8000D58
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_54_inst_addr                      "0x0051"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_54_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_54_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_54_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_54_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_54_pif_tx5_dummy_shift            (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_54_pif_tx5_dummy_mask             (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_54_pif_tx5_dummy(data)            (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_54_get_pif_tx5_dummy(data)        (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_58                               0x18000D68
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_58_reg_addr                       "0xB8000D68"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_58_reg                            0xB8000D68
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_58_inst_addr                      "0x0052"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_58_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_58_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_58_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_58_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_58_pif_tx6_dummy_shift            (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_58_pif_tx6_dummy_mask             (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_58_pif_tx6_dummy(data)            (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_58_get_pif_tx6_dummy(data)        (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_62                               0x18000D78
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_62_reg_addr                       "0xB8000D78"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_62_reg                            0xB8000D78
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_62_inst_addr                      "0x0053"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_62_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_62_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_62_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_62_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_62_pif_tx7_dummy_shift            (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_62_pif_tx7_dummy_mask             (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_62_pif_tx7_dummy(data)            (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_62_get_pif_tx7_dummy(data)        (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_66                               0x18000D88
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_66_reg_addr                       "0xB8000D88"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_66_reg                            0xB8000D88
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_66_inst_addr                      "0x0054"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_66_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_66_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_66_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_66_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_66_pif_tx8_dummy_shift            (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_66_pif_tx8_dummy_mask             (0x00000FFF)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_66_pif_tx8_dummy(data)            (0x00000FFF&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_66_get_pif_tx8_dummy(data)        (0x00000FFF&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_70                               0x18000D98
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_70_reg_addr                       "0xB8000D98"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_70_reg                            0xB8000D98
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_70_inst_addr                      "0x0055"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_70_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_70_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_70_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_70_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_70_pif_tx9_dummy_shift            (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_70_pif_tx9_dummy_mask             (0x00000FFF)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_70_pif_tx9_dummy(data)            (0x00000FFF&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_70_get_pif_tx9_dummy(data)        (0x00000FFF&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_74                               0x18000DA8
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_74_reg_addr                       "0xB8000DA8"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_74_reg                            0xB8000DA8
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_74_inst_addr                      "0x0056"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_74_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_74_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_74_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_74_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_74_pif_tx10_dummy_shift           (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_74_pif_tx10_dummy_mask            (0x00000FFF)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_74_pif_tx10_dummy(data)           (0x00000FFF&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_74_get_pif_tx10_dummy(data)       (0x00000FFF&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_78                               0x18000DB8
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_78_reg_addr                       "0xB8000DB8"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_78_reg                            0xB8000DB8
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_78_inst_addr                      "0x0057"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_78_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_78_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_78_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_78_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_78_pif_tx11_dummy_shift           (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_78_pif_tx11_dummy_mask            (0x00000FFF)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_78_pif_tx11_dummy(data)           (0x00000FFF&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_78_get_pif_tx11_dummy(data)       (0x00000FFF&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_82                               0x18000DC8
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_82_reg_addr                       "0xB8000DC8"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_82_reg                            0xB8000DC8
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_82_inst_addr                      "0x0058"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_82_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_82_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_82_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_82_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_82_pif_tx12_dummy_shift           (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_82_pif_tx12_dummy_mask            (0x00000FFF)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_82_pif_tx12_dummy(data)           (0x00000FFF&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_82_get_pif_tx12_dummy(data)       (0x00000FFF&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_86                               0x18000DD8
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_86_reg_addr                       "0xB8000DD8"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_86_reg                            0xB8000DD8
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_86_inst_addr                      "0x0059"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_86_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_86_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_86_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_86_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_86_pif_tx13_dummy_shift           (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_86_pif_tx13_dummy_mask            (0x00000FFF)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_86_pif_tx13_dummy(data)           (0x00000FFF&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_86_get_pif_tx13_dummy(data)       (0x00000FFF&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_90                               0x18000DE8
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_90_reg_addr                       "0xB8000DE8"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_90_reg                            0xB8000DE8
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_90_inst_addr                      "0x005A"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_90_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_90_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_90_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_90_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_90_pif_tx14_dummy_shift           (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_90_pif_tx14_dummy_mask            (0x00000FFF)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_90_pif_tx14_dummy(data)           (0x00000FFF&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_90_get_pif_tx14_dummy(data)       (0x00000FFF&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_94                               0x18000DF8
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_94_reg_addr                       "0xB8000DF8"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_94_reg                            0xB8000DF8
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_94_inst_addr                      "0x005B"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_94_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_94_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_94_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_94_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_94_pif_tx15_dummy_shift           (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_94_pif_tx15_dummy_mask            (0x00000FFF)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_94_pif_tx15_dummy(data)           (0x00000FFF&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_94_get_pif_tx15_dummy(data)       (0x00000FFF&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_98                               0x18000E08
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_98_reg_addr                       "0xB8000E08"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_98_reg                            0xB8000E08
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_98_inst_addr                      "0x005C"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_98_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_98_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_98_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_98_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_98_pif_tx16_dummy_shift           (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_98_pif_tx16_dummy_mask            (0x00000FFF)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_98_pif_tx16_dummy(data)           (0x00000FFF&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_98_get_pif_tx16_dummy(data)       (0x00000FFF&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_102                              0x18000E18
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_102_reg_addr                      "0xB8000E18"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_102_reg                           0xB8000E18
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_102_inst_addr                     "0x005D"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_102_reg(data)                 (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_102_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_102_reg                       (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_102_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_102_pif_tx17_dummy_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_102_pif_tx17_dummy_mask           (0x00000FFF)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_102_pif_tx17_dummy(data)          (0x00000FFF&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_102_get_pif_tx17_dummy(data)      (0x00000FFF&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_106                              0x18000E28
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_106_reg_addr                      "0xB8000E28"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_106_reg                           0xB8000E28
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_106_inst_addr                     "0x005E"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_106_reg(data)                 (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_106_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_106_reg                       (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_106_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_106_pif_tx18_dummy_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_106_pif_tx18_dummy_mask           (0x00000FFF)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_106_pif_tx18_dummy(data)          (0x00000FFF&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_106_get_pif_tx18_dummy(data)      (0x00000FFF&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_110                              0x18000E38
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_110_reg_addr                      "0xB8000E38"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_110_reg                           0xB8000E38
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_110_inst_addr                     "0x005F"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_110_reg(data)                 (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_110_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_110_reg                       (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_110_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_110_pif_tx19_dummy_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_110_pif_tx19_dummy_mask           (0x00000FFF)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_110_pif_tx19_dummy(data)          (0x00000FFF&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_110_get_pif_tx19_dummy(data)      (0x00000FFF&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_114                              0x18000E48
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_114_reg_addr                      "0xB8000E48"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_114_reg                           0xB8000E48
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_114_inst_addr                     "0x0060"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_114_reg(data)                 (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_114_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_114_reg                       (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_114_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_114_pif_tx20_dummy_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_114_pif_tx20_dummy_mask           (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_114_pif_tx20_dummy(data)          (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_114_get_pif_tx20_dummy(data)      (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_118                              0x18000E58
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_118_reg_addr                      "0xB8000E58"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_118_reg                           0xB8000E58
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_118_inst_addr                     "0x0061"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_118_reg(data)                 (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_118_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_118_reg                       (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_118_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_118_pif_tx21_dummy_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_118_pif_tx21_dummy_mask           (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_118_pif_tx21_dummy(data)          (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_118_get_pif_tx21_dummy(data)      (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_122                              0x18000E68
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_122_reg_addr                      "0xB8000E68"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_122_reg                           0xB8000E68
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_122_inst_addr                     "0x0062"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_122_reg(data)                 (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_122_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_122_reg                       (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_122_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_122_pif_tx22_dummy_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_122_pif_tx22_dummy_mask           (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_122_pif_tx22_dummy(data)          (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_122_get_pif_tx22_dummy(data)      (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_126                              0x18000E78
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_126_reg_addr                      "0xB8000E78"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_126_reg                           0xB8000E78
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_126_inst_addr                     "0x0063"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_126_reg(data)                 (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_126_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_126_reg                       (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_126_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_126_pif_tx23_dummy_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_126_pif_tx23_dummy_mask           (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_126_pif_tx23_dummy(data)          (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_126_get_pif_tx23_dummy(data)      (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_130                              0x18000E88
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_130_reg_addr                      "0xB8000E88"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_130_reg                           0xB8000E88
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_130_inst_addr                     "0x0064"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_130_reg(data)                 (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_130_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_130_reg                       (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_130_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_130_pif_tx24_dummy_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_130_pif_tx24_dummy_mask           (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_130_pif_tx24_dummy(data)          (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_130_get_pif_tx24_dummy(data)      (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_134                              0x18000E98
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_134_reg_addr                      "0xB8000E98"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_134_reg                           0xB8000E98
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_134_inst_addr                     "0x0065"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_134_reg(data)                 (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_134_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_134_reg                       (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_134_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_134_pif_tx25_dummy_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_134_pif_tx25_dummy_mask           (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_134_pif_tx25_dummy(data)          (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_134_get_pif_tx25_dummy(data)      (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_138                              0x18000EA8
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_138_reg_addr                      "0xB8000EA8"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_138_reg                           0xB8000EA8
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_138_inst_addr                     "0x0066"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_138_reg(data)                 (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_138_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_138_reg                       (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_138_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_138_pif_tx26_dummy_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_138_pif_tx26_dummy_mask           (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_138_pif_tx26_dummy(data)          (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_138_get_pif_tx26_dummy(data)      (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_142                              0x18000EB8
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_142_reg_addr                      "0xB8000EB8"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_142_reg                           0xB8000EB8
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_142_inst_addr                     "0x0067"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_142_reg(data)                 (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_142_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_142_reg                       (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_142_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_142_pif_tx27_dummy_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_142_pif_tx27_dummy_mask           (0x0000000F)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_142_pif_tx27_dummy(data)          (0x0000000F&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_142_get_pif_tx27_dummy(data)      (0x0000000F&(data))

#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_95                               0x18000DFC
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_95_reg_addr                       "0xB8000DFC"
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_95_reg                            0xB8000DFC
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_95_inst_addr                      "0x0068"
#define  set_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_95_reg(data)                  (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_95_reg)=data)
#define  get_PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_95_reg                        (*((volatile unsigned int*)PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_95_reg))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_95_plt_vterm_ready_shift          (0)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_95_plt_vterm_ready_mask           (0x00000001)
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_95_plt_vterm_ready(data)          (0x00000001&(data))
#define  PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_95_get_plt_vterm_ready(data)      (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======PINMUX_LVDSPHY register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx27p_ps:4;
        RBus_UInt32  pif_tx27n_ps:4;
        RBus_UInt32  pif_tx26p_ps:4;
        RBus_UInt32  pif_tx26n_ps:4;
        RBus_UInt32  pif_tx25p_ps:4;
        RBus_UInt32  pif_tx25n_ps:4;
        RBus_UInt32  pif_tx24p_ps:4;
        RBus_UInt32  pif_tx24n_ps:4;
    };
}pinmux_lvdsphy_pif_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx23p_ps:4;
        RBus_UInt32  pif_tx23n_ps:4;
        RBus_UInt32  pif_tx22p_ps:4;
        RBus_UInt32  pif_tx22n_ps:4;
        RBus_UInt32  pif_tx21p_ps:4;
        RBus_UInt32  pif_tx21n_ps:4;
        RBus_UInt32  pif_tx20p_ps:4;
        RBus_UInt32  pif_tx20n_ps:4;
    };
}pinmux_lvdsphy_pif_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx19p_ps:4;
        RBus_UInt32  pif_tx19n_ps:4;
        RBus_UInt32  pif_tx18p_ps:4;
        RBus_UInt32  pif_tx18n_ps:4;
        RBus_UInt32  pif_tx17p_ps:4;
        RBus_UInt32  pif_tx17n_ps:4;
        RBus_UInt32  pif_tx16p_ps:4;
        RBus_UInt32  pif_tx16n_ps:4;
    };
}pinmux_lvdsphy_pif_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx15p_ps:4;
        RBus_UInt32  pif_tx15n_ps:4;
        RBus_UInt32  pif_tx14p_ps:4;
        RBus_UInt32  pif_tx14n_ps:4;
        RBus_UInt32  pif_tx13p_ps:4;
        RBus_UInt32  pif_tx13n_ps:4;
        RBus_UInt32  pif_tx12p_ps:4;
        RBus_UInt32  pif_tx12n_ps:4;
    };
}pinmux_lvdsphy_pif_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx11p_ps:4;
        RBus_UInt32  pif_tx11n_ps:4;
        RBus_UInt32  pif_tx10p_ps:4;
        RBus_UInt32  pif_tx10n_ps:4;
        RBus_UInt32  pif_tx9p_ps:4;
        RBus_UInt32  pif_tx9n_ps:4;
        RBus_UInt32  pif_tx8p_ps:4;
        RBus_UInt32  pif_tx8n_ps:4;
    };
}pinmux_lvdsphy_pif_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx7p_ps:4;
        RBus_UInt32  pif_tx7n_ps:4;
        RBus_UInt32  pif_tx6p_ps:4;
        RBus_UInt32  pif_tx6n_ps:4;
        RBus_UInt32  pif_tx5p_ps:4;
        RBus_UInt32  pif_tx5n_ps:4;
        RBus_UInt32  pif_tx4p_ps:4;
        RBus_UInt32  pif_tx4n_ps:4;
    };
}pinmux_lvdsphy_pif_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx3p_ps:4;
        RBus_UInt32  pif_tx3n_ps:4;
        RBus_UInt32  pif_tx2p_ps:4;
        RBus_UInt32  pif_tx2n_ps:4;
        RBus_UInt32  pif_tx1p_ps:4;
        RBus_UInt32  pif_tx1n_ps:4;
        RBus_UInt32  pif_tx0p_ps:4;
        RBus_UInt32  pif_tx0n_ps:4;
    };
}pinmux_lvdsphy_pif_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vby1_osd_htpd_sel:2;
        RBus_UInt32  vby1_osd_lock_sel:2;
        RBus_UInt32  isp_sdlock_sel:2;
        RBus_UInt32  boe_bcc_in_sel:2;
        RBus_UInt32  vby1_htpd_sel:2;
        RBus_UInt32  vby1_lock_sel:2;
        RBus_UInt32  epi_lock_sel:2;
    };
}pinmux_lvdsphy_pin_mux_lvds_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_a1_pi_phsel:12;
        RBus_UInt32  pif_a2_pi_phsel:12;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_a_pi_freq:2;
        RBus_UInt32  pif_a1_sel_2xi:1;
        RBus_UInt32  pif_a2_sel_2xi:1;
        RBus_UInt32  pif_sbg:2;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_ab_pi_phsel:12;
        RBus_UInt32  pif_ab_freq:2;
        RBus_UInt32  pif_ab_sel_2xi:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  pif_h_cmu_sel_lv_vldo:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_h_cmu_bw_set:2;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_b1_pi_phsel:12;
        RBus_UInt32  pif_b2_pi_phsel:12;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_b_pi_freq:2;
        RBus_UInt32  pif_b1_sel_2xi:1;
        RBus_UInt32  pif_b2_sel_2xi:1;
        RBus_UInt32  res2:2;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_cmu_big_kvco:1;
        RBus_UInt32  pif_cmu_ckpixel_inv:1;
        RBus_UInt32  pif_cmu_ck_ref_inv:1;
        RBus_UInt32  res1:8;
        RBus_UInt32  cmu_bpsdivm:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_cmu_sel_cp_i:3;
        RBus_UInt32  pif_cmu_sel_sc1:3;
        RBus_UInt32  pif_cmu_sel_sc2:2;
        RBus_UInt32  pif_cmu_sel_sr:3;
        RBus_UInt32  pif_cmu_sel_vldo:2;
        RBus_UInt32  pif_cmu_a_pi_bypass:1;
        RBus_UInt32  pif_cmu_b_pi_bypass:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_cmu_wdrst:1;
        RBus_UInt32  pif_cmu_wdset:1;
        RBus_UInt32  cmu_wdo:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  pif_h_cmu_macpll_divm:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_h_cmu_mode:3;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pif_sel_tx_i:4;
        RBus_UInt32  pif_sel_vcm:5;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_en_lv_ldo:1;
        RBus_UInt32  pif_en_txl_ldo:1;
        RBus_UInt32  res3:13;
        RBus_UInt32  pif_boe_vcmsel:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pow_pif:1;
        RBus_UInt32  res1:31;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lvds_dummy:16;
        RBus_UInt32  res1:5;
        RBus_UInt32  pif_h_cmu_rstb:1;
        RBus_UInt32  pif_h_cmu_pow:1;
        RBus_UInt32  res2:9;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_2_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_h_cmu_test_en:1;
        RBus_UInt32  pif_h_cmu_lvdscmpi_divm:6;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_h_cmu_macpll_cko_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_h_cmu_ck20xp_inv:1;
        RBus_UInt32  pif_h_cmu_ck1xp_inv:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_h_cmu_tst_div:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_h_cmu_prescalerdiv_ls:3;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_h_cmu_prescalerdiv_hs:2;
        RBus_UInt32  res6:5;
        RBus_UInt32  pif_h_cmu_epi_div_sel:3;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_3_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  pif_h_cmu_dummy:10;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_2_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  txpll_ckin_div_n:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  txpll_prediv_bypass:1;
        RBus_UInt32  res3:5;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_2_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx0n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx0p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx0_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx0_ckphs:1;
        RBus_UInt32  pif_tx0_sr:1;
        RBus_UInt32  pif_tx0_term:4;
        RBus_UInt32  res5:4;
        RBus_UInt32  pif_tx0_idrv_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx1n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx1p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx1_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx1_ckphs:1;
        RBus_UInt32  pif_tx1_sr:1;
        RBus_UInt32  pif_tx1_term:4;
        RBus_UInt32  res5:4;
        RBus_UInt32  pif_tx1_idrv_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx2n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx2p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx2_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx2_ckphs:1;
        RBus_UInt32  pif_tx2_sr:1;
        RBus_UInt32  pif_tx2_term:4;
        RBus_UInt32  res5:4;
        RBus_UInt32  pif_tx2_idrv_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx3n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx3p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx3_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx3_ckphs:1;
        RBus_UInt32  pif_tx3_sr:1;
        RBus_UInt32  pif_tx3_term:4;
        RBus_UInt32  res5:4;
        RBus_UInt32  pif_tx3_idrv_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx4n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx4p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx4_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx4_ckphs:1;
        RBus_UInt32  pif_tx4_sr:1;
        RBus_UInt32  pif_tx4_term:4;
        RBus_UInt32  res5:4;
        RBus_UInt32  pif_tx4_idrv_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx5n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx5p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx5_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx5_ckphs:1;
        RBus_UInt32  pif_tx5_sr:1;
        RBus_UInt32  pif_tx5_term:4;
        RBus_UInt32  res5:4;
        RBus_UInt32  pif_tx5_idrv_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx6n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx6p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx6_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx6_ckphs:1;
        RBus_UInt32  pif_tx6_sr:1;
        RBus_UInt32  pif_tx6_term:4;
        RBus_UInt32  res5:4;
        RBus_UInt32  pif_tx6_idrv_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx7n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx7p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx7_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx7_ckphs:1;
        RBus_UInt32  pif_tx7_sr:1;
        RBus_UInt32  pif_tx7_term:4;
        RBus_UInt32  res5:4;
        RBus_UInt32  pif_tx7_idrv_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx8n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx8p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx8_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx8_ckphs:1;
        RBus_UInt32  pif_tx8_sr:1;
        RBus_UInt32  pif_tx8_term:4;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx8_idrv_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx9n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx9p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx9_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx9_ckphs:1;
        RBus_UInt32  pif_tx9_sr:1;
        RBus_UInt32  pif_tx9_term:4;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx9_idrv_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx10n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx10p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx10_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx10_ckphs:1;
        RBus_UInt32  pif_tx10_sr:1;
        RBus_UInt32  pif_tx10_term:4;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx10_idrv_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx11n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx11p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx11_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx11_ckphs:1;
        RBus_UInt32  pif_tx11_sr:1;
        RBus_UInt32  pif_tx11_term:4;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx11_idrv_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx12n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx12p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx12_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx12_ckphs:1;
        RBus_UInt32  pif_tx12_sr:1;
        RBus_UInt32  pif_tx12_term:4;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx12_idrv_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx13n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx13p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx13_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx13_ckphs:1;
        RBus_UInt32  pif_tx13_sr:1;
        RBus_UInt32  pif_tx13_term:4;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx13_idrv_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_52_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx14n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx14p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx14_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx14_ckphs:1;
        RBus_UInt32  pif_tx14_sr:1;
        RBus_UInt32  pif_tx14_term:4;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx14_idrv_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_56_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx15n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx15p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx15_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx15_ckphs:1;
        RBus_UInt32  pif_tx15_sr:1;
        RBus_UInt32  pif_tx15_term:4;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx15_idrv_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx16n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx16p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx16_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx16_ckphs:1;
        RBus_UInt32  pif_tx16_sr:1;
        RBus_UInt32  pif_tx16_term:4;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx16_idrv_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx17n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx17p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx17_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx17_ckphs:1;
        RBus_UInt32  pif_tx17_sr:1;
        RBus_UInt32  pif_tx17_term:4;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx17_idrv_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx18n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx18p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx18_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx18_ckphs:1;
        RBus_UInt32  pif_tx18_sr:1;
        RBus_UInt32  pif_tx18_term:4;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx18_idrv_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_72_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx19n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx19p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx19_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx19_ckphs:1;
        RBus_UInt32  pif_tx19_sr:1;
        RBus_UInt32  pif_tx19_term:4;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx19_idrv_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_76_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx20n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx20p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx20_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx20_ckphs:1;
        RBus_UInt32  pif_tx20_sr:1;
        RBus_UInt32  pif_tx20_term:4;
        RBus_UInt32  res5:4;
        RBus_UInt32  pif_tx20_idrv_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx21n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx21p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx21_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx21_ckphs:1;
        RBus_UInt32  pif_tx21_sr:1;
        RBus_UInt32  pif_tx21_term:4;
        RBus_UInt32  res5:4;
        RBus_UInt32  pif_tx21_idrv_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx22n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx22p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx22_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx22_ckphs:1;
        RBus_UInt32  pif_tx22_sr:1;
        RBus_UInt32  pif_tx22_term:4;
        RBus_UInt32  res5:4;
        RBus_UInt32  pif_tx22_idrv_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx23n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx23p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx23_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx23_ckphs:1;
        RBus_UInt32  pif_tx23_sr:1;
        RBus_UInt32  pif_tx23_term:4;
        RBus_UInt32  res5:4;
        RBus_UInt32  pif_tx23_idrv_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_92_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx24n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx24p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx24_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx24_ckphs:1;
        RBus_UInt32  pif_tx24_sr:1;
        RBus_UInt32  pif_tx24_term:4;
        RBus_UInt32  res5:4;
        RBus_UInt32  pif_tx24_idrv_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_96_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx25n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx25p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx25_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx25_ckphs:1;
        RBus_UInt32  pif_tx25_sr:1;
        RBus_UInt32  pif_tx25_term:4;
        RBus_UInt32  res5:4;
        RBus_UInt32  pif_tx25_idrv_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_100_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx26n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx26p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx26_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx26_ckphs:1;
        RBus_UInt32  pif_tx26_sr:1;
        RBus_UInt32  pif_tx26_term:4;
        RBus_UInt32  res5:4;
        RBus_UInt32  pif_tx26_idrv_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_104_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx27n_mode:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx27p_mode:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx27_vcmsel:1;
        RBus_UInt32  res4:6;
        RBus_UInt32  pif_tx27_ckphs:1;
        RBus_UInt32  pif_tx27_sr:1;
        RBus_UInt32  pif_tx27_term:4;
        RBus_UInt32  res5:4;
        RBus_UInt32  pif_tx27_idrv_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_108_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx0_ck7x_lag:1;
        RBus_UInt32  pif_tx0_emph:1;
        RBus_UInt32  pif_tx0_env2i:1;
        RBus_UInt32  pif_tx0_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx0_rten:1;
        RBus_UInt32  pif_tx0_testen:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  pif_tx0_sel_test:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_tx0_ttl_str:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx0_iem_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx1_ck7x_lag:1;
        RBus_UInt32  pif_tx1_emph:1;
        RBus_UInt32  pif_tx1_env2i:1;
        RBus_UInt32  pif_tx1_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx1_rten:1;
        RBus_UInt32  pif_tx1_testen:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  pif_tx1_sel_test:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_tx1_ttl_str:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx1_iem_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx2_ck7x_lag:1;
        RBus_UInt32  pif_tx2_emph:1;
        RBus_UInt32  pif_tx2_env2i:1;
        RBus_UInt32  pif_tx2_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx2_rten:1;
        RBus_UInt32  pif_tx2_testen:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  pif_tx2_sel_test:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_tx2_ttl_str:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx2_iem_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx3_ck7x_lag:1;
        RBus_UInt32  pif_tx3_emph:1;
        RBus_UInt32  pif_tx3_env2i:1;
        RBus_UInt32  pif_tx3_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx3_rten:1;
        RBus_UInt32  pif_tx3_testen:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  pif_tx3_sel_test:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_tx3_ttl_str:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx3_iem_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx4_ck7x_lag:1;
        RBus_UInt32  pif_tx4_emph:1;
        RBus_UInt32  pif_tx4_env2i:1;
        RBus_UInt32  pif_tx4_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx4_rten:1;
        RBus_UInt32  pif_tx4_testen:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  pif_tx4_sel_test:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_tx4_ttl_str:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx4_iem_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx5_ck7x_lag:1;
        RBus_UInt32  pif_tx5_emph:1;
        RBus_UInt32  pif_tx5_env2i:1;
        RBus_UInt32  pif_tx5_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx5_rten:1;
        RBus_UInt32  pif_tx5_testen:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  pif_tx5_sel_test:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_tx5_ttl_str:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx5_iem_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx6_ck7x_lag:1;
        RBus_UInt32  pif_tx6_emph:1;
        RBus_UInt32  pif_tx6_env2i:1;
        RBus_UInt32  pif_tx6_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx6_rten:1;
        RBus_UInt32  pif_tx6_testen:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  pif_tx6_sel_test:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_tx6_ttl_str:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx6_iem_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx7_ck7x_lag:1;
        RBus_UInt32  pif_tx7_emph:1;
        RBus_UInt32  pif_tx7_env2i:1;
        RBus_UInt32  pif_tx7_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx7_rten:1;
        RBus_UInt32  pif_tx7_testen:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  pif_tx7_sel_test:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_tx7_ttl_str:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx7_iem_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx8_ck7x_lag:1;
        RBus_UInt32  pif_tx8_emph:1;
        RBus_UInt32  pif_tx8_env2i:1;
        RBus_UInt32  pif_tx8_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx8_rten:1;
        RBus_UInt32  pif_tx8_testen:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  pif_tx8_ndrv:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx8_rp:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx8_sel_test:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx8_iem_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx9_ck7x_lag:1;
        RBus_UInt32  pif_tx9_emph:1;
        RBus_UInt32  pif_tx9_env2i:1;
        RBus_UInt32  pif_tx9_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx9_rten:1;
        RBus_UInt32  pif_tx9_testen:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  pif_tx9_ndrv:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx9_rp:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx9_sel_test:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx9_iem_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_37_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx10_ck7x_lag:1;
        RBus_UInt32  pif_tx10_emph:1;
        RBus_UInt32  pif_tx10_env2i:1;
        RBus_UInt32  pif_tx10_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx10_rten:1;
        RBus_UInt32  pif_tx10_testen:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  pif_tx10_ndrv:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx10_rp:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx10_sel_test:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx10_iem_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_41_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx11_ck7x_lag:1;
        RBus_UInt32  pif_tx11_emph:1;
        RBus_UInt32  pif_tx11_env2i:1;
        RBus_UInt32  pif_tx11_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx11_rten:1;
        RBus_UInt32  pif_tx11_testen:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  pif_tx11_ndrv:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx11_rp:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx11_sel_test:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx11_iem_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx12_ck7x_lag:1;
        RBus_UInt32  pif_tx12_emph:1;
        RBus_UInt32  pif_tx12_env2i:1;
        RBus_UInt32  pif_tx12_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx12_rten:1;
        RBus_UInt32  pif_tx12_testen:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  pif_tx12_ndrv:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx12_rp:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx12_sel_test:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx12_iem_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_49_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx13_ck7x_lag:1;
        RBus_UInt32  pif_tx13_emph:1;
        RBus_UInt32  pif_tx14_env2i:1;
        RBus_UInt32  pif_tx13_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx13_rten:1;
        RBus_UInt32  pif_tx13_testen:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  pif_tx13_ndrv:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx13_rp:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx13_sel_test:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx13_iem_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_53_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx14_ck7x_lag:1;
        RBus_UInt32  pif_tx14_emph:1;
        RBus_UInt32  pif_tx13_env2i:1;
        RBus_UInt32  pif_tx14_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx14_rten:1;
        RBus_UInt32  pif_tx14_testen:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  pif_tx14_ndrv:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx14_rp:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx14_sel_test:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx14_iem_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_57_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx15_ck7x_lag:1;
        RBus_UInt32  pif_tx15_emph:1;
        RBus_UInt32  pif_tx15_env2i:1;
        RBus_UInt32  pif_tx15_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx15_rten:1;
        RBus_UInt32  pif_tx15_testen:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  pif_tx15_ndrv:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx15_rp:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx15_sel_test:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx15_iem_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_61_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx16_ck7x_lag:1;
        RBus_UInt32  pif_tx16_emph:1;
        RBus_UInt32  pif_tx16_env2i:1;
        RBus_UInt32  pif_tx16_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx16_rten:1;
        RBus_UInt32  pif_tx16_testen:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  pif_tx16_ndrv:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx16_rp:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx16_sel_test:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx16_iem_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_65_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx17_ck7x_lag:1;
        RBus_UInt32  pif_tx17_emph:1;
        RBus_UInt32  pif_tx17_env2i:1;
        RBus_UInt32  pif_tx17_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx17_rten:1;
        RBus_UInt32  pif_tx17_testen:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  pif_tx17_ndrv:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx17_rp:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx17_sel_test:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx17_iem_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_69_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx18_ck7x_lag:1;
        RBus_UInt32  pif_tx18_emph:1;
        RBus_UInt32  pif_tx18_env2i:1;
        RBus_UInt32  pif_tx18_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx18_rten:1;
        RBus_UInt32  pif_tx18_testen:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  pif_tx18_ndrv:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx18_rp:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx18_sel_test:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx18_iem_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_73_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx19_ck7x_lag:1;
        RBus_UInt32  pif_tx19_emph:1;
        RBus_UInt32  pif_tx19_env2i:1;
        RBus_UInt32  pif_tx19_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx19_rten:1;
        RBus_UInt32  pif_tx19_testen:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  pif_tx19_ndrv:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx19_rp:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx19_sel_test:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  pif_tx19_iem_sel:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_77_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx20_ck7x_lag:1;
        RBus_UInt32  pif_tx20_emph:1;
        RBus_UInt32  pif_tx20_env2i:1;
        RBus_UInt32  pif_tx20_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx20_rten:1;
        RBus_UInt32  pif_tx20_testen:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  pif_tx20_sel_test:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_tx20_ttl_str:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx20_iem_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_81_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx21_ck7x_lag:1;
        RBus_UInt32  pif_tx21_emph:1;
        RBus_UInt32  pif_tx21_env2i:1;
        RBus_UInt32  pif_tx21_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx21_rten:1;
        RBus_UInt32  pif_tx21_testen:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  pif_tx21_sel_test:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_tx21_ttl_str:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx21_iem_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_85_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx22_ck7x_lag:1;
        RBus_UInt32  pif_tx22_emph:1;
        RBus_UInt32  pif_tx22_env2i:1;
        RBus_UInt32  pif_tx22_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx22_rten:1;
        RBus_UInt32  pif_tx22_testen:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  pif_tx22_sel_test:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_tx22_ttl_str:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx22_iem_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_89_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx23_ck7x_lag:1;
        RBus_UInt32  pif_tx23_emph:1;
        RBus_UInt32  pif_tx23_env2i:1;
        RBus_UInt32  pif_tx23_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx23_rten:1;
        RBus_UInt32  pif_tx23_testen:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  pif_tx23_sel_test:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_tx23_ttl_str:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx23_iem_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_93_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx24_ck7x_lag:1;
        RBus_UInt32  pif_tx24_emph:1;
        RBus_UInt32  pif_tx24_env2i:1;
        RBus_UInt32  pif_tx24_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx24_rten:1;
        RBus_UInt32  pif_tx24_testen:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  pif_tx24_sel_test:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_tx24_ttl_str:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx24_iem_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_97_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx25_ck7x_lag:1;
        RBus_UInt32  pif_tx25_emph:1;
        RBus_UInt32  pif_tx25_env2i:1;
        RBus_UInt32  pif_tx25_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx25_rten:1;
        RBus_UInt32  pif_tx25_testen:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  pif_tx25_sel_test:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_tx25_ttl_str:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx25_iem_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_101_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx26_ck7x_lag:1;
        RBus_UInt32  pif_tx26_emph:1;
        RBus_UInt32  pif_tx26_env2i:1;
        RBus_UInt32  pif_tx26_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx26_rten:1;
        RBus_UInt32  pif_tx26_testen:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  pif_tx26_sel_test:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_tx26_ttl_str:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx26_iem_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_105_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx27_ck7x_lag:1;
        RBus_UInt32  pif_tx27_emph:1;
        RBus_UInt32  pif_tx27_env2i:1;
        RBus_UInt32  pif_tx27_epicml:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_tx27_rten:1;
        RBus_UInt32  pif_tx27_testen:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  pif_tx27_sel_test:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_tx27_ttl_str:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  pif_tx27_iem_sel:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_109_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_tx27_pow:1;
        RBus_UInt32  pif_tx26_pow:1;
        RBus_UInt32  pif_tx25_pow:1;
        RBus_UInt32  pif_tx24_pow:1;
        RBus_UInt32  pif_tx23_pow:1;
        RBus_UInt32  pif_tx22_pow:1;
        RBus_UInt32  pif_tx21_pow:1;
        RBus_UInt32  pif_tx20_pow:1;
        RBus_UInt32  pif_tx19_pow:1;
        RBus_UInt32  pif_tx18_pow:1;
        RBus_UInt32  pif_tx17_pow:1;
        RBus_UInt32  pif_tx16_pow:1;
        RBus_UInt32  pif_tx15_pow:1;
        RBus_UInt32  pif_tx14_pow:1;
        RBus_UInt32  pif_tx13_pow:1;
        RBus_UInt32  pif_tx12_pow:1;
        RBus_UInt32  pif_tx11_pow:1;
        RBus_UInt32  pif_tx10_pow:1;
        RBus_UInt32  pif_tx9_pow:1;
        RBus_UInt32  pif_tx8_pow:1;
        RBus_UInt32  pif_tx7_pow:1;
        RBus_UInt32  pif_tx6_pow:1;
        RBus_UInt32  pif_tx5_pow:1;
        RBus_UInt32  pif_tx4_pow:1;
        RBus_UInt32  pif_tx3_pow:1;
        RBus_UInt32  pif_tx2_pow:1;
        RBus_UInt32  pif_tx1_pow:1;
        RBus_UInt32  pif_tx0_pow:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pif_tx0_dummy:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pif_tx1_dummy:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pif_tx2_dummy:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_42_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pif_tx3_dummy:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_46_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pif_tx4_dummy:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pif_tx5_dummy:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pif_tx6_dummy:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pif_tx7_dummy:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_62_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  pif_tx8_dummy:12;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_66_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  pif_tx9_dummy:12;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  pif_tx10_dummy:12;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  pif_tx11_dummy:12;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  pif_tx12_dummy:12;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_82_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  pif_tx13_dummy:12;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_86_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  pif_tx14_dummy:12;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  pif_tx15_dummy:12;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  pif_tx16_dummy:12;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  pif_tx17_dummy:12;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_102_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  pif_tx18_dummy:12;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_106_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  pif_tx19_dummy:12;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_110_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pif_tx20_dummy:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_114_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pif_tx21_dummy:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_118_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pif_tx22_dummy:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_122_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pif_tx23_dummy:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_126_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pif_tx24_dummy:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_130_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pif_tx25_dummy:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_134_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pif_tx26_dummy:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_138_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pif_tx27_dummy:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_142_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  plt_vterm_ready:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_95_RBUS;

#else //apply LITTLE_ENDIAN

//======PINMUX_LVDSPHY register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx24n_ps:4;
        RBus_UInt32  pif_tx24p_ps:4;
        RBus_UInt32  pif_tx25n_ps:4;
        RBus_UInt32  pif_tx25p_ps:4;
        RBus_UInt32  pif_tx26n_ps:4;
        RBus_UInt32  pif_tx26p_ps:4;
        RBus_UInt32  pif_tx27n_ps:4;
        RBus_UInt32  pif_tx27p_ps:4;
    };
}pinmux_lvdsphy_pif_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx20n_ps:4;
        RBus_UInt32  pif_tx20p_ps:4;
        RBus_UInt32  pif_tx21n_ps:4;
        RBus_UInt32  pif_tx21p_ps:4;
        RBus_UInt32  pif_tx22n_ps:4;
        RBus_UInt32  pif_tx22p_ps:4;
        RBus_UInt32  pif_tx23n_ps:4;
        RBus_UInt32  pif_tx23p_ps:4;
    };
}pinmux_lvdsphy_pif_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx16n_ps:4;
        RBus_UInt32  pif_tx16p_ps:4;
        RBus_UInt32  pif_tx17n_ps:4;
        RBus_UInt32  pif_tx17p_ps:4;
        RBus_UInt32  pif_tx18n_ps:4;
        RBus_UInt32  pif_tx18p_ps:4;
        RBus_UInt32  pif_tx19n_ps:4;
        RBus_UInt32  pif_tx19p_ps:4;
    };
}pinmux_lvdsphy_pif_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx12n_ps:4;
        RBus_UInt32  pif_tx12p_ps:4;
        RBus_UInt32  pif_tx13n_ps:4;
        RBus_UInt32  pif_tx13p_ps:4;
        RBus_UInt32  pif_tx14n_ps:4;
        RBus_UInt32  pif_tx14p_ps:4;
        RBus_UInt32  pif_tx15n_ps:4;
        RBus_UInt32  pif_tx15p_ps:4;
    };
}pinmux_lvdsphy_pif_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx8n_ps:4;
        RBus_UInt32  pif_tx8p_ps:4;
        RBus_UInt32  pif_tx9n_ps:4;
        RBus_UInt32  pif_tx9p_ps:4;
        RBus_UInt32  pif_tx10n_ps:4;
        RBus_UInt32  pif_tx10p_ps:4;
        RBus_UInt32  pif_tx11n_ps:4;
        RBus_UInt32  pif_tx11p_ps:4;
    };
}pinmux_lvdsphy_pif_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx4n_ps:4;
        RBus_UInt32  pif_tx4p_ps:4;
        RBus_UInt32  pif_tx5n_ps:4;
        RBus_UInt32  pif_tx5p_ps:4;
        RBus_UInt32  pif_tx6n_ps:4;
        RBus_UInt32  pif_tx6p_ps:4;
        RBus_UInt32  pif_tx7n_ps:4;
        RBus_UInt32  pif_tx7p_ps:4;
    };
}pinmux_lvdsphy_pif_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx0n_ps:4;
        RBus_UInt32  pif_tx0p_ps:4;
        RBus_UInt32  pif_tx1n_ps:4;
        RBus_UInt32  pif_tx1p_ps:4;
        RBus_UInt32  pif_tx2n_ps:4;
        RBus_UInt32  pif_tx2p_ps:4;
        RBus_UInt32  pif_tx3n_ps:4;
        RBus_UInt32  pif_tx3p_ps:4;
    };
}pinmux_lvdsphy_pif_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  epi_lock_sel:2;
        RBus_UInt32  vby1_lock_sel:2;
        RBus_UInt32  vby1_htpd_sel:2;
        RBus_UInt32  boe_bcc_in_sel:2;
        RBus_UInt32  isp_sdlock_sel:2;
        RBus_UInt32  vby1_osd_lock_sel:2;
        RBus_UInt32  vby1_osd_htpd_sel:2;
        RBus_UInt32  res1:18;
    };
}pinmux_lvdsphy_pin_mux_lvds_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_sbg:2;
        RBus_UInt32  pif_a2_sel_2xi:1;
        RBus_UInt32  pif_a1_sel_2xi:1;
        RBus_UInt32  pif_a_pi_freq:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_a2_pi_phsel:12;
        RBus_UInt32  pif_a1_pi_phsel:12;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_h_cmu_bw_set:2;
        RBus_UInt32  res1:6;
        RBus_UInt32  pif_h_cmu_sel_lv_vldo:2;
        RBus_UInt32  res2:7;
        RBus_UInt32  pif_ab_sel_2xi:1;
        RBus_UInt32  pif_ab_freq:2;
        RBus_UInt32  pif_ab_pi_phsel:12;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_b2_sel_2xi:1;
        RBus_UInt32  pif_b1_sel_2xi:1;
        RBus_UInt32  pif_b_pi_freq:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  pif_b2_pi_phsel:12;
        RBus_UInt32  pif_b1_pi_phsel:12;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmu_wdo:1;
        RBus_UInt32  pif_cmu_wdset:1;
        RBus_UInt32  pif_cmu_wdrst:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_cmu_b_pi_bypass:1;
        RBus_UInt32  pif_cmu_a_pi_bypass:1;
        RBus_UInt32  pif_cmu_sel_vldo:2;
        RBus_UInt32  pif_cmu_sel_sr:3;
        RBus_UInt32  pif_cmu_sel_sc2:2;
        RBus_UInt32  pif_cmu_sel_sc1:3;
        RBus_UInt32  pif_cmu_sel_cp_i:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  cmu_bpsdivm:1;
        RBus_UInt32  res3:8;
        RBus_UInt32  pif_cmu_ck_ref_inv:1;
        RBus_UInt32  pif_cmu_ckpixel_inv:1;
        RBus_UInt32  pif_cmu_big_kvco:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_h_cmu_mode:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  pif_h_cmu_macpll_divm:4;
        RBus_UInt32  res2:24;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_boe_vcmsel:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  pif_en_txl_ldo:1;
        RBus_UInt32  pif_en_lv_ldo:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_sel_vcm:5;
        RBus_UInt32  pif_sel_tx_i:4;
        RBus_UInt32  res3:6;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  pow_pif:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  pif_h_cmu_pow:1;
        RBus_UInt32  pif_h_cmu_rstb:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  lvds_dummy:16;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_2_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_h_cmu_epi_div_sel:3;
        RBus_UInt32  res1:5;
        RBus_UInt32  pif_h_cmu_prescalerdiv_hs:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  pif_h_cmu_prescalerdiv_ls:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  pif_h_cmu_tst_div:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_h_cmu_ck1xp_inv:1;
        RBus_UInt32  pif_h_cmu_ck20xp_inv:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  pif_h_cmu_macpll_cko_inv:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  pif_h_cmu_lvdscmpi_divm:6;
        RBus_UInt32  pif_h_cmu_test_en:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_3_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_h_cmu_dummy:10;
        RBus_UInt32  res1:22;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_2_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  txpll_prediv_bypass:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  txpll_ckin_div_n:6;
        RBus_UInt32  res3:18;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_2_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx0_idrv_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_tx0_term:4;
        RBus_UInt32  pif_tx0_sr:1;
        RBus_UInt32  pif_tx0_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx0_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx0p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx0n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx1_idrv_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_tx1_term:4;
        RBus_UInt32  pif_tx1_sr:1;
        RBus_UInt32  pif_tx1_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx1_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx1p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx1n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx2_idrv_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_tx2_term:4;
        RBus_UInt32  pif_tx2_sr:1;
        RBus_UInt32  pif_tx2_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx2_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx2p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx2n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx3_idrv_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_tx3_term:4;
        RBus_UInt32  pif_tx3_sr:1;
        RBus_UInt32  pif_tx3_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx3_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx3p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx3n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx4_idrv_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_tx4_term:4;
        RBus_UInt32  pif_tx4_sr:1;
        RBus_UInt32  pif_tx4_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx4_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx4p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx4n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx5_idrv_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_tx5_term:4;
        RBus_UInt32  pif_tx5_sr:1;
        RBus_UInt32  pif_tx5_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx5_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx5p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx5n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx6_idrv_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_tx6_term:4;
        RBus_UInt32  pif_tx6_sr:1;
        RBus_UInt32  pif_tx6_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx6_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx6p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx6n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx7_idrv_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_tx7_term:4;
        RBus_UInt32  pif_tx7_sr:1;
        RBus_UInt32  pif_tx7_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx7_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx7p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx7n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx8_idrv_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx8_term:4;
        RBus_UInt32  pif_tx8_sr:1;
        RBus_UInt32  pif_tx8_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx8_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx8p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx8n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx9_idrv_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx9_term:4;
        RBus_UInt32  pif_tx9_sr:1;
        RBus_UInt32  pif_tx9_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx9_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx9p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx9n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx10_idrv_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx10_term:4;
        RBus_UInt32  pif_tx10_sr:1;
        RBus_UInt32  pif_tx10_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx10_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx10p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx10n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx11_idrv_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx11_term:4;
        RBus_UInt32  pif_tx11_sr:1;
        RBus_UInt32  pif_tx11_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx11_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx11p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx11n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx12_idrv_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx12_term:4;
        RBus_UInt32  pif_tx12_sr:1;
        RBus_UInt32  pif_tx12_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx12_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx12p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx12n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx13_idrv_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx13_term:4;
        RBus_UInt32  pif_tx13_sr:1;
        RBus_UInt32  pif_tx13_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx13_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx13p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx13n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_52_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx14_idrv_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx14_term:4;
        RBus_UInt32  pif_tx14_sr:1;
        RBus_UInt32  pif_tx14_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx14_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx14p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx14n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_56_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx15_idrv_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx15_term:4;
        RBus_UInt32  pif_tx15_sr:1;
        RBus_UInt32  pif_tx15_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx15_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx15p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx15n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx16_idrv_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx16_term:4;
        RBus_UInt32  pif_tx16_sr:1;
        RBus_UInt32  pif_tx16_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx16_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx16p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx16n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx17_idrv_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx17_term:4;
        RBus_UInt32  pif_tx17_sr:1;
        RBus_UInt32  pif_tx17_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx17_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx17p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx17n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx18_idrv_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx18_term:4;
        RBus_UInt32  pif_tx18_sr:1;
        RBus_UInt32  pif_tx18_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx18_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx18p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx18n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_72_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx19_idrv_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx19_term:4;
        RBus_UInt32  pif_tx19_sr:1;
        RBus_UInt32  pif_tx19_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx19_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx19p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx19n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_76_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx20_idrv_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_tx20_term:4;
        RBus_UInt32  pif_tx20_sr:1;
        RBus_UInt32  pif_tx20_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx20_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx20p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx20n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx21_idrv_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_tx21_term:4;
        RBus_UInt32  pif_tx21_sr:1;
        RBus_UInt32  pif_tx21_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx21_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx21p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx21n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx22_idrv_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_tx22_term:4;
        RBus_UInt32  pif_tx22_sr:1;
        RBus_UInt32  pif_tx22_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx22_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx22p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx22n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx23_idrv_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_tx23_term:4;
        RBus_UInt32  pif_tx23_sr:1;
        RBus_UInt32  pif_tx23_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx23_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx23p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx23n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_92_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx24_idrv_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_tx24_term:4;
        RBus_UInt32  pif_tx24_sr:1;
        RBus_UInt32  pif_tx24_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx24_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx24p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx24n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_96_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx25_idrv_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_tx25_term:4;
        RBus_UInt32  pif_tx25_sr:1;
        RBus_UInt32  pif_tx25_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx25_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx25p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx25n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_100_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx26_idrv_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_tx26_term:4;
        RBus_UInt32  pif_tx26_sr:1;
        RBus_UInt32  pif_tx26_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx26_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx26p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx26n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_104_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx27_idrv_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pif_tx27_term:4;
        RBus_UInt32  pif_tx27_sr:1;
        RBus_UInt32  pif_tx27_ckphs:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  pif_tx27_vcmsel:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_tx27p_mode:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx27n_mode:3;
        RBus_UInt32  res5:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_108_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx0_iem_sel:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx0_ttl_str:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx0_sel_test:2;
        RBus_UInt32  res3:15;
        RBus_UInt32  pif_tx0_testen:1;
        RBus_UInt32  pif_tx0_rten:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx0_epicml:1;
        RBus_UInt32  pif_tx0_env2i:1;
        RBus_UInt32  pif_tx0_emph:1;
        RBus_UInt32  pif_tx0_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx1_iem_sel:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx1_ttl_str:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx1_sel_test:2;
        RBus_UInt32  res3:15;
        RBus_UInt32  pif_tx1_testen:1;
        RBus_UInt32  pif_tx1_rten:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx1_epicml:1;
        RBus_UInt32  pif_tx1_env2i:1;
        RBus_UInt32  pif_tx1_emph:1;
        RBus_UInt32  pif_tx1_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx2_iem_sel:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx2_ttl_str:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx2_sel_test:2;
        RBus_UInt32  res3:15;
        RBus_UInt32  pif_tx2_testen:1;
        RBus_UInt32  pif_tx2_rten:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx2_epicml:1;
        RBus_UInt32  pif_tx2_env2i:1;
        RBus_UInt32  pif_tx2_emph:1;
        RBus_UInt32  pif_tx2_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx3_iem_sel:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx3_ttl_str:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx3_sel_test:2;
        RBus_UInt32  res3:15;
        RBus_UInt32  pif_tx3_testen:1;
        RBus_UInt32  pif_tx3_rten:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx3_epicml:1;
        RBus_UInt32  pif_tx3_env2i:1;
        RBus_UInt32  pif_tx3_emph:1;
        RBus_UInt32  pif_tx3_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx4_iem_sel:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx4_ttl_str:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx4_sel_test:2;
        RBus_UInt32  res3:15;
        RBus_UInt32  pif_tx4_testen:1;
        RBus_UInt32  pif_tx4_rten:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx4_epicml:1;
        RBus_UInt32  pif_tx4_env2i:1;
        RBus_UInt32  pif_tx4_emph:1;
        RBus_UInt32  pif_tx4_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx5_iem_sel:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx5_ttl_str:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx5_sel_test:2;
        RBus_UInt32  res3:15;
        RBus_UInt32  pif_tx5_testen:1;
        RBus_UInt32  pif_tx5_rten:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx5_epicml:1;
        RBus_UInt32  pif_tx5_env2i:1;
        RBus_UInt32  pif_tx5_emph:1;
        RBus_UInt32  pif_tx5_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx6_iem_sel:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx6_ttl_str:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx6_sel_test:2;
        RBus_UInt32  res3:15;
        RBus_UInt32  pif_tx6_testen:1;
        RBus_UInt32  pif_tx6_rten:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx6_epicml:1;
        RBus_UInt32  pif_tx6_env2i:1;
        RBus_UInt32  pif_tx6_emph:1;
        RBus_UInt32  pif_tx6_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx7_iem_sel:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx7_ttl_str:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx7_sel_test:2;
        RBus_UInt32  res3:15;
        RBus_UInt32  pif_tx7_testen:1;
        RBus_UInt32  pif_tx7_rten:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx7_epicml:1;
        RBus_UInt32  pif_tx7_env2i:1;
        RBus_UInt32  pif_tx7_emph:1;
        RBus_UInt32  pif_tx7_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx8_iem_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx8_sel_test:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  pif_tx8_rp:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx8_ndrv:2;
        RBus_UInt32  res4:7;
        RBus_UInt32  pif_tx8_testen:1;
        RBus_UInt32  pif_tx8_rten:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  pif_tx8_epicml:1;
        RBus_UInt32  pif_tx8_env2i:1;
        RBus_UInt32  pif_tx8_emph:1;
        RBus_UInt32  pif_tx8_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx9_iem_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx9_sel_test:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  pif_tx9_rp:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx9_ndrv:2;
        RBus_UInt32  res4:7;
        RBus_UInt32  pif_tx9_testen:1;
        RBus_UInt32  pif_tx9_rten:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  pif_tx9_epicml:1;
        RBus_UInt32  pif_tx9_env2i:1;
        RBus_UInt32  pif_tx9_emph:1;
        RBus_UInt32  pif_tx9_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_37_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx10_iem_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx10_sel_test:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  pif_tx10_rp:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx10_ndrv:2;
        RBus_UInt32  res4:7;
        RBus_UInt32  pif_tx10_testen:1;
        RBus_UInt32  pif_tx10_rten:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  pif_tx10_epicml:1;
        RBus_UInt32  pif_tx10_env2i:1;
        RBus_UInt32  pif_tx10_emph:1;
        RBus_UInt32  pif_tx10_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_41_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx11_iem_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx11_sel_test:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  pif_tx11_rp:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx11_ndrv:2;
        RBus_UInt32  res4:7;
        RBus_UInt32  pif_tx11_testen:1;
        RBus_UInt32  pif_tx11_rten:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  pif_tx11_epicml:1;
        RBus_UInt32  pif_tx11_env2i:1;
        RBus_UInt32  pif_tx11_emph:1;
        RBus_UInt32  pif_tx11_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx12_iem_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx12_sel_test:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  pif_tx12_rp:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx12_ndrv:2;
        RBus_UInt32  res4:7;
        RBus_UInt32  pif_tx12_testen:1;
        RBus_UInt32  pif_tx12_rten:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  pif_tx12_epicml:1;
        RBus_UInt32  pif_tx12_env2i:1;
        RBus_UInt32  pif_tx12_emph:1;
        RBus_UInt32  pif_tx12_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_49_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx13_iem_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx13_sel_test:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  pif_tx13_rp:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx13_ndrv:2;
        RBus_UInt32  res4:7;
        RBus_UInt32  pif_tx13_testen:1;
        RBus_UInt32  pif_tx13_rten:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  pif_tx13_epicml:1;
        RBus_UInt32  pif_tx14_env2i:1;
        RBus_UInt32  pif_tx13_emph:1;
        RBus_UInt32  pif_tx13_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_53_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx14_iem_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx14_sel_test:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  pif_tx14_rp:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx14_ndrv:2;
        RBus_UInt32  res4:7;
        RBus_UInt32  pif_tx14_testen:1;
        RBus_UInt32  pif_tx14_rten:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  pif_tx14_epicml:1;
        RBus_UInt32  pif_tx13_env2i:1;
        RBus_UInt32  pif_tx14_emph:1;
        RBus_UInt32  pif_tx14_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_57_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx15_iem_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx15_sel_test:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  pif_tx15_rp:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx15_ndrv:2;
        RBus_UInt32  res4:7;
        RBus_UInt32  pif_tx15_testen:1;
        RBus_UInt32  pif_tx15_rten:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  pif_tx15_epicml:1;
        RBus_UInt32  pif_tx15_env2i:1;
        RBus_UInt32  pif_tx15_emph:1;
        RBus_UInt32  pif_tx15_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_61_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx16_iem_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx16_sel_test:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  pif_tx16_rp:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx16_ndrv:2;
        RBus_UInt32  res4:7;
        RBus_UInt32  pif_tx16_testen:1;
        RBus_UInt32  pif_tx16_rten:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  pif_tx16_epicml:1;
        RBus_UInt32  pif_tx16_env2i:1;
        RBus_UInt32  pif_tx16_emph:1;
        RBus_UInt32  pif_tx16_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_65_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx17_iem_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx17_sel_test:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  pif_tx17_rp:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx17_ndrv:2;
        RBus_UInt32  res4:7;
        RBus_UInt32  pif_tx17_testen:1;
        RBus_UInt32  pif_tx17_rten:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  pif_tx17_epicml:1;
        RBus_UInt32  pif_tx17_env2i:1;
        RBus_UInt32  pif_tx17_emph:1;
        RBus_UInt32  pif_tx17_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_69_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx18_iem_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx18_sel_test:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  pif_tx18_rp:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx18_ndrv:2;
        RBus_UInt32  res4:7;
        RBus_UInt32  pif_tx18_testen:1;
        RBus_UInt32  pif_tx18_rten:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  pif_tx18_epicml:1;
        RBus_UInt32  pif_tx18_env2i:1;
        RBus_UInt32  pif_tx18_emph:1;
        RBus_UInt32  pif_tx18_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_73_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx19_iem_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx19_sel_test:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  pif_tx19_rp:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  pif_tx19_ndrv:2;
        RBus_UInt32  res4:7;
        RBus_UInt32  pif_tx19_testen:1;
        RBus_UInt32  pif_tx19_rten:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  pif_tx19_epicml:1;
        RBus_UInt32  pif_tx19_env2i:1;
        RBus_UInt32  pif_tx19_emph:1;
        RBus_UInt32  pif_tx19_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_77_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx20_iem_sel:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx20_ttl_str:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx20_sel_test:2;
        RBus_UInt32  res3:15;
        RBus_UInt32  pif_tx20_testen:1;
        RBus_UInt32  pif_tx20_rten:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx20_epicml:1;
        RBus_UInt32  pif_tx20_env2i:1;
        RBus_UInt32  pif_tx20_emph:1;
        RBus_UInt32  pif_tx20_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_81_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx21_iem_sel:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx21_ttl_str:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx21_sel_test:2;
        RBus_UInt32  res3:15;
        RBus_UInt32  pif_tx21_testen:1;
        RBus_UInt32  pif_tx21_rten:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx21_epicml:1;
        RBus_UInt32  pif_tx21_env2i:1;
        RBus_UInt32  pif_tx21_emph:1;
        RBus_UInt32  pif_tx21_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_85_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx22_iem_sel:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx22_ttl_str:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx22_sel_test:2;
        RBus_UInt32  res3:15;
        RBus_UInt32  pif_tx22_testen:1;
        RBus_UInt32  pif_tx22_rten:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx22_epicml:1;
        RBus_UInt32  pif_tx22_env2i:1;
        RBus_UInt32  pif_tx22_emph:1;
        RBus_UInt32  pif_tx22_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_89_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx23_iem_sel:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx23_ttl_str:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx23_sel_test:2;
        RBus_UInt32  res3:15;
        RBus_UInt32  pif_tx23_testen:1;
        RBus_UInt32  pif_tx23_rten:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx23_epicml:1;
        RBus_UInt32  pif_tx23_env2i:1;
        RBus_UInt32  pif_tx23_emph:1;
        RBus_UInt32  pif_tx23_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_93_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx24_iem_sel:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx24_ttl_str:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx24_sel_test:2;
        RBus_UInt32  res3:15;
        RBus_UInt32  pif_tx24_testen:1;
        RBus_UInt32  pif_tx24_rten:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx24_epicml:1;
        RBus_UInt32  pif_tx24_env2i:1;
        RBus_UInt32  pif_tx24_emph:1;
        RBus_UInt32  pif_tx24_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_97_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx25_iem_sel:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx25_ttl_str:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx25_sel_test:2;
        RBus_UInt32  res3:15;
        RBus_UInt32  pif_tx25_testen:1;
        RBus_UInt32  pif_tx25_rten:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx25_epicml:1;
        RBus_UInt32  pif_tx25_env2i:1;
        RBus_UInt32  pif_tx25_emph:1;
        RBus_UInt32  pif_tx25_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_101_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx26_iem_sel:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx26_ttl_str:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx26_sel_test:2;
        RBus_UInt32  res3:15;
        RBus_UInt32  pif_tx26_testen:1;
        RBus_UInt32  pif_tx26_rten:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx26_epicml:1;
        RBus_UInt32  pif_tx26_env2i:1;
        RBus_UInt32  pif_tx26_emph:1;
        RBus_UInt32  pif_tx26_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_105_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx27_iem_sel:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  pif_tx27_ttl_str:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_tx27_sel_test:2;
        RBus_UInt32  res3:15;
        RBus_UInt32  pif_tx27_testen:1;
        RBus_UInt32  pif_tx27_rten:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pif_tx27_epicml:1;
        RBus_UInt32  pif_tx27_env2i:1;
        RBus_UInt32  pif_tx27_emph:1;
        RBus_UInt32  pif_tx27_ck7x_lag:1;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_109_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx0_pow:1;
        RBus_UInt32  pif_tx1_pow:1;
        RBus_UInt32  pif_tx2_pow:1;
        RBus_UInt32  pif_tx3_pow:1;
        RBus_UInt32  pif_tx4_pow:1;
        RBus_UInt32  pif_tx5_pow:1;
        RBus_UInt32  pif_tx6_pow:1;
        RBus_UInt32  pif_tx7_pow:1;
        RBus_UInt32  pif_tx8_pow:1;
        RBus_UInt32  pif_tx9_pow:1;
        RBus_UInt32  pif_tx10_pow:1;
        RBus_UInt32  pif_tx11_pow:1;
        RBus_UInt32  pif_tx12_pow:1;
        RBus_UInt32  pif_tx13_pow:1;
        RBus_UInt32  pif_tx14_pow:1;
        RBus_UInt32  pif_tx15_pow:1;
        RBus_UInt32  pif_tx16_pow:1;
        RBus_UInt32  pif_tx17_pow:1;
        RBus_UInt32  pif_tx18_pow:1;
        RBus_UInt32  pif_tx19_pow:1;
        RBus_UInt32  pif_tx20_pow:1;
        RBus_UInt32  pif_tx21_pow:1;
        RBus_UInt32  pif_tx22_pow:1;
        RBus_UInt32  pif_tx23_pow:1;
        RBus_UInt32  pif_tx24_pow:1;
        RBus_UInt32  pif_tx25_pow:1;
        RBus_UInt32  pif_tx26_pow:1;
        RBus_UInt32  pif_tx27_pow:1;
        RBus_UInt32  res1:4;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx0_dummy:4;
        RBus_UInt32  res1:28;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx1_dummy:4;
        RBus_UInt32  res1:28;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx2_dummy:4;
        RBus_UInt32  res1:28;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_42_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx3_dummy:4;
        RBus_UInt32  res1:28;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_46_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx4_dummy:4;
        RBus_UInt32  res1:28;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx5_dummy:4;
        RBus_UInt32  res1:28;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx6_dummy:4;
        RBus_UInt32  res1:28;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx7_dummy:4;
        RBus_UInt32  res1:28;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_62_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx8_dummy:12;
        RBus_UInt32  res1:20;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_66_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx9_dummy:12;
        RBus_UInt32  res1:20;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx10_dummy:12;
        RBus_UInt32  res1:20;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx11_dummy:12;
        RBus_UInt32  res1:20;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx12_dummy:12;
        RBus_UInt32  res1:20;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_82_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx13_dummy:12;
        RBus_UInt32  res1:20;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_86_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx14_dummy:12;
        RBus_UInt32  res1:20;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx15_dummy:12;
        RBus_UInt32  res1:20;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx16_dummy:12;
        RBus_UInt32  res1:20;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx17_dummy:12;
        RBus_UInt32  res1:20;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_102_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx18_dummy:12;
        RBus_UInt32  res1:20;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_106_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx19_dummy:12;
        RBus_UInt32  res1:20;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_110_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx20_dummy:4;
        RBus_UInt32  res1:28;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_114_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx21_dummy:4;
        RBus_UInt32  res1:28;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_118_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx22_dummy:4;
        RBus_UInt32  res1:28;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_122_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx23_dummy:4;
        RBus_UInt32  res1:28;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_126_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx24_dummy:4;
        RBus_UInt32  res1:28;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_130_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx25_dummy:4;
        RBus_UInt32  res1:28;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_134_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx26_dummy:4;
        RBus_UInt32  res1:28;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_138_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx27_dummy:4;
        RBus_UInt32  res1:28;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_142_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plt_vterm_ready:1;
        RBus_UInt32  res1:31;
    };
}pinmux_lvdsphy_lvdsepivby1_phy_ctrl_1_95_RBUS;




#endif 


#endif 
