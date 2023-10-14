#include <avr/io.h>
#include <util/delay.h>
#include "lol.h"
#include <string.h>


#define BAUD 9600  // defining the communication baud rate

int main(void){ //
  init();    
  DDRB = 0x00;
  while(1)
  {
   char buttonstatus [16]="Button pressed\n";
   
    int button = PINB;
    if (button==1){
      uart_transmit(buttonstatus,16);
      _delay_ms(900);
    }
    char led= uart_recieve();
    if(led=='h'){
      DIO_SetPinDirection('b',3,'o');
      DIO_SetPinState('b',3,'h');
    }
    else if(led=='l'){
      DIO_SetPinDirection('b',3,'o');
      DIO_SetPinState('b',3,'l');
    }
  }
  }
    void init(){
      uart_init(BAUD);
    }





