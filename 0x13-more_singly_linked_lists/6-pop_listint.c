#include "lists.h"

/**
 * free_listint2 - free a list and set the head to NULL.
 * @head: the head node .
 * Returns: void .
 **/
int pop_listint(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *aux = *head;
	int n = curr->n;

	if (head == NULL)
		return (0);

	curr = curr->next;
	free(aux);
	*head = curr;
	return (n);
}
