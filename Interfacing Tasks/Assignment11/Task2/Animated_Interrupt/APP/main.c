#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"
#include <avr/io.h>
#include "avr/delay.h"
#include "../MCAL/DIO_Interface.h"
#include "../MCAL/EXTI_Interface.h"


void Animated_Leds(void);

int main(){

		//	INT0
		DIO_voidSetPinDirection(DIO_PORTD,PIN2,0);
		DIO_voidSetPinValue(DIO_PORTD,PIN2,1);

		// LEDS ON PORT B
		/*LEDS*/
		DIO_voidSetPortDirection(DIO_PORTB, 0xff);
		DIO_voidSetPortValue(DIO_PORTB, 0x00);

		//INIT
		EXTI_voidInit();
		EXTI_voidEXTISetCallBack(0,&Animated_Leds);
		//GIE
		EXTI_voidGIE();
		while(1){}
		return 0;
}

void Animated_Leds(void){
	DIO_voidSetPortValue(DIO_PORTB, 0xff);
}
