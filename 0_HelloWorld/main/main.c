#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

void app_main(void)
{
    while (1)
    {
        ESP_LOGI("main","HelloWorld!\r\n");//Info信息级日志, 普通调试打印
        ESP_LOGE("main","HelloWorld!\r\n");//Error错误级日志, 报错打印
        printf("Hello World!\r\n");//无日志等级,无过滤
        vTaskDelay(500);
    }
    
}