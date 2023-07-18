#include "main.h"
/**
*_islower - checks for lowercase character
*@c: The int to print
*Return: 1 if c is lowercase
* 0 otherwise
*/
int _islower(int c)
{
	return (c >= 97 && c <= 122 ? 1 : 0);
}
