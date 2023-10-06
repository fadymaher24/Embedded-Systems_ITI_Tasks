#ifndef DELAY.H
#define DELAY.H

/*                            To generate  Delay in Microseconds

                usage: DELAY_us(1); -- to create one microsecond delay

*/


void DELAY_us(uint16_t us_count)
 {
    while(us_count!=0)
      {
		 us_count--;
	   }
  }


/*                            To generate  Delay in milliseconds


                usage: DELAY_ms(1); -- to create one millisecond delay

*/




void DELAY_ms(uint16_t ms_count)
 {
        while(ms_count!=0)
		 {
	        DELAY_us(1000);	 //DELAY_us is called to generate 1ms delay
			 ms_count--;
			}

   }




/*                            To generate  Delay in seconds


                usage: DELAY_sec(1); -- to create one second delay



*/

void DELAY_sec(uint16_t sec_count)
 {


	 while(sec_count!=0)
	  {
	     DELAY_ms(1000);	//DELAY_ms is called to generate 1 sec delay
		 sec_count--;
		}
  }

#endif
