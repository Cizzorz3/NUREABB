#include "current_sensor.h"

/**================================================================
 * @Fn				- cs_init
 * @brief 			- Initilaizes the current sensor
 * @param [in]      - *cs_CONFIG pointer for the cs_config struct which contains all the current sensor parametrs
 * @param [in]      - adc_pin variable to declare which pin is connected to the adc
 * @retval 			- uint8_t returns the status of the operation
 * Note				- None
 */

void cs_init         (cs_config * cs_CONFIG , uint8_t adc_pin)
{
	//adc_pin == channel
	cs_CONFIG->adc_pin = adc_pin;
}
void cs_update  (cs_config * cs_CONFIG)
{
	//note the value of the current sensor equation have to be applied here
	//adc_pin == channel
	cs_CONFIG->curr_val = adc_dma_readings_get(0);
}
uint16_t cs_val_get     (cs_config * cs_CONFIG)
{
	return adc_dma_readings_get(0);
}
//return true or false
uint8_t cs_max_limit        (cs_config * cs_CONFIG , uint16_t limit)
{
	//motor_config mtr_CFG ;
	if((cs_CONFIG->curr_val)<limit)
	{
		//continue
		return TRUE ;
		//return true
	}
	else
	{
		//stop the motor
		//motor_stop(&mtr_CFG);
		//return false to the service layer
		return FALSE ;
	}
}
