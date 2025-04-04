/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA2 aliases
#define LED_CTRL_TRIS                 TRISAbits.TRISA2
#define LED_CTRL_LAT                  LATAbits.LATA2
#define LED_CTRL_PORT                 PORTAbits.RA2
#define LED_CTRL_WPU                  WPUAbits.WPUA2
#define LED_CTRL_OD                   ODCONAbits.ODCA2
#define LED_CTRL_ANS                  ANSELAbits.ANSA2
#define LED_CTRL_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED_CTRL_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED_CTRL_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED_CTRL_GetValue()           PORTAbits.RA2
#define LED_CTRL_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED_CTRL_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED_CTRL_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED_CTRL_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED_CTRL_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED_CTRL_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED_CTRL_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED_CTRL_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
// get/set IO_RA4 aliases
#define CHARGING_N_TRIS                 TRISAbits.TRISA4
#define CHARGING_N_LAT                  LATAbits.LATA4
#define CHARGING_N_PORT                 PORTAbits.RA4
#define CHARGING_N_WPU                  WPUAbits.WPUA4
#define CHARGING_N_OD                   ODCONAbits.ODCA4
#define CHARGING_N_ANS                  ANSELAbits.ANSA4
#define CHARGING_N_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define CHARGING_N_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define CHARGING_N_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define CHARGING_N_GetValue()           PORTAbits.RA4
#define CHARGING_N_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define CHARGING_N_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define CHARGING_N_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define CHARGING_N_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define CHARGING_N_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define CHARGING_N_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define CHARGING_N_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define CHARGING_N_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)
#define RA4_SetInterruptHandler  CHARGING_N_SetInterruptHandler
// get/set IO_RA5 aliases
#define SWITCH_N_TRIS                 TRISAbits.TRISA5
#define SWITCH_N_LAT                  LATAbits.LATA5
#define SWITCH_N_PORT                 PORTAbits.RA5
#define SWITCH_N_WPU                  WPUAbits.WPUA5
#define SWITCH_N_OD                   ODCONAbits.ODCA5
#define SWITCH_N_ANS                  ANSELAbits.ANSA5
#define SWITCH_N_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define SWITCH_N_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define SWITCH_N_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define SWITCH_N_GetValue()           PORTAbits.RA5
#define SWITCH_N_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define SWITCH_N_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define SWITCH_N_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define SWITCH_N_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define SWITCH_N_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define SWITCH_N_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define SWITCH_N_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define SWITCH_N_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)
#define RA5_SetInterruptHandler  SWITCH_N_SetInterruptHandler
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the CHARGING_N pin functionality
 * @param none
 * @return none
 */
void CHARGING_N_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for CHARGING_N pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for CHARGING_N at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void CHARGING_N_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for CHARGING_N pin.
 *        This is a dynamic interrupt handler to be used together with the CHARGING_N_SetInterruptHandler() method.
 *        This handler is called every time the CHARGING_N ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*CHARGING_N_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for CHARGING_N pin. 
 *        This is a predefined interrupt handler to be used together with the CHARGING_N_SetInterruptHandler() method.
 *        This handler is called every time the CHARGING_N ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void CHARGING_N_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the SWITCH_N pin functionality
 * @param none
 * @return none
 */
void SWITCH_N_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SWITCH_N pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for SWITCH_N at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void SWITCH_N_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for SWITCH_N pin.
 *        This is a dynamic interrupt handler to be used together with the SWITCH_N_SetInterruptHandler() method.
 *        This handler is called every time the SWITCH_N ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*SWITCH_N_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SWITCH_N pin. 
 *        This is a predefined interrupt handler to be used together with the SWITCH_N_SetInterruptHandler() method.
 *        This handler is called every time the SWITCH_N ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void SWITCH_N_DefaultInterruptHandler(void);


#endif // PINS_H
/**
 End of File
*/