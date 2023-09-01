#include "main.h"
/**
 * flip_bits - calculate the XOR between the two numbers.
 * @n: the first number.
 * @m: the secondnumber.
 * Return: the number of bits you would need to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int count = 0;

	while (flip)
	{
		count += flip & 1;
		flip >>= 1;
	}
	return (count);
}

