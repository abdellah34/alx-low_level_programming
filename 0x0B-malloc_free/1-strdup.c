#include <stdlib.h>
#include <string.h>
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
	char *a = (char *)malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (a != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			a[i] = str[i];
		}
	}
	return (a);
}
