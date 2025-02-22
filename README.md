# SSD1306 Library for Raspberry Pi Pico W

![SSD1306 OLED Display](https://upload.wikimedia.org/wikipedia/commons/thumb/0/02/SSD1306.svg/120px-SSD1306.svg.png)

## Introduction
This library is designed to simplify the use of the **SSD1306 OLED display** with the **Raspberry Pi Pico W**. The SSD1306 is a popular **monochrome OLED display**, widely used in electronics projects due to its high resolution and low power consumption. This library provides an easy-to-use interface for:
- Display initialization
- Drawing geometric shapes
- Rendering text and graphics
- Controlling display settings

## Purpose
The primary goal of this library is to **streamline** the process of interfacing with the **SSD1306** using the **Raspberry Pi Pico W**. By using this library, developers can quickly integrate the display into their projects without handling low-level **I2C** or **SPI** communication.

## Features
### Initialization
- `ssd1306_Init()`: Initializes the SSD1306 display, sets up I2C communication, and clears the screen.

### Display Control
- `ssd1306_SetDisplayOn(bool on)`: Turns the display on/off.
- `ssd1306_SetContrast(uint8_t contrast)`: Adjusts the display contrast.
- `ssd1306_UpdateScreen()`: Updates the display with the contents of the screen buffer.

### Drawing Shapes
- `ssd1306_DrawPixel(int x, int y, bool color)`: Draws a pixel at `(x, y)`.
- `ssd1306_DrawLine(int x1, int y1, int x2, int y2, bool color)`: Draws a line using **Bresenham's algorithm**.
- `ssd1306_DrawRectangle(int x, int y, int w, int h, bool color)`: Draws a rectangle.
- `ssd1306_FillRectangle(int x, int y, int w, int h, bool color)`: Draws a filled rectangle.
- `ssd1306_DrawCircle(int x, int y, int r, bool color)`: Draws a circle using **Bresenham's algorithm**.
- `ssd1306_FillCircle(int x, int y, int r, bool color)`: Draws a filled circle.

### Text Rendering
- `ssd1306_WriteChar(char ch, FontDef font, bool color)`: Writes a character using a specified font.
- `ssd1306_WriteString(const char* str, FontDef font, bool color)`: Writes a string using a specified font.
- `ssd1306_SetCursor(int x, int y)`: Sets the cursor position for text rendering.

### Buffer Manipulation
- `ssd1306_Fill(bool color)`: Fills the screen buffer with a color (black/white).
- `ssd1306_FillBuffer(uint8_t* buffer, size_t size)`: Fills the screen buffer with data from an external buffer.

### Low-Level Functions
- `ssd1306_WriteCommand(uint8_t command)`: Sends a command to the display.
- `ssd1306_WriteData(uint8_t data)`: Sends data to the display.
- `ssd1306_Reset()`: Resets the display (for I2C, this function has no effect).

## Getting Started
### 1. **Installation**
Clone this repository and include the library files in your project:

```sh
$ git clone https://github.com/your-username/ssd1306-library.git
```

### 2. **Hardware Setup**
Connect the **SSD1306 OLED display** to the **Raspberry Pi Pico W** using **I2C**:

| OLED Pin | Pico W Pin |
|----------|-----------|
| VCC      | 3.3V      |
| GND      | GND       |
| SDA      | 14 (I2C1) |
| SCL      | 15 (I2C1) |

### 3. **Example Code**
Here’s a simple example to initialize the display and show text:

```c
#include "ssd1306.h"

int main() {
    ssd1306_Init();
    ssd1306_SetCursor(10, 10);
    ssd1306_WriteString("Hello, World!", Font_7x10, 1);
    ssd1306_UpdateScreen();
    while (1);
}
```

## Conclusion
The **SSD1306 Library for Raspberry Pi Pico W** is a powerful tool for developers looking to integrate **OLED displays** into their projects. With functions for **initialization, display control, shape drawing, and text rendering**, the library simplifies development and enables the creation of **clean and interactive** user interfaces.

For any questions or contributions, feel free to open an **issue** or submit a **pull request**!

---

**Made with ❤️ for embedded developers!** 🚀
