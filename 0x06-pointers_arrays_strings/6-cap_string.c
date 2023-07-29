#include "main.h"
/**
* *cap_string - capitalizes all words of string
* @a: a string pointer
* Return: capitalizing words
*/
char *cap_string(char *a)
{
	int i, j, count = 0;
	char p[] = "\n  ,.\t;!?\"(){}";

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == '\t')
		{
			a[i] = ' ';
		}
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; p[j] != '\0'; j++)
		{
			if ((a[i] == 0) || a[i - 1] == p[j])
			{
				count = 1;
			}
			else if (a[i] >= 'a' && a[i] <= 'z' && count)
			{
				a[i] = a[i] - 32;
			}
			else
			{
				a[i] = a[i];
			}
		}
		count = 0;
	}
	return (a);
}
