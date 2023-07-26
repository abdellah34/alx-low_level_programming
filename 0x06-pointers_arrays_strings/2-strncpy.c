#include "main.h"
/**
* *_strncpy -  copies the string pointed to by src
* @dest: a string pointer
* @src: a string pointer
* @n: the number of bytes from src
*Return: the poiter to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	return (dest);
}
