#include "usound.h"

void usound_init(void)
{
	US_DDR |= (1 << US_TRIGER)|(0 << US_ECHO);
	US_PIN |= (1<<US_ECHO);
}

uint32_t readDistance(void)
{
	uint8_t readStatus=0;
	uint32_t disTime=0;

	_delay_us(2);
	US_PORT |= (1 << US_TRIGER);
	_delay_us(10);
	US_PORT &= ~(1 << US_TRIGER);

	
	while(readStatus == 0)
	{
		while(US_PIN&(1<<US_ECHO))
		{
			disTime++;
			readStatus = 1;
		}
	}	

	return disTime * 0.00862;	//return data in cm	
}


