#include "main.h"
/**
* print_sign - prints the sign of a number
*@n: The int to print
*Return: 1 if n is greater than 0
* 0 if n is zero
* -1 otherwise
*/
int print_sign(int n)
{
if (n != 0)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
else
{
	_putchar('0');
	return (0);
}
}
