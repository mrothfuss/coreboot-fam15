/* $NoKeywords:$ */
/**
 * @file
 *
 * AMD F15Or Microcode patch.
 *
 * F15Or Microcode Patch rev 0600063E for 6012 or equivalent.
 *
 * @xrefitem bom "File Content Label" "Release Content"
 * @e project:      AGESA
 * @e sub-project:  CPU/Family/0x15/OR
 * @e \$Revision: 60770 $   @e \$Date: 2011-10-21 15:51:10 -0600 (Fri, 21 Oct 2011) $
 */
/*****************************************************************************
 *
 * Copyright 2008 - 2012 ADVANCED MICRO DEVICES, INC.  All Rights Reserved.
 *
 * AMD is granting you permission to use this software (the Materials)
 * pursuant to the terms and conditions of your Software License Agreement
 * with AMD.  This header does *NOT* give you permission to use the Materials
 * or any rights under AMD's intellectual property.  Your use of any portion
 * of these Materials shall constitute your acceptance of those terms and
 * conditions.  If you do not agree to the terms and conditions of the Software
 * License Agreement, please do not use any portion of these Materials.
 *
 * CONFIDENTIALITY:  The Materials and all other information, identified as
 * confidential and provided to you by AMD shall be kept confidential in
 * accordance with the terms and conditions of the Software License Agreement.
 *
 * LIMITATION OF LIABILITY: THE MATERIALS AND ANY OTHER RELATED INFORMATION
 * PROVIDED TO YOU BY AMD ARE PROVIDED "AS IS" WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTY OF ANY KIND, INCLUDING BUT NOT LIMITED TO WARRANTIES OF
 * MERCHANTABILITY, NONINFRINGEMENT, TITLE, FITNESS FOR ANY PARTICULAR PURPOSE,
 * OR WARRANTIES ARISING FROM CONDUCT, COURSE OF DEALING, OR USAGE OF TRADE.
 * IN NO EVENT SHALL AMD OR ITS LICENSORS BE LIABLE FOR ANY DAMAGES WHATSOEVER
 * (INCLUDING, WITHOUT LIMITATION, DAMAGES FOR LOSS OF PROFITS, BUSINESS
 * INTERRUPTION, OR LOSS OF INFORMATION) ARISING OUT OF AMD'S NEGLIGENCE,
 * GROSS NEGLIGENCE, THE USE OF OR INABILITY TO USE THE MATERIALS OR ANY OTHER
 * RELATED INFORMATION PROVIDED TO YOU BY AMD, EVEN IF AMD HAS BEEN ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGES.  BECAUSE SOME JURISDICTIONS PROHIBIT THE
 * EXCLUSION OR LIMITATION OF LIABILITY FOR CONSEQUENTIAL OR INCIDENTAL DAMAGES,
 * THE ABOVE LIMITATION MAY NOT APPLY TO YOU.
 *
 * AMD does not assume any responsibility for any errors which may appear in
 * the Materials or any other related information provided to you by AMD, or
 * result from use of the Materials or any related information.
 *
 * You agree that you will not reverse engineer or decompile the Materials.
 *
 * NO SUPPORT OBLIGATION: AMD is not obligated to furnish, support, or make any
 * further information, software, technical information, know-how, or show-how
 * available to you.  Additionally, AMD retains the right to modify the
 * Materials at any time, without notice, and is not obligated to provide such
 * modified Materials to you.
 *
 * U.S. GOVERNMENT RESTRICTED RIGHTS: The Materials are provided with
 * "RESTRICTED RIGHTS." Use, duplication, or disclosure by the Government is
 * subject to the restrictions as set forth in FAR 52.227-14 and
 * DFAR252.227-7013, et seq., or its successor.  Use of the Materials by the
 * Government constitutes acknowledgement of AMD's proprietary rights in them.
 *
 * EXPORT ASSURANCE:  You agree and certify that neither the Materials, nor any
 * direct product thereof will be exported directly or indirectly, into any
 * country prohibited by the United States Export Administration Act and the
 * regulations thereunder, without the required authorization from the U.S.
 * government nor will be used for any purpose prohibited by the same.
 *
 ***************************************************************************/



/*----------------------------------------------------------------------------------------
 *                             M O D U L E S    U S E D
 *----------------------------------------------------------------------------------------
 */
#include "AGESA.h"
#include "Ids.h"
#include "cpuRegisters.h"
#include "cpuEarlyInit.h"
CODE_GROUP (G3_DXE)
RDATA_GROUP (G3_DXE)

/*----------------------------------------------------------------------------------------
 *                   D E F I N I T I O N S    A N D    M A C R O S
 *----------------------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------------------
 *                  T Y P E D E F S     A N D     S T R U C T U R E S
 *----------------------------------------------------------------------------------------
 */

UCODE_VS_FLAG (0600063E_Enc)

