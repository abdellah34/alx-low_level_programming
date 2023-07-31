#include "main.h"
/**
* _memset - fills memory with a constant byte
* @s: is the pointer to fill
* @b: is the vaue to be set
* @n: the number of bytes to be set the value
* Return: apointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
