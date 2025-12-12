/*
 ============================================================================
 Name        : Counter_Seven_Segment.c
 Author      : Sunil Sutar
 Version     :
 Copyright   : Your copyright notice
 Description : This Application implements up/down/random counting on ( single digit ) 7 seg display
 ============================================================================
 */

/*==================================================================================
BBB_expansion_header_P8_pins           GPIO number            7Seg Display segment
===================================================================================
P8.7                                   GPIO_66                     a
P8.8                                   GPIO_67                     b
P8.9                                   GPIO_69                     c
P8.10                                  GPIO_68                     h //decimal point
P8.11                                  GPIO_45                     d
P8.12                                  GPIO_44                     e
P8.14                                  GPIO_26                     f
P8.16                                  GPIO_46                     g
=================================================================================== */

#include <stdio.h>
#include <stdlib.h>
#include "../Inc/seven_segment.h"

int main(int argc, char* argv[])
{
	if(argc != 3)
	{
		printf("Usage : <%s> <direction> <delay>\n", argv[0]);
		printf("Valid Direction : up, down, updown, random\n");
		printf("Recommended Delay Range : 0 to 1000\n");
	}
	else
	{
		/* convert the 'delay' value into integer */
		int delay_value = atoi(argv[2]);

		if(strcmp(argv[1], "up") == 0)
		{
			Start_UpCounting(delay_value);
		}
		else if(strcmp(argv[1], "down") == 0)
		{
			Start_DownCounting(delay_value);
		}
		else if(strcmp(argv[1], "updown") == 0)
		{
			Start_UpDownCounting(delay_value);
		}
		else if(strcmp(argv[1], "random") == 0)
		{
			Start_RandomCounting(delay_value);
		}
		else
		{
			printf("Invalid Direction Values\n");
			printf("Valid Direction Values : up, down, updown, random\n");
		}
	}

	return 0;
}
