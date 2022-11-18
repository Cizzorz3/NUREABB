/**
 * @file dma.h
 * @author Mohamed Adel (mohamedaadelezz3@gmail.com)
 * @brief dma driver used to handle the conversions of the adc channels
 * @version 0.1
 * @date 2022-11-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#ifndef _DMA_H__
#define _DMA_H__

#include "common_includes.h"
extern ADC_HandleTypeDef hadc1;
#define ADC_CHANNEL         4
#define NO_OF_ADC_SAMPLES   10





void dma_init(void);
uint16_t adc_dma_readings_get(uint8_t channel);

#endif
