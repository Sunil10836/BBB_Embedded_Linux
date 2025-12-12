/*
 * seven_segment.h
 *
 *  Created on: 12-Dec-2025
 *      Author: Sunil Sutar
 */

#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <time.h>

#include "gpio_driver.h"

#define GPIO_66     66
#define GPIO_67     67
#define GPIO_69     69
#define GPIO_68     68
#define GPIO_45     45
#define GPIO_44     44
#define GPIO_26     26
#define GPIO_46     46

#define GPIO_66_P8_7_SEGA       GPIO_66
#define GPIO_67_P8_8_SEGB       GPIO_67
#define GPIO_69_P8_9_SEGC       GPIO_69
#define GPIO_68_P8_10_DP        GPIO_68
#define GPIO_45_P8_11_SEGD      GPIO_45
#define GPIO_44_P8_12_SEGE      GPIO_44
#define GPIO_26_P8_14_SEGF      GPIO_26
#define GPIO_46_P8_16_SEGG      GPIO_46

#define HIGH_VALUE  		1
#define LOW_VALUE   		0

#define GPIO_DIR_OUT        HIGH_VALUE
#define GPIO_DIR_IN         LOW_VALUE

#define GPIO_LOW_VALUE      LOW_VALUE
#define GPIO_HIGH_VALUE     HIGH_VALUE

#define SEGMENT_ON          LOW_VALUE 	//HIGH_VALUE
#define SEGMENT_OFF         HIGH_VALUE


int GPIO_7Segment_Init();
void Write_to_7Segment(uint8_t number);
void Start_UpCounting(int delay_ms);
void Start_DownCounting(int delay_ms);
void Start_UpDownCounting(int delay_ms);
void Start_RandomCounting(int delay_ms);


#endif /* SEVEN_SEGMENT_H_ */
