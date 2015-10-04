/*
this file summerises all IOT node stack headers
*/

#ifndef INC_IOTS_SYSTEM_H
#define INC_IOTS_SYSTEM_H

//include iot stack
#include "iots.h"
#include "cmsis_os.h"
#include "stm32f4xx_hal.h"
//initialize all iot threads
void Iot_stack_init(void);
/* RTOS task prototypes -----------------------------------------------*/
static void StartDefaultTask(void const * argument);
static void BlinkGreen(void const * argument);




#endif