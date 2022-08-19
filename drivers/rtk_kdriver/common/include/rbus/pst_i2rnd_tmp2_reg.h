/**
* @file Mac7p-DesignSpec-IMD_smooth_toggle
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_PST_I2RND_TMP2_REG_H_
#define _RBUS_PST_I2RND_TMP2_REG_H_

#include "rbus_types.h"



//  PST_I2RND_TMP2 Register Address
#define  PST_I2RND_TMP2_Smooth_tog_ctrl                                         0x18022200
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_reg_addr                                 "0xB8022200"
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_reg                                      0xB8022200
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_inst_addr                                "0x0000"
#define  set_PST_I2RND_TMP2_Smooth_tog_ctrl_reg(data)                            (*((volatile unsigned int*)PST_I2RND_TMP2_Smooth_tog_ctrl_reg)=data)
#define  get_PST_I2RND_TMP2_Smooth_tog_ctrl_reg                                  (*((volatile unsigned int*)PST_I2RND_TMP2_Smooth_tog_ctrl_reg))
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_ip_switch_no_eco_shift                   (31)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_dispi_vact_sel_shift                (13)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_imd_sm_to_gdma_shift                (11)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_iv2dv_sm_apply_auto_sel_shift       (4)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_imd_smooth_toggle_clk_time2switch_en_shift (3)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_imd_smooth_toggle_style_shift       (1)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_imd_smooth_toggle_apply_shift       (0)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_ip_switch_no_eco_mask                    (0x80000000)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_dispi_vact_sel_mask                 (0x00002000)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_imd_sm_to_gdma_mask                 (0x00000800)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_iv2dv_sm_apply_auto_sel_mask        (0x00000010)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_imd_smooth_toggle_clk_time2switch_en_mask (0x00000008)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_imd_smooth_toggle_style_mask        (0x00000006)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_imd_smooth_toggle_apply_mask        (0x00000001)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_ip_switch_no_eco(data)                   (0x80000000&((data)<<31))
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_dispi_vact_sel(data)                (0x00002000&((data)<<13))
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_imd_sm_to_gdma(data)                (0x00000800&((data)<<11))
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_iv2dv_sm_apply_auto_sel(data)       (0x00000010&((data)<<4))
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_imd_smooth_toggle_clk_time2switch_en(data) (0x00000008&((data)<<3))
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_imd_smooth_toggle_style(data)       (0x00000006&((data)<<1))
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_main_imd_smooth_toggle_apply(data)       (0x00000001&(data))
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_get_ip_switch_no_eco(data)               ((0x80000000&(data))>>31)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_get_main_dispi_vact_sel(data)            ((0x00002000&(data))>>13)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_get_main_imd_sm_to_gdma(data)            ((0x00000800&(data))>>11)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_get_main_iv2dv_sm_apply_auto_sel(data)   ((0x00000010&(data))>>4)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_get_main_imd_smooth_toggle_clk_time2switch_en(data) ((0x00000008&(data))>>3)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_get_main_imd_smooth_toggle_style(data)   ((0x00000006&(data))>>1)
#define  PST_I2RND_TMP2_Smooth_tog_ctrl_get_main_imd_smooth_toggle_apply(data)   (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======PST_I2RND_TMP2 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ip_switch_no_eco:1;
        RBus_UInt32  res1:17;
        RBus_UInt32  main_dispi_vact_sel:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  main_imd_sm_to_gdma:1;
        RBus_UInt32  res3:6;
        RBus_UInt32  main_iv2dv_sm_apply_auto_sel:1;
        RBus_UInt32  main_imd_smooth_toggle_clk_time2switch_en:1;
        RBus_UInt32  main_imd_smooth_toggle_style:2;
        RBus_UInt32  main_imd_smooth_toggle_apply:1;
    };
}pst_i2rnd_tmp2_smooth_tog_ctrl_RBUS;

#else //apply LITTLE_ENDIAN

//======PST_I2RND_TMP2 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_imd_smooth_toggle_apply:1;
        RBus_UInt32  main_imd_smooth_toggle_style:2;
        RBus_UInt32  main_imd_smooth_toggle_clk_time2switch_en:1;
        RBus_UInt32  main_iv2dv_sm_apply_auto_sel:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  main_imd_sm_to_gdma:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  main_dispi_vact_sel:1;
        RBus_UInt32  res3:17;
        RBus_UInt32  ip_switch_no_eco:1;
    };
}pst_i2rnd_tmp2_smooth_tog_ctrl_RBUS;




#endif 


#endif 
