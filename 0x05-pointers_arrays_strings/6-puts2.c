#include "main.h"
/**
*puts2 - prints a string in reverse followed by a new line
*@str: a string pointer
*Doses retun anything
*/
void puts2(char *str)
{
	int n = 0, i;

	while (str[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
