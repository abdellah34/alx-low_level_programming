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
	unsigned int tot = nmemb * size, k;
	void *ptr = malloc(tot);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < tot; k++)
	{
		*((char *)(ptr) + k) = 0;
	}
	return (ptr);
}
