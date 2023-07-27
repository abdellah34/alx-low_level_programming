#include "main.h"
/**
* *rot13 - encodes a string using rot13
* @a: a string pointer
* Return: encoding words
*/
char *rot13(char *a)
{
	int j, i;
	char *b = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *c = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWQYZABCDEFGHIJKLM";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; b[j] != '\0'; j++)
		{
			if (a[i] == b[j])
			{
				a[i] = c[j];
				break;
			}
		}
	}
	return (a);
}
