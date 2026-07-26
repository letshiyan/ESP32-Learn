本仓库存放所有ESP32学习实验工程, 基于ESP-IDF开发

This warehouse stores all ESP32 learning and experimental projects developed based on ESP-IDF

在芯片模组背面只能看见 ESP32-S3-WROOM-1 ,所能获得的信息:

- WROOM: 表示集成PCB紧凑型模组
- -1: 是封装版本

后缀参数可以在订购代码中看见, 也就是问商家要, 或者烧录代码查看, 可以问豆包

本仓库所用芯片订购代码为: ESP32-S3R8V  

双内核, 240MHz主频,

RAM: 512K(SRAM) + 8M(PSRAM)

ROM: 384K(ROM) (不可编程)

封装: QFN-56

| 存储        | 类型                 | 断电数据 | 用途                    | 速度            |
| --------- | ------------------ | ---- | --------------------- | ------------- |
| ROM       | 内置只读程序区            | 永久保存 | 底层 Bootloader、基础驱动库   | 极快            |
| Flash     | 外置闪存（硬盘）           | 永久保存 | 固件程序、NVS 参数、文件系统      | 很慢            |
| **PSRAM** | 外置运行内存（内存条）        | 断电清空 | 超大缓冲区、图像、音频、AI 模型     | 中等，比片内 SRAM 慢 |
| 片上 SRAM   | 芯片内置运行内存           | 断电清空 | 任务堆栈、中断、实时小变量         | 最快            |
| Param     | 存在 Flash NVS 分区的参数 | 永久保存 | WiFi 密码、BLE 名称、传感器校准值 | -             |
| BLE       | 无线外设，不是存储          | -    | 低功耗蓝牙无线通信             | -             |

Project List:
- 0_HelloWorld: The first serial port print project of ESP32  
