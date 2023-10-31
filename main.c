#include <reg51.h>
#include "begin.h"
#include "mima.h"
#include "fail.h"
#include "open.h"
#define uint unsigned int
#define LCD P0
typedef unsigned char uint8;
typedef unsigned int uint16;
code uint8 LED_CODE[] = {0xfc,0x60,0xda,0xf2,0x66,0xb6,0xbe,0xe0,0xfe,0xf6,0x10};
sbit BUZ=P3^7;
sbit CS1=P2^4;
sbit CS2=P2^3;
sbit RS=P2^2;
sbit RW=P2^1;
sbit EN=P2^0;
sbit BUSY=P0^0;
sbit RELAY=P3^6;
uint8 k=0;
uint8 key=0;
uint truth=0;
uint dd=0;
uint buff[6]={10,10,10,10,10,10};


/*
void checkbusy()
{ 
EN=1;
RW=1;
RS=0;
LCD=0XFF;
if(BUSY);
}
*/
void delay(uint k)
{
uint i,j;
for(i = 0; i<15; i++)
for(j = 0; j <15*k; j++); 
}
void delay_small()
{
	uint i;
	for(i = 0; i<100; i++);
}
void delays()
{
	uint i,j;
for(i = 0; i<25; i++)
for(j = 0; j <25; j++); 
}
void Beep()
{
	BUZ=~BUZ;
	delay(1);
}
void unlock(){}

void view(){
	uint step;
	unsigned char temp;
	for(step=0;step<6;step++){
			temp=P2;
			temp=temp&0x1F;
			temp=temp+step*32;
			P2=temp;
			SBUF=LED_CODE[buff[step]];
			while(TI==0);
			TI=0;
			delay_small();
	}
}
void Keys_Scan()
{
uint8 Tmp;
P1 = 0x0f;
delays();
Tmp = P1 ^ 0x0f;//高4位输出，低4位输入
if(Tmp==1) {
	delays();
	if(Tmp==1) key=0;
	}
else{
	if(Tmp==2){
		delays();
		if(Tmp==2) key=1;
	}
	else{
	if(Tmp==4){
		delays();
		if(Tmp==4) key=2;
	}
	else{
	if(Tmp==8){
		delays();
		if(Tmp==8) key=3;
	}
	else key=16;
}
}
}

P1 = 0xf0;
delays();
Tmp = P1 >> 4 ^ 0x0f;//高4位输入，低4位输出
switch(Tmp)
{
case 1: key += 0; break;
case 2: key += 4; break;
case 4: key += 8; break;
case 8: key += 12;
}
	
}


void buffclear(){
	uint i;
	for(i=0;i<6;i++) buff[i]=10;
	delay(1);
}



void keyprocess()
{
	uint counting;
	P1 = 0xf0;
	Keys_Scan();
	if(P1 != 0xf0){
		if(counting<6){
		if(key>=0&&key<=9) {buff[counting]=key;counting++;k=1;}
	}
	counting=counting%6;
		if(key==10) {counting=counting-1;buff[counting]=10;}
		if(key==11) {counting=0;buffclear();}
		if(key==12) {counting=0;
			if(buff[0]!=0||buff[5]!=5||buff[1]!=1) {truth=2;k=2;}
			else {truth=1;k=3;}
			buffclear();}
		if(key>=13&&key<=15){truth=0;buffclear();k=0;RELAY=0;}	
	}
}
void writecode(unsigned char dat) //写命令
{
//checkbusy();
EN=1;
RW=0;
RS=0;
LCD=dat;
EN=1;
EN=0;
}
void writedata(unsigned char dat) //写数据
{ 
//checkbusy();
EN=1;
RW=0;
RS=1;
LCD=dat;
EN=1;
EN=0;
}
/*******************************/
//满屏函数
void LCDDisplay(unsigned char page,unsigned char lineaddress, unsigned char table[8][128])
{
	uint i,j;
	//view();/**********************************************/
for(i=0;i<8;i++)
{
if(lineaddress<0X80)
{
CS1=0;
CS2=0;
}
writecode(page+i);
writecode(lineaddress);
for(j=0;j<64;j++)
{
writedata(table[i][j]);
lineaddress+=1;
}
if(lineaddress>=0X80)
{
CS1=1;
CS2=0;
lineaddress=lineaddress-0X40;
}
writecode(page+i);
writecode(lineaddress);

view();/*************************************************/
if(dd==8)
		keyprocess();
dd++;
dd=dd%16;
/*******************************************/
for(j=64;j<128;j++)
{
writedata(table[i][j]);
lineaddress+=1;
}
if(lineaddress>=0X80)
{
lineaddress=lineaddress-0X40;
} 
}

}

/************************************/
void lcdinti()
{ 
writecode(0X3F);
writecode(0XC0);
writecode(0XB8);
writecode(0X40);
}

/**********************************************************/

/******************************************************************/

void main()
{
	RELAY=0;
	BUZ=0;
	P0 = 0xff;
	SCON=0;
	ES=0;
	lcdinti();
	while(1)
	{
		if(k==0)
	  LCDDisplay(0Xb8,0X40,&begin);
		if(k==1)
			LCDDisplay(0Xb8,0X40,&mima);
		if(k==2)
		{LCDDisplay(0Xb8,0X40,&fail);Beep();}
		if(k==3)
		{LCDDisplay(0Xb8,0X40,&open);RELAY=1;}
	}
	
}