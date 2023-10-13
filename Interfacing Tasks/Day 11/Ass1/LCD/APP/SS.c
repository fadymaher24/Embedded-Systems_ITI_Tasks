#include"BIT_MATH.h"
#include"STD_TYPES.h"
#include<avr/io.h>
#include"DIO_Interface.h"
#include"SS.h"
#include"delay.h"


u8 Number1[2] = {ONE,ZERO};
u8 Number2[11] = {ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,ZERO};

void SSD_voidDisplayNumber1(u8 copy_u8Num)
{
	DIO_voidSetPortDirection(SSD_PORTC ,0xff);
	DIO_voidSetPortValue(SSD_PORTC ,Number1[copy_u8Num]);
}

void SSD_voidDisplayNumber2(u8 copy_u8Num)
{
	DIO_voidSetPortDirection(SSD_PORTD ,0xff);
	DIO_voidSetPortValue(SSD_PORTD ,Number2[copy_u8Num]);
}

void traffic_Lighting_Leds(u8 copy_u8pin)
{
	DIO_voidSetPinDirection(PORT_A,copy_u8pin ,DIO_OUTPUT);
	DIO_voidSetPinValue(PORT_A, copy_u8pin, DIO_HIGH);
}
void loop(u8 num)
{
	u8 i;
    for(i=num ;i>0 ;i--)
			{
    			if(i>=10)
    			{
    			//  Print One in First SSD
    			SSD_voidDisplayNumber1(0);
				SSD_voidDisplayNumber2(i);
				DELAY_ms(50);
				}
    			else{
						SSD_voidDisplayNumber1(1);
						SSD_voidDisplayNumber2(i);
						DELAY_ms(50);
				}
			}
}

int main()
{
	while(1)
	{

	//	GREEN LED IS ON
	traffic_Lighting_Leds(0);

	loop(10);

	//	GREEN LED IS OFF
	DIO_voidSetPinValue(PORT_A, 0, DIO_LOW);

	//  yellow LED IS ON
	traffic_Lighting_Leds(1);

	loop(3);

	//	YELLOW LED IS OFF
	DIO_voidSetPinValue(PORT_A, 1, DIO_LOW);
	//	RED LED IS ON
	traffic_Lighting_Leds(2);

	loop(10);

	//RED LED IS OFF

	DIO_voidSetPinValue(PORT_A, 2, DIO_LOW);
	}
	return 0;
}
