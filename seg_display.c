/*
 * File:   seg_display.c
 * Author: user
 *
 * Created on 2019年9月18日, 上午 11:51
 */



#include<delays.h>
#include <xc.h>
#include "seg_display.h"

int i=0,k=0;
uint8_t j=0;
uint8_t num=0;
char seg_display[4]={0,0,0,0};
unsigned char Seg7[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};

void display_7seg(uint8_t num)
{
                if (num==0)  
                {
                    LATA=0xff;
                    LATB=0x00;
                    LATB=0x08; 
                    LATA=Seg7[seg_display[0]];
                    Delay1KTCYx(1);
                    num++;
                }   
                if (num==1)  
                {
                    LATA=0xff;
                    LATB=0x00;
                    LATB=0x04;
                   LATA=Seg7[seg_display[1]];
                   Delay1KTCYx(1);
                   num++;
                }   
                if (num==2)  
                {
                    LATA=0xff;
                    LATB=0x00;
                    LATB=0x02;
                    LATA=Seg7[seg_display[2]];
                    Delay1KTCYx(1);
                    num++;
                }   
                if (num==3)  
                {
                    LATA=0xff;
                    LATB=0x00;
                    LATB=0x01;
                    LATA=Seg7[seg_display[3]];
                    Delay1KTCYx(1);
                    num=0;
                } 
    
 }

void calculate_output(void)
{
 
    seg_display[0]=k/1000;//千
    seg_display[1]=(k-seg_display[0]*1000)/100;//百位數
    seg_display[2]=(k-seg_display[0]*1000-seg_display[1]*100)/10;//十位數
    seg_display[3]=k %10;//個位數
   
    for(i=0;i<125;i++)
    {
       display_7seg(num);
    } 
        
        k++;
        if(k>9999)
        {
            k=0; 
        }
}


               
    