// Encrypt Patch code 0600063E for 6012 and equivalent
CONST UINT8 ROMDATA CpuF15OrMicrocodePatch0600063E_Enc [IDS_PAD_4K] =
{
  0x18,
  0x20,
  0x07,
  0x02,
  0x3e,
  0x06,
  0x00,
  0x06,
  0x02,
  0x80,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x12,
  0x60,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x01,
  0x03,
  0x6f,
  0x9a,
  0x19,
  0xaf,
  0x18,
  0x48,
  0x9b,
  0x75,
  0xfc,
  0xba,
  0xb5,
  0xc6,
  0xd1,
  0x6f,
  0x40,
  0x91,
  0x6d,
  0x23,
  0x59,
  0x75,
  0x5e,
  0xc6,
  0x9c,
  0x6c,
  0x6c,
  0xfc,
  0x84,
  0x83,
  0x08,
  0x6f,
  0x41,
  0x15,
  0xf3,
  0x0a,
  0x1b,
  0xac,
  0xd5,
  0x2c,
  0x9d,
  0xed,
  0x60,
  0x98,
  0xa7,
  0x0e,
  0xbf,
  0xb8,
  0xc1,
  0xf0,
  0x66,
  0xaa,
  0x45,
  0xc1,
  0x56,
  0x69,
  0xb7,
  0x9d,
  0xb0,
  0xce,
  0x62,
  0xb6,
  0x6e,
  0x11,
  0x3d,
  0x98,
  0x49,
  0x1f,
  0x22,
  0x13,
  0x3c,
  0x34,
  0x10,
  0xca,
  0x3d,
  0x45,
  0xa0,
  0x70,
  0x5c,
  0x60,
  0x8b,
  0x12,
  0x88,
  0x84,
  0x05,
  0x03,
  0x14,
  0x42,
  0x69,
  0x8b,
  0xfc,
  0xc2,
  0x85,
  0x31,
  0xf1,
  0x02,
  0x75,
  0x81,
  0x31,
  0x94,
  0x97,
  0x2c,
  0x18,
  0xb6,
  0x42,
  0xac,
  0x12,
  0xef,
  0xdf,
  0x1d,
  0xeb,
  0xc4,
  0x1d,
  0x28,
  0xd5,
  0xde,
  0x01,
  0xac,
  0x48,
  0x96,
  0xb2,
  0x42,
  0x9b,
  0x3e,
  0xa2,
  0x17,
  0x27,
  0xa9,
  0xba,
  0x08,
  0x64,
  0x48,
  0x9a,
  0xee,
  0xca,
  0xbe,
  0xcd,
  0x4a,
  0x10,
  0x56,
  0x37,
  0xa2,
  0xf9,
  0x3c,
  0x7b,
  0x30,
  0x9f,
  0x13,
  0x5f,
  0x6b,
  0x76,
  0x04,
  0x5f,
  0x2c,
  0x30,
  0x57,
  0x1a,
  0x0d,
  0x20,
  0x49,
  0x6b,
  0x18,
  0x44,
  0xe7,
  0x5c,
  0x2d,
  0x26,
  0xab,
  0x5a,
  0x56,
  0x24,
  0x5c,
  0xed,
  0x08,
  0x66,
  0x14,
  0xfb,
  0xf0,
  0xf1,
  0xd5,
  0xc6,
  0xcd,
  0xf5,
  0x0a,
  0xfd,
  0xc5,
  0xa7,
  0xb7,
  0xbe,
  0xd5,
  0xe4,
  0xf4,
  0x97,
  0xb0,
  0xea,
  0xc0,
  0x73,
  0x91,
  0xff,
  0x08,
  0x11,
  0x75,
  0x7d,
  0x12,
  0x59,
  0x57,
  0x27,
  0xa9,
  0xe4,
  0x54,
  0xc7,
  0xa9,
  0x22,
  0xe8,
  0xe9,
  0x9b,
  0xae,
  0x3f,
  0xe1,
  0x63,
  0x20,
  0x50,
  0x46,
  0xd7,
  0x9f,
  0x3e,
  0x85,
  0xed,
  0xb0,
  0x47,
  0xd9,
  0xaf,
  0x6c,
  0xb7,
  0x3e,
  0x09,
  0xe3,
  0x5d,
  0xee,
  0x8a,
  0x05,
  0xfe,
  0x37,
  0x04,
  0xda,
  0x41,
  0x9e,
  0x99,
  0x10,
  0xd7,
  0x52,
  0x15,
  0xba,
  0xf8,
  0x84,
  0xeb,
  0x1e,
  0xe3,
  0x5b,
  0x4e,
  0x61,
  0x4d,
  0x1b,
  0x6b,
  0x29,
  0xc1,
  0x9b,
  0x0a,
  0x51,
  0xb4,
  0x28,
  0x2e,
  0x29,
  0x94,
  0xbc,
  0x18,
  0x04,
  0x9f,
  0x55,
  0xf7,
  0xa4,
  0x54,
  0xb8,
  0xb0,
  0x10,
  0x68,
  0xc2,
  0x6f,
  0x59,
  0xc8,
  0xf1,
  0x50,
  0xe1,
  0xa5,
  0xc7,
  0x23,
  0x33,
  0x64,
  0xd7,
  0xc6,
  0xbc,
  0xb6,
  0x35,
  0x3a,
  0x5a,
  0xea,
  0xfe,
  0xb5,
  0x5c,
  0x42,
  0x79,
  0xa8,
  0x91,
  0xf3,
  0x8e,
  0x31,
  0xf3,
  0x85,
  0x90,
  0x92,
  0x55,
  0x3d,
  0x87,
  0x22,
  0x24,
  0x11,
  0xb9,
  0x2a,
  0x0d,
  0x94,
  0x06,
  0x36,
  0x03,
  0xb9,
  0x72,
  0xf4,
  0xfd,
  0x41,
  0x44,
  0x0d,
  0x5f,
  0xb4,
  0x38,
  0x14,
  0xde,
  0x27,
  0xbc,
  0xc4,
  0xca,
  0x58,
  0xf6,
  0xe1,
  0x0b,
  0x94,
  0x6b,
  0x7d,
  0xde,
  0x68,
  0xeb,
  0x03,
  0xcd,
  0x82,
  0x9c,
  0x49,
  0x04,
  0xd1,
  0x0f,
  0x09,
  0x8f,
  0xdc,
  0x44,
  0xc9,
  0x13,
  0x3a,
  0x33,
  0x10,
  0x38,
  0x11,
  0xf1,
  0xd4,
  0x46,
  0xb2,
  0x55,
  0xbb,
  0xd0,
  0x79,
  0x50,
  0xed,
  0xa5,
  0x8d,
  0x3a,
  0xfd,
  0xac,
  0xb9,
  0x62,
  0x81,
  0xaf,
  0xa3,
  0x04,
  0xfd,
  0xf0,
  0x9a,
  0x62,
  0xfe,
  0xdc,
  0xe7,
  0x95,
  0xc8,
  0xca,
  0x9a,
  0x33,
  0x78,
  0x85,
  0x39,
  0x7d,
  0xdb,
  0xa1,
  0xba,
  0xa4,
  0xb8,
  0xbf,
  0xaf,
  0x5c,
  0x54,
  0x68,
  0x0b,
  0x52,
  0xdd,
  0x5c,
  0x23,
  0xf8,
  0xa7,
  0x8d,
  0x6e,
  0x34,
  0xde,
  0x40,
  0x98,
  0x8c,
  0x28,
  0xf3,
  0xac,
  0xb5,
  0x50,
  0x53,
  0x0a,
  0x4b,
  0xaa,
  0x5e,
  0x94,
  0x96,
  0xa3,
  0xf7,
  0x72,
  0x5a,
  0xd7,
  0x67,
  0x72,
  0xbe,
  0x42,
  0x22,
  0x6f,
  0x30,
  0x4f,
  0xa2,
  0x6d,
  0x83,
  0x6d,
  0x34,
  0xd2,
  0x52,
  0x53,
  0xb6,
  0x1e,
  0x76,
  0x41,
  0x56,
  0x4e,
  0xb0,
  0x4e,
  0x58,
  0xe9,
  0xf0,
  0x76,
  0xf1,
  0xab,
  0xe0,
  0x9e,
  0x71,
  0x9e,
  0x45,
  0x21,
  0x21,
  0x68,
  0xea,
  0xc7,
  0x9f,
  0x5f,
  0x0d,
  0x27,
  0x88,
  0x88,
  0xea,
  0x29,
  0x70,
  0xe0,
  0x73,
  0xa3,
  0x3d,
  0xf3,
  0x03,
  0x61,
  0x5f,
  0x2e,
  0xe4,
  0xd4,
  0xf6,
  0x17,
  0x44,
  0x3f,
  0xed,
  0x54,
  0xa4,
  0x0c,
  0x3b,
  0x93,
  0x5d,
  0x1e,
  0xea,
  0x5a,
  0x06,
  0x98,
  0x13,
  0x72,
  0x19,
  0x26,
  0x34,
  0xb9,
  0x05,
  0xd1,
  0xda,
  0xba,
  0xb2,
  0x5c,
  0xce,
  0xef,
  0x3e,
  0xe4,
  0xa4,
  0x83,
  0x02,
  0x18,
  0x58,
  0x99,
  0xdd,
  0x22,
  0x3a,
  0xe1,
  0xa3,
  0x17,
  0x7a,
  0x31,
  0xfe,
  0x59,
  0x0a,
  0x72,
  0x82,
  0x53,
  0x80,
  0xd9,
  0xe8,
  0xb3,
  0xfc,
  0x92,
  0x09,
  0xf6,
  0xfb,
  0x42,
  0xe1,
  0xed,
  0xf3,
  0x54,
  0x0d,
  0xc0,
  0xa3,
  0x14,
  0xe6,
  0x10,
  0xe1,
  0x33,
  0x23,
  0xf5,
  0x52,
  0x67,
  0x4d,
  0xa3,
  0xa6,
  0x73,
  0x5b,
  0x92,
  0x5a,
  0x86,
  0x78,
  0x53,
  0x15,
  0xaa,
  0x71,
  0x77,
  0x3c,
  0x95,
  0xb8,
  0x0c,
  0x21,
  0xa6,
  0xcb,
  0xb1,
  0x9c,
  0x5a,
  0xd6,
  0xfb,
  0x14,
  0xb5,
  0xd5,
  0x16,
  0xa4,
  0xc2,
  0xb7,
  0x47,
  0x23,
  0x53,
  0xa1,
  0x11,
  0x9a,
  0x0b,
  0x30,
  0x20,
  0x81,
  0x64,
  0xf6,
  0xda,
  0x59,
  0x90,
  0x60,
  0x91,
  0xe0,
  0x00,
  0x6a,
  0xc4,
  0xd2,
  0x17,
  0x99,
  0xe0,
  0xbb,
  0xd6,
  0x75,
  0x68,
  0xb6,
  0x01,
  0x32,
  0x37,
  0x32,
  0x64,
  0x30,
  0x05,
  0x91,
  0x1a,
  0x7d,
  0x7c,
  0x24,
  0x50,
  0x35,
  0xeb,
  0x1b,
  0xa2,
  0x6e,
  0xfb,
  0x70,
  0x05,
  0xa8,
  0x72,
  0x76,
  0xaa,
  0x91,
  0x4b,
  0x82,
  0x58,
  0xf4,
  0xd1,
  0xef,
  0x3e,
  0x51,
  0x51,
  0xd0,
  0x79,
  0xc4,
  0x1b,
  0x63,
  0x9f,
  0xc8,
  0x0b,
  0x83,
  0x58,
  0xaa,
  0x89,
  0x53,
  0xf2,
  0xcc,
  0x82,
  0x07,
  0xf7,
  0xeb,
  0xf8,
  0xa3,
  0x40,
  0x82,
  0x6b,
  0x67,
  0x66,
  0x0d,
  0xd7,
  0x79,
  0xf4,
  0x71,
  0xee,
  0x29,
  0xc1,
  0xd0,
  0x86,
  0x8c,
  0xcd,
  0xfc,
  0x12,
  0xd8,
  0xe1,
  0x24,
  0xcb,
  0x23,
  0xf0,
  0x7a,
  0xb9,
  0xaa,
  0x9c,
  0x57,
  0x3f,
  0x4f,
  0x4a,
  0x5e,
  0xfa,
  0x38,
  0x1c,
  0x3d,
  0x86,
  0xea,
  0x25,
  0xc5,
  0x21,
  0xa9,
  0x69,
  0xb3,
  0xfa,
  0x76,
  0x9e,
  0x28,
  0xcb,
  0x60,
  0xb8,
  0x85,
  0xa7,
  0xb2,
  0xfc,
  0xfe,
  0x02,
  0x7a,
  0x7a,
  0x6e,
  0x79,
  0x83,
  0xd0,
  0x8f,
  0x5c,
  0x14,
  0xf6,
  0x0a,
  0x85,
  0x88,
  0x47,
  0x21,
  0x4c,
  0xe0,
  0xec,
  0x72,
  0x47,
  0x10,
  0x4f,
  0x66,
  0x4f,
  0xf2,
  0x51,
  0x1d,
  0xa2,
  0x63,
  0xc8,
  0xd7,
  0xdb,
  0xe5,
  0xf2,
  0x05,
  0x43,
  0x91,
  0x75,
  0xe5,
  0x7f,
  0xce,
  0xb2,
  0x13,
  0x48,
  0x1f,
  0x09,
  0x9a,
  0xa0,
  0xd1,
  0xec,
  0x19,
  0x25,
  0xe7,
  0xea,
  0x1b,
  0xb3,
  0xe0,
  0x54,
  0x34,
  0x9f,
  0xd2,
  0x12,
  0x1c,
  0x91,
  0xe5,
  0x5a,
  0xa5,
  0x96,
  0x9e,
  0x04,
  0x15,
  0x82,
  0x97,
  0xdb,
  0xe0,
  0x67,
  0x3b,
  0x3f,
  0x35,
  0xe0,
  0x3b,
  0x53,
  0x07,
  0xe9,
  0x53,
  0xeb,
  0x14,
  0xf7,
  0x11,
  0x00,
  0x40,
  0x02,
  0x6e,
  0x75,
  0x76,
  0xa5,
  0x8e,
  0x4c,
  0x76,
  0xd5,
  0x5c,
  0xd1,
  0x35,
  0xff,
  0x14,
  0x0c,
  0xc3,
  0x83,
  0x55,
  0x2d,
  0x20,
  0x2c,
  0x22,
  0x6b,
  0x61,
  0xa9,
  0x28,
  0x7b,
  0x78,
  0xf2,
  0x32,
  0x29,
  0xd8,
  0xb7,
  0x4b,
  0xd7,
  0x1e,
  0xdb,
  0x84,
  0x2b,
  0xfb,
  0x92,
  0x40,
  0xec,
  0x72,
  0x69,
  0xfa,
  0xa2,
  0xfb,
  0xbb,
  0x88,
  0x3e,
  0xfd,
  0x3b,
  0xab,
  0xf9,
  0x72,
  0xc3,
  0xcb,
  0x5a,
  0x77,
  0xc1,
  0x32,
  0x2d,
  0xa1,
  0xeb,
  0x97,
  0xb0,
  0x60,
  0x0b,
  0x8d,
  0xf8,
  0xab,
  0x89,
  0x8a,
  0x14,
  0x71,
  0x10,
  0x61,
  0x01,
  0x07,
  0x11,
  0x95,
  0xce,
  0x22,
  0x77,
  0x3e,
  0x96,
  0x39,
  0xf2,
  0xdb,
  0x25,
  0x63,
  0xb0,
  0xc8,
  0x38,
  0xe2,
  0xf1,
  0xfb,
  0xe8,
  0xaf,
  0x85,
  0xf5,
  0x72,
  0x3b,
  0x8d,
  0xbe,
  0xec,
  0x11,
  0xfc,
  0x4e,
  0x72,
  0x5c,
  0xbb,
  0xc6,
  0x2c,
  0xdc,
  0xe4,
  0x16,
  0xda,
  0xad,
  0x18,
  0x80,
  0x81,
  0xeb,
  0x98,
  0xd9,
  0xb4,
  0x04,
  0x19,
  0x6e,
  0xb6,
  0x5e,
  0xe6,
  0x38,
  0xa8,
  0x6c,
  0xec,
  0xbc,
  0x30,
  0x75,
  0x12,
  0x9e,
  0x20,
  0x8e,
  0xa1,
  0x7f,
  0x0b,
  0x3c,
  0xe4,
  0xbf,
  0x12,
  0xc4,
  0x5c,
  0x3b,
  0x57,
  0xd3,
  0xac,
  0x7b,
  0x1a,
  0xaa,
  0x26,
  0xab,
  0xe8,
  0xe6,
  0x10,
  0x07,
  0x17,
  0x81,
  0x8f,
  0xd0,
  0x49,
  0x92,
  0xc0,
  0xac,
  0xc2,
  0x1b,
  0xa0,
  0xa7,
  0x89,
  0x36,
  0x2e,
  0x81,
  0x9c,
  0x9e,
  0xb6,
  0x8c,
  0x1b,
  0x85,
  0x4e,
  0x4b,
  0x68,
  0xa9,
  0xee,
  0xa1,
  0x94,
  0x4d,
  0xdf,
  0x3b,
  0xe1,
  0xa9,
  0x81,
  0x38,
  0xf1,
  0x3c,
  0x39,
  0xc2,
  0x0c,
  0x37,
  0x60,
  0xff,
  0x2b,
  0xc8,
  0x68,
  0x76,
  0x11,
  0xc3,
  0x6f,
  0x09,
  0x82,
  0xa2,
  0x4a,
  0x6e,
  0xb9,
  0x73,
  0xe0,
  0xad,
  0xc9,
  0xa3,
  0x94,
  0x10,
  0xf8,
  0xef,
  0xa6,
  0x85,
  0x0d,
  0x0e,
  0x57,
  0x69,
  0x38,
  0x5e,
  0x4e,
  0x07,
  0x64,
  0xbd,
  0x7b,
  0x04,
  0x5a,
  0x80,
  0xc4,
  0xcf,
  0x7e,
  0xdc,
  0xa3,
  0x31,
  0xbd,
  0xb6,
  0x34,
  0x26,
  0x55,
  0x97,
  0x87,
  0xec,
  0x03,
  0xf0,
  0x65,
  0xfe,
  0x11,
  0xb5,
  0xf5,
  0x4e,
  0x04,
  0x6f,
  0xc7,
  0x78,
  0x97,
  0x1f,
  0x90,
  0x0f,
  0x33,
  0xad,
  0x87,
  0xf5,
  0xee,
  0xab,
  0x55,
  0x9a,
  0x4e,
  0x49,
  0xd9,
  0x2f,
  0xe5,
  0x02,
  0x44,
  0x01,
  0x95,
  0xd0,
  0x57,
  0x1a,
  0x2a,
  0x6e,
  0xff,
  0x01,
  0x15,
  0x41,
  0x3d,
  0x5d,
  0xc1,
  0x56,
  0xbb,
  0x3e,
  0x60,
  0xc5,
  0x6b,
  0x28,
  0x92,
  0xe5,
  0xf7,
  0x1c,
  0xfe,
  0x09,
  0x71,
  0x84,
  0x2c,
  0xe4,
  0x1b,
  0xb4,
  0x31,
  0xa0,
  0xba,
  0x9b,
  0x49,
  0x6e,
  0xdf,
  0x7b,
  0x76,
  0xe2,
  0x6f,
  0x8e,
  0x9d,
  0xd5,
  0x1f,
  0x33,
  0x52,
  0xa8,
  0xc8,
  0x18,
  0xc3,
  0xe8,
  0x9e,
  0x1b,
  0x55,
  0x12,
  0xfc,
  0x1e,
  0x92,
  0xfa,
  0x5c,
  0xbb,
  0x14,
  0x49,
  0x28,
  0x10,
  0xe4,
  0x75,
  0xde,
  0xb0,
  0xa7,
  0x1e,
  0xa3,
  0xe7,
  0x82,
  0xa4,
  0x81,
  0xdb,
  0xcb,
  0x73,
  0x65,
  0x4e,
  0x2f,
  0x21,
  0x83,
  0x4d,
  0x84,
  0xbd,
  0x4d,
  0x7e,
  0xe4,
  0x23,
  0x9e,
  0x05,
  0x03,
  0x52,
  0xb6,
  0x86,
  0x62,
  0x54,
  0x4f,
  0x74,
  0x27,
  0xe3,
  0x26,
  0x95,
  0xe1,
  0xfe,
  0x9c,
  0xd8,
  0xff,
  0x4f,
  0xe8,
  0x84,
  0x5a,
  0x4c,
  0x2b,
  0xa7,
  0xca,
  0x84,
  0xb0,
  0x8c,
  0xbd,
  0xb9,
  0x72,
  0x3a,
  0xac,
  0x5e,
  0xb7,
  0xe0,
  0x77,
  0xf1,
  0x8f,
  0x96,
  0x9e,
  0x70,
  0x47,
  0xcb,
  0xbd,
  0x74,
  0x42,
  0x1e,
  0xdd,
  0xff,
  0x0f,
  0xfb,
  0x75,
  0xa3,
  0x07,
  0x85,
  0xa7,
  0x36,
  0xc3,
  0x07,
  0xdf,
  0x13,
  0xc1,
  0xb5,
  0xd8,
  0xe5,
  0x30,
  0x35,
  0x7f,
  0x14,
  0x39,
  0x32,
  0x8e,
  0x3f,
  0x0b,
  0x8a,
  0x9b,
  0xac,
  0xde,
  0xf3,
  0xe9,
  0x0f,
  0x07,
  0xba,
  0x84,
  0x93,
  0xda,
  0xe5,
  0x2d,
  0x8d,
  0xfa,
  0x94,
  0x45,
  0x25,
  0xc2,
  0x4d,
  0x9d,
  0xdf,
  0x96,
  0xd0,
  0x4b,
  0xf5,
  0x50,
  0x0c,
  0xcf,
  0x42,
  0xf7,
  0x0c,
  0xc3,
  0x75,
  0x1f,
  0xf8,
  0x72,
  0x41,
  0x27,
  0xd3,
  0xc8,
  0x31,
  0x84,
  0x30,
  0xf0,
  0xec,
  0x21,
  0x8f,
  0x39,
  0xae,
  0xa5,
  0x7b,
  0x86,
  0x4e,
  0x00,
  0x1f,
  0xea,
  0xf3,
  0xee,
  0x27,
  0xf7,
  0x4d,
  0x81,
  0xdd,
  0x15,
  0xa0,
  0x1d,
  0x6e,
  0xde,
  0xa0,
  0x13,
  0x41,
  0xbe,
  0x39,
  0x85,
  0xba,
  0x1a,
  0x4b,
  0x73,
  0x6a,
  0xc7,
  0x5e,
  0xfc,
  0x3c,
  0x98,
  0xa4,
  0xa3,
  0x9a,
  0x2c,
  0x2f,
  0x2a,
  0x7a,
  0x6c,
  0xa6,
  0x57,
  0x75,
  0x0e,
  0xc4,
  0xa2,
  0x98,
  0x43,
  0x04,
  0x37,
  0x5b,
  0x3b,
  0xfc,
  0x74,
  0x94,
  0x3f,
  0x1e,
  0x36,
  0xa0,
  0x99,
  0x6d,
  0xe0,
  0xe0,
  0x99,
  0xc2,
  0xdc,
  0x14,
  0x17,
  0x98,
  0x67,
  0x73,
  0x64,
  0xb6,
  0xcd,
  0x32,
  0xeb,
  0x93,
  0x19,
  0x21,
  0x2b,
  0xce,
  0x2e,
  0xd8,
  0xf6,
  0xa6,
  0x8c,
  0x1e,
  0x30,
  0x87,
  0x36,
  0x7b,
  0x02,
  0xb4,
  0xd8,
  0x55,
  0x11,
  0x96,
  0x59,
  0x63,
  0x61,
  0x15,
  0x5f,
  0xe3,
  0x96,
  0x5f,
  0x92,
  0x1b,
  0x6a,
  0xde,
  0x80,
  0x3c,
  0xf5,
  0xcf,
  0x37,
  0x88,
  0xe4,
  0x6e,
  0xd1,
  0xc8,
  0xed,
  0x87,
  0x3b,
  0x67,
  0x0c,
  0xec,
  0x89,
  0x2c,
  0x1d,
  0xe0,
  0x5f,
  0x0f,
  0x25,
  0x71,
  0x02,
  0x02,
  0x43,
  0xd2,
  0xc1,
  0x85,
  0x78,
  0x76,
  0x5b,
  0x20,
  0x57,
  0x19,
  0xc0,
  0x51,
  0x7b,
  0x32,
  0x1e,
  0x93,
  0xf1,
  0xc9,
  0xc5,
  0x4e,
  0xe1,
  0x42,
  0x19,
  0xc9,
  0xeb,
  0x6b,
  0x09,
  0x7f,
  0x05,
  0x6c,
  0xf6,
  0xed,
  0x6f,
  0x7c,
  0x73,
  0x1e,
  0x26,
  0xa4,
  0xe7,
  0x22,
  0xfc,
  0x74,
  0xbf,
  0xbf,
  0x7e,
  0x25,
  0x1c,
  0xdd,
  0xd1,
  0x87,
  0x42,
  0x83,
  0xbf,
  0x63,
  0xdc,
  0x91,
  0xfb,
  0x2e,
  0x93,
  0x08,
  0x6a,
  0x65,
  0xca,
  0xb7,
  0x91,
  0xe9,
  0x89,
  0x57,
  0xe6,
  0x48,
  0x40,
  0x1c,
  0x37,
  0xf5,
  0x2e,
  0xdb,
  0x1e,
  0xf4,
  0xf3,
  0x9a,
  0xb9,
  0x91,
  0x19,
  0x14,
  0xfb,
  0xde,
  0x25,
  0xea,
  0xfd,
  0x3f,
  0xaf,
  0x6c,
  0x33,
  0x3d,
  0x68,
  0x2a,
  0xb6,
  0xe0,
  0x10,
  0xfd,
  0x86,
  0xba,
  0x3d,
  0xc3,
  0x43,
  0xda,
  0xe7,
  0x96,
  0xae,
  0xaf,
  0x17,
  0x83,
  0xd5,
  0xfe,
  0x59,
  0xac,
  0xd0,
  0x80,
  0x4e,
  0x81,
  0x3a,
  0x88,
  0x45,
  0x98,
  0x55,
  0xc1,
  0xc6,
  0x5f,
  0xd2,
  0xa3,
  0x29,
  0x13,
  0x23,
  0xe5,
  0x3d,
  0x31,
  0x7f,
  0x02,
  0x16,
  0xb3,
  0x95,
  0x6d,
  0xb3,
  0x3e,
  0x51,
  0x74,
  0x41,
  0x29,
  0x98,
  0xd7,
  0x86,
  0xf3,
  0xc6,
  0x09,
  0x7a,
  0xc1,
  0x9d,
  0x29,
  0x88,
  0xbe,
  0xbb,
  0xa2,
  0x47,
  0x0f,
  0xd8,
  0x7f,
  0x1e,
  0x79,
  0x1b,
  0x5d,
  0x8f,
  0xdc,
  0x96,
  0xa0,
  0x6e,
  0x9e,
  0xa0,
  0xc4,
  0x65,
  0x05,
  0xc2,
  0xdc,
  0x89,
  0x7d,
  0x87,
  0x15,
  0xae,
  0x08,
  0x85,
  0x5f,
  0x14,
  0x2b,
  0xa6,
  0x56,
  0x04,
  0x60,
  0xf9,
  0x20,
  0xdc,
  0xcd,
  0x5c,
  0x04,
  0xc0,
  0xfe,
  0x3e,
  0x0a,
  0x65,
  0x1f,
  0x19,
  0xc1,
  0x63,
  0xe4,
  0xb9,
  0xe9,
  0x7c,
  0xbd,
  0x4e,
  0xbf,
  0x81,
  0x75,
  0x1a,
  0x20,
  0x89,
  0xdb,
  0xca,
  0x87,
  0x71,
  0xc2,
  0x34,
  0xec,
  0x96,
  0x70,
  0x2a,
  0x93,
  0xb2,
  0x41,
  0x55,
  0x27,
  0xb5,
  0x56,
  0x50,
  0x1b,
  0x84,
  0x83,
  0x4b,
  0x20,
  0x29,
  0x0e,
  0xe9,
  0x45,
  0xb4,
  0x09,
  0x06,
  0x12,
  0x6d,
  0x28,
  0xf2,
  0x21,
  0xd0,
  0xef,
  0xc1,
  0x6e,
  0xf0,
  0x87,
  0xa9,
  0xd2,
  0x79,
  0xd3,
  0xcb,
  0xb9,
  0xf2,
  0x78,
  0x58,
  0x6e,
  0xfe,
  0x74,
  0x0f,
  0xcd,
  0x70,
  0x54,
  0x2d,
  0x85,
  0x6f,
  0xc4,
  0xdc,
  0xbd,
  0xc4,
  0x48,
  0x9d,
  0x54,
  0xee,
  0x4a,
  0x29,
  0x06,
  0xce,
  0x92,
  0x30,
  0x58,
  0x65,
  0xb1,
  0xd6,
  0x88,
  0xf3,
  0x0b,
  0x24,
  0xec,
  0x64,
  0xeb,
  0x4e,
  0x3c,
  0x07,
  0x1b,
  0x3a,
  0xe6,
  0xe8,
  0xff,
  0x7b,
  0x22,
  0x18,
  0x7c,
  0xba,
  0x4f,
  0xfc,
  0xf8,
  0xe7,
  0x0c,
  0xa0,
  0xdb,
  0x87,
  0x7f,
  0x30,
  0x01,
  0x6a,
  0x65,
  0x7b,
  0x4f,
  0x5a,
  0x5c,
  0x4b,
  0x9c,
  0xde,
  0xe7,
  0x2e,
  0x40,
  0x6c,
  0x5f,
  0xe3,
  0x1f,
  0x39,
  0xce,
  0x4a,
  0xd8,
  0x8b,
  0xcf,
  0xe3,
  0xae,
  0x1a,
  0x4b,
  0x45,
  0x28,
  0x5f,
  0x28,
  0xd4,
  0x9b,
  0xd1,
  0x13,
  0xe5,
  0x34,
  0x0d,
  0x8f,
  0x9b,
  0xc5,
  0x3a,
  0x6c,
  0x67,
  0xe7,
  0x0c,
  0x23,
  0xea,
  0x6c,
  0xa4,
  0x33,
  0x7a,
  0x35,
  0x99,
  0x63,
  0xcb,
  0x75,
  0xd2,
  0x81,
  0x1e,
  0xf0,
  0xb3,
  0x27,
  0xf6,
  0xe0,
  0x5f,
  0xb3,
  0x25,
  0x2d,
  0xae,
  0x91,
  0xdc,
  0x4a,
  0x6e,
  0xc4,
  0xc9,
  0x57,
  0xc3,
  0x27,
  0x04,
  0x34,
  0x4c,
  0x8a,
  0x3c,
  0xfa,
  0x5c,
  0x85,
  0xb7,
  0x07,
  0x30,
  0xe4,
  0xae,
  0x84,
  0x89,
  0xc1,
  0x86,
  0x41,
  0xf1,
  0x85,
  0x5a,
  0x14,
  0xd5,
  0x30,
  0xc5,
  0x7e,
  0xe0,
  0xe5,
  0x28,
  0x65,
  0xc9,
  0xb2,
  0x78,
  0x37,
  0xcf,
  0xc4,
  0xcb,
  0x2a,
  0x46,
  0xdf,
  0x7c,
  0x43,
  0x7e,
  0x82,
  0x17,
  0x75,
  0x0d,
  0x44,
  0x53,
  0x6d,
  0x59,
  0xb9,
  0x61,
  0x33,
  0x3c,
  0x49,
  0x2e,
  0x29,
  0x2d,
  0x1f,
  0x31,
  0x69,
  0x1f,
  0x22,
  0xfe,
  0xb6,
  0x22,
  0x33,
  0x01,
  0xdf,
  0xc7,
  0xa4,
  0x0d,
  0x5e,
  0x5c,
  0x93,
  0x7d,
  0xa9,
  0xeb,
  0xe4,
  0x6d,
  0xa2,
  0x07,
  0x7f,
  0x27,
  0xa9,
  0xb5,
  0x1b,
  0x20,
  0x92,
  0xd9,
  0x5c,
  0x12,
  0x6b,
  0x11,
  0xe9,
  0x3e,
  0xce,
  0xef,
  0x79,
  0xa1,
  0x30,
  0x20,
  0x70,
  0x06,
  0xaa,
  0x93,
  0xb7,
  0xb4,
  0xc7,
  0xf9,
  0xd7,
  0xde,
  0x46,
  0x4d,
  0x32,
  0x05,
  0xf8,
  0xc6,
  0x29,
  0x7d,
  0x60,
  0xfc,
  0xf9,
  0xd4,
  0x52,
  0xa1,
  0xb2,
  0xb1,
  0x5d,
  0x82,
  0x6d,
  0x76,
  0xdc,
  0xde,
  0x64,
  0x20,
  0x56,
  0xf8,
  0xd6,
  0xb2,
  0x3e,
  0x96,
  0xd8,
  0x2c,
  0x35,
  0x66,
  0x18,
  0x05,
  0xbe,
  0xbd,
  0xb2,
  0xc7,
  0x1f,
  0x87,
  0x18,
  0x15,
  0xf6,
  0xda,
  0xb1,
  0x88,
  0xec,
  0xba,
  0x2e,
  0x35,
  0xba,
  0x22,
  0x93,
  0xb5,
  0x0c,
  0xeb,
  0x0b,
  0xe6,
  0xd9,
  0xaf,
  0xea,
  0x3e,
  0xc3,
  0x29,
  0xd0,
  0xbe,
  0xaf,
  0xf0,
  0xf2,
  0x08,
  0xfa,
  0x50,
  0xa6,
  0x24,
  0x4a,
  0x7a,
  0x27,
  0x68,
  0x05,
  0x9e,
  0xac,
  0x8f,
  0x5c,
  0x98,
  0xeb,
  0x3c,
  0x38,
  0x8d,
  0x92,
  0x1e,
  0x68,
  0x3e,
  0xc7,
  0xa7,
  0x60,
  0x6d,
  0xbc,
  0x29,
  0xb0,
  0xbe,
  0x74,
  0x38,
  0x11,
  0x7f,
  0x9f,
  0x32,
  0x47,
  0x70,
  0x89,
  0x49,
  0x94,
  0x3f,
  0x10,
  0xac,
  0x0c,
  0x60,
  0xaa,
  0xb0,
  0x0a,
  0xbb,
  0xbe,
  0xfb,
  0x90,
  0xcc,
  0xd3,
  0x92,
  0x7f,
  0xed,
  0x74,
  0x29,
  0x38,
  0xb0,
  0xa8,
  0xf8,
  0xa0,
  0xa9,
  0xf2,
  0xb3,
  0xcb,
  0x31,
  0x4c,
  0x96,
  0x8f,
  0x48,
  0xca,
  0x53,
  0x2a,
  0x63,
  0x6b,
  0xed,
  0xd0,
  0x9e,
  0x37,
  0x26,
  0x35,
  0x34,
  0x78,
  0x5f,
  0x6f,
  0x1d,
  0x89,
  0xcc,
  0xb2,
  0x04,
  0x7e,
  0xfb,
  0xae,
  0xdf,
  0x6b,
  0x69,
  0x61,
  0x2d,
  0x59,
  0xd3,
  0xd4,
  0xb2,
  0x9e,
  0x4f,
  0x84,
  0xef,
  0x3e,
  0xa3,
  0x0d,
  0xbb,
  0x82,
  0x62,
  0xd2,
  0xd7,
  0x78,
  0xe4,
  0xe5,
  0xc7,
  0x0a,
  0xd2,
  0xd2,
  0xdd,
  0x8d,
  0x7c,
  0xa6,
  0xcf,
  0x30,
  0x43,
  0xc6,
  0x11,
  0xfd,
  0x35,
  0x62,
  0xe6,
  0x8f,
  0x0a,
  0x5a,
  0x76,
  0xcf,
  0xc6,
  0x12,
  0xff,
  0x95,
  0x4a,
  0x28,
  0x4e,
  0x59,
  0xa9,
  0xf0,
  0xaa,
  0x2c,
  0xc8,
  0x45,
  0x2d,
  0x0f,
  0x65,
  0x40,
  0xe8,
  0x66,
  0x1e,
  0xac,
  0xb7,
  0xbe,
  0xe0,
  0x55,
  0x09,
  0x70,
  0xf0,
  0x7f,
  0x57,
  0x09,
  0x0a,
  0x24,
  0x4e,
  0x80,
  0x80,
  0x74,
  0x00,
  0x74,
  0xe6,
  0x6e,
  0x1e,
  0xfb,
  0x13,
  0x83,
  0x0c,
  0x14,
  0xbe,
  0x82,
  0x57,
  0xbb,
  0x8a,
  0x7e,
  0x34,
  0xe1,
  0xc3,
  0x3b,
  0x30,
  0x28,
  0x3f,
  0x74,
  0xa4,
  0x4c,
  0x36,
  0x8e,
  0x9b,
  0xb8,
  0xa0,
  0x43,
  0x33,
  0x21,
  0x6a,
  0x4a,
  0x04,
  0x95,
  0xf8,
  0x7f,
  0xd0,
  0xa1,
  0x43,
  0x2b,
  0xb4,
  0x3d,
  0x5c,
  0xa4,
  0x0d,
  0x1b,
  0xbc,
  0x6d,
  0x0c,
  0xbb,
  0xa7,
  0x57,
  0xe4,
  0x7a,
  0x8b,
  0x0f,
  0x3e,
  0x48,
  0x6c,
  0x8f,
  0xf1,
  0x9b,
  0x87,
  0xcc,
  0x04,
  0x21,
  0xda,
  0x02,
  0xbd,
  0x0c,
  0x16,
  0x83,
  0x27,
  0x4a,
  0x09,
  0x8a,
  0xd0,
  0xb5,
  0xdf,
  0x7d,
  0xaf,
  0x72,
  0x68,
  0x0c,
  0xe7,
  0xfc,
  0x5b,
  0x5e,
  0x1d,
  0x16,
  0x56,
  0xab,
  0xc7,
  0x60,
  0x28,
  0x81,
  0xf6,
  0x44,
  0x94,
  0x4f,
  0xfb,
  0xd9,
  0x67,
  0xe5,
  0x2c,
  0x1c,
  0x6c,
  0xdd,
  0x19,
  0xad,
  0xc0,
  0xb8,
  0x24,
  0xc5,
  0xcd,
  0x7c,
  0xa0,
  0xb5,
  0xa2,
  0xb0,
  0x84,
  0x59,
  0x01,
  0xc5,
  0x1e,
  0x60,
  0x61,
  0x9d,
  0x7f,
  0x4c,
  0x2c,
  0xcc,
  0xdf,
  0x1f,
  0xe5,
  0x5e,
  0x9a,
  0xeb,
  0x1f,
  0x95,
  0x5d,
  0x8e,
  0x99,
  0x10,
  0x3f,
  0x5f,
  0x38,
  0x28,
  0x09,
  0x71,
  0xfe,
  0xb4,
  0x36,
  0xfe,
  0xfc,
  0xb0,
  0x7d,
  0x49,
  0xa4,
  0xb9,
  0x2c,
  0x51,
  0x60,
  0xb3,
  0xb5,
  0x59,
  0x33,
  0xe5,
  0x94,
  0x07,
  0x02,
  0x6c,
  0xdf,
  0x34,
  0x05,
  0xb7,
  0xa9,
  0x1f,
  0x05,
  0x0d,
  0xe6,
  0xc5,
  0x55,
  0xcf,
  0x78,
  0x57,
  0x90,
  0x6a,
  0x2d,
  0x24,
  0xf4,
  0xc2,
  0xb2,
  0x1f,
  0x2f,
  0xab,
  0x13,
  0xee,
  0xf1,
  0x4a,
  0x18,
  0x29,
  0x99,
  0xc0,
  0x0a,
  0x48,
  0xac,
  0xbe,
  0x47,
  0xa4,
  0x4a,
  0x3a,
  0xfb,
  0x5a,
  0x4d,
  0xfb,
  0xed,
  0xe3,
  0x73,
  0x5d,
  0x47,
  0x67,
  0x89,
  0x77,
  0xee,
  0x25,
  0xdd,
  0x94,
  0x0f,
  0xaf,
  0x80,
  0xa5,
  0x80,
  0xa0,
  0xc3,
  0xb1,
  0x10,
  0x86,
  0x8f,
  0x74,
  0x88,
  0x50,
  0x21,
  0x8d,
  0x48,
  0x4d,
  0x1b,
  0x66,
  0xea,
  0x4d,
  0xbe,
  0xcd,
  0x8e,
  0x4f,
  0x1b,
  0xae,
  0x90,
  0x9c,
  0x5b,
  0xb1,
  0x96,
  0x84,
  0xe4,
  0x01,
  0x00,
  0x00,
  0x00,
  0x20,
  0x0a,
};

/*----------------------------------------------------------------------------------------
 *           P R O T O T Y P E S     O F     L O C A L     F U N C T I O N S
 *----------------------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------------------
 *                          E X P O R T E D    F U N C T I O N S
 *----------------------------------------------------------------------------------------
 */