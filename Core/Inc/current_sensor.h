#ifndef _CURRENT_SENSOR_H__
#define _CURRENT_SENSOR_H__


#include "common_includes.h"
#include "drv8220.h"
#include "dma.h"

typedef struct
{
    uint8_t adc_pin ;
    uint8_t adc_readings [10];
    uint16_t curr_val ; // in mA
}cs_config;





void cs_init         (cs_config * cs_CONFIG , uint8_t adc_pin);
void cs_update  (cs_config * cs_CONFIG);
uint16_t cs_val_get     (cs_config * cs_CONFIG);
void cs_limit        (cs_config * cs_CONFIG , uint16_t limit);


#endif
