/*==========================================================================
  * Copyright (c)      Realtek Semiconductor Corporation, 2007
  * All rights reserved.
  * ========================================================================*/

/*================= File Description =======================================*/
/**
 * @file
 * 	This file is for sharpness related functions.
 *
 * @author 	$Author$ Flora
 * @date 	$Date$
 * @version 	$Revision$
 */

/*============================ Module dependency  ===========================*/
#include <tvscalercontrol/io/ioregdrv.h>
#include <tvscalercontrol/scaler/scalerstruct.h>
#include <tvscalercontrol/scaler/source.h>
#include <tvscalercontrol/vip/vip_reg_def.h>
#include "tvscalercontrol/vip/peaking.h"

/*================================== Function ===============================*/

void drvif_color_customsharpness_init(unsigned char display)
{
	drvif_color_sharpness_init(display);
}

void drvif_color_customsharpness_adjust(unsigned char display, unsigned char level)
{

	/*if (Scaler_InputSrcGetType((SCALER_DISP_CHANNEL)display) == _SRC_YPBPR){
		drvif_color_sharpness_adjust(display, level);
		drvif_color_2dpk_edge_Coef_apply(display, level);		// Edge
		drvif_color_2dpk_Vertical_Coef_apply(display,  level);		// Vertical
	} else {
		drvif_color_sharpness_adjust(display, level);
		drvif_color_2dpk_edge_Coef_apply(display, level);		// Edge
		drvif_color_2dpk_Vertical_Coef_apply(display,  level);		// Vertical
	}*/
}

