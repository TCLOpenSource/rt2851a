#ifndef __DEMOD_REALTEK_DEF_H__
#define __DEMOD_REALTEK_DEF_H__

#include "demod.h"

enum  {
	RTK_DEMOD_OUT_IF_PARALLEL,
	RTK_DEMOD_OUT_IF_SERIAL,
};

enum {
	RTK_DEMOD_OUT_FREQ_6M,
	RTK_DEMOD_OUT_FREQ_10M,
	RTK_DEMOD_OUT_FREQ_57M,
};

typedef enum {
	RTK_DEMOD_MODE_NONE,
	RTK_DEMOD_MODE_DTMB,
	RTK_DEMOD_MODE_DVBT,
	RTK_DEMOD_MODE_DVBT2,
	RTK_DEMOD_MODE_DVBC,
	RTK_DEMOD_MODE_ATSC,
	RTK_DEMOD_MODE_ATSC3,	
	RTK_DEMOD_MODE_QAM,
	RTK_DEMOD_MODE_ISDB,
	RTK_DEMOD_MODE_DVBS,
	RTK_DEMOD_MODE_DVBS2,
	RTK_DEMOD_MODE_DVBS2X,
	RTK_DEMOD_MODE_SPEC_AN,
	RTK_DEMOD_MODE_ATV,
	RTK_DEMOD_MODE_MAX
} RTK_DEMOD_MODE;

#define RTK_DEMOD_BIF_TX_FIFO_DEPTH       16
#define RTK_DEMOD_BIF_RX_FIFO_DEPTH       16

#define RTK_DEMOD_TS_DIS                  1
#define RTK_DEMOD_TS_EN                   0
#define RTK_DEMOD_TS_SERIAL               1
#define RTK_DEMOD_TS_PARALLEL             0
#define RTK_DEMOD_TS_CLK_PHASE_INV        1
#define RTK_DEMOD_TS_CLK_PHASE_NOR        0
#define RTK_DEMOD_TS_PACKETS_188          1
#define RTK_DEMOD_TS_PACKETS_204          0

#define RTK_DEMOD_RPU_MSLVDATAT_ADDR          0x0203C004
#define RTK_DEMOD_RPU_MSLVCTRL0_ADDR          0x0203C008
#define RTK_DEMOD_RPU_MSLVCTRL1_ADDR          0x0203C00C
#define RTK_DEMOD_RPU_TXENABLE_ADDR           0x04800000
#define RTK_DEMOD_RPU_TXPRIVEXT_ADDR          0x048000E8
#define RTK_DEMOD_RPU_TXUXXRXDT_ADDR          0x0480FFF0
#define RTK_DEMOD_RPU_TXUXXRXRQ_ADDR          0x0480FFF8

#define RTK_DEMOD_XML_EXT_GAIN1               0
#define RTK_DEMOD_XML_EXT_GAIN2               1
#define RTK_DEMOD_XML_EXT_OFFSET1             2
#define RTK_DEMOD_XML_EXT_OFFSET2             3
#define RTK_DEMOD_XML_GAIN_POLARITY_POS       0
#define RTK_DEMOD_XML_GAIN_POLARITY_NEG       1
#define RTK_DEMOD_XML_REAL_IF                 0
#define RTK_DEMOD_XML_COMPLEX_IF              1
#define RTK_DEMOD_XML_SPECTRUM_NORMAL         0
#define RTK_DEMOD_XML_SPECTRUM_INVERT         1
#define RTK_DEMOD_XML_TWO_S_COMP              0
#define RTK_DEMOD_XML_UNSIGNED                1
#define RTK_DEMOD_XML_EXT_GAIN_EN             0
#define RTK_DEMOD_XML_EXT_GAIN_DIS            1


typedef struct {
	int RegBitName;
	U32BITS Value;
} REG_VALUE_ENTRY;


typedef struct {
	U32BITS RegBitNameRbus;
	U32BITS ValueRbus;
} REG_VALUE_ENTRY_RBUS;


#endif // __DEMOD_MERLIN2_DEF_H__
