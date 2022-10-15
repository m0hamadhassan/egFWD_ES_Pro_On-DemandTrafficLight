/*
 * LED.h
 *
 * Created: 10/6/2022 7:50:57 PM
 *  Author: mohamad hassan
 */
#include "../../Utils/Types.h"
#include "../../MCAL/DIO/DIO.h"
#ifndef LED_H_
#define LED_H_
// functions prototypes
void LED_init(uint8_t ledPort, uint8_t LedPin);
void LED_on(uint8_t ledPort, uint8_t ledPin);
void LED_off(uint8_t ledPort, uint8_t ledPin);
void LED_toggle(uint8_t ledPort, uint8_t ledPin);

#endif /* LED_H_ */
