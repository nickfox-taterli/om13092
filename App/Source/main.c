/* NXP includes. */
#include "fsl_device_registers.h"
#include "board.h"

/* FreeRTOS kernel includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "timers.h"

static void hello_task(void *pvParameters);

int main(void)
{
    BOARD_BootClockPLL180M();
    
    BOARD_InitPins();
    BOARD_InitSDRAM();   
    BOARD_InitSPIFI();
    
    if (xTaskCreate(hello_task, "Hello_task", configMINIMAL_STACK_SIZE + 100, NULL, configMAX_PRIORITIES - 1, NULL) !=
        pdPASS)
    {
        while (1)
            ;
    }
    vTaskStartScheduler();
    for (;;)
        ;
}       

uint8_t g_buffer[4096] = {0};

static void hello_task(void *pvParameters)
{
    for (uint16_t i = 0; i < 4096; i++)
    {
        g_buffer[i] = *((uint8_t *)0x10000000 + i);
        
    }
    for (;;)
    {
        vTaskSuspend(NULL);
    }
}
