#include "lists.h"

/**
 * list_len - calculate the number of elements of a list.
 * @h: a pointer points to the list.
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
