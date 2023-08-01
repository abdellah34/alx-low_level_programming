#include "main.h"
/**
* _strpbrk - locates the first occurrence in the string
* @s: is the string to scanned
* @accept: is the string contains the characters
* Return: a pointer to the first occurenceof the character
*/
char *_strpbrk(char *s, char *accept)
{
	char *ch;
	while (*s)
	{
		ch = accept;
		while (*ch)
		{
			if (*s == *ch)
			{
				return (s);
			}
			ch++;
		}
		s++;
	}
	return (0);
}
