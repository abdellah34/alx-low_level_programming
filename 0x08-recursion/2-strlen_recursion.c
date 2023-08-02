#include "main.h"
/**
* _strlen_recursion - prints a string followed by a new line
* @s: is a char pointer
* Return: the lenght of a string
*/
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
