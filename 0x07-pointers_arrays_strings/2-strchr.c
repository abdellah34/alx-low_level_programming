#include "main.h"
/**
* _strchr - locates a charcter in a string
* @s: is the string to scanned
* @c: is the character to be searched in s
* Return: a pointer to thee first occurenceof the character
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			break;
		}
	s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
