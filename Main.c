#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <avr/delay.h>
#define C_CPU 8000000UL

/* MCAL Layer Include */
#include "MDIO/MDIO_Interface.h"

/* HAL Layer Include */
#include "HLCD/HLCD_interface.h"
void HLCD_VoidWriteHamasapos(void);
#define Max_Time 5
int main(void)
{
    // Initialize the LCD
    MDIO_IntialPins();
    HLCD_VoidLcdIint();
    HLCD_VoidWriteHamasapos();
    // Main loop
    while (1)
    {
        u32 Local_u32Counter = Max_Time;
        while (Local_u32Counter)
        {
            HLCD_VoidSetCurser(HLCD_LINE_1, 0);
            HLCD_u8WriteStr("Hello I'm Hamasa");
            HLCD_VoidSetCurser(HLCD_LINE_2, 5);
            HLCD_VoidLcdWriteChar(0);
            _delay_ms(300);
            HLCD_VoidSetCurser(HLCD_LINE_2, 5);
            HLCD_VoidLcdWriteChar(1);
            _delay_ms(300);
            Local_u32Counter--;
        }
        Local_u32Counter = Max_Time;
        while (Local_u32Counter)
        {
            HLCD_VoidSetCurser(HLCD_LINE_1, 0);
            HLCD_u8WriteStr("ICanPlayFootball");
            HLCD_VoidSetCurser(HLCD_LINE_2, 5);
            HLCD_VoidLcdWriteChar(2);
            _delay_ms(300);
            HLCD_VoidSetCurser(HLCD_LINE_2, 5);
            HLCD_VoidLcdWriteChar(3);
            _delay_ms(300);
            Local_u32Counter--;
        }
        Local_u32Counter = Max_Time;
        while (Local_u32Counter)
        {
            HLCD_VoidLcdClear();
            HLCD_VoidSetCurser(HLCD_LINE_1, 0);
            HLCD_u8WriteStr("Let's Dance");
            HLCD_VoidSetCurser(HLCD_LINE_2, 5);
            HLCD_VoidLcdWriteChar(4);
            _delay_ms(300);
            HLCD_VoidSetCurser(HLCD_LINE_2, 5);
            HLCD_VoidLcdWriteChar(0);
            _delay_ms(300);
            HLCD_VoidSetCurser(HLCD_LINE_2, 5);
            HLCD_VoidLcdWriteChar(5);
            _delay_ms(300);
            Local_u32Counter--;
        }
        Local_u32Counter = Max_Time;
    }
}
void HLCD_VoidWriteHamasapos(void)
{

    HLCD_VoidLcdWriteCmd(0x40 + (8 * 0)); // Set CGRAM address for first character
    HLCD_VoidLcdWriteChar(0B00100);       // Row 1
    HLCD_VoidLcdWriteChar(0B01010);       // Row 2
    HLCD_VoidLcdWriteChar(0B00100);       // Row 3
    HLCD_VoidLcdWriteChar(0B01110);       // Row 4
    HLCD_VoidLcdWriteChar(0B10101);       // Row 5
    HLCD_VoidLcdWriteChar(0B00100);       // Row 6
    HLCD_VoidLcdWriteChar(0B01010);       // Row 7
    HLCD_VoidLcdWriteChar(0B10001);       // Row 8

    HLCD_VoidLcdWriteCmd(0x40 + (8 * 1)); // Set CGRAM address for first character
    HLCD_VoidLcdWriteChar(0B00100);       // Row 1
    HLCD_VoidLcdWriteChar(0B01010);       // Row 2
    HLCD_VoidLcdWriteChar(0B00101);       // Row 3
    HLCD_VoidLcdWriteChar(0B01110);       // Row 4
    HLCD_VoidLcdWriteChar(0B10100);       // Row 5
    HLCD_VoidLcdWriteChar(0B00100);       // Row 6
    HLCD_VoidLcdWriteChar(0B01010);       // Row 7
    HLCD_VoidLcdWriteChar(0B10001);       // Row 8

    HLCD_VoidLcdWriteCmd(0x40 + (8 * 2)); // Set CGRAM address for first character
    HLCD_VoidLcdWriteChar(0B00100);       // Row 1
    HLCD_VoidLcdWriteChar(0B01010);       // Row 2
    HLCD_VoidLcdWriteChar(0B00100);       // Row 3
    HLCD_VoidLcdWriteChar(0B01110);       // Row 4
    HLCD_VoidLcdWriteChar(0B10101);       // Row 5
    HLCD_VoidLcdWriteChar(0B00100);       // Row 6
    HLCD_VoidLcdWriteChar(0B01011);       // Row 7
    HLCD_VoidLcdWriteChar(0B10001);       // Row 8

    HLCD_VoidLcdWriteCmd(0x40 + (8 * 3)); // Set CGRAM address for first character
    HLCD_VoidLcdWriteChar(0B00100);       // Row 1
    HLCD_VoidLcdWriteChar(0B01010);       // Row 2
    HLCD_VoidLcdWriteChar(0B00101);       // Row 3
    HLCD_VoidLcdWriteChar(0B01110);       // Row 4
    HLCD_VoidLcdWriteChar(0B10101);       // Row 5
    HLCD_VoidLcdWriteChar(0B00110);       // Row 6
    HLCD_VoidLcdWriteChar(0B01000);       // Row 7
    HLCD_VoidLcdWriteChar(0B10000);       // Row 8

    HLCD_VoidLcdWriteCmd(0x40 + (8 * 4)); // Set CGRAM address for first character
    HLCD_VoidLcdWriteChar(0B00100);       // Row 1
    HLCD_VoidLcdWriteChar(0B01010);       // Row 2
    HLCD_VoidLcdWriteChar(0B10100);       // Row 3
    HLCD_VoidLcdWriteChar(0B01110);       // Row 4
    HLCD_VoidLcdWriteChar(0B00101);       // Row 5
    HLCD_VoidLcdWriteChar(0B00100);       // Row 6
    HLCD_VoidLcdWriteChar(0B01001);       // Row 7
    HLCD_VoidLcdWriteChar(0B10001);       // Row 8

    HLCD_VoidLcdWriteCmd(0x40 + (8 * 5)); // Set CGRAM address for first character
    HLCD_VoidLcdWriteChar(0B00100);       // Row 1
    HLCD_VoidLcdWriteChar(0B01010);       // Row 2
    HLCD_VoidLcdWriteChar(0B00101);       // Row 3
    HLCD_VoidLcdWriteChar(0B01110);       // Row 4
    HLCD_VoidLcdWriteChar(0B10100);       // Row 5
    HLCD_VoidLcdWriteChar(0B00100);       // Row 6
    HLCD_VoidLcdWriteChar(0B10010);       // Row 7
    HLCD_VoidLcdWriteChar(0B10001);       // Row 8
}
