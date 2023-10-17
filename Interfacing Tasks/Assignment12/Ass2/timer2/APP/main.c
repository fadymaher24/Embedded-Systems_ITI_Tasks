#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include "util/delay.h"
#include "../MCAL/DIO_Interface.h"
#include "../MCAL/GIE_Interface.h"
#include "../MCAL/Timer0_Interface.h"

// Function to toggle the LED
void ToggleLED(void);

int main(void) {
    // Set LED pin as output
    DIO_voidSetPinDirection(DIO_PORTB, DIO_PIN5, DIO_OUTPUT);

    TIMER2_voidTimer2CTCInit(1);
    TIMER2_voidTimer2CTCSetCallBack(ToggleLED);

    // Enable global interrupts
    GIE_voidEnable();

    while (1) {
    }

    return 0;
}

void ToggleLED(void) {
    DIO_voidTogglePinValue(DIO_PORTB, DIO_PIN5);
}
