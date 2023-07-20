#include "main.h"
#include <stdio.h>
/**
* print_line - draws a straight line in the terminal
* @n: the length of the straight line
* Does retuns anything
*/
void print_line(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			_putchar ('_');
		}
	}
	_putchar ('\n');
}
