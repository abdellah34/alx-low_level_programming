#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creates a pointer to a newly allocated space in memory
 * @str: a pointer of string
 *
 * Return: a pointer to the duplicate string , or Null if it fail
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	int size = 0;
	char *a;

	if (str == 0)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	if (size == 0)
	{
		return (0);
	}
	a = (char *)malloc(size * sizeof(char));

	if (a != 0)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			a[i] = str[i];
		}
	}
	return (a);
}
