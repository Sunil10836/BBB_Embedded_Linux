/*
 * gpio_driver.c
 *
 *  Created on: 12-Dec-2025
 *      Author: Sunil Sutar
 */

#include "../Inc/gpio_driver.h"

/*
 *  GPIO configure direction
 *  dir_value : 1 means 'out' , 0 means "in"
 */
int GPIO_Configure_Direction(uint32_t gpio_num, uint8_t dir_value)
{
	int fd;
	char buf[SIZE];

	snprintf(buf, sizeof(buf), SYS_GPIO_PATH "/gpio%d/direction", gpio_num);

	fd = open(buf, O_WRONLY);

	if(fd < 0)
	{
		perror("gpio direction configure\n");
		return fd;
	}

	if(dir_value == 1)
	{
		write(fd, "out", 4);
	}
	else
	{
		write(fd, "in", 3);
	}

	close(fd);
	return 0;
}

/*
 *  GPIO write value
 *  out_value : can be either 0 or 1
 */
int GPIO_Write_Value(uint32_t gpio_num, uint8_t out_value)
{
	int fd;
	char buf[SIZE];

	snprintf(buf, sizeof(buf), SYS_GPIO_PATH "/gpio%d/value", gpio_num);

	fd = open(buf, O_WRONLY);

	if(fd < 0)
	{
		perror("gpio write value\n");
		return fd;
	}

	if(out_value == 1)
	{
		write(fd, "1", 2);
	}
	else
	{
		write(fd, "0", 2);
	}

	close(fd);
	return 0;
}

/*
 *  GPIO read value
 */
int GPIO_Read_Value(uint32_t gpio_num)
{
	int fd;
	char buf[SIZE];
	uint8_t read_value = 0;

	snprintf(buf, sizeof(buf), SYS_GPIO_PATH "/gpio%d/value", gpio_num);

	fd = open(buf, O_RDONLY);

	if(fd < 0)
	{
		perror("gpio read value\n");
		return fd;
	}

	read(fd, &read_value, 1);

	close(fd);

	return read_value;
}

/*
 *  GPIO configure the edge of trigger
 *  edge : rising, falling , none
 */
int GPIO_Configure_Edge(uint32_t gpio_num, char *edge)
{
	int fd;
	char buf[SIZE];

	snprintf(buf, sizeof(buf), SYS_GPIO_PATH "/gpio%d/edge", gpio_num);

	fd = open(buf, O_WRONLY);

	if(fd < 0)
	{
		perror("gpio configure edge\n");
		return fd;
	}

	write(fd, edge, strlen(edge) + 1 );

	close(fd);

	return 0;

}

/*
 *  Open the sys fs file corresponding to gpio number
 */
int GPIO_File_Open(uint32_t gpio_num)
{
	int fd;
	char buf[SIZE];

	snprintf(buf, sizeof(buf), SYS_GPIO_PATH "/gpio%d/value", gpio_num);

	fd = open(buf, O_RDONLY | O_NONBLOCK);

	if(fd < 0)
	{
		perror("gpio file open\n");
	}
	return fd;

}

/*
 *  close a file
 */
int GPIO_File_Close(int fd)
{
	return close(fd);
}


