/*
 * Copyright (c) 2019 SEAL AG
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* SoC level DTS fixup file */
#define DT_NUM_IRQ_PRIO_BITS		DT_ARM_V7M_NVIC_E000E100_ARM_NUM_IRQ_PRIORITY_BITS

#define DT_MCG_NAME			DT_NXP_KINETIS_MCG_40064000_LABEL

#define DT_SIM_NAME			DT_NXP_KINETIS_SIM_40047000_LABEL
#ifdef DT_NXP_KINETIS_SIM_40047000_CLKOUT_DIVIDER
#define DT_SIM_CLKOUT_DIVIDER		DT_NXP_KINETIS_SIM_40047000_CLKOUT_DIVIDER
#endif
#ifdef DT_NXP_KINETIS_SIM_40047000_CLKOUT_SOURCE
#define DT_SIM_CLKOUT_SOURCE		DT_NXP_KINETIS_SIM_40047000_CLKOUT_SOURCE
#endif

#define DT_FLASH_DEV_BASE_ADDRESS	DT_NXP_KINETIS_FTFA_40020000_BASE_ADDRESS
#define DT_FLASH_DEV_NAME		DT_NXP_KINETIS_FTFA_40020000_LABEL

#define DT_ADC_0_BASE_ADDRESS		DT_NXP_KINETIS_ADC16_4003B000_BASE_ADDRESS
#define DT_ADC_0_IRQ			DT_NXP_KINETIS_ADC16_4003B000_IRQ_0
#define DT_ADC_0_IRQ_PRI		DT_NXP_KINETIS_ADC16_4003B000_IRQ_0_PRIORITY
#define DT_ADC_0_NAME			DT_NXP_KINETIS_ADC16_4003B000_LABEL

#define DT_ENTROPY_MCUX_TRNG_BASE_ADDRESS	DT_NXP_KINETIS_TRNG_400A0000_BASE_ADDRESS
#define DT_ENTROPY_MCUX_TRNG_IRQ		DT_NXP_KINETIS_TRNG_400A0000_IRQ_0
#define DT_ENTROPY_MCUX_TRNG_IRQ_PRI		DT_NXP_KINETIS_TRNG_400A0000_IRQ_0_PRIORITY
#define DT_ENTROPY_MCUX_TRNG_NAME		DT_NXP_KINETIS_TRNG_400A0000_LABEL
#define CONFIG_ENTROPY_NAME			DT_NXP_KINETIS_TRNG_400A0000_LABEL

#define DT_RTC_0_NAME			DT_NXP_KINETIS_RTC_4003D000_LABEL

#define DT_USBD_KINETIS_NAME		DT_NXP_KINETIS_USBD_40072000_LABEL
#define DT_USBD_KINETIS_IRQ		DT_NXP_KINETIS_USBD_40072000_IRQ_USB_OTG
#define DT_USBD_KINETIS_IRQ_PRI		DT_NXP_KINETIS_USBD_40072000_IRQ_USB_OTG_PRIORITY
#define DT_USBD_KINETIS_BASE_ADDRESS	DT_NXP_KINETIS_USBD_40072000_BASE_ADDRESS
#define DT_USBD_KINETIS_NUM_BIDIR_EP	DT_NXP_KINETIS_USBD_40072000_NUM_BIDIR_ENDPOINTS
