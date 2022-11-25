#include "drv8220.h"
/**================================================================
 * @Fn				- motor_init
 * @brief 			- Initilaizes the motor driver
 * @param [in]      - *motor_definition pointer for the motor_config struct which contains all the motor parametrs
 * @param [in]      - out1 variable to declare pwm value
 * @param [in]      - out2 variable to declare pwm value
 * @param [in]      - direction variable to declare direction value
 * @retval 			- uint8_t returns the status of the operation
 * Note				- None
 */
void motor_init(motor_config* motor_definition ,uint8_t out1 , uint8_t out2 , uint8_t direction )
{
    motor_definition->out_1 = out1;
    motor_definition->out_2 = out2;
    motor_definition->direction_set = direction;
    motor_definition->status = STOP;

    HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_1);
    HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_2);
    //note pwm is fixed ىneed to be passed directly to the function
}
/**================================================================
 * @Fn				- motor_start
 * @brief 			- starts the motor motion
 * @param [in]      - *motor_definition pointer for the motor_config struct which contains all the motor parametrs
 * @param [in]      - direction variable to declare direction value
 * @retval 			- uint8_t returns the status of the operation
 * Note				- None
 */
void motor_start(motor_config* motor_definition , uint8_t direction)
{

    //Duty cycle = CCR/ARR 
    //IN1 1 
    //IN2  0 
    //Forward
    if(direction == CW_MOV)
    {
        TIM4->CCR1 = 50;
        TIM4->CCR2 = 0 ;
        motor_definition->status = CW_MOV;
    }
    //IN1  0 
    //IN2  1 
    //Reverse
    else if (direction == CCW_MOV)
    {
        TIM4->CCR1 = 0;
        TIM4->CCR2 = 50 ;
        motor_definition->status = CCW_MOV;


    }

}
/**================================================================
 * @Fn				- motor_stop
 * @brief 			- stops the motor motion
 * @param [in]      - *motor_definition pointer for the motor_config struct which contains all the motor parametrs
 * @retval 			- uint8_t returns the status of the operation
 * Note				- None
 */
void motor_stop(motor_config* motor_definition )
{   
    //IN1           1
    //IN2           1
    //Brakes
        TIM4->CCR1 = 5000;
        TIM4->CCR2 = 5000 ;
        motor_definition->status = STOP;
}
