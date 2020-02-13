/*********************************************
Project : Test software
**********************************************
Chip type: ATmega16
Clock frequency: 7.3728 MHz
Compilers:  CVAVR 1.x and 2.x
*********************************************/

#include <mega16.h>

#include <stdio.h>
#include <delay.h>  
#include <string.h> 
#include <stdlib.h>
#include <alcd.h>
#include "defs.h" 
                          

volatile int freq;

char buffer[16];

void main (void)
{
	Init_initController();  // this must be the first "init" action/call!
	#asm("sei");             // enable interrupts 
    lcd_init(16);
    wdogtrig(); 
   
 while(1) {                  

    TIMSK=0x04;  //activeaza intreruperile la depasire pentru tmr1
    TCCR1B=0x07;//porneste timer1 pentru un semnal extern front pozitiv
    delay_ms(1000); //asteapta o secunda
    TCCR1B=0x00; //opreste timer 1      
    freq=TCNT1;//stochez numarul de fronturi in variabila freq ce va reprezenta chiar frecventa semanlului
    lcd_gotoxy(0,0); 
    lcd_clear();
    sprintf(buffer,"FRECVENTA=%d Hz",(int)freq)  ;
    lcd_puts(buffer);  

      if (freq>159 && freq<169){  
      if (freq<164)
      lcd_gotoxy(0,1);
      sprintf(buffer,"COARDA E     <<<");   //mi
      lcd_puts(buffer);
      if (freq>164)
      lcd_gotoxy(0,1);
      sprintf(buffer,"COARDA E     >>>");   
      lcd_puts(buffer);
    }         
      if (freq>215 && freq<225){  
      if (freq<220)
      lcd_gotoxy(0,1);
      sprintf(buffer,"COARDA A     <<<");       //la
      lcd_puts(buffer);
      if (freq>220)
      lcd_gotoxy(0,1);
      sprintf(buffer,"COARDA A     >>>");   
      lcd_puts(buffer);
    } 
         
      if (freq>288 && freq<298){  
      if (freq<293)
      lcd_gotoxy(0,1);
      sprintf(buffer,"COARDA D     <<<");           //re
      lcd_puts(buffer);
      if (freq>293)
      lcd_gotoxy(0,1);
      sprintf(buffer,"COARDA D     >>>");   
      lcd_puts(buffer);
    } 
      if (freq>387 && freq<397){  
      if (freq<392)
      lcd_gotoxy(0,1);
      sprintf(buffer,"COARDA G     <<<");               //sol
      lcd_puts(buffer);
      if (freq>392)
      lcd_gotoxy(0,1);
      sprintf(buffer,"COARDA G     >>>");   
      lcd_puts(buffer);
    }   
      if (freq>488 && freq<498){  
      if (freq<493)
      lcd_gotoxy(0,1);
      sprintf(buffer,"COARDA H     <<<");              //si
      lcd_puts(buffer);
      if (freq>493)
      lcd_gotoxy(0,1); 
      sprintf(buffer,"COARDA H     >>>");   
      lcd_puts(buffer);
    }
      if (freq>654 && freq<664){  
      if (freq<659)
      lcd_gotoxy(0,1);
      sprintf(buffer,"COARDA EH    <<<");            //mi
      lcd_puts(buffer);
      if (freq>659)
      lcd_gotoxy(0,1);
      sprintf(buffer,"COARDA EH    >>>");   
      lcd_puts(buffer);
    }
            
    TCNT1=0x00; //curat registrul pentru o noua stocare
    }}
      