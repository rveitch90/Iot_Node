#ifndef INC_IOTS_PHYSICAL_H
#define INC_IOTS_PHYSICAL_H

#include "cmsis_os.h"
#include "stm32f4xx_hal.h"
void Phy_init(void);
/* Hardware abstraction  ----------------------------------------------*/

/* RTOS task prototypes -----------------------------------------------*/
static void BlinkRed(void const * argument);//example
static void Phy_threadFrame(void const * argument);

/* RTOS task configurations -------------------------------------------*/
//task priority settings
#define FRAMEPRIORITY osPriorityNormal
//stack size configuration
#define FRAMESTACK    128
#endif