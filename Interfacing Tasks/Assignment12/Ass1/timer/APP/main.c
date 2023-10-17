#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include "util/delay.h"
#include "../MCAL/DIO_Interface.h"
#include "../MCAL/GIE_Interface.h"
#include "../MCAL/Timer0_Interface.h"

void tog(void);

int main(void) {
    DIO_voidSetPinDirection(DIO_PORTA, DIO_PIN0, DIO_OUTPUT);
    TIMER2_voidTimer2OVFInit(1);
    TIMER2_voidTimer2OVFSetCallBack(tog);
    GIE_voidEnable();
    while (1);
    return 0;
}

void tog(void) {
	DIO_voidTogglePinValue(DIO_PORTA, DIO_PIN0);
}
