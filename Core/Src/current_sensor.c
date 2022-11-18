#include "current_sensor.h"

/**================================================================
 * @Fn				- cs_init
 * @brief 			- Initilaizes the current sensor
 * @param [in]      - *cs_CONFIG pointer for the cs_config struct which contains all the current sensor parametrs
 * @param [in]      - adc_pin variable to declare which pin is connected to the adc
 * @retval 			- uint8_t returns the status of the operation
 * Note				- None
 */
uint8_t cs_init         (cs_config * cs_CONFIG , uint8_t adc_pin);
/**================================================================
 * @Fn				- cs_update
 * @brief 			- updates the current sensor value
 * @param [in]      - *cs_CONFIG pointer for the cs_config struct which contains all the current sensor parametrs
 * @retval 			- uint8_t returns the status of the operation
 * Note				- None
 */
uint8_t cs_update  (cs_config * cs_CONFIG);
/**================================================================
 * @Fn				- cs_val_get
 * @brief 			- gets  the current sensor value
 * @param [in]      - *cs_CONFIG pointer for the cs_config struct which contains all the current sensor parametrs
 * @retval 			- uint8_t returns the status of the operation
 * Note				- None
 */
uint8_t cs_val_get     (cs_config * cs_CONFIG);
/**================================================================
 * @Fn				- cs_limit
 * @brief 			- limits the current sensor value
 * @param [in]      - *cs_CONFIG pointer for the cs_config struct which contains all the current sensor parametrs
 * @retval 			- uint8_t returns the status of the operation
 * Note				- None
 */
uint8_t cs_limit        (cs_config * cs_CONFIG);