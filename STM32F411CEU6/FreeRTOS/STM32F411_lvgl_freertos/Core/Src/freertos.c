/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "stdio.h"	
#include "tftlcd.h"
#include "font.h"
#include "gui_2d_lib.h"
#include "gui_text_lib.h"
#include "gui_widget_text.h"
#include "gui_widget_progbar.h"
#include "lvgl.h"
#include "lv_port_disp_template.h"
#include "dma.h"
#include "spi.h"
#include "tim.h"
#include "gpio.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */
/* Definitions for TestTask */
osThreadId_t TestTaskHandle;
const osThreadAttr_t TestTask_attributes = {
  .name = "TestTask",
  .stack_size = 400 * 4,
  .priority = (osPriority_t) osPriorityNormal,
};
/* Definitions for myTask01 */
osThreadId_t myTask01Handle;
const osThreadAttr_t myTask01_attributes = {
  .name = "myTask01",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityNormal,
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */
char *strings[7]={"AUDIO", "#ff00ff BARS#", "#cccc00 IMAGE#", "#0000ff BLUETOOTH#",\
                  "#00ee00 BATTERY#", "#00cccc DIRECTORY#", "#ff0000 GPS#"};
char *symbols[7]={LV_SYMBOL_AUDIO, LV_SYMBOL_BARS, LV_SYMBOL_IMAGE, LV_SYMBOL_BLUETOOTH,\
                  LV_SYMBOL_BATTERY_2, LV_SYMBOL_DIRECTORY, LV_SYMBOL_GPS};
uint8_t string_ch = 0;
uint8_t string_set = 0;
/* USER CODE END FunctionPrototypes */

void StartDefaultTask(void *argument);
void StartTask02(void *argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of TestTask */
  TestTaskHandle = osThreadNew(StartDefaultTask, NULL, &TestTask_attributes);

  /* creation of myTask01 */
  myTask01Handle = osThreadNew(StartTask02, NULL, &myTask01_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the TestTask thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void *argument)
{
  /* USER CODE BEGIN StartDefaultTask */
    lv_init();
    HAL_TIM_Base_Start_IT(&htim2);
    lv_port_disp_init();  
    lv_obj_t* symbol = lv_label_create(lv_scr_act());
    lv_obj_t* text = lv_label_create(symbol);

    lv_label_set_recolor(text, true); 
    
    lv_label_set_text(symbol, symbols[string_ch]);
    lv_label_set_text(text, strings[string_ch]);
    
    lv_obj_set_width(text, LV_SIZE_CONTENT);
    lv_obj_align(text, LV_ALIGN_LEFT_MID, 25, 0);
    lv_obj_center(symbol);
    


  /* Infinite loop */
  for(;;)
  {
    if(string_set)
    {
        lv_label_set_text(symbol, symbols[string_ch]);
        lv_label_set_text(text, strings[string_ch]);
        string_set=0;
    }
    lv_task_handler();
    osDelay(1);
  }
  /* USER CODE END StartDefaultTask */
}

/* USER CODE BEGIN Header_StartTask02 */
/**
* @brief Function implementing the myTask01 thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartTask02 */
void StartTask02(void *argument)
{
  /* USER CODE BEGIN StartTask02 */
  LED_G(1);
  /* Infinite loop */
  for(;;)
  {    
   string_ch++;
   string_ch%=7;
   string_set=1;
   LED_G(0);
   osDelay(500);
   LED_G(1);
   osDelay(500);   
  }
  /* USER CODE END StartTask02 */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

