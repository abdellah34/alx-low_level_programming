#include "main.h"
/**
* _strlen - returns the length of a string
*@s: a string
*Return: the length
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
* _strncat - concatenates two strings
* @src: a string pointer
* @dest: a string pointer
* @n: the number of bytes from src 
* Return: the concatenating strings
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[k + i] = src[i];
	}
	return (dest);
}
