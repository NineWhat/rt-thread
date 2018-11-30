/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-11-5      SummerGift   change to new framework
 */

#ifndef __BOARD_H__
#define __BOARD_H__

#include <rtthread.h>
#include <stm32f4xx.h>
#include "drv_common.h"

#ifdef BSP_USING_GPIO
#include "drv_gpio.h"
/* Board Pin definitions */
#define LED0_PIN                       GET_PIN(F,  9)
#define LED1_PIN                       GET_PIN(F, 10)
#endif

#define STM32_SRAM1_SIZE               (128)
#define STM32_SRAM1_START              (0x20000000)
#define STM32_SRAM1_END                (STM32_SRAM1_START + STM32_SRAM1_SIZE * 1024)

#define HEAP_BEGIN                     STM32_SRAM1_START
#define HEAP_END                       STM32_SRAM1_END

void SystemClock_Config(void);
void MX_GPIO_Init(void);

#endif

