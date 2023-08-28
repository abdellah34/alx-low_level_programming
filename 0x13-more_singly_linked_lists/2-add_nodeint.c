#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a list.
 * @head: the head node .
 * @n: the integer to add.
 * Return: the address of the next node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = 0;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);

	}

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
