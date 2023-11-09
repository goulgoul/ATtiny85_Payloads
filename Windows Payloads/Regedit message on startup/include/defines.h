#define LED_ENABLE() DDRB |= 1 << PB1
#define LED_ON() PORTB |= 1 << PB1
#define LED_OFF() PORTB &= 0 << PB1
#define LED_DISABLE() DDRB &= 0 << PB1
#define BLINK_LED_DIRAC() \
    LED_OFF();            \
    delay(100);           \
    LED_ON();             \
    delay(100);           \
    LED_OFF();            \
    delay(100);

#define RUN_CMD_AS_ADMIN(paste_delay_ms, go_admin_delay_ms)                   \
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);                          \
    delay(paste_delay_ms);                                                    \
    DigiKeyboard.print("cmd");                                                \
    delay(100);                                                               \
    DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_SHIFT_LEFT | MOD_CONTROL_LEFT); \
    delay(go_admin_delay_ms);                                                 \
    DigiKeyboard.sendKeyStroke(KEY_LEFT);                                     \
    DigiKeyboard.sendKeyStroke(KEY_ENTER)

#define HALT() while (true)

#define CMD_ADD_REG_ENTRY_FOR_POPUP_ON_STARTUP "REG ADD \
HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \
/v legalnoticecaption /t REG_SZ \
/d \"EH, TOI LA !\" /f && \
REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \
/v legalnoticetext /t REG_SZ \
/d \"La prochaine fois que tu me laisses tout seul, verrouille-moi !!!\" /f"

#define CMD_CLEAR_REG_ENTRY_FOR_POPUP_ON_STARTUP "REG ADD \
HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \
/v legalnoticecaption /t REG_SZ /d \"\" /f && \
REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \
/v legalnoticetext /t REG_SZ /d \"\" /f"