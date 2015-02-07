/*
* File:   initLab0.c
* Author: 
*
* Created on December 27, 2014, 1:31 PM
*/

#include "p24fj64ga002.h"
#include "initLab0.h"

void initLEDs(){
    //TODO: Initialize the pin connected to the LEDs as outputs
    TRISBbits.TRISB15 = 0;  //led4(pin26) as output
    TRISBbits.TRISB14 = 0;  //led5(pin25) as output
    TRISBbits.TRISB13 = 0;  //led6(pin24) as output
    TRISBbits.TRISB12 = 0;  //led7(pin23) as output
    //TODO: Turn each LED OFF
    LATBbits.LATB15 = 1;    //led4 off
    LATBbits.LATB14 = 1;    //led5 off
    LATBbits.LATB13 = 1;    //led6 off
    LATBbits.LATB12 = 1;    //led7 off
}

void initSW1(){
    //TODO: Initialize the pin connected to the switch as an input.
    TRISBbits.TRISB5 = 1; //switch1(pin14) as input
}


void initTimer1(){
    //TODO: Initialize the timer
    PR1 = ;
    T1CONbits.TCKPS = 0b11; //prescale 256
    T1CONbits.TON = 1;      //timer on
    IEC0bits.T1IE = 1;      //set interrrupt
    IFS0bits.T1IF = 0;      //flag down
}
