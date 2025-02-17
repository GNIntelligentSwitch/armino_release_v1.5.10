// Copyright 2022-2023 Beken
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "partitions_gen.h"

#ifndef CONFIG_BL1_PHY_PARTITION_OFFSET
#define CONFIG_BL1_PHY_PARTITION_OFFSET               0x0
#define CONFIG_BL1_PHY_PARTITION_SIZE                 0x20000
#define CONFIG_BL1_PHY_CODE_START                     0x0
#define CONFIG_BL1_VIRTUAL_PARTITION_SIZE             0x1e000
#define CONFIG_BL1_VIRTUAL_CODE_START                 0x0
#define CONFIG_BL1_VIRTUAL_CODE_SIZE                  0x1dfde
#endif

#ifndef CONFIG_BL1_CONTROL_PHY_PARTITION_OFFSET
#define CONFIG_BL1_CONTROL_PHY_PARTITION_OFFSET       0x20000
#define CONFIG_BL1_CONTROL_PHY_PARTITION_SIZE         0x3000
#define CONFIG_BL1_CONTROL_PHY_DATA_START             0x20000
#endif

#ifndef CONFIG_PRIMARY_MANIFEST_PHY_PARTITION_OFFSET
#define CONFIG_PRIMARY_MANIFEST_PHY_PARTITION_OFFSET  0x23000
#define CONFIG_PRIMARY_MANIFEST_PHY_PARTITION_SIZE    0x1000
#define CONFIG_PRIMARY_MANIFEST_PHY_DATA_START        0x23000
#endif

#ifndef CONFIG_PRIMARY_BL2_PHY_PARTITION_OFFSET
#define CONFIG_PRIMARY_BL2_PHY_PARTITION_OFFSET       0x24000
#define CONFIG_PRIMARY_BL2_PHY_PARTITION_SIZE         0x10000
#define CONFIG_PRIMARY_BL2_PHY_CODE_START             0x24068
#define CONFIG_PRIMARY_BL2_VIRTUAL_PARTITION_SIZE     0xf000
#define CONFIG_PRIMARY_BL2_VIRTUAL_CODE_START         0x21e80
#define CONFIG_PRIMARY_BL2_VIRTUAL_CODE_SIZE          0xefde
#endif

#ifndef CONFIG_SECONDARY_MANIFEST_PHY_PARTITION_OFFSET
#define CONFIG_SECONDARY_MANIFEST_PHY_PARTITION_OFFSET 0x34000
#define CONFIG_SECONDARY_MANIFEST_PHY_PARTITION_SIZE  0x1000
#define CONFIG_SECONDARY_MANIFEST_PHY_DATA_START      0x34000
#endif

#ifndef CONFIG_SECONDARY_BL2_PHY_PARTITION_OFFSET
#define CONFIG_SECONDARY_BL2_PHY_PARTITION_OFFSET     0x35000
#define CONFIG_SECONDARY_BL2_PHY_PARTITION_SIZE       0x10000
#define CONFIG_SECONDARY_BL2_PHY_CODE_START           0x35068
#define CONFIG_SECONDARY_BL2_VIRTUAL_PARTITION_SIZE   0xf000
#define CONFIG_SECONDARY_BL2_VIRTUAL_CODE_START       0x31e80
#define CONFIG_SECONDARY_BL2_VIRTUAL_CODE_SIZE        0xefde
#endif

#ifndef CONFIG_PRIMARY_S_PHY_PARTITION_OFFSET
#define CONFIG_PRIMARY_S_PHY_PARTITION_OFFSET         0x45000
#define CONFIG_PRIMARY_S_PHY_PARTITION_SIZE           0x68000
#define CONFIG_PRIMARY_S_PHY_CODE_START               0x46068
#define CONFIG_PRIMARY_S_PHY_HDR_SIZE                 0x1000
#define CONFIG_PRIMARY_S_PHY_TAIL_SIZE                0x1000
#define CONFIG_PRIMARY_S_VIRTUAL_PARTITION_SIZE       0x61000
#define CONFIG_PRIMARY_S_VIRTUAL_CODE_START           0x41e80
#define CONFIG_PRIMARY_S_VIRTUAL_CODE_SIZE            0x5efde
#endif

