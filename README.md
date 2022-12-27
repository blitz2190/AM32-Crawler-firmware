# AM32-Crawler-ESC-firmware
original code here https://github.com/AlkaMotors/AM32-MultiRotor-ESC-firmware, 
I renamed the repo as I do not want someone to mistakenly load it onto a heli or quad, I changed the firmware with no regards for there types and likely would break something
this firmware is a drastically simplified version of the above linked code, its only meant for crawlers, sine mode, complimentary PWM, and Bi-Directional are always on regardless of config tool settings, lots of tweaks for smoother transistion under heavy load (ex. slow crawling up a steep incline)

*EDIT*
This Firmware is completely incompatible with the original AM32 Config tool, please flash defualts from the included config tool when switching and if you switch from this firmware to AM32 you will need to send the defualts from the AM32 config tool, failure to do so will likely result in ESC damage for which I hold no resonsibility for the use of this firmware.
