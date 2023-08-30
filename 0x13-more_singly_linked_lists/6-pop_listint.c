#include "lists.h"

/**
 * pop_listint - delete the head node of a list.
 * @head: the head node .
 * Return: the head node’s data (n).
 **/
int pop_listint(listint_t **head)
{
	listint_t *aux = *head;
	int n = (*head)->n;

	if (!*head && !head)
		return (0);

	*head = (*head)->next;
	free(aux);

	return (n);
}