#ifndef CONFIG_PRIMARY_NS_PHY_PARTITION_OFFSET
#define CONFIG_PRIMARY_NS_PHY_PARTITION_OFFSET        0x0
#define CONFIG_PRIMARY_NS_PHY_PARTITION_SIZE          0x140000
#define CONFIG_PRIMARY_NS_PHY_CODE_START              0x0
#define CONFIG_PRIMARY_NS_PHY_HDR_SIZE                0x1000
#define CONFIG_PRIMARY_NS_PHY_TAIL_SIZE               0x1000
#define CONFIG_PRIMARY_NS_VIRTUAL_PARTITION_SIZE      0x3c000
#define CONFIG_PRIMARY_NS_VIRTUAL_CODE_START          0xa3c80
#define CONFIG_PRIMARY_NS_VIRTUAL_CODE_SIZE           0x39fde
#endif

#ifndef CONFIG_SECONDARY_S_PHY_PARTITION_OFFSET
#define CONFIG_SECONDARY_S_PHY_PARTITION_OFFSET       0xed000
#define CONFIG_SECONDARY_S_PHY_PARTITION_SIZE         0x68000
#define CONFIG_SECONDARY_S_PHY_CODE_START             0xee000
#define CONFIG_SECONDARY_S_PHY_HDR_SIZE               0x1000
#define CONFIG_SECONDARY_S_PHY_TAIL_SIZE              0x1000
#define CONFIG_SECONDARY_S_VIRTUAL_PARTITION_SIZE     0x61000
#define CONFIG_SECONDARY_S_VIRTUAL_CODE_START         0xe0000
#define CONFIG_SECONDARY_S_VIRTUAL_CODE_SIZE          0x5efde
#endif

#ifndef CONFIG_SECONDARY_NS_PHY_PARTITION_OFFSET
#define CONFIG_SECONDARY_NS_PHY_PARTITION_OFFSET      0x155000
#define CONFIG_SECONDARY_NS_PHY_PARTITION_SIZE        0x40000
#define CONFIG_SECONDARY_NS_PHY_CODE_START            0x156068
#define CONFIG_SECONDARY_NS_PHY_HDR_SIZE              0x1000
#define CONFIG_SECONDARY_NS_PHY_TAIL_SIZE             0x1000
#define CONFIG_SECONDARY_NS_VIRTUAL_PARTITION_SIZE    0x3c000
#define CONFIG_SECONDARY_NS_VIRTUAL_CODE_START        0x141e80
#define CONFIG_SECONDARY_NS_VIRTUAL_CODE_SIZE         0x39fde
#endif

#ifndef CONFIG_SCRATCH_PHY_PARTITION_OFFSET
#define CONFIG_SCRATCH_PHY_PARTITION_OFFSET           0x195000
#define CONFIG_SCRATCH_PHY_PARTITION_SIZE             0x8000
#define CONFIG_SCRATCH_PHY_DATA_START                 0x195000
#endif

#ifndef CONFIG_PS_PHY_PARTITION_OFFSET
#define CONFIG_PS_PHY_PARTITION_OFFSET                0x19d000
#define CONFIG_PS_PHY_PARTITION_SIZE                  0x8000
#define CONFIG_PS_PHY_DATA_START                      0x19d000
#endif

#ifndef CONFIG_ITS_PHY_PARTITION_OFFSET
#define CONFIG_ITS_PHY_PARTITION_OFFSET               0x1a5000
#define CONFIG_ITS_PHY_PARTITION_SIZE                 0x8000
#define CONFIG_ITS_PHY_DATA_START                     0x1a5000
#endif

#ifndef CONFIG_PRIMARY_APP_PHY_PARTITION_OFFSET
#define CONFIG_PRIMARY_APP_PHY_PARTITION_OFFSET        0x0
#define CONFIG_PRIMARY_APP_PHY_PARTITION_SIZE          0x180000
#define CONFIG_PRIMARY_APP_PHY_CODE_START              0x0
#define CONFIG_PRIMARY_APP_VIRTUAL_PARTITION_SIZE      0x169000
#define CONFIG_PRIMARY_APP_VIRTUAL_CODE_START          0x0
#define CONFIG_PRIMARY_APP_VIRTUAL_CODE_SIZE           0x168fde
#endif
