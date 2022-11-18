#include "ntc.h"




uint8_t ntc_init(ntc_config * ntc_CONFIG , uint8_t adc_pin);
uint8_t ntc_temp_update(ntc_config * ntc_CONFIG);
uint8_t ntc_temp_get(ntc_config * ntc_CONFIG);