#include <Arduino.h>
#include <DigiKeyboard.h>

void setup()
{
    DDRB |= 1 << PB1;
    PORTB |= 1 << PB1;
    DigiKeyboard.sendKeyStroke(0);
    delay(500);

    DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_ALT_LEFT);
    delay(500);

    DigiKeyboard.println("export PS1=$PS1$\'\\n\'\'\%F{#EAC6BA}8=========\%F{#E93A9A}D\%f -.. \' && exit    ");
    PORTB &= 0 << PB1;
}

void loop() {}