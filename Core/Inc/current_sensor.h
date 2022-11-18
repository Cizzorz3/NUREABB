#ifndef _CURRENT_SENSOR_H__
#define _CURRENT_SENSOR_H__


#include "common_includes.h"

typedef struct
{
    uint8_t adc_pin ;
    uint8_t adc_readings [10];
    uint16_t curr_val ; // in mA
}cs_config;





uint8_t cs_init         (cs_config * cs_CONFIG , uint8_t adc_pin);
uint8_t cs_update  (cs_config * cs_CONFIG);
uint8_t cs_val_get     (cs_config * cs_CONFIG);
uint8_t cs_limit        (cs_config * cs_CONFIG);


#endif