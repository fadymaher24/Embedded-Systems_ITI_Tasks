#include"BIT_MATH.h"
#include"STD_TYPES.h"
#include<avr/io.h>
#include"DIO_Interface.h"
#include"SS.h"
#include"delay.h"



u8 Numbers[10] = {ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE};

void SSD_voidDisplayNumber(u8 copy_u8Num)
{
	DIO_voidSetPortDirection(SSD_PORT ,0xff);
	DIO_voidSetPortValue(SSD_PORT ,Numbers[copy_u8Num]);
}

int main()
{
	// print 0 to 9 on SSD then 9 to 0
	u8 i;
	for(i =0; i<=9;i++)
	{
		SSD_voidDisplayNumber(i);
		DELAY_ms(100);
	}

	for(i =9; i>=0;i--)
		{
			SSD_voidDisplayNumber(i);
			DELAY_ms(100);
		}
	return 0;
}
