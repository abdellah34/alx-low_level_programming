#include "main.h"
/**
*print_last_digit - prints the last digit of a number
*@n: The int to print its digit
*Return: 1 if n is greater than 0
* 0 if n is zero
* -1 x  n otherwise
*/
int print_last_digit(int n)
{
	if (n >= 0)
	{
		n = n % 10;
		_putchar(n + '0');
	}
	else
	{
		n = (-1 * n) % 10;
		_putchar(n + '0');
	}
	return (n);
}
