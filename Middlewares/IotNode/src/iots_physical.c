#include "iots_physical.h"

static osThreadId FlashLEDRedHandle;
static osThreadId Phy_threadFrameHandle;

void Phy_init(void){

  /* definition and creation of FlashLEDRed */
  osThreadDef(FlashLEDRed, BlinkRed, osPriorityNormal, 0, 128);
  FlashLEDRedHandle = osThreadCreate(osThread(FlashLEDRed), NULL);

    /* definition and creation of Phy_threadFrame */
  osThreadDef( createFrame, Phy_threadFrame, FRAMEPRIORITY, 0, FRAMESTACK);
  Phy_threadFrameHandle = osThreadCreate(osThread(createFrame), NULL);
}
/* BlinkRed function */
static void BlinkRed(void const * argument)
{
  /* USER CODE BEGIN BlinkRed */
  /* Infinite loop */
  for(;;)
  {

  }


  /* USER CODE END BlinkRed */
}

/**
  * @brief  FreeRTOS Task. Enabled when RF frame buffer queue is not empty. runs client code to reconstruct frames received via RF coms
  */
static void Phy_threadFrame(void const * argument)
{
  for(;;)
  {
    HAL_GPIO_TogglePin(GPIOG,GPIO_PIN_14);
    osDelay(510);
  }
}