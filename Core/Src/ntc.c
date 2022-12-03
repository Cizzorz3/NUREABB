#include "ntc.h"
/**================================================================
 * @Fn				- ntc_init
 * @brief 			- Initilaizes the ntc driver
 * @param [in]      - *ntc_CONFIG pointer for the ntc config struct which contains all the ntc parametrs
 * @param [in]      - ntc_pin variable to indicate which pin the ntc is connected to
 * @retval 			- None
 * Note				- None
 */
void  ntc_init        (ntc_config * ntc_CONFIG , uint8_t ntc_pin)
{
	ntc_CONFIG->adc_pin = ntc_pin;
}
/**================================================================
 * @Fn				- ntc_temp_update
 * @brief 			- updates the ntc driver temperature
 * @param [in]      - *ntc_CONFIG pointer for the ntc config struct which contains all the ntc parametrs
 * @retval 			- None
 * Note				- None
 */
void  ntc_temp_update (ntc_config * ntc_CONFIG)
{
	//note here the equation of the ntc have to be applied
	ntc_CONFIG->deg_value = adc_dma_readings_get(1);
}
/**================================================================
 * @Fn				- ntc_temp_get
 * @brief 			- gets the ntc reading
 * @param [in]      - *ntc_CONFIG pointer for the ntc config struct which contains all the ntc parametrs
 * @retval 			- uint16_t the ntc reading
 * Note				- None
 */
uint16_t ntc_temp_get    (ntc_config * ntc_CONFIG)
{
	return adc_dma_readings_get(1);
}
