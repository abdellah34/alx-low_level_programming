#include "main.h"
/**
* _strstr - locates a string
* @haystack: is the string to scanned
* @needle: is the string contains the characters
* Return: a pointer to the first occurence of in haystack
*/
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
