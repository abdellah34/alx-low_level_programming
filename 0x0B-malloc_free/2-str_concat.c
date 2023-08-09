#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first  pointer of string
 * @s2: second pointer of string
 * Return: a pointer  , or Null if it fail
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int a = 0, b = 0, f, d = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + a) != '\0')
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	p = malloc(a + b + 1);
	if (!p)
	{
		return (NULL);
	}
	else
	{
		for (f = 0; f < a; f++)
		{
			p[f] = s1[f];
		}
		for (f = a; f <= (a + b); f++, d++)
		{
			p[f] = s2[d];
		}
		return (p);
	}
}
