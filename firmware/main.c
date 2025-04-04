 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

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
#include "mcc_generated_files/system/system.h"

enum brightness {
    LOW_BRIGHTNESS, 
    MED_BRIGHTNESS, 
    HIGH_BRIGHTNESS
};
    
inline void write_brightness_start()
{   
    LED_CTRL_SetLow();
    __delay_us(3500); //restart  3.5 ms     

    LED_CTRL_SetHigh();
    __delay_us(100); //easyscale detect delay 100us
    LED_CTRL_SetLow();
    __delay_us(450); //easyscale detect time 450us min
    

    // write address
    LED_CTRL_SetHigh();
    __delay_us(4); //start time min 3.5us

    LED_CTRL_SetLow(); //2 X high
    __delay_us(8);
     LED_CTRL_SetHigh(); //3.5-300us
    __delay_us(4);

    LED_CTRL_SetLow(); //3.5-300us
    __delay_us(4); 
     LED_CTRL_SetHigh(); //2 X low
    __delay_us(8);

    LED_CTRL_SetLow(); //2 X high
    __delay_us(8);
     LED_CTRL_SetHigh(); //3.5-300us
    __delay_us(4);

    LED_CTRL_SetLow(); //3.5-300us
    __delay_us(4); 
     LED_CTRL_SetHigh(); //2 X low
    __delay_us(8);

    LED_CTRL_SetLow(); //3.5-300us
    __delay_us(4); 
     LED_CTRL_SetHigh(); //2 X low
    __delay_us(8);

    LED_CTRL_SetLow(); //2 X high
    __delay_us(8);
     LED_CTRL_SetHigh(); //3.5-300us
    __delay_us(4);

    LED_CTRL_SetLow(); //2 X high
    __delay_us(8);
     LED_CTRL_SetHigh(); //3.5-300us
    __delay_us(4);

   LED_CTRL_SetLow(); //2 X high
    __delay_us(8);
     LED_CTRL_SetHigh(); //3.5-300us
    __delay_us(4);

    //write brightness

    LED_CTRL_SetLow(); //EOS 3.5-600us
    __delay_us(4);
    
    LED_CTRL_SetHigh();
    __delay_us(4); //start time min 3.5us

    LED_CTRL_SetLow(); //2 X high
    __delay_us(8);
     LED_CTRL_SetHigh(); //3.5-300us
    __delay_us(4);

    LED_CTRL_SetLow(); //2 X high
    __delay_us(8);
     LED_CTRL_SetHigh(); //3.5-300us
    __delay_us(4);

    LED_CTRL_SetLow(); //2 X high
    __delay_us(8);
     LED_CTRL_SetHigh(); //3.5-300us
    __delay_us(4);
}


