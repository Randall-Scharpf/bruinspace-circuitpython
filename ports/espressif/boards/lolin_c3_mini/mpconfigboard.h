/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Scott Shawcroft for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

// Micropython setup

#define MICROPY_HW_BOARD_NAME       "LOLIN_C3_MINI" // from Wemos MP
#define MICROPY_HW_MCU_NAME         "ESP32-C3FH4" // from Wemos MP

// From Wemos C3 Mini Schematic
// https://www.wemos.cc/en/latest/_static/files/sch_c3_mini_v1.0.0.pdf
// And MP Config
// https://github.com/micropython/micropython/blob/master/ports/esp32/boards/LOLIN_C3_MINI
#define DEFAULT_I2C_BUS_SCL (&pin_GPIO10)
#define DEFAULT_I2C_BUS_SDA (&pin_GPIO8)

#define DEFAULT_SPI_BUS_MOSI (&pin_GPIO4)
#define DEFAULT_SPI_BUS_MISO (&pin_GPIO3)
#define DEFAULT_SPI_BUS_SCK (&pin_GPIO2)

#define DEFAULT_UART_BUS_RX (&pin_GPIO20)
#define DEFAULT_UART_BUS_TX (&pin_GPIO21)

// // Serial over UART
#define CIRCUITPY_DEBUG_UART_RX     DEFAULT_UART_BUS_RX
#define CIRCUITPY_DEBUG_UART_TX     DEFAULT_UART_BUS_TX
