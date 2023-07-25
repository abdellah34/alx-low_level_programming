#include "main.h"
/**
*_strcpy -  copies the string pointed to by src
*@dest: a string pointer
*@src: a string pointer
*Return: the poiter to dest
*/
char *_strcpy(char *dest, char *src)
{
	char *ori = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ori);
}
