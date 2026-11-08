# ARM-CORTEX-M4-Firmware-Command-Engine

**A Bare-Metal Embedded C Firmware Project for STM32F401RBT6**

A modular firmware command engine developed for the STM32F401RBT6 ARM Cortex-M4 microcontroller. It provides a UART-based Command Line Interface (CLI) to interact with hardware peripherals, retrieve system information, monitor sensor data, control GPIO, access an RTC, and communicate with an ESP8266 Wi-Fi module using AT commands.

---

## 1. Project Overview

The ARM Cortex-M4 Firmware Command Engine is designed to provide a command-driven interface between a user and an embedded system.

Through a serial terminal such as Tera Term, users can enter commands to control hardware, retrieve peripheral information, monitor sensor readings, and interact with external modules.

The project focuses on bare-metal firmware development, peripheral register-level programming, UART communication, command processing, and embedded system integration.

## 2. Key Features

- **UART Command Line Interface:** Interactive command execution through a serial terminal.
- **Command Processing:** Receives, identifies, and executes user-entered commands.
- **GPIO Control:** Controls GPIO operations through CLI commands.
- **ADC Monitoring:** Reads analog values from the STM32 ADC peripheral.
- **Temperature Monitoring:** Interfaces an LM35 temperature sensor with the ADC.
- **RTC Integration:** Communicates with the DS1307 RTC using the I2C protocol.
- **ESP8266 Wi-Fi Interface:** Communicates with the ESP8266 module using AT commands.
- **System Information:** Displays firmware and board-related information.
- **Command History:** Stores and displays previously entered commands.
- **System Reset:** Provides a command to reset the microcontroller.

## 3. Hardware Requirements

| Component | Purpose |
|---|---|
| STM32F401RBT6 | Main microcontroller |
| ESP8266 | Wi-Fi communication |
| DS1307 RTC | Real-time clock |
| LM35 | Temperature sensing |
| ST-Link | Programming and debugging |
| USB-to-UART / Serial connection | Terminal communication |

## 4. Software and Development Tools

| Tool | Purpose |
|---|---|
| Keil MDK-ARM | Firmware development and compilation |
| STM32CubeProgrammer | Flash programming |
| ST-Link | Debugging and programming |
| Tera Term | UART terminal interface |
| Embedded C | Firmware development |

## 5. Available CLI Commands

The firmware provides the following commands through the UART terminal.

| Command | Description |
|---|---|
| `help` | Displays available commands |
| `version` | Displays firmware version |
| `clear` | Clears the terminal screen |
| `info` | Displays system information |
| `time` | Displays RTC time |
| `date` | Displays RTC date |
| `led_on` | Turns ON the LED |
| `led_off` | Turns OFF the LED |
| `board_info` | Displays board information |
| `adc_info` | Displays ADC information |
| `gpio_info` | Displays GPIO information |
| `int_info` | Displays interrupt-related information |
| `temp` | Reads temperature from LM35 |
| `code_size` | Displays firmware code-size information |
| `whoami` | Displays system identification |
| `wifi_info` | Displays Wi-Fi module information |
| `wifi_status` | Displays Wi-Fi connection status |
| `reset` | Resets the microcontroller |
| `history` | Displays previously entered commands |
| `history_clear` | Clears command history |

## 6. System Architecture

The firmware follows a command-driven architecture.

```text
             USER
               |
               v
         Tera Term
               |
               v
        UART Communication
               |
               v
       Command Input Buffer
               |
               v
        Command Processing
               |
               v
       Command Execution
               |
       +-------+-------+
       |       |       |
       v       v       v
      GPIO    ADC     I2C
       |       |       |
       v       v       v
      LED    LM35    DS1307
                       RTC

               |
               v
          ESP8266
          Wi-Fi Module
               |
               v
          AT Commands
```

## 7. Peripheral Integration

### UART – Command Interface
- Receives commands from the serial terminal.
- Transmits command responses and system information.
- Acts as the primary communication interface between the user and firmware.

### ADC – Analog Data Acquisition
- Reads analog input values.
- Converts ADC digital values into corresponding voltage readings.
- Used for LM35 temperature measurement.

### I2C – RTC Communication
- Interfaces with the DS1307 RTC.
- Reads real-time clock and calendar information.
- Provides time and date through CLI commands.

### GPIO – Hardware Control
- Configures and controls GPIO pins.
- Provides LED control through terminal commands.

### ESP8266 – Wi-Fi Communication
- Communicates with the ESP8266 using UART and AT commands.
- Supports Wi-Fi module configuration and status-related commands.

## 8. Technologies and Concepts Demonstrated

- ARM Cortex-M4 Architecture
- Bare-Metal Embedded C Programming
- Memory-Mapped Peripheral Registers
- UART Serial Communication
- I2C Protocol
- ADC Configuration and Data Acquisition
- GPIO Configuration
- Command Parsing and String Handling
- Buffer Management
- Peripheral Interfacing
- ESP8266 AT Command Communication
- Firmware Debugging

## 9. Development Environment

**Microcontroller:** STM32F401RBT6

**Architecture:** ARM Cortex-M4

**Programming Language:** Embedded C

**IDE:** Keil µVision

**Debugging Interface:** ST-Link

**Serial Terminal:** Tera Term

## 10. How to Use

1. Clone or download this repository.
2. Open the firmware project in Keil µVision.
3. Build the project.
4. Flash the generated firmware to the STM32F401RBT6 using ST-Link.
5. Connect the board to your computer through a UART interface.
6. Open Tera Term and configure the correct COM port and baud rate.
7. Enter CLI commands and observe the responses.

**Note:** Configure the UART baud rate, GPIO pins, and peripheral connections according to your hardware setup.

## 11. Project Objectives

- Develop a command-driven embedded firmware interface.
- Understand low-level STM32 peripheral configuration.
- Integrate multiple hardware peripherals into one firmware application.
- Improve UART communication and command-processing skills.
- Apply bare-metal programming concepts in a practical embedded system.

## 12. Future Enhancements

- Implement a more advanced command parser.
- Add UART command auto-completion.
- Implement configurable command history.
- Add firmware update functionality through UART.
- Extend ESP8266 communication with remote command execution.
- Add more peripheral monitoring commands.

## 13. Author

**Project:** ARM Cortex-M4 Firmware Command Engine

**Platform:** STM32F401RBT6

**Domain:** Embedded Systems | Firmware Development | Bare-Metal Programming

---

*Developed as a hands-on embedded firmware project to explore ARM Cortex-M4 programming, peripheral interfacing, and command-driven system control.*
