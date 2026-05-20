/*
 * template_arduino_se.cpp
 *
 * Traditional embedded C/C++ programming style, without the setup() and loop() functions.
 * Author: afonsomiguel
 */

// Including the main Arduino framework header is still necessary.
#include <Arduino.h>
#include "../../common/sm.h"
#include "../../common/hal.h"
#include "../../common/sm.h"
#include "../../common/sm1.h"
#include "../../common/sm2.h"
#include "../../common/sm3.h"
#include "../../common/sm4.h"


/**
 * @brief The program's main and single entry point.
 */
int main(void)
{
    // The call to init() REMAINS ESSENTIAL!
    // It configures the hardware timers required for time-based functions like delay() and millis().
    init();
	init_hal();
	
	StateMachine sm1;
    INIT(sm1, sm1_init);
    StateMachine sm2;
    INIT(sm2, sm2_init);
    StateMachine sm3;
    INIT(sm3, sm3_init);
    StateMachine sm4;
    INIT(sm4, sm4_init);
	

    // Set the built-in LED pin (LED_BUILTIN) as an output.
    pinMode(LED_BUILTIN, OUTPUT);

    // --- Main loop section ---
    // Standard infinite loop for embedded systems. while(1) is a common idiom.
    while (1) 
    {
        // Turn the LED on
        digitalWrite(LED_BUILTIN, HIGH);
        delay(100);
        
        // Turn the LED off
        digitalWrite(LED_BUILTIN, LOW);
        delay(100);
		
		EXEC(sm1);
        EXEC(sm2);
        EXEC(sm3);
        EXEC(sm4);
		
    }

    return 0; // This line is never reached.
}
