#include "encoder.h"


void en_init         (en_config * en_CONFIG , uint8_t pinA , uint8_t pinB)
{


	en_CONFIG->cw_pina_A = pinA ;

	en_CONFIG->cw_pin_B = pinB ;

	en_CONFIG->counts = 0;

}
void en_counts_set   (en_config * en_CONFIG)
{

}
uint8_t en_counts_get   (en_config * en_CONFIG)
{
    return en_CONFIG->counts;
}


void en_exti(en_config * en_CONFIG)
{
    //read value
    //if cw ++count
    //else ccw --count
}


