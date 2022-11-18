#ifndef _ENCODER_H__
#define _ENCODER_H__
#include "common_includes.h"

typedef struct
{
    uint8_t cw_pina_A ; //EXTI
    uint8_t cw_pin_B  ;
    uint16_t counts ; 
}en_config;

void en_init         (en_config * en_CONFIG , uint8_t pinA , uint8_t pinB);
void en_counts_set   (en_config * en_CONFIG);
uint8_t en_counts_get   (en_config * en_CONFIG);







#endif
