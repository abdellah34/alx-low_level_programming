#include "main.h"

/**
* print_square - draws a square in the terminal
* @size: the size of the square
* Does retuns anything
*/
void print_square(int size)
{
	int i, j;

	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar ('#');
			}
			if (i != size)
			_putchar ('\n');
		}
	}
	_putchar ('\n');
}
