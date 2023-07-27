#include "main.h"
/**
* *cap_string - capitalizes all words of string
* @a: a string pointer
* Return: capitalizing words
*/
char *cap_string(char *a)
{
	char arr[] = {'\n', ' ', ',', ';', '!', '?', '\"', '(', ')', '{', '}'};
	int  i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == '\t')
		{
			a[i] = ' ';
		}
	}

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; a[i] >= 97 && a[i] <= 123 && arr[j] != '\0'; j++)
		{
			if (a[i - 1] == arr[j])
			{
				a[i] = a[i] - 32;
			}
		}
	}
	return (a);
}
