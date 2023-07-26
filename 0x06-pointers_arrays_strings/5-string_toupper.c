#include "main.h"
/**
*  *string_toupper - changes all lowercase letters of a string to uppercase
* @a: a string pointer
* Return: uppercase string
*/
char *string_toupper(char *a)
{
	int p = 0, i;

	while (a[p] != '\0')
	{
		p++;
	}
	for (i = 0; i < p; i++)
	{
		if (a[i] >= 97 && a[i] <= 123)
		{
			a[i] = a[i] - 32;
		}
		else
		{
			a[i] = a[i];
		}
	}
	return (a);
}
