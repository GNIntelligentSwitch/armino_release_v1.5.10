// Copyright 2020-2021 Beken
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

#ifdef __cplusplus
extern "C" {
#endif

#define DMA_V_WORK_MODE_SINGLE       0x0
#define DMA_V_WORK_MODE_REPEAT       0x1

#define DMA_V_PRIO_MODE_ROUND_ROBIN      0x0
#define DMA_V_PRIO_MODE_FIXED_PRIO       0x1

#define DMA_V_REQ_MUX_DTCM             (0x0)
#define DMA_V_REQ_MUX_AHB_MEM          (0x0)
#define DMA_V_REQ_MUX_UART1            (0x1)
#define DMA_V_REQ_MUX_UART1_RX         (0x2)
#define DMA_V_REQ_MUX_UART2            (0x3)
#define DMA_V_REQ_MUX_UART2_RX         (0x4)
#define DMA_V_REQ_MUX_UART3            (0x5)
#define DMA_V_REQ_MUX_UART3_RX         (0x6)
#define DMA_V_REQ_MUX_GSPI0            (0x7)
#define DMA_V_REQ_MUX_GSPI0_RX         (0x8)
#define DMA_V_REQ_MUX_GSPI1            (0x9)
#define DMA_V_REQ_MUX_GSPI1_RX         (0xA)
#define DMA_V_REQ_MUX_SDIO             (0xB)
#define DMA_V_REQ_MUX_SDIO_RX          (0xC)
#define DMA_V_REQ_MUX_AUDIO            (0xD)
#define DMA_V_REQ_MUX_AUDIO_RX         (0xE)
#define DMA_V_REQ_MUX_I2S              (0xF)
#define DMA_V_REQ_MUX_I2S_CH1          (0x10)
#define DMA_V_REQ_MUX_I2S_CH2          (0x11)
#define DMA_V_REQ_MUX_I2S_RX           (0x12)
#define DMA_V_REQ_MUX_I2S_RX_CH1       (0x13)
#define DMA_V_REQ_MUX_I2S_RX_CH2       (0x14)
#define DMA_V_REQ_MUX_I2S1             (0x15)
#define DMA_V_REQ_MUX_I2S1_RX          (0x16)
#define DMA_V_REQ_MUX_I2S2             (0x17)
#define DMA_V_REQ_MUX_I2S2_RX          (0x18)
#define DMA_V_REQ_MUX_JPEG             (0x19)
#define DMA_V_REQ_MUX_DISP_RX          (0x1A)
#define DMA_V_REQ_MUX_SDMADC_RX        (0x1B)
#define DMA_V_REQ_MUX_H264             (0x1C)

#define DMA_FINISH_INT_POS             (18)
#define DMA_HALF_FINISH_INT_POS        (19)

#ifdef __cplusplus
}
#endif

