#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"
#include <avr/io.h>
#include "avr/delay.h"
#include "../MCAL/DIO_Interface.h"
#include "../HAL/DCMOTOR_Interface.h"
#include "../HAL/LCD_Interface.h"

int main(){
	LCD_voidInit();

	DCMOTOR_voidInit();

	u8 Copy_U8StringCW[]= {"CW"};
	u8 Copy_U8StringCCW[]= {"CCW"};
	u8 Copy_u8Once = 0;
	DIO_voidSetPortDirection(DIO_PORTA, 0x00);

	while(1){
		while(PINA==1){
			DCMOTOR_voidRotateCW();
			if(Copy_u8Once==0){
				LCD_voidSetLocation(LCD_U8_LINE1,0);
				LCD_voidSendString(Copy_U8StringCW);
				Copy_u8Once=1;
			}
		}

		Copy_u8Once = 0;
		LCD_voidSendCommand(0b00000001);
		DCMOTOR_voidStop();

		while(PINA==2){
			DCMOTOR_voidRotateCCW();

			if(Copy_u8Once==0){
				LCD_voidSetLocation(LCD_U8_LINE1,0);
				LCD_voidSendString(Copy_U8StringCCW);
				Copy_u8Once=1;
			}

		}
		Copy_u8Once = 0;
		LCD_voidSendCommand(0b00000001);
		DCMOTOR_voidStop();
	}
	return 0;
}
