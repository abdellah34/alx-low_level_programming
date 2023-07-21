#include "main.h"

/**
* print_triangle - draws a triangle in the terminal
* @size: the size of the triangle
* Does retuns anything
*/
void print_triangle(int size)
{
	int i, j, k;

	if (size >= 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j >= 1; j--)
			{
				_putchar (' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar ('#');
			}
		if (i != size)
			_putchar ('\n');
		}
	_putchar ('\n');
	}
}
