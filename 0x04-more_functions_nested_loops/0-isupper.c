#include <stdio.h>

/**
*_isupper - checks for uppercase character.
* @c: is the character to checks
* Return: 1 if c is uppercase
* 0 otherwise
*/
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z' ? 1 : 0);
}
