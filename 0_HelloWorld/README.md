```
├── CMakeLists.txt
├── main
│   ├── CMakeLists.txt
│   └── main.c
└── README.md                  This is the file you are currently reading
```

本项目测试了两个打印组件    
vTaskDelay(500);    这里的参数单位是系统节拍Tick

ESP32默认  1Tick = 10 ms, 所以这里是延时了 500 $\times$ 10 ms = 5000 ms 也就是 5 秒

FreeRTOS 内核每隔固定时间触发一次**Tick 中断**，每触发 1 次 = 1 个 Tick

真实时间 == (1秒 / configTICK_RATE_HZ) * x

1 / 1000 * 500 = 0.5 s == 500 ms

SDK配置:

    配置时钟节拍:
        Freertos --> Kernel --> configTICK_RATE_HZ : 1000
    配置封装外Flash:
        Serial flasher config --> Flash SPI mode: QIO , Flash SPI speed: 80MHz , Flash size: 16MB
    配置封装内PSRAM:
        ESP PSRAM --> Mode (QUAD/OCT) of SPI RAM chip in use: Qctal Mode PSRAM , Set RAM clock speed: 80
    ESP32系统配置(主频):
        ESP System Settings: 240




    