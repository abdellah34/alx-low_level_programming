#include "lists.h"

/**
 * pop_listint - delete the head node of a list.
 * @head: the head node .
 * Returns: the head node’s data (n).
 **/
int pop_listint(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *aux = *head;
	int n = curr->n;

	if (head == NULL || *head == NULL)
		return (0);

	curr = curr->next;
	free(aux);
	*head = curr;
	return (n);
}
