#include "vibrator.h"


void vib_init        (vib_config  * vib_CONFIG , uint8_t vib_pin)
{
	vib_CONFIG->io_pin = vib_pin;
}
void vib_on          (vib_config  * vib_CONFIG)
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
	vib_CONFIG->status = VIBRATOR_IS_ON;
}
void vib_off         (vib_config  * vib_CONFIG)
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
	vib_CONFIG->status = VIBRATOR_IS_OFF;
}
uint8_t vib_status_get  (vib_config  * vib_CONFIG)
{
	return vib_CONFIG->status;
}
