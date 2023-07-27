#include "main.h"
/**
* *cap_string - capitalizes all words of string
* @a: a string pointer
* Return: capitalizing words
*/
char *cap_string(char *a)
{
	int p = 0, i, count = 0;

	while (a[p] != '\0')
	{
		p++;
	}
	for (i = 0; i < p; i++)
	{
		if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n' ||
				a[i] == ',' || a[i] == '!' || a[i] == '.' ||
				a[i] == '?' || a[i] == '\"' || a[i] == '(' ||
				a[i] == ')' || a[i] == '{' || a[i] == '}' || a[i] == ';')
		{
			count = 1;
		}
		else if (count)
		{
			a[i] = a[i] - 32;
			count = 0;
		}
		else
		{
			a[i] = a[i];
		}
	}
	return (a);
}
