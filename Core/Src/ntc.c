#include "ntc.h"



void  ntc_init        (ntc_config * ntc_CONFIG , uint8_t ntc_pin)
{
	ntc_CONFIG->adc_pin = ntc_pin;
}
void  ntc_temp_update (ntc_config * ntc_CONFIG)
{
	//note here the equation of the ntc have to be applied
	ntc_CONFIG->deg_value = adc_dma_readings_get(1);
}
uint16_t ntc_temp_get    (ntc_config * ntc_CONFIG)
{
	return adc_dma_readings_get(1);
}
