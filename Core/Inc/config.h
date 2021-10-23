/*
 * config.h
 *
 *  Created on: Sep 11, 2021
 *      Author: Maier
 */

#ifndef INC_CONFIG_H_
#define INC_CONFIG_H_

#include "main.h"
#include "tim.h"

#define _16BIT 65536
#define _12BIT 4096
#define _32BIT 4294967296

#define CPU_clock (170E6)

#define BUFFER_SIZE 8192
#define TRIGGER_HISTERESIS 200
#define TX_BUFFER_SIZE 100

// Rate of LED blinking when waiting for connection: n-times slower than connection check
#define LED_BLINK_NOT_CONNECTED 2

#define DEFAULT_PWM_FREQ 10000.0
#define OSC_DEFAULT_FS 100000.0

static TIM_HandleTypeDef *timer_pwm = &htim2;
#define PWM_TIMER_CHANNEL  TIM_CHANNEL_4
#define MAX_PWM_FREQ 20000000.0
#define MAX_Fs 5000000.0
#define PWM_PIN 8
#define PWM_TIMER_MAX_ARR _32BIT

static TIM_HandleTypeDef *timer_adc = &htim3;
#define ADC_RESOLUTION _12BIT
#define ADC_REF_LOW 0.0
#define ADC_REF_HIGH 3.3
#define ADC_TIMER_MAX_ARR _16BIT

#define VREF_LOW 0.0
#define VREF_HIGH 3.3

static const uint32_t samplingTimes[11] = { ADC_SAMPLETIME_640CYCLES_5, ADC_SAMPLETIME_640CYCLES_5, ADC_SAMPLETIME_640CYCLES_5,
ADC_SAMPLETIME_640CYCLES_5, ADC_SAMPLETIME_640CYCLES_5, ADC_SAMPLETIME_640CYCLES_5,
ADC_SAMPLETIME_247CYCLES_5, ADC_SAMPLETIME_92CYCLES_5, ADC_SAMPLETIME_47CYCLES_5,
ADC_SAMPLETIME_24CYCLES_5, ADC_SAMPLETIME_6CYCLES_5 };

static const char *cycles[11] = { "640.5", "640.5", "640.5", "640.5", "640.5", "640.5", "247.5", "92.5", "47.5", "24.5", "6.5" };
static const char *in_imp[11] = { "600k", "600k", "600k", "600k", "600k", "600k", "230k", "87k", "44k", "23k", "6100" };

static const uint16_t bufferLengths[5] = { 256, 512, 1024, 2048, 4096 };

#endif /* INC_CONFIG_H_ */
