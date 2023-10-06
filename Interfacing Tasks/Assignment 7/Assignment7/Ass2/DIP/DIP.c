#include"BIT_MATH.h"
#include"STD_TYPES.h"
#include<avr/io.h>
#include"DIO_Interface.h"
#include "util/delay.h"



void flashLEDs() {
    DIO_voidSetPortValue(DIO_PORTC, 0xFF);
    _delay_ms(500);  // Delay for LED ON
    DIO_voidSetPortValue(DIO_PORTC, 0x00);
    _delay_ms(500);  // Delay for LED OFF
}


void shiftLeft() {

	for(int i=0;i<=7;i++){
			DIO_voidSetPortValue(DIO_PORTC,1<<i);
			_delay_ms(250);
		}

}

void shiftRight() {
    uint8_t ledPattern = 0b10000000; // Start with the leftmost LED on

    for (int i = 0; i <= 7; i++) {
        DIO_voidSetPortValue(DIO_PORTC, ledPattern);
        _delay_ms(250);
        ledPattern = ledPattern >> 1; // Right shift the LED pattern
    }
}


void twoLEDsConverge() {
	DIO_voidSetPortValue(DIO_PORTC,0b10000001);
	_delay_ms(250);
	DIO_voidSetPortValue(DIO_PORTC,0b01000010);
	_delay_ms(250);
	DIO_voidSetPortValue(DIO_PORTC,0b00100100);
	_delay_ms(250);
	DIO_voidSetPortValue(DIO_PORTC,0b00011000);
	_delay_ms(250);
}

void twoLEDsDiverge() {
	DIO_voidSetPortValue(DIO_PORTC,0b00011000);
	_delay_ms(250);
	DIO_voidSetPortValue(DIO_PORTC,0b00100100);
	_delay_ms(250);
	DIO_voidSetPortValue(DIO_PORTC,0b01000010);
	_delay_ms(250);
	DIO_voidSetPortValue(DIO_PORTC,0b10000001);
	_delay_ms(250);

}

void pingPong() {

}

void snakeEffect() {
    for (int i = 0; i <= 7; i++) {
        DIO_voidSetPortValue(DIO_PORTC, 1 << i);
        _delay_ms(250);
    }

    for (int i = 6; i >= 1; i--) {
        DIO_voidSetPortValue(DIO_PORTC, 1 << i);
        _delay_ms(250);
    }
}

void twoLEDsConvergeDiverge() {
    for (int i = 0; i < 4; i++) {
        DIO_voidSetPortValue(DIO_PORTC, (1 << i) | (1 << (7 - i)));
        _delay_ms(300);
    }

    for (int i = 3; i >= 0; i--) {
        DIO_voidSetPortValue(DIO_PORTC, (1 << i) | (1 << (7 - i)));
        _delay_ms(300);
    }
}

int main() {
    // Initialize LED port as output
	DIO_voidSetPortDirection(DIO_PORTC, 0xff);

    // Initialize DIP port as input
	DIO_voidSetPortDirection(DIO_PORTD, 0x00);

    while (1) {
    	u8 dipValue = PIND & 0x07; // Mask the lower 3 bits to get the DIP switch value

        switch (dipValue) {
            case 0:
                flashLEDs();
                break;
            case 1:
                shiftLeft();
                break;
            case 2:
                shiftRight();
                break;
            case 3:
                twoLEDsConverge();
                break;
            case 4:
                twoLEDsDiverge();
                break;
            case 5:
                pingPong();
                break;
            case 6:
                snakeEffect();
                break;
            case 7:
                twoLEDsConvergeDiverge();
                break;
            default:
            	DIO_voidSetPortValue(DIO_PORTC,0x00); // Turn off LEDs if DIP value is unrecognized
                break;

        				}
    			}
    return 0;
}
