#include "main.h"
/**
*rev_string - reverses prints a string
*@s: a string pointer
*Doses retun anything
*/
void rev_string(char *s)
{
	int n = 0, i;
	char ptr;

	while (s[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n / 2; i++)
	{
		ptr = s[i];
		s[i] = s[n - 1 - i];
		s[n - 1 - i] = ptr;
	}
}
