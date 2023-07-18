#include "main.h"
/**
*  _abs - prints the absolute  value of a number
*@n: The int to print
*Return: 1 if n is greater than 0
* 0 if n is zero
* -1 x  n otherwise
*/
int _abs(int n)
{
if (n != 0)
{
	if (n > 0)
	{
	return (n);
	}
	else
	{
	return ((-1) * n);
	}
}
else
{
	return (0);
}
}
