#include "main.h"
/**
* *leet - encodes a string into 1337
* @a: a string pointer
* Return: encoding words
*/
char *leet(char *a)
{
	int j, i;
	char *b = "aeotl";
	char *c = "43071";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; b[j] != '\0'; j++)
		{
			if (a[i] == b[j] || a[i] == b[j] - 32)
			{
			a[i] = c[j];
			}
		}

	}
	return (a);
}
