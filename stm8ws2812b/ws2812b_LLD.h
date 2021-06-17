#ifndef __WS2812B
#define __WS2812B

#include "ws2812b_conf.h"
#include "RGBcolors.h"

#define _ws2812b_create_port(__set__, __port__, __pin__) #__set__" L:"#__port__", #"#__pin__" \n"
#define ws2812b_create_port(__set__, __port__, __pin__) _ws2812b_create_port(__set__, __port__, __pin__)

#define RGBLedPin_Set   ws2812b_create_port(BSET, WS2812B_PORT, WS2812B_PIN)
#define RGBLedPin_ReSet ws2812b_create_port(BRES, WS2812B_PORT, WS2812B_PIN)



void rgb_SetColor(unsigned char LedId, const RGBColor_t * Color);
void rgb_SendArray();
RGBColor_t rgb_GetColor(unsigned char LedId);
#endif