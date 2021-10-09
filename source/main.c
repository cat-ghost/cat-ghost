/*	Author: Caitlin O'Donnell codo005@ucr.edu
 *  Partner(s) Name:
 *	Lab Section: 023
 *	Assignment: Lab #2  Exercise #1
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; 	PORTA = 0xFF; //Configure port A's 8 pins as inputs
	DDRB = 0xFF;  	PORTB = 0x00; //Configure port B's 8 pins as outputs
					//Initialize output on PORTB to 0x00
	unsigned char tmpB = 0x00; //Temporary variable to hold the value of B
	unsigned char tmpA = 0x00; // Temporary variable to hold the value of A

    /* Insert your solution below */
    while (1) {
	   
	    tmpA = PINA ;
	    
	    if ((tmpA == 0x01) & (tmpA != 0x02)) { 
		    tmpB = (tmpB & 0xFE) | 0x01; 
		    				
 	    }else{
		    tmpB = 0x00;
	    }
	    // 3) Write output
	    PORTB = tmpB;
    }
    return 0;
}
