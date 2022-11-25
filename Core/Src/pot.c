#include "pot.h"

//max no of pots
//make another api for creating a new pot
// no of counts for the pot
static uint8_t counter =0;

/**================================================================
 * @Fn				- pot_init
 * @brief 			- Initilaizes the pot driver
 * @param [in]      - *pot_CONFIG pointer for the pot config struct which contains all the pot parametrs
 * @param [in]      - pot_pin variable to indicate which pin the pot is connected to
 * @retval 			- None
 * Note				- None
 */
void pot_init    (pot_config  * pot_CONFIG ,uint8_t pot_pin)
{
	//setting the pot pin
	pot_CONFIG->adc_pin = pot_pin;

}
/**================================================================
 * @Fn				- pot_update
 * @brief 			- updates the pot driver degree value
 * @param [in]      - *pot_CONFIG pointer for the pot config struct which contains all the pot parametrs
 * @retval 			- None
 * Note				- None
 */
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
/**================================================================
 * @Fn				- pot_val_get
 * @brief 			- gets the pot driver degree value
 * @param [in]      - *pot_CONFIG pointer for the pot config struct which contains all the pot parametrs
 * @retval 			- uint16_t the pot degree value
 * Note				- None
 */
uint16_t pot_val_get (pot_config  * pot_CONFIG)
{

	//0 is the channel of the pot
	return adc_dma_readings_get(2);
	
}
/**================================================================
 * @Fn				- pot_min_val_set
 * @brief 			- sets the pot driver degree value
 * @param [in]      - *pot_CONFIG pointer for the pot config struct which contains all the pot parametrs
 * @param [in]      - min_value for the minimum value for the pot
 * @retval 			- None
 * Note				- None
 */
void pot_min_val_set(pot_config  * pot_CONFIG , uint16_t min_value )
{
	//to set the min value of the
	pot_CONFIG->min_pot_value = min_value ;
}
/**================================================================
 * @Fn				- pot_min_val_get
 * @brief 			- gets the pot minimum degree value
 * @param [in]      - *pot_CONFIG pointer for the pot config struct which contains all the pot parametrs
 * @retval 			- uint16_t the minimum pot deg value
 * Note				- None
 */
uint16_t pot_min_val_get(pot_config  * pot_CONFIG )
{
	return pot_CONFIG->min_pot_value ;
}
/**================================================================
 * @Fn				- pot_min_val_set
 * @brief 			- gets the pot driver degree value
 * @param [in]      - *pot_CONFIG pointer for the pot config struct which contains all the pot parametrs
 * @param [in]      - max_value for the max value for the pot
 * @retval 			- None
 * Note				- None
 */
void pot_max_val_set(pot_config  * pot_CONFIG , uint16_t max_value )
{
	pot_CONFIG->min_pot_value = max_value ;

}
/**================================================================
 * @Fn				- pot_max_val_get
 * @brief 			- gets the pot driver degree value
 * @param [in]      - *pot_CONFIG pointer for the pot config struct which contains all the pot parametrs
 * @retval 			- uint8_t
 * Note				- None
 */
uint8_t pot_max_val_get(pot_config  * pot_CONFIG )
{
	return pot_CONFIG->max_pot_value ;
}
/**================================================================
 * @Fn				- pot_create
 * @brief 			- used in order to create a nwe pot
 * @param [in]      - *pot_CONFIG pointer for the pot config struct which contains all the pot parametrs
 * @param [in]      - pot_pin the pot pin which is connected to the mcu
 * @retval 			- None
 * Note				- The max no of pots is set to be 10 but can be changed from the header file of the pot
 */
void pot_create(pot_config  * pot_CONFIG , uint8_t pot_pin)
{	
	//incerement the counter and check that the counter is less than the max value
	if(counter < MAX_NO_OF_POTS)
	{
		pot_CONFIG->adc_pin = pot_pin;
		counter++;
		//ADC_channel in DMA ++
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
