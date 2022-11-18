#ifndef _POT_H__
#define _POT_H__


#define MAX_NO_OF_POTS      10




#include "common_includes.h"
#include "dma.h"



typedef struct
{
    uint8_t adc_pin ;
    uint16_t adc_readings [10];
    uint16_t deg_value ;
    uint16_t min_pot_value;
    uint16_t max_pot_value;
}pot_config;





void pot_init    (pot_config  * pot_CONFIG,uint8_t pot_pin);
void pot_update  (pot_config  * pot_CONFIG);
uint16_t pot_val_get (pot_config  * pot_CONFIG);
void pot_min_val_set(pot_config  * pot_CONFIG , uint16_t min_value );
uint16_t pot_min_val_get(pot_config  * pot_CONFIG );
void pot_max_val_set(pot_config  * pot_CONFIG ,uint16_t max_value);
uint8_t pot_max_val_get(pot_config  * pot_CONFIG );
void pot_create(pot_config  * pot_CONFIG , uint8_t pot_pin);







#endif
