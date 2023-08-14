#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory block
 * @ptr: a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: a pointer or NULL if fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int k, min;
	void *p;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
	{
		return (ptr);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	min = old_size < new_size ? old_size : new_size;
	for (k = 0; k < min; k++)
	{
		*((char *)(p) + k) = *((char *)(ptr) + k);
	}
	return (p);
}
