/*
 * seven_segment.c
 *
 *  Created on: 12-Dec-2025
 *      Author: Sunil Sutar
 */

#include "../Inc/seven_segment.h"

int GPIO_7Segment_Init()
{
	/*
	 * 1. Make GPIO Direction as output
	 * 2. Write VAlue "1" For Common Anode 7 Segment Display
	 */

	GPIO_Configure_Direction(GPIO_66, GPIO_DIR_OUT);
	GPIO_Write_Value(GPIO_66, GPIO_HIGH_VALUE);

	GPIO_Configure_Direction(GPIO_67, GPIO_DIR_OUT);
	GPIO_Write_Value(GPIO_67, GPIO_HIGH_VALUE);

	GPIO_Configure_Direction(GPIO_69, GPIO_DIR_OUT);
	GPIO_Write_Value(GPIO_69, GPIO_HIGH_VALUE);

	GPIO_Configure_Direction(GPIO_68, GPIO_DIR_OUT);
	GPIO_Write_Value(GPIO_68, GPIO_HIGH_VALUE);

	GPIO_Configure_Direction(GPIO_45, GPIO_DIR_OUT);
	GPIO_Write_Value(GPIO_45, GPIO_HIGH_VALUE);

	GPIO_Configure_Direction(GPIO_44, GPIO_DIR_OUT);
	GPIO_Write_Value(GPIO_44, GPIO_HIGH_VALUE);

	GPIO_Configure_Direction(GPIO_26, GPIO_DIR_OUT);
	GPIO_Write_Value(GPIO_26, GPIO_HIGH_VALUE);

	GPIO_Configure_Direction(GPIO_46, GPIO_DIR_OUT);
	GPIO_Write_Value(GPIO_46, GPIO_HIGH_VALUE);

	return 0;
}

void Write_to_7Segment(uint8_t number)
{
	switch(number)
	{
		case 0:
		{
			GPIO_Write_Value(GPIO_66_P8_7_SEGA, SEGMENT_ON);
			GPIO_Write_Value(GPIO_67_P8_8_SEGB, SEGMENT_ON);
			GPIO_Write_Value(GPIO_69_P8_9_SEGC, SEGMENT_ON);
			GPIO_Write_Value(GPIO_45_P8_11_SEGD, SEGMENT_ON);
			GPIO_Write_Value(GPIO_44_P8_12_SEGE, SEGMENT_ON);
			GPIO_Write_Value(GPIO_26_P8_14_SEGF, SEGMENT_ON);
			GPIO_Write_Value(GPIO_46_P8_16_SEGG, SEGMENT_OFF);
			break;
		}
		case 1:
		{
			GPIO_Write_Value(GPIO_66_P8_7_SEGA, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_67_P8_8_SEGB, SEGMENT_ON);
			GPIO_Write_Value(GPIO_69_P8_9_SEGC, SEGMENT_ON);
			GPIO_Write_Value(GPIO_45_P8_11_SEGD, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_44_P8_12_SEGE, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_26_P8_14_SEGF, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_46_P8_16_SEGG, SEGMENT_OFF);
			break;
		}
		case 2:
		{
			GPIO_Write_Value(GPIO_66_P8_7_SEGA, SEGMENT_ON);
			GPIO_Write_Value(GPIO_67_P8_8_SEGB, SEGMENT_ON);
			GPIO_Write_Value(GPIO_69_P8_9_SEGC, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_45_P8_11_SEGD, SEGMENT_ON);
			GPIO_Write_Value(GPIO_44_P8_12_SEGE, SEGMENT_ON);
			GPIO_Write_Value(GPIO_26_P8_14_SEGF, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_46_P8_16_SEGG, SEGMENT_ON);
			break;
		}
		case 3:
		{
			GPIO_Write_Value(GPIO_66_P8_7_SEGA, SEGMENT_ON);
			GPIO_Write_Value(GPIO_67_P8_8_SEGB, SEGMENT_ON);
			GPIO_Write_Value(GPIO_69_P8_9_SEGC, SEGMENT_ON);
			GPIO_Write_Value(GPIO_45_P8_11_SEGD, SEGMENT_ON);
			GPIO_Write_Value(GPIO_44_P8_12_SEGE, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_26_P8_14_SEGF, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_46_P8_16_SEGG, SEGMENT_ON);
			break;
		}
		case 4:
		{
			GPIO_Write_Value(GPIO_66_P8_7_SEGA, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_67_P8_8_SEGB, SEGMENT_ON);
			GPIO_Write_Value(GPIO_69_P8_9_SEGC, SEGMENT_ON);
			GPIO_Write_Value(GPIO_45_P8_11_SEGD, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_44_P8_12_SEGE, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_26_P8_14_SEGF, SEGMENT_ON);
			GPIO_Write_Value(GPIO_46_P8_16_SEGG, SEGMENT_ON);
			break;
		}
		case 5:
		{
			GPIO_Write_Value(GPIO_66_P8_7_SEGA, SEGMENT_ON);
			GPIO_Write_Value(GPIO_67_P8_8_SEGB, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_69_P8_9_SEGC, SEGMENT_ON);
			GPIO_Write_Value(GPIO_45_P8_11_SEGD, SEGMENT_ON);
			GPIO_Write_Value(GPIO_44_P8_12_SEGE, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_26_P8_14_SEGF, SEGMENT_ON);
			GPIO_Write_Value(GPIO_46_P8_16_SEGG, SEGMENT_ON);
			break;
		}
		case 6:
		{
			GPIO_Write_Value(GPIO_66_P8_7_SEGA, SEGMENT_ON);
			GPIO_Write_Value(GPIO_67_P8_8_SEGB, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_69_P8_9_SEGC, SEGMENT_ON);
			GPIO_Write_Value(GPIO_45_P8_11_SEGD, SEGMENT_ON);
			GPIO_Write_Value(GPIO_44_P8_12_SEGE, SEGMENT_ON);
			GPIO_Write_Value(GPIO_26_P8_14_SEGF, SEGMENT_ON);
			GPIO_Write_Value(GPIO_46_P8_16_SEGG, SEGMENT_ON);
			break;
		}
		case 7:
		{
			GPIO_Write_Value(GPIO_66_P8_7_SEGA, SEGMENT_ON);
			GPIO_Write_Value(GPIO_67_P8_8_SEGB, SEGMENT_ON);
			GPIO_Write_Value(GPIO_69_P8_9_SEGC, SEGMENT_ON);
			GPIO_Write_Value(GPIO_45_P8_11_SEGD, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_44_P8_12_SEGE, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_26_P8_14_SEGF, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_46_P8_16_SEGG, SEGMENT_OFF);
			break;
		}
		case 8:
		{
			GPIO_Write_Value(GPIO_66_P8_7_SEGA, SEGMENT_ON);
			GPIO_Write_Value(GPIO_67_P8_8_SEGB, SEGMENT_ON);
			GPIO_Write_Value(GPIO_69_P8_9_SEGC, SEGMENT_ON);
			GPIO_Write_Value(GPIO_45_P8_11_SEGD, SEGMENT_ON);
			GPIO_Write_Value(GPIO_44_P8_12_SEGE, SEGMENT_ON);
			GPIO_Write_Value(GPIO_26_P8_14_SEGF, SEGMENT_ON);
			GPIO_Write_Value(GPIO_46_P8_16_SEGG, SEGMENT_ON);
			break;
		}
		case 9:
		{
			GPIO_Write_Value(GPIO_66_P8_7_SEGA, SEGMENT_ON);
			GPIO_Write_Value(GPIO_67_P8_8_SEGB, SEGMENT_ON);
			GPIO_Write_Value(GPIO_69_P8_9_SEGC, SEGMENT_ON);
			GPIO_Write_Value(GPIO_45_P8_11_SEGD, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_44_P8_12_SEGE, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_26_P8_14_SEGF, SEGMENT_ON);
			GPIO_Write_Value(GPIO_46_P8_16_SEGG, SEGMENT_ON);
			break;
		}
		case 10:
		{
			GPIO_Write_Value(GPIO_66_P8_7_SEGA, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_67_P8_8_SEGB, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_69_P8_9_SEGC, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_45_P8_11_SEGD, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_44_P8_12_SEGE, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_26_P8_14_SEGF, SEGMENT_OFF);
			GPIO_Write_Value(GPIO_46_P8_16_SEGG, SEGMENT_OFF);
			break;
		}
	}
}

