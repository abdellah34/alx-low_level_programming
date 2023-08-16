#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function .
 * @array: an array.
 * @size: a size of array.
 * @action: a function pointer.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && size != 0 && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
