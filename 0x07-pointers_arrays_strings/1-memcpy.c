#include "main.h"
/**
* _memcpy - copies n charakters from memory area src to memory area dest
* @src: is the pointer to the source
* @dest: is pointer to the destination
* * @n: the number of bytes to be copied
* Return: a pointer to destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
