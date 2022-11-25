#include "encoder.h"

static uint8_t counter = 0 ;
/**================================================================
 * @Fn				- en_init
 * @brief 			- initiallize the encoder driver
 * @param [in]      - pinA the pin which is connected to the MCU
 * @param [in]      - pinB the pin which is connected to the MCU
 * @retval 			- None
 * Note				- None
 */
void en_init         (en_config * en_CONFIG , uint8_t pinA , uint8_t pinB)
{
	en_CONFIG->cw_pina_A = pinA ;

	en_CONFIG->cw_pin_B = pinB ;

	en_CONFIG->counts = 0;

}
/**================================================================
 * @Fn				- en_counts_set
 * @brief 			- sets the counter variable in the encoder struct
 * @param [in]      - en_CONFIG a pointer to the encoder struct
 * @retval 			- None
 * Note				- None
 */
void en_counts_set   (en_config * en_CONFIG)
{
	en_CONFIG->counts = counter;
}
/**================================================================
 * @Fn				- en_counts_get
 * @brief 			- gets the value of the counter in the encoder stuct
 * @param [in]      - en_CONFIG a pointer to the encoder struct
 * @retval 			- uint8_t the value of the encoder counter
 * Note				- None
 */
//note 16 bit
uint8_t en_counts_get   (en_config * en_CONFIG)
{
    return en_CONFIG->counts;
}

// check if it have to be called in main
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{

//	if(HAL_GPIO_ReadPin(GPIOC, Encoder_B_Pin) != HAL_GPIO_ReadPin(GPIOC, Encoder_A_Pin))
//	{
//		if(counter > 0)
//		{
//			counter--;
//		}
//		/////////
//		//neg_counts++;
//		///////
//
//	}
//	else
//	{
//		counter++;
//	}
	//HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_14);
}



