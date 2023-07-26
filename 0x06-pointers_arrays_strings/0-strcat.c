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
*_strcat - concatenates two strings
* @src: a string pointer
* @dest: a string pointer
* Return: the concatenating strings
*/
char *_strcat(char *dest, char *src)
{
	int k = _strlen(dest), l = _strlen(src);

	
