/*********************************************************************************/
/*  Ultrasonic range finder HC-SR04 lib for AVR									 */
/*  Autor: Kornuta Taras														 */
/*  Date: 21.04.2016															 */
/*	URL: http://digiua.com														 */
/*********************************************************************************/


#ifndef USOUND_H
#define USOUND_H
#include <avr/io.h>
#include <avr/interrupt.h>
#include <inttypes.h>
#include <util/delay.h>


// Ports initialization
#define US_DDR		DDRD
#define US_PORT		PORTD
#define US_PIN		PIND
#define US_TRIGER	PIND2
#define US_ECHO		PIND4


 void usound_init(void);				//Paste in Main function

 uint32_t readDistance(void);			//Return the distance in centimeters
										//Recommended use this function with 20Hz frequency 



#endif //USOUND_H
