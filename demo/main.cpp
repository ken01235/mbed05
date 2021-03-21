#include "mbed.h"
#include "uLCD_4DGL.h"
#include "TextLCD.h"

// uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;
// 
// int main()
// {
//     uLCD.cls();
//     uLCD.background_color(WHITE);
//     uLCD.color(BLUE);
//     uLCD.printf("\n108061207\n");
//     uLCD.text_width(4); //4X size text
//     uLCD.text_height(4);
//     uLCD.color(GREEN);
//     for (int i = 30; i >= 0; --i) {
//         uLCD.locate(1,2);
//         uLCD.printf("%2d",i);
//         ThisThread::sleep_for(1s);
//     }
// }

TextLCD lcd(D2, D3, D4, D5, D6, D7); // RS, E, DB4-DB7

int main()
{
    for (int x = 30; x >= 0; x--) {
        lcd.cls();
        lcd.printf("108061207\n       %2d", x);
        ThisThread::sleep_for(1s);
    }
}
