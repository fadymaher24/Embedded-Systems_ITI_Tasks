#include"BIT_MATH.h"
#include"STD_TYPES.h"
#include<avr/io.h>
#include"DIO_Interface.h"
#include"SS.h"
#include"delay.h"



u8 Numbers[6] = {SEVEN,TWO,TWO,ZERO,ZERO,TWO};

void SSD_voidDisplayBirthday(u8 copy_u8Num)
{
	DIO_voidSetPortDirection(SSD_PORT ,0xff);
	DIO_voidSetPortValue(SSD_PORT ,Numbers[copy_u8Num]);
}

int main()
{
	u8 i;
	u8 Numbers_size = sizeof(Numbers)/sizeof(Numbers[6]);

	for(i =0;i<Numbers_size;i++)
	{
		SSD_voidDisplayBirthday(i);
		DELAY_ms(100);
	}
	return 0;
}
