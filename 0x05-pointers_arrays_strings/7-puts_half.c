#include "main.h"
/**
*puts_half - prints half of a string followed by a new line
*@str: a string pointer
*Doses retun anything
*/
void puts_half(char *str)
{
	int n = 0, i, m;

	while (str[n] != '\0')
	{
		n++;
	}
	if (n % 2 == 1)
	{
		m = (n - 1) / 2;
	}
	else if (n % 2 == 0)
	{
		m = (n - 2) / 2;
	}
	for (i = m + 1; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
