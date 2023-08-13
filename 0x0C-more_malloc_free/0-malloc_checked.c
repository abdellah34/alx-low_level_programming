#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked -  alocates memory using malloc
 *@b: The seize
 *Doses retun anything
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc (b);
	if (ptr == NULL)
	{
		exit (98);
	}
	return (ptr);
}
