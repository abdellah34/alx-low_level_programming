#include "main.h"
#include <stdio.h>
/**
*print_numbers - prints all numbers from 0 to 9
*Does retuns anything
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar ('0' + i);
	_putchar ('\n');
}
