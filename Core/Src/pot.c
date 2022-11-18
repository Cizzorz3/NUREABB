#include "pot.h"

//max no of pots
//make another api for creating a new pot
// no of counts for the pot
static uint8_t counter =0;
void pot_init    (pot_config  * pot_CONFIG ,uint8_t pot_pin)
{
	//setting the pot pin
	pot_CONFIG->adc_pin = pot_pin;

}
void pot_update  (pot_config  * pot_CONFIG)
{
	//Note get value already returns the value after the average
	uint8_t i =0;
	for(i=0;i<10;i++)
	{
		pot_CONFIG->deg_value += pot_CONFIG->adc_readings[i];
	}
	pot_CONFIG->deg_value /= 10;
}
uint16_t pot_val_get (pot_config  * pot_CONFIG)
{

	//0 is the channel of the pot
	return adc_dma_readings_get(0);
	
}


void pot_min_val_set(pot_config  * pot_CONFIG , uint16_t min_value )
{
	pot_CONFIG->min_pot_value = min_value ;
}
uint16_t pot_min_val_get(pot_config  * pot_CONFIG )
{
	return pot_CONFIG->min_pot_value ;
}
void pot_max_val_set(pot_config  * pot_CONFIG , uint16_t max_value )
{
	pot_CONFIG->min_pot_value = max_value ;

}
uint8_t pot_max_val_get(pot_config  * pot_CONFIG )
{
	return pot_CONFIG->max_pot_value ;
}
void pot_create(pot_config  * pot_CONFIG , uint8_t pot_pin)
{	
	//incerement the counter and check that the counter is less than the max value
	if(counter < MAX_NO_OF_POTS)
	{
		pot_CONFIG->adc_pin = pot_pin;
		counter++;
	}

}
//// Conversion Complete & DMA Transfer Complete As Well
//when half of the buffer is filled
// void HAL_ADC_ConvHalfCpltCallback(ADC_HandleTypeDef* hadc) 
// {
  
// }
//// Conversion Complete & DMA Transfer Complete As Well
//when the second half of the buffer is fileed
// void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc) 
// {
// 	int i;
// 	for(i=0;i<10;i++)
// 	{
// 	}
