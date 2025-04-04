/**
 * Generated Driver File
 * 
 * @file pins.c
 * 
 * @ingroup  pinsdriver
 * 
 * @brief This is generated driver implementation for pins. 
 *        This file provides implementations for pin APIs for all pins selected in the GUI.
 *
 * @version Driver Version 3.0.0
*/

/*
� [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#include "../pins.h"

void (*CHARGING_N_InterruptHandler)(void);
void (*SWITCH_N_InterruptHandler)(void);

void PIN_MANAGER_Initialize(void)
{
   /**
    LATx registers
    */
    LATA = 0x0;

    /**
    TRISx registers
    */
    TRISA = 0x3B;

    /**
    ANSELx registers
    */
    ANSELA = 0x3;

    /**
    WPUx registers
    */
    WPUA = 0x0;
  
    /**
    ODx registers
    */
   
    ODCONA = 0x0;
    /**
    SLRCONx registers
    */
    SLRCONA = 0x37;
    /**
    INLVLx registers
    */
    INLVLA = 0x3F;

    /**
    PPS registers
    */
    INTPPS = 0x5; //RA5->INTERRUPT MANAGER:INT;

    /**
    APFCON registers
    */

   /**
    IOCx registers 
    */
    IOCAP = 0x30;
    IOCAN = 0x30;
    IOCAF = 0x0;

    CHARGING_N_SetInterruptHandler(CHARGING_N_DefaultInterruptHandler);
    SWITCH_N_SetInterruptHandler(SWITCH_N_DefaultInterruptHandler);

    // Enable PIE0bits.IOCIE interrupt 
    PIE0bits.IOCIE = 1; 
}
  
void PIN_MANAGER_IOC(void)
{
    // interrupt on change for pin CHARGING_N}
    if(IOCAFbits.IOCAF4 == 1)
    {
        CHARGING_N_ISR();  
    }
    // interrupt on change for pin SWITCH_N}
    if(IOCAFbits.IOCAF5 == 1)
    {
        SWITCH_N_ISR();  
    }
}
   
/**
   CHARGING_N Interrupt Service Routine
*/
void CHARGING_N_ISR(void) {

    // Add custom IOCAF4 code

    // Call the interrupt handler for the callback registered at runtime
    if(CHARGING_N_InterruptHandler)
    {
        CHARGING_N_InterruptHandler();
    }
    IOCAFbits.IOCAF4 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF4 at application runtime
*/
void CHARGING_N_SetInterruptHandler(void (* InterruptHandler)(void)){
    CHARGING_N_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF4
*/
void CHARGING_N_DefaultInterruptHandler(void){
    // add your CHARGING_N interrupt custom code
    // or set custom function using CHARGING_N_SetInterruptHandler()
}
   
/**
   SWITCH_N Interrupt Service Routine
*/
void SWITCH_N_ISR(void) {

    // Add custom IOCAF5 code

    // Call the interrupt handler for the callback registered at runtime
    if(SWITCH_N_InterruptHandler)
    {
        SWITCH_N_InterruptHandler();
    }
    IOCAFbits.IOCAF5 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF5 at application runtime
*/
void SWITCH_N_SetInterruptHandler(void (* InterruptHandler)(void)){
    SWITCH_N_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF5
*/
void SWITCH_N_DefaultInterruptHandler(void){
    // add your SWITCH_N interrupt custom code
    // or set custom function using SWITCH_N_SetInterruptHandler()
}
/**
 End of File
*/