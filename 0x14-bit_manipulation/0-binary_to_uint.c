#include "main.h"
/**
 * tow_pow - calculate the power of tow.
 * @p: the power.
 * Return: the power of tow.
 */
unsigned int tow_pow(int p)
{
	unsigned int m = 1;

	if (p == 0)
		return (1);
	while (p > 0)
	{
		m *= 2;
		p--;
	}
	return (m);
}
/**
 * binary_to_uint - convert a binary number to an unsigned int.
 * @b: pointer pointing to a string of 0 and 1 chars.
 * Return: the converted number, or 0 .
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i,  len = strlen(b);

	if (b == NULL)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			n += 0;
		}
		else if (b[i] == '1')
		{
			n += tow_pow(len - 1 - i);
		}
		else
		{
			return (0);
		}
	}

	return (n);
}