void Start_UpCounting(int delay_ms)
{
	uint8_t i=0;

	if(GPIO_7Segment_Init() < 0)
	{
		printf("Error: GPIO Init Failed!\n");
	}
	else
	{
		printf("Up Counting..\n");

		while(1)
		{
			for(i=0; i<10; i++)
			{
				Write_to_7Segment(i);
				usleep(delay_ms * 1000);	//delay :converting msec to usec
			}
		}
	}
}

void Start_DownCounting(int delay_ms)
{
	uint8_t i=0;

	if(GPIO_7Segment_Init() < 0)
	{
		printf("Error: GPIO Init Failed!\n");
	}
	else
	{
		printf("Down Counting..\n");

		while(1)
		{
			for(i=9; i>=0; i--)
			{
				Write_to_7Segment(i);
				usleep(delay_ms * 1000);	//delay : converting msec to usec
			}
		}
	}
}

void Start_UpDownCounting(int delay_ms)
{
	uint8_t i=0;

	if(GPIO_7Segment_Init() < 0)
	{
		printf("Error: GPIO Init Failed!\n");
	}
	else
	{
		printf("Up Counting..\n");

		while(1)
		{
			//Up Counting
			for(i=0; i<10; i++)
			{
				Write_to_7Segment(i);
				usleep(delay_ms * 1000);	//delay :converting msec to usec
			}

			//Down Counting
			for(i=9; i>=0; i--)
			{
				Write_to_7Segment(i);
				usleep(delay_ms * 1000);	//delay : converting msec to usec
			}
		}
	}
}

void Start_RandomCounting(int delay_ms)
{
	if(GPIO_7Segment_Init() < 0)
	{
		printf("Error: GPIO Init Failed!\n");
	}
	else
	{
		while(1)
		{
			srand(time(NULL));				// Seed random number generator
			int num = rand() % 10;
			printf("num = %d\n", num);
			Write_to_7Segment(num);
			usleep(delay_ms * 1000);		//delay
		}
	}
}

