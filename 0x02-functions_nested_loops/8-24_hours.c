#include "main.h"
/**
*jack_bauer - prints 10 times the alphabet, in lowercase
*does not return a value
*
*/
void jack_bauer(void)
{
	int j, i;

	for (i = 0 ; i < 24 ; i++)
	{
		for (j = 0 ; j < 60 ; j++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
		}
	}
}
