#include "iots_system.h"
//fsdfsd
static osThreadId defaultTaskHandle;
static osThreadId flashLEDgreenHandle;

/*--------IOT Stack functions-------*/
  //1.Physical layer 

  //2.Datalink layer 
  //3.Network layer 
  //4.Application layer 



void Iot_stack_init(void) {

  /* Create the thread(s) */
  /* definition and creation of defaultTask */
  osThreadDef(defaultTask, StartDefaultTask, osPriorityNormal, 0, 128);
  defaultTaskHandle = osThreadCreate(osThread(defaultTask), NULL);

  /* definition and creation of flashLEDgreen */
  osThreadDef(flashLEDgreen, BlinkGreen, osPriorityNormal, 0, 128);
  flashLEDgreenHandle = osThreadCreate(osThread(flashLEDgreen), NULL);
  
  //Application layer init
  Application_init();
  //Network layer init
  Network_init();
  //Datalink layer init
  Datalink_init();
  //Physicial layer init
  Phy_init();
  }

  /* USER CODE END 4 */

/* StartDefaultTask function */
static void StartDefaultTask(void const * argument)
{

  /* USER CODE BEGIN 5 */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END 5 */ 
}

/* BlinkGreen function */
static void BlinkGreen(void const * argument)
{
  /* USER CODE BEGIN BlinkGreen */
  /* Infinite loop */
  for(;;)
  {
    HAL_GPIO_TogglePin(GPIOG,GPIO_PIN_13);
    osDelay(100);
  }
  /* USER CODE END BlinkGreen */
}

