#include "main.h"
/**
 * print_binary - print the binary representation of a number.
 * @n: pointer pointing to a string of 0 and 1 chars.
 * Return: void .
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int start = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (mask)
	{
		if (n & mask)
		{
			start = 0;
			putchar('1');
		}
		else if (!start)
		{
			putchar('0');
		}
		mask >>= 1;
	}
}
