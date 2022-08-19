#ifndef __RTK_OTP_REG_H__
#define __RTK_OTP_REG_H__
#include <rbus/efuse_reg.h>

#define MAX_OTP_OFST                                 (0x200)
#define OTP_DDR_MAP_BASE                         (EFUSE_DATAO_0_reg)
#define OTP_REG_BASE                                  (EFUSE_EF_CTRL_PROGRAM_reg)
#define OTP_CTRL_PROG                                (OTP_REG_BASE + 0x0)
#define OTP_PROG_STATUS1                          (OTP_REG_BASE + 0x4)
#define OTP_PROG_STATUS2                          (OTP_REG_BASE + 0x8)
#define OTP_CTRL                                          (OTP_REG_BASE + 0x18)
#define OTP_CTRL_CRC_EN                            (OTP_REG_BASE + 0x2C)
#define OTP_CRC                                            (OTP_REG_BASE + 0x30)
#define OTP_AUTO_RD_REGION                      (OTP_REG_BASE + 0x34)

#define OTP_PROG_STATUS_DONE                  (1 << 3)
#define OTP_PROG_STATUS_LOCK                   (1 << 2)
#define OTP_PROG_STATUS_FAIL                     (1 << 1)
#define OTP_PROG_STATUS_SUCCESS              (1 << 0)
#define OTP_PROG_STATUS_CLEAN                  (0x0)

#define OTP_CTRL_PROG_EN_PROG_EFUSE      (0xDEAD)
#define OTP_CTRL_WRITE_EN0                         (1 << 1)
#define OTP_CTRL_AUTO_RD_REQ                    (1 << 0)

#define OTP_CRC_EN(x)                                     ((x) << 0)

#define OTP_AUTO_RD_REGION_START_ADDR(x)    ((x) & 0x1FF)
#define OTP_AUTO_RD_REGION_END_ADDR(x)        (((x) & 0x1FF) << 16)

#define OTP_CRC_CRC_INI                                  (0xFFFF <<16)
#define GET_OTP_CRC_CRC_OUT(x)                    ((x) & 0xFFFF)

#endif

