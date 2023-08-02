#include "main.h"
/**
* _print_rev_recursion - prints a string followed by a new line
* @s: is a char pointer
* Does returns anything
*/
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
