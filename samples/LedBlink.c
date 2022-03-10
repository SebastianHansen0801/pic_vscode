/*
 * Led Blink example on PIC13F1612.
 *
 */
#include <xc.h>
#include <pic12f1612.h>

#define _XTAL_FREQ 1000000 // 1Mhz

void main() {
    
    TRISA = 0;

    while(1) {
        PORTA ^= (1<<RA2);
        __delay_ms(1000);
    }

    
}