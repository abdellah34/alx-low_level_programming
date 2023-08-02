#include "main.h"
/**
 * _pow_recursion - retuerns x raised of the power of y
 * @x: is the base value
 * @y: is the power value
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
