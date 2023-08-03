#include "main.h"
/**
 * _sqrt_help - returns the natural square of root of a number
 * @n: is the number to calculate a square
 * @i: is the initil num
 * Return: the result
 */
int _sqrt_help(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (_sqrt_help(n, i + 1));
	}
	return (-1);
}
/**
 * _sqrt_recursion - returns the natural square of root of a number
 * @n: is the number to calculate a square
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	if (n >= 0)
	{
		return (_sqrt_help(n, 0));
	}
	return (-1);
}
