#include "main.h"
/**
*times_table - prints the 9 times table, starting with 0
*does not return a value
*
*/
void times_table(void)
{
	int j, i, m;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{m = i * j;
			if (m < 10)
			{
				if (j != 0)
					_putchar(' ');
				_putchar('0' + m);
			}
			else
			{
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
