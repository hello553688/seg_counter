/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC18F46K22
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include<delays.h>
#include<stdio.h>
#include<stdint.h>
#include "seg_display.h"

//int i=0,k=0;
//uint8_t j=0;
//uint8_t num=0;

char ShowSeg7[4]={0,0,0,0};


char show[4]={0x08,0x04,0x02,0x01};
volatile uint8_t delay_cnt=0;
volatile uint8_t scan_cnt=0;
//void calculate_output(void);


/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();

    while(1)
    {
        calculate_output();
    }
        
}
    
    




/*void display(void)
{
  
  for (k=0;k<=9999;k++)
  {
    ShowSeg7[0]=k/1000;//千
    ShowSeg7[1]=(k-ShowSeg7[0]*1000)/100;//百位數
    ShowSeg7[2]=(k-ShowSeg7[0]*1000-ShowSeg7[1]*100)/10;//十位數
    ShowSeg7[3]=k %10;//個位數
//輸出 c 陣列
        for (i=0;i<=30;i++)
        {
            for (j=0;j<=3;j++)
            {
                LATB=show[j];//位址
                while(scan_cnt<2)
                {
                    LATA=Seg7[ShowSeg7[j]];
                    //__delay_ms();
                }
                    scan_cnt=1;
                    LATA=0xff;
            }
        
        }   
    
    
    }

}*/

//void display_7seg0(uint8_t j)
//{
//    for (j=0;j<=3;j++)
//    {
//         LATB=show[j];//位址
//         while(scan_cnt<2)
//        {
//        LATA=Seg7[ShowSeg7[j]];
//        //__delay_ms();
//        }
//            scan_cnt=0;
//            LATA=0xff;
//    }
//    
//
//}

//void calculate_output(void)
//{
//  
// 
////    ShowSeg7[0]=k/1000;//千
////    ShowSeg7[1]=(k-ShowSeg7[0]*1000)/100;//百位數
////    ShowSeg7[2]=(k-ShowSeg7[0]*1000-ShowSeg7[1]*100)/10;//十位數
////    ShowSeg7[3]=k %10;//個位數
//    
//    seg_display[0]=k/1000;//千
//    seg_display[1]=(k-ShowSeg7[0]*1000)/100;//百位數
//    seg_display[2]=(k-ShowSeg7[0]*1000-ShowSeg7[1]*100)/10;//十位數
//    seg_display[3]=k %10;//個位數
//   
//    for(i=0;i<15;i++)
//    {
//       display_7seg(num);
//    } 
//        
//        k++;
//        if(k>9999)
//        {
//            k=0; 
//        }
//}
//









