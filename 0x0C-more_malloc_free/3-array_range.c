#include "main.h"
#include <stdlib.h>
/**
 *array_range - creates an array of integers.
 *@min: the min num.
 *@max: the max num.
 *Return: a pointer or NULL if fails
 */
int *array_range(int min, int max)
{
	int tot = max - min, k, i;
	int *ptr = NULL;

	if (min > max)
		return (NULL);
	ptr = malloc((tot + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0, k = min; k <= max; i++, k++)
	{
		*(ptr + i) = k;
	}
	return (ptr);
}
