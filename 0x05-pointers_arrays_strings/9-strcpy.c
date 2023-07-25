#include "main.h"
/**
*_strcpy -  copies the string pointed to by src
*@dest: a string pointer
*@src: a string pointer
*Return: the poiter to dest
*/
char *_strcpy(char *dest, char *src)
{
	int n = 0, i;

	while (src[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
