/*
 * gpio_driver.h
 *
 *  Created on: 12-Dec-2025
 *      Author: Sunil Sutar
 */

#ifndef GPIO_DRIVER_H_
#define GPIO_DRIVER_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

/* This is the path corresponds to GPIOs in the 'sys' directory */
#define SYS_GPIO_PATH 		"/sys/class/gpio"

#define SIZE 			100

int GPIO_Configure_Direction(uint32_t gpio_num, uint8_t dir_value);
int GPIO_Write_Value(uint32_t gpio_num, uint8_t out_value);
int GPIO_Read_Value(uint32_t gpio_num);
int GPIO_Configure_Edge(uint32_t gpio_num, char *edge);
int GPIO_File_Open(uint32_t gpio_num);
int GPIO_File_Close(int fd);


#endif /* GPIO_DRIVER_H_ */
