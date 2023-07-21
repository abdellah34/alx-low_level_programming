#include "main.h"

/**
* print_triangle - draws a triangle in the terminal
* @size: the size of the triangle
* Does retuns anything
*/
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j >= 1; j--)
			{
				if (j > i)
				{
					_putchar (' ');
				}
				else
				{
				_putchar ('#');
				}
			}
			_putchar ('\n');
		}
	}
	else
	{
	_putchar ('\n');
	}
}
