#ifndef _VIBRATOR_H__
#define _VIBRATOR_H__
#include "common_includes.h"



typedef struct
{
    uint8_t io_pin ;
    uint8_t status ;
}vib_config;

typedef enum
{
    VIBRATOR_IS_ON ,
    VIBRATOR_IS_OFF
}vib__current_status;

uint8_t vib_init        (vib_config  * vib_CONFIG , uint8_t vib_pin);
uint8_t vib_on          (vib_config  * vib_CONFIG);
uint8_t vib_off         (vib_config  * vib_CONFIG);
uint8_t vib_status_get  (vib_config  * vib_CONFIG);


#endif