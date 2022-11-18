#ifndef _NTC_H__
#define _NTC_H__
#include "common_includes.h"



typedef struct
{
    uint8_t adc_pin ;
    uint8_t adc_readings [10];
    uint16_t deg_value ;
}ntc_config;



uint8_t ntc_init        (ntc_config * ntc_CONFIG , uint8_t ntc_pin);
uint8_t ntc_temp_update (ntc_config * ntc_CONFIG);
uint8_t ntc_temp_get    (ntc_config * ntc_CONFIG);









#endif