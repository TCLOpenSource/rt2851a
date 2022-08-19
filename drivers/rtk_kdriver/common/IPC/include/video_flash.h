#ifndef __VIDEO_FLASH_H__
#define __VIDEO_FLASH_H__

/*
 * Shared structure with OpenMAX (vrpc_flash_frame_info_t)
 * Size = 256 bytes
 * */
typedef struct
{
  uint16_t nSize;
  uint16_t nVersion;
  uint32_t pUserData;
  uint32_t nRRKey;
  uint32_t nRRAddr; /* (VBM_RefRecord_t *) */
  uint32_t nContext;
  uint32_t nPicFlags;
  uint32_t nPicWidth;
  uint32_t nPicHeight;
  uint32_t nPtsHigh;
  uint32_t nPtsLow;
  uint32_t nPts2High;
  uint32_t nPts2Low;
  uint32_t nPicPhysicalAddr;
  uint32_t nPicPitch;
  uint32_t nClkTimeHigh;
  uint32_t nClkTimeLow;
  uint32_t nFramerateD;
  uint32_t nFramerateN;
  uint32_t eScanType;   /* 0: progressive, 1: interlaced */
  uint32_t nSeiPtsHigh; /* SEI PTS High */
  uint32_t nSeiPtsSLow; /* SEI PTS Low */
  uint32_t nPicCPitch;
  uint32_t nPicCPhysicalAddr;
  uint32_t nHDR_Type;
  uint32_t nDisplayPrimaries_X[3];
  uint32_t nDisplayPrimaries_Y[3];
  uint32_t nWhitePoint_X;
  uint32_t nWhitePoint_Y;
  uint32_t nMaxDisplayMasteringLuminance;
  uint32_t nMinDisplayMasteringLuminance;
  uint32_t nTransferCharacteristics;
  uint32_t nMatrixCoefficiets;
  uint32_t nColorPrimaries;
  uint32_t nHdrFlag;       /* video-full-range-flag */
  uint32_t nMaxCll;        /* max-content-light-level */
  uint32_t nMaxPall;       /* max-pic-average-light-level */
  uint16_t nParWidth;      /**< Width of PAR( Pixel Aspect Ratio)*/
  uint16_t nParHeight;     /**< Height of PAR( Pixel Aspect Ratio) */
  uint16_t nAspectRatio_N; /**< Aspect Ratio */
  uint16_t nAspectRatio_D; /**< Aspect Ratio */
  uint32_t nCmprsMode;     /* 0: raw, 1: lossless, 2: lossy */
  uint32_t nPicYCmprsHdrAddr;
  uint32_t nPicCCmprsHdrAddr;
  uint32_t nPicCmprsPitch;
  uint32_t nPicCPhysicalAddr2;
  uint32_t nMediaInfoCnt;
  uint32_t nSampleWidth;  /* compressed width */
  uint32_t nSampleHeight; /* compressed height */
  uint32_t nLumaGOBPage;
  uint32_t nLumaGOBWidthScale;
  uint32_t nLumaGOBOffsetX;
  uint32_t nLumaGOBOffsetY;
  uint32_t nChromaGOBPage;
  uint32_t nChromaGOBWidthScale;
  uint32_t nChromaGOBOffsetX;
  uint32_t nChromaGOBOffsetY;
  uint16_t nBufferHeight;
  uint16_t nHeaderHeight;
  uint16_t nPaddingY;
  uint16_t nPicPitchGPU;
  uint32_t nActiveFormatDescription;
  uint32_t reserved[3];
} Flash_OMX_Frame_Info;

#endif
