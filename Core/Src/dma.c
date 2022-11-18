#include "dma.h"
uint16_t ADC_DMA_BUFF[ADC_CHANNEL * NO_OF_ADC_SAMPLES]={0};
void dma_init(void)
{
	HAL_ADC_Start_DMA(&hadc1, (uint32_t *)ADC_DMA_BUFF, 4);
}

uint16_t adc_dma_readings_get(uint8_t channel)
{
    uint32_t adc_sum;
	int i;
	
	adc_sum = 0;
	if(channel < ADC_CHANNEL )
	{
		for(i=0; i<NO_OF_ADC_SAMPLES; i++)
			adc_sum += ADC_DMA_BUFF[channel+i*ADC_CHANNEL];
	}
	else
		return 1;
	
	return adc_sum/NO_OF_ADC_SAMPLES;
}
