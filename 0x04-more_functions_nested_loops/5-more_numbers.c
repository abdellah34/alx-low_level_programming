#include "main.h"
#include <stdio.h>
/**
*more_numbers -  10 times the numbers, from 0 to 14
*Does retuns anything
*/
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar ('0' + j / 10);
			}
			_putchar('0' + j % 10);
		}
	_putchar ('\n');
	}
}
