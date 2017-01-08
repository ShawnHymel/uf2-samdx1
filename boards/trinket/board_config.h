#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define __SAMD21E18A__ 1
#define CRYSTALLESS    1

#define VENDOR_NAME "Adafruit Industries"
#define PRODUCT_NAME "Trinket M0"
#define VOLUME_LABEL "TRINKETBOOT"
#define INDEX_URL "https://adafru.it/trinketm0"
#define BOARD_ID "SAMD21E18A-Trinket-v0"

#define USB_VID 0x239A
#define USB_PID 0x0016

#define LED_PIN PIN_PA10
//#define LED_TX_PIN PIN_PA27
//#define LED_RX_PIN PIN_PB03

#define BOARD_RGBLED_CLOCK_PORT           (0) // PA
#define BOARD_RGBLED_CLOCK_PIN            (0) // 00
#define BOARD_RGBLED_DATA_PORT            (0) // PA
#define BOARD_RGBLED_DATA_PIN             (1) // 01

#endif
