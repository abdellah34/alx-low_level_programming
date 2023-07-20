#include <stdio.h>

/**
*_isdigit - checks for  a digit (0 through 9).
* @c: is the digit to checks
* Return: 1 if c is digit
* 0 otherwise
*/
int _isdigit(int c)
{
	return (c >= '0' && c <= '9' ? 1 : 0);
}
