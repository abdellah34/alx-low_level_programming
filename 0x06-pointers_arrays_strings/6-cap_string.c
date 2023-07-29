#include "main.h"
/**
* *cap_string - capitalizes all words of string
* @a: a string pointer
* Return: capitalizing words
*/
char *cap_string(char *a)
{
	int i, j;
	char p[] = "\n  ,.\t;!?\"(){}";

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			for (j = 0; p[j] != '\0'; j++)
			{
				if ((a[i] == 0) || a[i - 1] == p[j])
				{
					a[i] = a[i] - 32;
					break;
				}
			}
	}
	return (a);
}
