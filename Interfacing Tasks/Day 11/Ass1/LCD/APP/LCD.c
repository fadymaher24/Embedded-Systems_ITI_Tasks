#include"../LIB/BIT_MATH.h"
#include"../LIB/STD_TYPES.h"
#include"../MCAL/DIO_Interface.h"
#include"../HAL/LCD_Interface.h"
#include<avr/io.h>
#include<util/delay.h>

int main(){
	LCD_voidInit();
	u8 Copy_U8String[]= {"FADY"};
	while(1){
		LCD_voidSetLocation(LCD_U8_LINE1,0);
			LCD_voidSendString(Copy_U8String);
			_delay_ms(300);
			LCD_voidSendCommand(0b00000001);
			LCD_voidSetLocation(LCD_U8_LINE2,3);
			LCD_voidSendString(Copy_U8String);
			_delay_ms(300);
			LCD_voidSendCommand(0b00000001);
			LCD_voidSetLocation(LCD_U8_LINE1,6);
			LCD_voidSendString(Copy_U8String);
			_delay_ms(300);
			LCD_voidSendCommand(0b00000001);
			LCD_voidSetLocation(LCD_U8_LINE2,9);
			LCD_voidSendString(Copy_U8String);
			_delay_ms(300);
			LCD_voidSendCommand(0b00000001);
	}
	return 0;
}
