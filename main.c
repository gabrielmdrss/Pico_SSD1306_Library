 #include <stdio.h>
 #include "ssd1306/ssd1306.h"
 #include "ssd1306/ssd1306_fonts.h"
 #include "pico/stdlib.h"
 #include "hardware/i2c.h"

#define SDA_PIN 14
#define SCL_PIN 15
#define I2C_INSTANCE I2C1
 
int main() {

    stdio_init_all();           // Initialize all of the present standard stdio types that are linked into the binary.

    ssd1306_Init(SDA_PIN, SCL_PIN, I2C_INSTANCE);             // Initialize the display
    ssd1306_Fill(Black);        // Fill the display with black color

    ssd1306_DrawRectangle(0, 0, 127, 63, White);            // Draw a rectangle from (0, 0) to (127, 31) with white color
    ssd1306_SetCursor(25, 28);                              // Set the cursor to the position (25, 28)
    ssd1306_WriteString("Hello World", Font_7x10, White);   // Write the string "Hello World" to the display
    ssd1306_UpdateScreen();                                 // Update the display


    while (1)
    {

    }    
    
    return 0;
}
 
