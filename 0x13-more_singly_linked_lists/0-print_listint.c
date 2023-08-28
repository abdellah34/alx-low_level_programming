#include "lists.h"

/**
 * print_listint - print all the elements of a list.
 * @h: a pointer points to the list.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
