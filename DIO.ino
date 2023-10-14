#include <stdio.h>
#include <util/delay.h>
#include "DIO.h"
//#define GET_BIT(REG,BIT_NUM)      ((REG>>BIT_NUM)&1)


void DIO_SetPinDirection(unsigned char port,int pin,unsigned char direction){
if (port=='b' & pin<=7 &pin>=0){

if(direction=='o'){
  DDRB= DDRB|(1<<pin);
}
else if (direction='i'){
DDRB= DDRB &!(1<<pin);
}
}
}
void  DIO_SetPinState(unsigned char port,int pin,unsigned char state){

if (port=='b'& pin<=7 &pin>=0){
  if (state=='h'){
    PORTB=PORTB |(1<<pin);
  }
  else if (state=='l'){
    PORTB=PORTB &= ~(1<<pin);
  }
}


}






