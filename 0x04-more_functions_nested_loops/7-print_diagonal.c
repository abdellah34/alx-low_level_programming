#include "main.h"

/**
* print_diagonal - draws a diagonal in the terminal
* @n: the length of the diagonal
* Does retuns anything
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			if (j != n)
			_putchar ('\n');
		}
	}
	_putchar ('\n');
}
