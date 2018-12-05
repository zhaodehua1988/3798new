///*****************************************
//  Copyright (C) 2009-2018
//  ITE Tech. Inc. All Rights Reserved
//  Proprietary and Confidential
///*****************************************
//   @file   <iTE6615_Table_CSC.h>
//   @author Kuro.Chung@ite.com.tw
//   @date   2018/07/04
//   @fileversion: iTE6615_MCUSRC_0.23
//******************************************/
#ifndef _iTE6615_CSC_TABLE_H_
#define _iTE6615_CSC_TABLE_H_

// 3 type of CSC convert, full to full, limit to limit, full to limit
// (do not have limit to full because limit range do not have information of full)

typedef enum
{
    CSCMtx_RGB2YUV_ITU601_16_235,
    CSCMtx_RGB2YUV_ITU601_00_255,
    CSCMtx_RGB2YUV_ITU709_16_235,
    CSCMtx_RGB2YUV_ITU709_00_255,
    CSCMtx_YUV2RGB_ITU601_16_235,
    CSCMtx_YUV2RGB_ITU601_00_255,
    CSCMtx_YUV2RGB_ITU709_16_235,
    CSCMtx_YUV2RGB_ITU709_00_255,
    CSCMtx_YUV2RGB_BT2020_00_255,
    CSCMtx_RGB_00_255_RGB_16_235,
    CSCMtx_RGB_16_235_RGB_00_255,
    CSCMtx_Unknown,
} _CSCMtx_Type;

static _CODE u8 CSC_Matrix[][22] =
{
// all the 00_255 - 16_235 i.e. RGB
// ex. bCSCMtx_RGB2YUV_ITU601_16_235=RGB(16-235) to ITU601
// ex. bCSCMtx_YUV2RGB_ITU709_00_255=YUV(ITU709) to RGB(00-255)

/*setting from REG170 to REG185*/
/* CEA  = limit Range */
/* VESA = Full  Range */
/*bCSCMtx_RGB2YUV_ITU601_16_235*/    {0x00, 0x80, 0x10, 0xB2, 0x04, 0x65, 0x02, 0xE9, 0x00, 0x93, 0x3C, 0x18, 0x04, 0x55, 0x3F, 0x49, 0x3D, 0x9F, 0x3E, 0x18, 0x04, 0x00},
/*bCSCMtx_RGB2YUV_ITU601_00_255*/    {0x10, 0x80, 0x10, 0x09, 0x04, 0x0E, 0x02, 0xC9, 0x00, 0x0F, 0x3D, 0x84, 0x03, 0x6D, 0x3F, 0xAB, 0x3D, 0xD1, 0x3E, 0x84, 0x03, 0x00},
/*bCSCMtx_RGB2YUV_ITU709_16_235*/    {0x00, 0x80, 0x10, 0xB8, 0x05, 0xB4, 0x01, 0x94, 0x00, 0x4A, 0x3C, 0x17, 0x04, 0x9F, 0x3F, 0xD9, 0x3C, 0x10, 0x3F, 0x17, 0x04, 0x00},
/*bCSCMtx_RGB2YUV_ITU709_00_255*/    {0x10, 0x80, 0x10, 0xEA, 0x04, 0x77, 0x01, 0x7F, 0x00, 0xD0, 0x3C, 0x83, 0x03, 0xAD, 0x3F, 0x4B, 0x3D, 0x32, 0x3F, 0x83, 0x03, 0x00},
/*bCSCMtx_YUV2RGB_ITU601_16_235*/    {0x00, 0x00, 0x00, 0x00, 0x08, 0x6B, 0x3A, 0x50, 0x3D, 0x00, 0x08, 0xF5, 0x0A, 0x02, 0x00, 0x00, 0x08, 0xFD, 0x3F, 0xDA, 0x0D, 0x00},
/*bCSCMtx_YUV2RGB_ITU601_00_255*/    {0x04, 0x00, 0xA7, 0x4F, 0x09, 0x81, 0x39, 0xDD, 0x3C, 0x4F, 0x09, 0xC4, 0x0C, 0x01, 0x00, 0x4F, 0x09, 0xFD, 0x3F, 0x1F, 0x10, 0x00},
/*bCSCMtx_YUV2RGB_ITU709_16_235*/    {0x00, 0x00, 0x00, 0x00, 0x08, 0x55, 0x3C, 0x88, 0x3E, 0x00, 0x08, 0x51, 0x0C, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x84, 0x0E, 0x00},
/*bCSCMtx_YUV2RGB_ITU709_00_255*/    {0x04, 0x00, 0xA7, 0x4F, 0x09, 0xBA, 0x3B, 0x4B, 0x3E, 0x4F, 0x09, 0x57, 0x0E, 0x02, 0x00, 0x4F, 0x09, 0xFE, 0x3F, 0xE8, 0x10, 0x00},
/*bCSCMtx_YUV2RGB_BT2020_00_255*/    {0x04, 0x00, 0xA7, 0x4F, 0x09, 0xCC, 0x3A, 0x7E, 0x3E, 0x4F, 0x09, 0x69, 0x0D, 0x0B, 0x00, 0x4F, 0x09, 0xFE, 0x3F, 0x1D, 0x11, 0x00},
/*bCSCMtx_RGB_00_255_RGB_16_235*/    {0x10, 0x10, 0x00, 0xe0, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x06, 0x10},
/*bCSCMtx_RGB_16_235_RGB_00_255*/    {0xED, 0xED, 0x00, 0x50, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x09, 0xED}
};

#endif

