#ifndef __IRRC_TV030_H__
#define __IRRC_TV030_H__

#include "irrc_common.h"
#if defined(CONFIG_RTK_KDRV_TV030_IR )
#undef IR_PROTOCOL
#if defined(CONFIG_RTK_KDRV_TV030_JP_IR)
	#define IR_PROTOCOL     AEHA
#else
	#define IR_PROTOCOL     RCA
#endif
#endif
#endif
