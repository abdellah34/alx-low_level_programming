#include "main.h"
/**
* _strspn - guets the length of prefix substring
* @s: is the string to scanned
* @accept: is the string contains the list of characters
* Return: the number of characters in initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s != ' ')
	{
		if (*s != *accept)
		{
			n++;
		}
		s++;
	}
	return (n);
}
