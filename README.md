# Digispark ATtiny85 USB Rubber Ducky Payloads

Arduino scripts holding BadUSB payloads for Windows, Linux or MacOS. These are built with Arduino using [Digispark libraries](https://github.com/digistump/DigistumpArduino)

## Windows payloads

### Message on startup

A script that adds or overwrites an entry in Windows' registry editor as `legalnoticecaption` and `legalnoticetext` with a title and message. This enables a pop-up on startup with the specified title and message.

The windows CMD commands to perform such actions are the following:
```
REG ADD HKML\SOFTWARE\Microsoft\Windows\CurrentVersion\Policies\System /v legalnoticecaption /t REG_SZ /d "YOUR_TITLE_TEXT" /f
```
```
REG ADD HKML\SOFTWARE\Microsoft\Windows\CurrentVersion\Policies\System /v legalnoticetext /t REG_SZ /d "YOUR_MESSAGE_TEXT" /f
```

In addition, the code provides a way to clear these registry entries by commenting the line `#define BAD_USB` at the top of the script.
All other definitions and macros are written in the `define.h` file in `include` folder. 
