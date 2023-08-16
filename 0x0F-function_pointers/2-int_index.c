#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: an array.
 * @size: a size of array.
 * @cmp: a pointer to the function.
 * Return: an integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == 0)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	while (index < size)
	{
		if (cmp(array[index]))
			break;
		index++;
	}
	return (index);
}
