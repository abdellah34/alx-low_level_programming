#include "lists.h"

/**
 * listint_len - calculate the number of elements of a list.
 * @h: a pointer points to the list.
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
