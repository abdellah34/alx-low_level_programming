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
	char *copy;
	unsigned int cont, f;

	if (!str)
	{
		return (NULL);
	}
	else
	{
		cont = 0;
		while (*(str + cont) != '\0')
		{
			cont++;
		}
		copy = malloc(cont + 1);
		if (!copy)
		{
			return (NULL);
		}
		else
		{
			for (f = 0; f <= cont; f++)
			{
				copy[f] = str[f];
			}
			return (copy);
		}
	}
}
