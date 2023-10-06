#ifndef SS_H
#define SS_H

#define ZERO        0b00111111
#define ONE         0b00000110
#define TWO         0b01011011
#define THREE       0b01001111
#define FOUR        0b01100110
#define FIVE        0b01101101
#define SIX         0b01111101
#define SEVEN       0b00000111
#define EIGHT       0b01111111
#define NINE        0b01101111

#define PORT_A      0        
#define PORT_B      1
#define PORT_C      2
#define PORT_D      3


#define SSD_PORTC          PORT_C
#define SSD_PORTD          PORT_D


void SSD_voidDisplayNumber1(u8 copy_u8Num);
void SSD_voidDisplayNumber2(u8 copy_u8Num);
void traffic_Lighting_Leds(u8 copy_u8pin);
void loop(u8 num);

#endif
