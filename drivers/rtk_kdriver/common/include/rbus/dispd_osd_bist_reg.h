/**
* @file Mac7p-DesignSpec-D-Domain_GDMA_BIST_BISR_control
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_DISPD_OSD_BIST_REG_H_
#define _RBUS_DISPD_OSD_BIST_REG_H_

#include "rbus_types.h"



//  DISPD_OSD_BIST Register Address
#define  DISPD_OSD_BIST_GDMA_BIST_MODE                                          0x18029E00
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_reg_addr                                  "0xB8029E00"
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_reg                                       0xB8029E00
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_inst_addr                                 "0x0000"
#define  set_DISPD_OSD_BIST_GDMA_BIST_MODE_reg(data)                             (*((volatile unsigned int*)DISPD_OSD_BIST_GDMA_BIST_MODE_reg)=data)
#define  get_DISPD_OSD_BIST_GDMA_BIST_MODE_reg                                   (*((volatile unsigned int*)DISPD_OSD_BIST_GDMA_BIST_MODE_reg))
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_afbc_header_bist_mode_shift          (9)
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_osd_gamma1_bist_mode_shift           (8)
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_osd_gamma2_bist_mode_shift           (7)
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_sr_lb_bist_mode_shift                (5)
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_osd_rbuf_share_bist_mode_shift       (1)
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_osd_dispbuf_bist_mode_shift          (0)
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_afbc_header_bist_mode_mask           (0x00000200)
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_osd_gamma1_bist_mode_mask            (0x00000100)
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_osd_gamma2_bist_mode_mask            (0x00000080)
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_sr_lb_bist_mode_mask                 (0x00000020)
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_osd_rbuf_share_bist_mode_mask        (0x00000002)
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_osd_dispbuf_bist_mode_mask           (0x00000001)
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_afbc_header_bist_mode(data)          (0x00000200&((data)<<9))
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_osd_gamma1_bist_mode(data)           (0x00000100&((data)<<8))
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_osd_gamma2_bist_mode(data)           (0x00000080&((data)<<7))
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_sr_lb_bist_mode(data)                (0x00000020&((data)<<5))
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_osd_rbuf_share_bist_mode(data)       (0x00000002&((data)<<1))
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_gdma_osd_dispbuf_bist_mode(data)          (0x00000001&(data))
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_get_gdma_afbc_header_bist_mode(data)      ((0x00000200&(data))>>9)
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_get_gdma_osd_gamma1_bist_mode(data)       ((0x00000100&(data))>>8)
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_get_gdma_osd_gamma2_bist_mode(data)       ((0x00000080&(data))>>7)
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_get_gdma_sr_lb_bist_mode(data)            ((0x00000020&(data))>>5)
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_get_gdma_osd_rbuf_share_bist_mode(data)   ((0x00000002&(data))>>1)
#define  DISPD_OSD_BIST_GDMA_BIST_MODE_get_gdma_osd_dispbuf_bist_mode(data)      (0x00000001&(data))

#define  DISPD_OSD_BIST_GDMA_BIST_DONE                                          0x18029E04
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_reg_addr                                  "0xB8029E04"
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_reg                                       0xB8029E04
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_inst_addr                                 "0x0001"
#define  set_DISPD_OSD_BIST_GDMA_BIST_DONE_reg(data)                             (*((volatile unsigned int*)DISPD_OSD_BIST_GDMA_BIST_DONE_reg)=data)
#define  get_DISPD_OSD_BIST_GDMA_BIST_DONE_reg                                   (*((volatile unsigned int*)DISPD_OSD_BIST_GDMA_BIST_DONE_reg))
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_afbc_header_bist_done_shift          (9)
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_osd_gamma1_bist_done_shift           (8)
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_osd_gamma2_bist_done_shift           (7)
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_sr_lb_bist_done_shift                (5)
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_osd_rbuf_share_bist_done_shift       (1)
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_osd_dispbuf_bist_done_shift          (0)
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_afbc_header_bist_done_mask           (0x00000200)
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_osd_gamma1_bist_done_mask            (0x00000100)
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_osd_gamma2_bist_done_mask            (0x00000080)
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_sr_lb_bist_done_mask                 (0x00000020)
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_osd_rbuf_share_bist_done_mask        (0x00000002)
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_osd_dispbuf_bist_done_mask           (0x00000001)
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_afbc_header_bist_done(data)          (0x00000200&((data)<<9))
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_osd_gamma1_bist_done(data)           (0x00000100&((data)<<8))
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_osd_gamma2_bist_done(data)           (0x00000080&((data)<<7))
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_sr_lb_bist_done(data)                (0x00000020&((data)<<5))
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_osd_rbuf_share_bist_done(data)       (0x00000002&((data)<<1))
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_gdma_osd_dispbuf_bist_done(data)          (0x00000001&(data))
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_get_gdma_afbc_header_bist_done(data)      ((0x00000200&(data))>>9)
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_get_gdma_osd_gamma1_bist_done(data)       ((0x00000100&(data))>>8)
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_get_gdma_osd_gamma2_bist_done(data)       ((0x00000080&(data))>>7)
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_get_gdma_sr_lb_bist_done(data)            ((0x00000020&(data))>>5)
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_get_gdma_osd_rbuf_share_bist_done(data)   ((0x00000002&(data))>>1)
#define  DISPD_OSD_BIST_GDMA_BIST_DONE_get_gdma_osd_dispbuf_bist_done(data)      (0x00000001&(data))

#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP                                    0x18029E08
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_reg_addr                            "0xB8029E08"
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_reg                                 0xB8029E08
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_inst_addr                           "0x0002"
#define  set_DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_reg(data)                       (*((volatile unsigned int*)DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_reg)=data)
#define  get_DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_reg                             (*((volatile unsigned int*)DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_reg))
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_afbc_header_bist_fail_group_shift (9)
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_osd_gamma1_bist_fail_group_shift (8)
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_osd_gamma2_bist_fail_group_shift (7)
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_sr_lb_bist_fail_group_shift    (5)
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_osd_rbuf_share_bist_fail_group_shift (1)
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_osd_dispbuf_bist_fail_group_shift (0)
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_afbc_header_bist_fail_group_mask (0x00000200)
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_osd_gamma1_bist_fail_group_mask (0x00000100)
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_osd_gamma2_bist_fail_group_mask (0x00000080)
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_sr_lb_bist_fail_group_mask     (0x00000020)
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_osd_rbuf_share_bist_fail_group_mask (0x00000002)
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_osd_dispbuf_bist_fail_group_mask (0x00000001)
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_afbc_header_bist_fail_group(data) (0x00000200&((data)<<9))
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_osd_gamma1_bist_fail_group(data) (0x00000100&((data)<<8))
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_osd_gamma2_bist_fail_group(data) (0x00000080&((data)<<7))
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_sr_lb_bist_fail_group(data)    (0x00000020&((data)<<5))
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_osd_rbuf_share_bist_fail_group(data) (0x00000002&((data)<<1))
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_gdma_osd_dispbuf_bist_fail_group(data) (0x00000001&(data))
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_get_gdma_afbc_header_bist_fail_group(data) ((0x00000200&(data))>>9)
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_get_gdma_osd_gamma1_bist_fail_group(data) ((0x00000100&(data))>>8)
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_get_gdma_osd_gamma2_bist_fail_group(data) ((0x00000080&(data))>>7)
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_get_gdma_sr_lb_bist_fail_group(data) ((0x00000020&(data))>>5)
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_get_gdma_osd_rbuf_share_bist_fail_group(data) ((0x00000002&(data))>>1)
#define  DISPD_OSD_BIST_GDMA_BIST_FAIL_GROUP_get_gdma_osd_dispbuf_bist_fail_group(data) (0x00000001&(data))

#define  DISPD_OSD_BIST_GDMA_DRF_MODE                                           0x18029E0C
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_reg_addr                                   "0xB8029E0C"
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_reg                                        0xB8029E0C
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_inst_addr                                  "0x0003"
#define  set_DISPD_OSD_BIST_GDMA_DRF_MODE_reg(data)                              (*((volatile unsigned int*)DISPD_OSD_BIST_GDMA_DRF_MODE_reg)=data)
#define  get_DISPD_OSD_BIST_GDMA_DRF_MODE_reg                                    (*((volatile unsigned int*)DISPD_OSD_BIST_GDMA_DRF_MODE_reg))
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_afbc_header_drf_mode_shift            (9)
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_osd_gamma1_drf_mode_shift             (8)
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_osd_gamma2_drf_mode_shift             (7)
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_sr_lb_drf_mode_shift                  (5)
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_osd_rbuf_share_drf_mode_shift         (1)
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_osd_dispbuf_drf_mode_shift            (0)
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_afbc_header_drf_mode_mask             (0x00000200)
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_osd_gamma1_drf_mode_mask              (0x00000100)
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_osd_gamma2_drf_mode_mask              (0x00000080)
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_sr_lb_drf_mode_mask                   (0x00000020)
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_osd_rbuf_share_drf_mode_mask          (0x00000002)
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_osd_dispbuf_drf_mode_mask             (0x00000001)
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_afbc_header_drf_mode(data)            (0x00000200&((data)<<9))
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_osd_gamma1_drf_mode(data)             (0x00000100&((data)<<8))
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_osd_gamma2_drf_mode(data)             (0x00000080&((data)<<7))
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_sr_lb_drf_mode(data)                  (0x00000020&((data)<<5))
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_osd_rbuf_share_drf_mode(data)         (0x00000002&((data)<<1))
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_gdma_osd_dispbuf_drf_mode(data)            (0x00000001&(data))
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_get_gdma_afbc_header_drf_mode(data)        ((0x00000200&(data))>>9)
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_get_gdma_osd_gamma1_drf_mode(data)         ((0x00000100&(data))>>8)
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_get_gdma_osd_gamma2_drf_mode(data)         ((0x00000080&(data))>>7)
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_get_gdma_sr_lb_drf_mode(data)              ((0x00000020&(data))>>5)
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_get_gdma_osd_rbuf_share_drf_mode(data)     ((0x00000002&(data))>>1)
#define  DISPD_OSD_BIST_GDMA_DRF_MODE_get_gdma_osd_dispbuf_drf_mode(data)        (0x00000001&(data))

#define  DISPD_OSD_BIST_GDMA_DRF_RESUME                                         0x18029E10
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_reg_addr                                 "0xB8029E10"
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_reg                                      0xB8029E10
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_inst_addr                                "0x0004"
#define  set_DISPD_OSD_BIST_GDMA_DRF_RESUME_reg(data)                            (*((volatile unsigned int*)DISPD_OSD_BIST_GDMA_DRF_RESUME_reg)=data)
#define  get_DISPD_OSD_BIST_GDMA_DRF_RESUME_reg                                  (*((volatile unsigned int*)DISPD_OSD_BIST_GDMA_DRF_RESUME_reg))
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_afbc_header_drf_resume_shift        (9)
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_osd_gamma1_drf_resume_shift         (8)
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_osd_gamma2_drf_resume_shift         (7)
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_sr_lb_drf_resume_shift              (5)
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_osd_rbuf_share_drf_resume_shift     (1)
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_osd_dispbuf_drf_resume_shift        (0)
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_afbc_header_drf_resume_mask         (0x00000200)
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_osd_gamma1_drf_resume_mask          (0x00000100)
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_osd_gamma2_drf_resume_mask          (0x00000080)
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_sr_lb_drf_resume_mask               (0x00000020)
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_osd_rbuf_share_drf_resume_mask      (0x00000002)
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_osd_dispbuf_drf_resume_mask         (0x00000001)
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_afbc_header_drf_resume(data)        (0x00000200&((data)<<9))
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_osd_gamma1_drf_resume(data)         (0x00000100&((data)<<8))
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_osd_gamma2_drf_resume(data)         (0x00000080&((data)<<7))
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_sr_lb_drf_resume(data)              (0x00000020&((data)<<5))
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_osd_rbuf_share_drf_resume(data)     (0x00000002&((data)<<1))
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_gdma_osd_dispbuf_drf_resume(data)        (0x00000001&(data))
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_get_gdma_afbc_header_drf_resume(data)    ((0x00000200&(data))>>9)
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_get_gdma_osd_gamma1_drf_resume(data)     ((0x00000100&(data))>>8)
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_get_gdma_osd_gamma2_drf_resume(data)     ((0x00000080&(data))>>7)
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_get_gdma_sr_lb_drf_resume(data)          ((0x00000020&(data))>>5)
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_get_gdma_osd_rbuf_share_drf_resume(data) ((0x00000002&(data))>>1)
#define  DISPD_OSD_BIST_GDMA_DRF_RESUME_get_gdma_osd_dispbuf_drf_resume(data)    (0x00000001&(data))

#define  DISPD_OSD_BIST_GDMA_DRF_DONE                                           0x18029E14
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_reg_addr                                   "0xB8029E14"
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_reg                                        0xB8029E14
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_inst_addr                                  "0x0005"
#define  set_DISPD_OSD_BIST_GDMA_DRF_DONE_reg(data)                              (*((volatile unsigned int*)DISPD_OSD_BIST_GDMA_DRF_DONE_reg)=data)
#define  get_DISPD_OSD_BIST_GDMA_DRF_DONE_reg                                    (*((volatile unsigned int*)DISPD_OSD_BIST_GDMA_DRF_DONE_reg))
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_afbc_header_drf_done_shift            (9)
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_osd_gamma1_drf_done_shift             (8)
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_osd_gamma2_drf_done_shift             (7)
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_sr_lb_drf_done_shift                  (5)
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_osd_rbuf_share_drf_done_shift         (1)
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_osd_dispbuf_drf_done_shift            (0)
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_afbc_header_drf_done_mask             (0x00000200)
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_osd_gamma1_drf_done_mask              (0x00000100)
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_osd_gamma2_drf_done_mask              (0x00000080)
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_sr_lb_drf_done_mask                   (0x00000020)
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_osd_rbuf_share_drf_done_mask          (0x00000002)
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_osd_dispbuf_drf_done_mask             (0x00000001)
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_afbc_header_drf_done(data)            (0x00000200&((data)<<9))
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_osd_gamma1_drf_done(data)             (0x00000100&((data)<<8))
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_osd_gamma2_drf_done(data)             (0x00000080&((data)<<7))
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_sr_lb_drf_done(data)                  (0x00000020&((data)<<5))
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_osd_rbuf_share_drf_done(data)         (0x00000002&((data)<<1))
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_gdma_osd_dispbuf_drf_done(data)            (0x00000001&(data))
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_get_gdma_afbc_header_drf_done(data)        ((0x00000200&(data))>>9)
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_get_gdma_osd_gamma1_drf_done(data)         ((0x00000100&(data))>>8)
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_get_gdma_osd_gamma2_drf_done(data)         ((0x00000080&(data))>>7)
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_get_gdma_sr_lb_drf_done(data)              ((0x00000020&(data))>>5)
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_get_gdma_osd_rbuf_share_drf_done(data)     ((0x00000002&(data))>>1)
#define  DISPD_OSD_BIST_GDMA_DRF_DONE_get_gdma_osd_dispbuf_drf_done(data)        (0x00000001&(data))

#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE                                          0x18029E18
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_reg_addr                                  "0xB8029E18"
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_reg                                       0xB8029E18
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_inst_addr                                 "0x0006"
#define  set_DISPD_OSD_BIST_GDMA_DRF_PAUSE_reg(data)                             (*((volatile unsigned int*)DISPD_OSD_BIST_GDMA_DRF_PAUSE_reg)=data)
#define  get_DISPD_OSD_BIST_GDMA_DRF_PAUSE_reg                                   (*((volatile unsigned int*)DISPD_OSD_BIST_GDMA_DRF_PAUSE_reg))
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_afbc_header_drf_pause_shift          (9)
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_osd_gamma1_drf_pause_shift           (8)
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_osd_gamma2_drf_pause_shift           (7)
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_sr_lb_drf_pause_shift                (5)
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_osd_rbuf_share_drf_pause_shift       (1)
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_osd_dispbuf_drf_pause_shift          (0)
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_afbc_header_drf_pause_mask           (0x00000200)
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_osd_gamma1_drf_pause_mask            (0x00000100)
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_osd_gamma2_drf_pause_mask            (0x00000080)
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_sr_lb_drf_pause_mask                 (0x00000020)
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_osd_rbuf_share_drf_pause_mask        (0x00000002)
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_osd_dispbuf_drf_pause_mask           (0x00000001)
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_afbc_header_drf_pause(data)          (0x00000200&((data)<<9))
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_osd_gamma1_drf_pause(data)           (0x00000100&((data)<<8))
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_osd_gamma2_drf_pause(data)           (0x00000080&((data)<<7))
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_sr_lb_drf_pause(data)                (0x00000020&((data)<<5))
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_osd_rbuf_share_drf_pause(data)       (0x00000002&((data)<<1))
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_gdma_osd_dispbuf_drf_pause(data)          (0x00000001&(data))
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_get_gdma_afbc_header_drf_pause(data)      ((0x00000200&(data))>>9)
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_get_gdma_osd_gamma1_drf_pause(data)       ((0x00000100&(data))>>8)
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_get_gdma_osd_gamma2_drf_pause(data)       ((0x00000080&(data))>>7)
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_get_gdma_sr_lb_drf_pause(data)            ((0x00000020&(data))>>5)
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_get_gdma_osd_rbuf_share_drf_pause(data)   ((0x00000002&(data))>>1)
#define  DISPD_OSD_BIST_GDMA_DRF_PAUSE_get_gdma_osd_dispbuf_drf_pause(data)      (0x00000001&(data))

#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP                                     0x18029E1C
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_reg_addr                             "0xB8029E1C"
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_reg                                  0xB8029E1C
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_inst_addr                            "0x0007"
#define  set_DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_reg(data)                        (*((volatile unsigned int*)DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_reg)=data)
#define  get_DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_reg                              (*((volatile unsigned int*)DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_reg))
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_afbc_header_drf_fail_group_shift (9)
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_osd_gamma1_drf_fail_group_shift (8)
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_osd_gamma2_drf_fail_group_shift (7)
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_sr_lb_drf_fail_group_shift      (5)
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_osd_rbuf_share_drf_fail_group_shift (1)
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_osd_dispbuf_drf_fail_group_shift (0)
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_afbc_header_drf_fail_group_mask (0x00000200)
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_osd_gamma1_drf_fail_group_mask  (0x00000100)
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_osd_gamma2_drf_fail_group_mask  (0x00000080)
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_sr_lb_drf_fail_group_mask       (0x00000020)
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_osd_rbuf_share_drf_fail_group_mask (0x00000002)
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_osd_dispbuf_drf_fail_group_mask (0x00000001)
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_afbc_header_drf_fail_group(data) (0x00000200&((data)<<9))
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_osd_gamma1_drf_fail_group(data) (0x00000100&((data)<<8))
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_osd_gamma2_drf_fail_group(data) (0x00000080&((data)<<7))
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_sr_lb_drf_fail_group(data)      (0x00000020&((data)<<5))
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_osd_rbuf_share_drf_fail_group(data) (0x00000002&((data)<<1))
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_gdma_osd_dispbuf_drf_fail_group(data) (0x00000001&(data))
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_get_gdma_afbc_header_drf_fail_group(data) ((0x00000200&(data))>>9)
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_get_gdma_osd_gamma1_drf_fail_group(data) ((0x00000100&(data))>>8)
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_get_gdma_osd_gamma2_drf_fail_group(data) ((0x00000080&(data))>>7)
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_get_gdma_sr_lb_drf_fail_group(data)  ((0x00000020&(data))>>5)
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_get_gdma_osd_rbuf_share_drf_fail_group(data) ((0x00000002&(data))>>1)
#define  DISPD_OSD_BIST_GDMA_DRF_FAIL_GROUP_get_gdma_osd_dispbuf_drf_fail_group(data) (0x00000001&(data))

#define  DISPD_OSD_BIST_DISPD_BISR_SECOND_RUN_EN                                0x18029E20
#define  DISPD_OSD_BIST_DISPD_BISR_SECOND_RUN_EN_reg_addr                        "0xB8029E20"
#define  DISPD_OSD_BIST_DISPD_BISR_SECOND_RUN_EN_reg                             0xB8029E20
#define  DISPD_OSD_BIST_DISPD_BISR_SECOND_RUN_EN_inst_addr                       "0x0008"
#define  set_DISPD_OSD_BIST_DISPD_BISR_SECOND_RUN_EN_reg(data)                   (*((volatile unsigned int*)DISPD_OSD_BIST_DISPD_BISR_SECOND_RUN_EN_reg)=data)
#define  get_DISPD_OSD_BIST_DISPD_BISR_SECOND_RUN_EN_reg                         (*((volatile unsigned int*)DISPD_OSD_BIST_DISPD_BISR_SECOND_RUN_EN_reg))
#define  DISPD_OSD_BIST_DISPD_BISR_SECOND_RUN_EN_gdma_afbc_bisr_second_run_en_shift (0)
#define  DISPD_OSD_BIST_DISPD_BISR_SECOND_RUN_EN_gdma_afbc_bisr_second_run_en_mask (0x00000001)
#define  DISPD_OSD_BIST_DISPD_BISR_SECOND_RUN_EN_gdma_afbc_bisr_second_run_en(data) (0x00000001&(data))
#define  DISPD_OSD_BIST_DISPD_BISR_SECOND_RUN_EN_get_gdma_afbc_bisr_second_run_en(data) (0x00000001&(data))

#define  DISPD_OSD_BIST_DISPD_BISR_FAIL_GROUP                                   0x18029E24
#define  DISPD_OSD_BIST_DISPD_BISR_FAIL_GROUP_reg_addr                           "0xB8029E24"
#define  DISPD_OSD_BIST_DISPD_BISR_FAIL_GROUP_reg                                0xB8029E24
#define  DISPD_OSD_BIST_DISPD_BISR_FAIL_GROUP_inst_addr                          "0x0009"
#define  set_DISPD_OSD_BIST_DISPD_BISR_FAIL_GROUP_reg(data)                      (*((volatile unsigned int*)DISPD_OSD_BIST_DISPD_BISR_FAIL_GROUP_reg)=data)
#define  get_DISPD_OSD_BIST_DISPD_BISR_FAIL_GROUP_reg                            (*((volatile unsigned int*)DISPD_OSD_BIST_DISPD_BISR_FAIL_GROUP_reg))
#define  DISPD_OSD_BIST_DISPD_BISR_FAIL_GROUP_gdma_afbc_bisr_fail_group_shift    (0)
#define  DISPD_OSD_BIST_DISPD_BISR_FAIL_GROUP_gdma_afbc_bisr_fail_group_mask     (0x00000001)
#define  DISPD_OSD_BIST_DISPD_BISR_FAIL_GROUP_gdma_afbc_bisr_fail_group(data)    (0x00000001&(data))
#define  DISPD_OSD_BIST_DISPD_BISR_FAIL_GROUP_get_gdma_afbc_bisr_fail_group(data) (0x00000001&(data))

#define  DISPD_OSD_BIST_DISPD_BISR_DRF_MODE                                     0x18029E28
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_MODE_reg_addr                             "0xB8029E28"
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_MODE_reg                                  0xB8029E28
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_MODE_inst_addr                            "0x000A"
#define  set_DISPD_OSD_BIST_DISPD_BISR_DRF_MODE_reg(data)                        (*((volatile unsigned int*)DISPD_OSD_BIST_DISPD_BISR_DRF_MODE_reg)=data)
#define  get_DISPD_OSD_BIST_DISPD_BISR_DRF_MODE_reg                              (*((volatile unsigned int*)DISPD_OSD_BIST_DISPD_BISR_DRF_MODE_reg))
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_MODE_gdma_afbc_drf_bisr_mode_shift        (0)
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_MODE_gdma_afbc_drf_bisr_mode_mask         (0x00000001)
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_MODE_gdma_afbc_drf_bisr_mode(data)        (0x00000001&(data))
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_MODE_get_gdma_afbc_drf_bisr_mode(data)    (0x00000001&(data))

#define  DISPD_OSD_BIST_DISPD_BISR_DRF_RESUME                                   0x18029E2C
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_RESUME_reg_addr                           "0xB8029E2C"
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_RESUME_reg                                0xB8029E2C
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_RESUME_inst_addr                          "0x000B"
#define  set_DISPD_OSD_BIST_DISPD_BISR_DRF_RESUME_reg(data)                      (*((volatile unsigned int*)DISPD_OSD_BIST_DISPD_BISR_DRF_RESUME_reg)=data)
#define  get_DISPD_OSD_BIST_DISPD_BISR_DRF_RESUME_reg                            (*((volatile unsigned int*)DISPD_OSD_BIST_DISPD_BISR_DRF_RESUME_reg))
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_RESUME_gdma_afbc_drf_bisr_test_resume_shift (0)
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_RESUME_gdma_afbc_drf_bisr_test_resume_mask (0x00000001)
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_RESUME_gdma_afbc_drf_bisr_test_resume(data) (0x00000001&(data))
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_RESUME_get_gdma_afbc_drf_bisr_test_resume(data) (0x00000001&(data))

#define  DISPD_OSD_BIST_DISPD_BISR_DRF_DONE                                     0x18029E30
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_DONE_reg_addr                             "0xB8029E30"
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_DONE_reg                                  0xB8029E30
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_DONE_inst_addr                            "0x000C"
#define  set_DISPD_OSD_BIST_DISPD_BISR_DRF_DONE_reg(data)                        (*((volatile unsigned int*)DISPD_OSD_BIST_DISPD_BISR_DRF_DONE_reg)=data)
#define  get_DISPD_OSD_BIST_DISPD_BISR_DRF_DONE_reg                              (*((volatile unsigned int*)DISPD_OSD_BIST_DISPD_BISR_DRF_DONE_reg))
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_DONE_gdma_afbc_drf_bisr_done_shift        (0)
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_DONE_gdma_afbc_drf_bisr_done_mask         (0x00000001)
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_DONE_gdma_afbc_drf_bisr_done(data)        (0x00000001&(data))
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_DONE_get_gdma_afbc_drf_bisr_done(data)    (0x00000001&(data))

#define  DISPD_OSD_BIST_DISPD_BISR_DRF_PAUSE                                    0x18029E34
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_PAUSE_reg_addr                            "0xB8029E34"
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_PAUSE_reg                                 0xB8029E34
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_PAUSE_inst_addr                           "0x000D"
#define  set_DISPD_OSD_BIST_DISPD_BISR_DRF_PAUSE_reg(data)                       (*((volatile unsigned int*)DISPD_OSD_BIST_DISPD_BISR_DRF_PAUSE_reg)=data)
#define  get_DISPD_OSD_BIST_DISPD_BISR_DRF_PAUSE_reg                             (*((volatile unsigned int*)DISPD_OSD_BIST_DISPD_BISR_DRF_PAUSE_reg))
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_PAUSE_gdma_afbc_drf_bisr_start_pause_shift (0)
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_PAUSE_gdma_afbc_drf_bisr_start_pause_mask (0x00000001)
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_PAUSE_gdma_afbc_drf_bisr_start_pause(data) (0x00000001&(data))
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_PAUSE_get_gdma_afbc_drf_bisr_start_pause(data) (0x00000001&(data))

#define  DISPD_OSD_BIST_DISPD_BISR_DRF_FAIL_GROUP                               0x18029E38
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_FAIL_GROUP_reg_addr                       "0xB8029E38"
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_FAIL_GROUP_reg                            0xB8029E38
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_FAIL_GROUP_inst_addr                      "0x000E"
#define  set_DISPD_OSD_BIST_DISPD_BISR_DRF_FAIL_GROUP_reg(data)                  (*((volatile unsigned int*)DISPD_OSD_BIST_DISPD_BISR_DRF_FAIL_GROUP_reg)=data)
#define  get_DISPD_OSD_BIST_DISPD_BISR_DRF_FAIL_GROUP_reg                        (*((volatile unsigned int*)DISPD_OSD_BIST_DISPD_BISR_DRF_FAIL_GROUP_reg))
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_FAIL_GROUP_gdma_afbc_drf_bisr_fail_group_shift (0)
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_FAIL_GROUP_gdma_afbc_drf_bisr_fail_group_mask (0x00000001)
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_FAIL_GROUP_gdma_afbc_drf_bisr_fail_group(data) (0x00000001&(data))
#define  DISPD_OSD_BIST_DISPD_BISR_DRF_FAIL_GROUP_get_gdma_afbc_drf_bisr_fail_group(data) (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======DISPD_OSD_BIST register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  gdma_afbc_header_bist_mode:1;
        RBus_UInt32  gdma_osd_gamma1_bist_mode:1;
        RBus_UInt32  gdma_osd_gamma2_bist_mode:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gdma_sr_lb_bist_mode:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  gdma_osd_rbuf_share_bist_mode:1;
        RBus_UInt32  gdma_osd_dispbuf_bist_mode:1;
    };
}dispd_osd_bist_gdma_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  gdma_afbc_header_bist_done:1;
        RBus_UInt32  gdma_osd_gamma1_bist_done:1;
        RBus_UInt32  gdma_osd_gamma2_bist_done:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gdma_sr_lb_bist_done:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  gdma_osd_rbuf_share_bist_done:1;
        RBus_UInt32  gdma_osd_dispbuf_bist_done:1;
    };
}dispd_osd_bist_gdma_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  gdma_afbc_header_bist_fail_group:1;
        RBus_UInt32  gdma_osd_gamma1_bist_fail_group:1;
        RBus_UInt32  gdma_osd_gamma2_bist_fail_group:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gdma_sr_lb_bist_fail_group:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  gdma_osd_rbuf_share_bist_fail_group:1;
        RBus_UInt32  gdma_osd_dispbuf_bist_fail_group:1;
    };
}dispd_osd_bist_gdma_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  gdma_afbc_header_drf_mode:1;
        RBus_UInt32  gdma_osd_gamma1_drf_mode:1;
        RBus_UInt32  gdma_osd_gamma2_drf_mode:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gdma_sr_lb_drf_mode:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  gdma_osd_rbuf_share_drf_mode:1;
        RBus_UInt32  gdma_osd_dispbuf_drf_mode:1;
    };
}dispd_osd_bist_gdma_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  gdma_afbc_header_drf_resume:1;
        RBus_UInt32  gdma_osd_gamma1_drf_resume:1;
        RBus_UInt32  gdma_osd_gamma2_drf_resume:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gdma_sr_lb_drf_resume:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  gdma_osd_rbuf_share_drf_resume:1;
        RBus_UInt32  gdma_osd_dispbuf_drf_resume:1;
    };
}dispd_osd_bist_gdma_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  gdma_afbc_header_drf_done:1;
        RBus_UInt32  gdma_osd_gamma1_drf_done:1;
        RBus_UInt32  gdma_osd_gamma2_drf_done:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gdma_sr_lb_drf_done:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  gdma_osd_rbuf_share_drf_done:1;
        RBus_UInt32  gdma_osd_dispbuf_drf_done:1;
    };
}dispd_osd_bist_gdma_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  gdma_afbc_header_drf_pause:1;
        RBus_UInt32  gdma_osd_gamma1_drf_pause:1;
        RBus_UInt32  gdma_osd_gamma2_drf_pause:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gdma_sr_lb_drf_pause:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  gdma_osd_rbuf_share_drf_pause:1;
        RBus_UInt32  gdma_osd_dispbuf_drf_pause:1;
    };
}dispd_osd_bist_gdma_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  gdma_afbc_header_drf_fail_group:1;
        RBus_UInt32  gdma_osd_gamma1_drf_fail_group:1;
        RBus_UInt32  gdma_osd_gamma2_drf_fail_group:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gdma_sr_lb_drf_fail_group:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  gdma_osd_rbuf_share_drf_fail_group:1;
        RBus_UInt32  gdma_osd_dispbuf_drf_fail_group:1;
    };
}dispd_osd_bist_gdma_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  gdma_afbc_bisr_second_run_en:1;
    };
}dispd_osd_bist_dispd_bisr_second_run_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  gdma_afbc_bisr_fail_group:1;
    };
}dispd_osd_bist_dispd_bisr_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  gdma_afbc_drf_bisr_mode:1;
    };
}dispd_osd_bist_dispd_bisr_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  gdma_afbc_drf_bisr_test_resume:1;
    };
}dispd_osd_bist_dispd_bisr_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  gdma_afbc_drf_bisr_done:1;
    };
}dispd_osd_bist_dispd_bisr_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  gdma_afbc_drf_bisr_start_pause:1;
    };
}dispd_osd_bist_dispd_bisr_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  gdma_afbc_drf_bisr_fail_group:1;
    };
}dispd_osd_bist_dispd_bisr_drf_fail_group_RBUS;

#else //apply LITTLE_ENDIAN

//======DISPD_OSD_BIST register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdma_osd_dispbuf_bist_mode:1;
        RBus_UInt32  gdma_osd_rbuf_share_bist_mode:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  gdma_sr_lb_bist_mode:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gdma_osd_gamma2_bist_mode:1;
        RBus_UInt32  gdma_osd_gamma1_bist_mode:1;
        RBus_UInt32  gdma_afbc_header_bist_mode:1;
        RBus_UInt32  res3:22;
    };
}dispd_osd_bist_gdma_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdma_osd_dispbuf_bist_done:1;
        RBus_UInt32  gdma_osd_rbuf_share_bist_done:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  gdma_sr_lb_bist_done:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gdma_osd_gamma2_bist_done:1;
        RBus_UInt32  gdma_osd_gamma1_bist_done:1;
        RBus_UInt32  gdma_afbc_header_bist_done:1;
        RBus_UInt32  res3:22;
    };
}dispd_osd_bist_gdma_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdma_osd_dispbuf_bist_fail_group:1;
        RBus_UInt32  gdma_osd_rbuf_share_bist_fail_group:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  gdma_sr_lb_bist_fail_group:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gdma_osd_gamma2_bist_fail_group:1;
        RBus_UInt32  gdma_osd_gamma1_bist_fail_group:1;
        RBus_UInt32  gdma_afbc_header_bist_fail_group:1;
        RBus_UInt32  res3:22;
    };
}dispd_osd_bist_gdma_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdma_osd_dispbuf_drf_mode:1;
        RBus_UInt32  gdma_osd_rbuf_share_drf_mode:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  gdma_sr_lb_drf_mode:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gdma_osd_gamma2_drf_mode:1;
        RBus_UInt32  gdma_osd_gamma1_drf_mode:1;
        RBus_UInt32  gdma_afbc_header_drf_mode:1;
        RBus_UInt32  res3:22;
    };
}dispd_osd_bist_gdma_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdma_osd_dispbuf_drf_resume:1;
        RBus_UInt32  gdma_osd_rbuf_share_drf_resume:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  gdma_sr_lb_drf_resume:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gdma_osd_gamma2_drf_resume:1;
        RBus_UInt32  gdma_osd_gamma1_drf_resume:1;
        RBus_UInt32  gdma_afbc_header_drf_resume:1;
        RBus_UInt32  res3:22;
    };
}dispd_osd_bist_gdma_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdma_osd_dispbuf_drf_done:1;
        RBus_UInt32  gdma_osd_rbuf_share_drf_done:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  gdma_sr_lb_drf_done:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gdma_osd_gamma2_drf_done:1;
        RBus_UInt32  gdma_osd_gamma1_drf_done:1;
        RBus_UInt32  gdma_afbc_header_drf_done:1;
        RBus_UInt32  res3:22;
    };
}dispd_osd_bist_gdma_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdma_osd_dispbuf_drf_pause:1;
        RBus_UInt32  gdma_osd_rbuf_share_drf_pause:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  gdma_sr_lb_drf_pause:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gdma_osd_gamma2_drf_pause:1;
        RBus_UInt32  gdma_osd_gamma1_drf_pause:1;
        RBus_UInt32  gdma_afbc_header_drf_pause:1;
        RBus_UInt32  res3:22;
    };
}dispd_osd_bist_gdma_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdma_osd_dispbuf_drf_fail_group:1;
        RBus_UInt32  gdma_osd_rbuf_share_drf_fail_group:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  gdma_sr_lb_drf_fail_group:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gdma_osd_gamma2_drf_fail_group:1;
        RBus_UInt32  gdma_osd_gamma1_drf_fail_group:1;
        RBus_UInt32  gdma_afbc_header_drf_fail_group:1;
        RBus_UInt32  res3:22;
    };
}dispd_osd_bist_gdma_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdma_afbc_bisr_second_run_en:1;
        RBus_UInt32  res1:31;
    };
}dispd_osd_bist_dispd_bisr_second_run_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdma_afbc_bisr_fail_group:1;
        RBus_UInt32  res1:31;
    };
}dispd_osd_bist_dispd_bisr_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdma_afbc_drf_bisr_mode:1;
        RBus_UInt32  res1:31;
    };
}dispd_osd_bist_dispd_bisr_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdma_afbc_drf_bisr_test_resume:1;
        RBus_UInt32  res1:31;
    };
}dispd_osd_bist_dispd_bisr_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdma_afbc_drf_bisr_done:1;
        RBus_UInt32  res1:31;
    };
}dispd_osd_bist_dispd_bisr_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdma_afbc_drf_bisr_start_pause:1;
        RBus_UInt32  res1:31;
    };
}dispd_osd_bist_dispd_bisr_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdma_afbc_drf_bisr_fail_group:1;
        RBus_UInt32  res1:31;
    };
}dispd_osd_bist_dispd_bisr_drf_fail_group_RBUS;




#endif 


#endif 
