#include"../LIB/BIT_MATH.h"
#include"../LIB/STD_TYPES.h"
#include"../MCAL/DIO_Interface.h"
#include"../HAL/KPD_Interface.h"
#include"../HAL/SSD.h"
#include<avr/io.h>

int main(){
	u8 KPD_Value=KPD_KEY_NOT_PRESSED;
	KPD_voidInit();

	while(1){
		KPD_Value=KPD_u8GetKeyValue();
		if(KPD_Value != KPD_KEY_NOT_PRESSED)
			SSD_voidDisplarNumber(KPD_Value-'0');
	}
	return 0;
}
