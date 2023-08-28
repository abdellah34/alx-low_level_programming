#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a list.
 * @head: the head node .
 * @str: the integer to add.
 * Return: the address of the next node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = *head;
	listint_t *new = NULL;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);

	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
