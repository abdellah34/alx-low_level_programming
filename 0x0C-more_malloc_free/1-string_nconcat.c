#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenates two strings
 *@s1: The first string
 *@s2: the second string
 *@n: seize
 *Return: a pointer or NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
		n = j;
	ptr = (char *)malloc(n + i + 1);
	if (ptr == NULL)
	{
		return (0);
	}
	else
	{
		for (k = 0; k < i; k++)
		{
			*(ptr + k) = *(s1 + k);
		}
		for (k = i; k < i + n; k++)
		{
			*(ptr + k) = *(s2 + k - i);
		}
	}
	return (ptr);
}
