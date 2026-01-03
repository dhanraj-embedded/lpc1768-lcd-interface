/* PROGRAM TO DISPLAY A CHAR ON LCD
 RS: P0.10 , EN:P0.11,	 RW
 D0-D7 DATA LINE :P0.15-  P0.22
 */ 
//TO WRITE DATA 
#include<lpc17xx.h>
#include <stdint.h>

#define p LPC_GPIO0
#define rs (1<<10)
#define en (1<<11)
#define data (0xff<<15)
void delay(uint16_t k);
void enable(void);
void lcd_com(uint8_t c);
void lcd_char(uint8_t d);


void lcd_com(uint8_t c){

   
	   p->FIOCLR=rs;
	   p->FIOCLR=data;
	    p->FIOSET=(c<<15);
		enable();


	 }
void lcd_char(uint8_t d){

	    p->FIOSET=rs;
	   p->FIOCLR=data;
	    p->FIOSET=(d<<15);
		enable();
		}
void enable(){
p->FIOSET=en;
delay(10);
p->FIOCLR=en ;
delay(10);

}
void delay(uint16_t k){
volatile uint16_t i, j;
for(i=0;i<k;i++) {
for(j=0;j<100;j++) ;
				}
	 }

 int main()	{

		p->FIODIR=(rs|en|data);
		delay(200);
		
		lcd_com(0x38);

		lcd_com(0x0E);
		lcd_com(0x01);
		lcd_char('c');
		while(1);
		}
		