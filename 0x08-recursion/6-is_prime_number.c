#include "main.h"
/**
 * is_prime_help - returns if the integer is prime
 * @n: is the num to check
 * @i: is the initil divisor num
 * Return: the result
 */
int is_prime_help(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime_help(n, i + 1));
		}
	}
	return (1);
}
/**
 * is_prime_number - checks for a prime numbers
 * @n: is the number to check
 * Return: the result
 */
int is_prime_number(int n)
{
	return (is_prime_help(n, 2));
}
