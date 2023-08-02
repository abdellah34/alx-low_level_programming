#include "main.h"
/**
* factorial - calculates the factorial of a given number
* @n: is an integer
* Return: the value
*/
int factorial(int n)
{
	if (n <= 1)
	{
		if (n < 0)
		{
			return (-1);
		}
		return (1);
	}
	return (n * factorial(n - 1));
}
