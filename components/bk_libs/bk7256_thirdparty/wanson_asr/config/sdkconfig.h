/*
 * Automatically generated file. DO NOT EDIT.
 * Beken IoT Development Framework (BEKEN-ARMINO) Configuration Header
 */
#pragma once
#define CONFIG_SOC_BK7256 1
#define CONFIG_SOC_STR "bk7256"
#define CONFIG_SOC_ARCH "riscv"
#define CONFIG_SOC_BK7256XX 1
#define CONFIG_TOOLCHAIN_PATH "/opt/risc-v/nds32le-elf-mculib-v5f/bin"
#define CONFIG_TOOLCHAIN_PREFIX "riscv32-elf-"
#define CONFIG_ASSERT_REBOOT 1
#define CONFIG_NO_HOSTED 1
#define CONFIG_BLUETOOTH 1
#define CONFIG_AUDIO_AEC 1
#define CONFIG_AUDIO_NS 1
#define CONFIG_AUDIO_VAD 1
#define CONFIG_AUDIO_RING_BUFF 1
#define CONFIG_AUDIO_FLAC 1
#define CONFIG_AUDIO_G711 1
#define CONFIG_AUDIO_MP3 1
#define CONFIG_AUDIO_OGG 1
#define CONFIG_AUDIO_RSP 1
#define CONFIG_AUDIO_SBC 1
#define CONFIG_CALI 1
#define CONFIG_MANUAL_CALI 1
#define CONFIG_TPC_PA_MAP 1
#define CONFIG_TEMP_DETECT 1
#define CONFIG_SARADC_CALI 1
#define CONFIG_LA_CAPTURE_MAC_DIAGS 1
#define CONFIG_INT_WDT 1
#define CONFIG_INT_WDT_PERIOD_MS 20000
#define CONFIG_TASK_WDT 1
#define CONFIG_TASK_WDT_PERIOD_MS 60000
#define CONFIG_NMI_WDT_EN 1
#define CONFIG_INT_AON_WDT_PERIOD_MS 1000
#define CONFIG_UART1 1
#define CONFIG_UART2 1
#define CONFIG_PRINT_PORT_UART1 1
#define CONFIG_UART_PRINT_PORT 0
#define CONFIG_UART_ATE_PORT 0
#define CONFIG_PRINTF_BUF_SIZE 128
#define CONFIG_KFIFO_SIZE 128
#define CONFIG_UART_LOW_VOLTAGE_SUPPORT 1
#define CONFIG_TRNG_SUPPORT 1
#define CONFIG_SDIO_HOST 1
#define CONFIG_SDIO_HOST_DEFAULT_CLOCK_FREQ 7
#define CONFIG_SDCARD_V2P0 1
#define CONFIG_SDCARD_DEFAULT_CLOCK_FREQ 9
#define CONFIG_FATFS 1
#define CONFIG_FATFS_SDCARD 1
#define CONFIG_SPI_DMA 1
#define CONFIG_SPI_SLAVE 1
#define CONFIG_SPI_MASTER 1
#define CONFIG_SPI_STATIS 1
#define CONFIG_SPI_SUPPORT_TX_FIFO_WR_READY 1
#define CONFIG_QSPI 1
#define CONFIG_QSPI_STATIS 1
#define CONFIG_AON_RTC 1
#define CONFIG_AON_RTC_MANY_USERS 1
#define CONFIG_AON_RTC_TEST 1
#define CONFIG_AON_RTC_KEEP_TIME_SUPPORT 1
#define CONFIG_GPIO_WAKEUP_SUPPORT 1
#define CONFIG_GPIO_DYNAMIC_WAKEUP_SUPPORT 1
#define CONFIG_GPIO_DYNAMIC_WAKEUP_SOURCE_MAX_CNT 4
#define CONFIG_GPIO_SIMULATE_UART_WRITE 1
#define CONFIG_GPIO_DEFAULT_SET_SUPPORT 1
#define CONFIG_AON_PMU 1
#define CONFIG_GENERAL_DMA 1
#define CONFIG_TOUCH 1
#define CONFIG_JPEG_ENCODE 1
#define CONFIG_PSRAM 1
#define CONFIG_XTAL_FREQ_26M 1
#define CONFIG_XTAL_FREQ 26000000
#define CONFIG_DCO_FREQ 120000000
#define CONFIG_SYSTEM_CTRL 1
#define CONFIG_POWER_CLOCK_RF 1
#define CONFIG_I2C 1
#define CONFIG_I2C_SUPPORT_ID_BITS 3
#define CONFIG_SIM_I2C 1
#define CONFIG_AUDIO 1
#define CONFIG_AUDIO_RISCV_IP_V1_0 1
#define CONFIG_PWM 1
#define CONFIG_TIMER 1
#define CONFIG_TIMER_COUNTER 1
#define CONFIG_TIMER_SUPPORT_ID_BITS 7
#define CONFIG_SARADC 1
#define CONFIG_SARADC_RANGE_DIVIDE 1
#define CONFIG_FLASH 1
#define CONFIG_FLASH_QUAD_ENABLE 1
#define CONFIG_FLASH_SRC_CLK_60M 1
#define CONFIG_LCD 1
#define CONFIG_MAC_PHY_BYPASS 1
#define CONFIG_DMA2D 1
#define CONFIG_JPEG_DEC 1
#define CONFIG_EFUSE 1
#define CONFIG_CHANGE_JTAG_GPIO 1
#define CONFIG_RESET_REASON 1
#define CONFIG_CPU_FREQ_HZ 120000000
#define CONFIG_ARCH_RISCV 1
#define CONFIG_NEST_INT_SUPPORT 1
#define CONFIG_MEMDUMP_ALL 1
#define CONFIG_CACHE_ENABLE 1
#define CONFIG_BT 1
#define CONFIG_BLE 1
#define CONFIG_BTDM_5_2_MINDTREE 1
#define CONFIG_CLI 1
#define CONFIG_BKREG 1
#define CONFIG_MAX_COMMANDS 255
#define CONFIG_PERI_TEST 1
#define CONFIG_SHELL_ASYNCLOG 1
#define CONFIG_SECURITYIP 1
#define CONFIG_IDLE_UART_OUT_TEST 1
#define CONFIG_RWNX_PROTO_DEBUG 1
#define CONFIG_CUSTOMIZE_HEAP_SIZE 163840
#define CONFIG_FREERTOS 1
#define CONFIG_FREERTOS_V10 1
#define CONFIG_FREERTOS_USE_TICKLESS_IDLE 2
#define CONFIG_MEM_DEBUG 1
#define CONFIG_MEM_DEBUG_FUNC_NAME 1
#define CONFIG_MEM_DEBUG_FUNC_NAME_LEN 32
#define CONFIG_MEM_DEBUG_TASK_NAME 1
#define CONFIG_MEM_DEBUG_TASK_NAME_LEN 8
#define CONFIG_MQTT_ACK_NOW 1
#define CONFIG_WIFI4 1
#define CONFIG_BLE_PS 1
#define CONFIG_BLE_MESH_NONE 1
#define CONFIG_BLE_ADV_NUM 1
#define CONFIG_BLE_SCAN_NUM 1
#define CONFIG_BLE_INIT_NUM 1
#define CONFIG_BLE_CONN_NUM 2
#define CONFIG_BLE_WIFI_EXCHANGE 1
#define CONFIG_ACLSEMI_BTC_FEATURE_INCLUDED 1
#define CONFIG_BT_CONN_NUM 2
#define CONFIG_BLE_HOST_ETHERMIND 1
#define CONFIG_AVDTP 1
#define CONFIG_A2DP 1
#define CONFIG_A2DP_SINK 1
#define CONFIG_ACLSEMI_BT_MESH_DEBUG_LEVEL 4
#define CONFIG_BT_HOST_NONE 1
#define CONFIG_BT_SRC_ADD 0x280000
#define CONFIG_HOMEKIT 1
#define CONFIG_WIFI_MAC_VERSION "V21"
#define CONFIG_WIFI_MDM_VERSION "v30"
#define CONFIG_WIFI_PLF_VERSION "v31"
#define CONFIG_MOBILE_CONNECT_SAP_STATISTICS 1
#define CONFIG_MM_PS_SET_LISTEN_INTERVAL_VALUE 30
#define CONFIG_MM_BEACON_LOSS_INITAL_COEFF 4
#define CONFIG_MM_BEACON_LOSS_LOW_COEFF 8
#define CONFIG_MM_BEACON_LOSS_MIDDLE_COEFF 20
#define CONFIG_MM_BEACON_LOSS_HIGH_COEFF 40
#define CONFIG_MM_BEACON_LOSS_RSSI_THRESHOLD -80
#define CONFIG_HE_MCS_LIMIT_7 1
#define CONFIG_MAC_CHAN 1
#define CONFIG_LVGL 1
#define CONFIG_NET_PARAM_INTF 1
#define CONFIG_POWER_SAVE 1
#define CONFIG_MCU_PS 1
#define CONFIG_TICK_CALI 1
#define CONFIG_PM_V2 1
#define CONFIG_MAC_TX_CACHE 1
#define CONFIG_RF_TEST 1
#define CONFIG_TX_EVM_TEST 1
#define CONFIG_RX_SENSE_TEST 1
#define CONFIG_MSDU_RESV_HEAD_LEN 96
#define CONFIG_MSDU_RESV_TAIL_LEN 16
#define CONFIG_ATE 1
#define CONFIG_USB 1
#define CONFIG_USB_HOST 1
#define CONFIG_USB2_PORT 1
#define CONFIG_TASK_USB_PRIO 5
#define CONFIG_USB_UVC 1
#define CONFIG_USB_UAC 1
#define CONFIG_USB_UAC_MIC 1
#define CONFIG_USB_UAC_SPEAKER 1
#define CONFIG_DSP_SRC_ADD 0x130000
#define CONFIG_VAD 1
#define CONFIG_VIDEO_AVI 1
#define CONFIG_LCD_DMA2D_BLEND_FONT 1
#define CONFIG_VIDEO_QR_CODE_GEN 1
#define CONFIG_VIDEO_SCALE 1
#define CONFIG_JPEGDEC_TJPG 1
