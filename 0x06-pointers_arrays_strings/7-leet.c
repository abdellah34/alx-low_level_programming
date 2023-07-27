#include "main.h"
/**
* *leet - encodes a string into 1337
* @a: a string pointer
* Return: encoding words
*/
char *leet(char *a)
{
	int p = 0, i;

	while (a[p] != '\0')
	{
		p++;
	}
	for (i = 0; i < p; i++)
	{
		if (a[i] == 'a' || a[i] == 'A')
		{
			a[i] = '4';
		}
		else if (a[i] == 'e' || a[i] == 'E')
		{
			a[i] = '3';
		}
		else if (a[i] == 'o' || a[i] == 'O')
		{
			a[i] = '0';
		}
		else if (a[i] == 't' || a[i] == 'T')
		{
			a[i] = '7';
		}
		else if (a[i] == 'l' || a[i] == 'L')
		{
			a[i] = '1';
		}
		else
		{
			a[i] = a[i];
		}
	}
	return (a);
}
