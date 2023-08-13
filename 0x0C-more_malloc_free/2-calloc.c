#include "main.h"
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array , using malloc
 *@nmemb: The nember of elements
 *@size: the size
 *Return: a pointer or NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int tot, k;

	tot = nmemb * size;
	if (tot == 0)
		return (NULL);
	ptr = (char *)malloc(tot);
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < nmemb; k++)
	{
		*(ptr + k) = 0;
	}
	*(ptr + k) = '\0';
	return (ptr);
}
