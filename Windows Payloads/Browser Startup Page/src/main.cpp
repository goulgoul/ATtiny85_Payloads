#include <DigiKeyboard.h>
#include <defines.h>

//! Define comment the following line to restore the register value
#define BAD_USB 
//!


void setup()
{
    DigiKeyboard.sendKeyStroke(0);
    delay(1000);

    LED_ENABLE();
    LED_ON();
    DigiKeyboard.println(char());

    delay(100);
    DigiKeyboard.println("exit");

    LED_OFF();
    LED_DISABLE();
}

void loop() {}