inline void write_brightness(enum brightness brightness_setting)
{
    if (brightness_setting == LOW_BRIGHTNESS){
        
        write_brightness_start();
                //brightness = 1
        //write 0
        LED_CTRL_SetLow(); //2 X high
        __delay_us(8);
         LED_CTRL_SetHigh(); //3.5-300us
        __delay_us(4);

        //write 0
        LED_CTRL_SetLow(); //2 X high
        __delay_us(8);
         LED_CTRL_SetHigh(); //3.5-300us
        __delay_us(4);

        //write 0
        LED_CTRL_SetLow(); //2 X high
        __delay_us(8);
         LED_CTRL_SetHigh(); //3.5-300us
        __delay_us(4);

        //write 0
        LED_CTRL_SetLow(); //2 X high
        __delay_us(8);
         LED_CTRL_SetHigh(); //3.5-300us
        __delay_us(4);

        //write 1
        LED_CTRL_SetLow(); //3.5-300us
        __delay_us(4); 
         LED_CTRL_SetHigh(); //2 X low
        __delay_us(8);
        
        LED_CTRL_SetLow(); //EOS 3.5-600us
        __delay_us(4);
        
        LED_CTRL_SetHigh();//static high
    }
    
    else if (brightness_setting == MED_BRIGHTNESS){
        
        write_brightness_start();
                //brightness = 15
            //write 0
        LED_CTRL_SetLow(); //2 X high
        __delay_us(8);
         LED_CTRL_SetHigh(); //3.5-300us
        __delay_us(4);

         //write 1 
        LED_CTRL_SetLow(); //3.5-300us
        __delay_us(4); 
         LED_CTRL_SetHigh(); //2 X low
        __delay_us(8);

         //write 1 
        LED_CTRL_SetLow(); //3.5-300us
        __delay_us(4); 
         LED_CTRL_SetHigh(); //2 X low
        __delay_us(8);

         //write 1 
        LED_CTRL_SetLow(); //3.5-300us
        __delay_us(4); 
         LED_CTRL_SetHigh(); //2 X low
        __delay_us(8);

         //write 1 
        LED_CTRL_SetLow(); //3.5-300us
        __delay_us(4); 
         LED_CTRL_SetHigh(); //2 X low
        __delay_us(8);

        LED_CTRL_SetLow(); //EOS 3.5-600us
        __delay_us(4);

        LED_CTRL_SetHigh();//static high
    }
    else if (brightness_setting == HIGH_BRIGHTNESS)
    {
        write_brightness_start();
                //brightness = 31
         //write 1   
        LED_CTRL_SetLow(); //3.5-300us
        __delay_us(4); 
         LED_CTRL_SetHigh(); //2 X low
        __delay_us(8);

         //write 1 
        LED_CTRL_SetLow(); //3.5-300us
        __delay_us(4); 
         LED_CTRL_SetHigh(); //2 X low
        __delay_us(8);

         //write 1 
        LED_CTRL_SetLow(); //3.5-300us
        __delay_us(4); 
         LED_CTRL_SetHigh(); //2 X low
        __delay_us(8);

         //write 1 
        LED_CTRL_SetLow(); //3.5-300us
        __delay_us(4); 
         LED_CTRL_SetHigh(); //2 X low
        __delay_us(8);

         //write 1 
        LED_CTRL_SetLow(); //3.5-300us
        __delay_us(4); 
         LED_CTRL_SetHigh(); //2 X low
        __delay_us(8);

        LED_CTRL_SetLow(); //EOS 3.5-600us
        __delay_us(4);

        LED_CTRL_SetHigh();//static high
    }
}

/*
    Main application
*/

int main(void)
{
    SYSTEM_Initialize();
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    INTERRUPT_GlobalInterruptEnable(); 

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 

    // Enable the Peripheral Interrupts 
    INTERRUPT_PeripheralInterruptEnable(); 

    // Disable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptDisable(); 

    enum brightness current_brightness = LOW_BRIGHTNESS;
    enum brightness next_brightness = MED_BRIGHTNESS;
    bool previous_charging_status = 1;
    
    while(1)
    {
       
        SLEEP();
        NOP();
            if (SWITCH_N_GetValue() == 0x1) {
                
                LED_CTRL_SetLow();
                
                __delay_ms(300);

                if (SWITCH_N_GetValue() != 0x1) {
                    
                    
                    if (current_brightness == LOW_BRIGHTNESS){
                        next_brightness = MED_BRIGHTNESS; 
                    }
                    else if (current_brightness == MED_BRIGHTNESS){
                        next_brightness = HIGH_BRIGHTNESS;
                    }
                    else if (current_brightness == HIGH_BRIGHTNESS){
                        next_brightness = LOW_BRIGHTNESS;
                    }
                    
                    current_brightness = next_brightness;
                    
                    write_brightness(current_brightness);
                }
            
           } else {
                //LED_CTRL_SetHigh();
                write_brightness(current_brightness);
                
                    
                    // quick switch, change brightness
                    //write_brightness(current_brightness);
                    
                    //save new brightness
                }
                
        
            
        
        if (CHARGING_N_GetValue() == 0x1) { //not charging
            if (previous_charging_status  == 0) {//got unplugged
            previous_charging_status = 1;
            }
           } else { //charging
            
                if (previous_charging_status  == 1) { //got plugged
                    previous_charging_status = 0;

                    if (SWITCH_N_GetValue() == 0x1) {
                        write_brightness(current_brightness);
                        __delay_ms(500);
                        LED_CTRL_SetLow();
                    } else {
                        LED_CTRL_SetLow();
                        __delay_ms(500);
                        write_brightness(current_brightness);
                    }   
                }
           }
        //FLASH_Read(flash_address_t address);
        //FLASH_RowWrite(flash_address_t address, flash_data_t *dataBuffer);
            

            
    }    
}