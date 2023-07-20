#include "main.h"
#include <stdio.h>
/**
*print_most_numbers - prints all numbers from 0 to 9 except 2 and 4
*Does retuns anything
*/
void more_numbers(void)
{
	int i,j;

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
