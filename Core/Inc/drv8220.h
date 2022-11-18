/**
 * @file drv8220.h
 * @author Mohamed Adel (mohamedaadelezz3@gmail.com)
 * @brief drv8220 baremetal driver
 * @version 0.1
 * @date 2022-11-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#ifndef _DRV8220_H__
#define _DRV8220_H__



#include "common_includes.h"

extern TIM_HandleTypeDef htim4;

typedef struct 
{
    uint8_t out_1;
    uint8_t out_2;
    uint8_t direction_set;
    uint8_t status;


}motor_config;


typedef enum 
{
    CW_MOV ,
    CCW_MOV ,
    STOP
}motor_state;



//APIS

void motor_init  (motor_config* motor_definition ,uint8_t out1 , uint8_t out2 , uint8_t direction );
void motor_start (motor_config* motor_definition , uint8_t direction);
void motor_stop  (motor_config* motor_definition );






#endif
