#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"
#include <avr/io.h>
#include "avr/delay.h"
#include "../MCAL/DIO_Interface.h"
#include "../MCAL/EXTI_Interface.h"


void TGL_Led1(void);
void TGL_Led2(void);

int main(){

//	INT0
	DIO_voidSetPinDirection(DIO_PORTD,PIN2,0);
	DIO_voidSetPinValue(DIO_PORTD,PIN2,1);

// 	INT1
	DIO_voidSetPinDirection(DIO_PORTD,PIN3,0);
	DIO_voidSetPinValue(DIO_PORTD,PIN3,1);

// LEDS ON PORT B
// LED1
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN0,DIO_OUTPUT);
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_LOW);

// LED2
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN6,DIO_OUTPUT);
	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN6,DIO_LOW);

	//INIT
	EXTI_voidInit();
	EXTI_voidEXTISetCallBack(0,&TGL_Led1);
	EXTI_voidEXTISetCallBack(1,&TGL_Led2);
	//GIE
	EXTI_voidGIE();

	while(1){}

	return 0;
}

void TGL_Led1(void){
	DIO_voidTogglePinValue(DIO_PORTB,DIO_PIN0);
}

void TGL_Led2(void){
	DIO_voidTogglePinValue(DIO_PORTB,DIO_PIN6);
}
