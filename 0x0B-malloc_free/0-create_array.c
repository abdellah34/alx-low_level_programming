#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @c: The character to initialized with
 * @size: is the size of array
 * Return: a pointer to the array , or Null if it fail
 */
char *create_array(unsigned int size, char c)
{
	char *a = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	if (a == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
