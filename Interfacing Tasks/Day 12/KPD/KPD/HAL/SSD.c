
#include"../LIB/BIT_MATH.h"
#include"../LIB/STD_TYPES.h"
#include<avr/io.h>
#include"../MCAL/DIO_Interface.h"
#include"SSD.h"


u8 Numbers[10] = {ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE};

void SSD_voidDisplarNumber(u8 copy_u8Num)
{
	DIO_voidSetPortDirection(SSD_PORT ,0xff);
	DIO_voidSetPortValue(SSD_PORT ,Numbers[copy_u8Num]);
}

