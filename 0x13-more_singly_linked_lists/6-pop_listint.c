#include "lists.h"

/**
 * pop_listint - delete the head node of a list.
 * @head: the head node .
 * Return: the head node’s data (n).
 **/
int pop_listint(listint_t **head)
{
	listint_t *aux = *head;
	int n = aux->n;

	if (*head == NULL)
		return (0);

	aux = (*head)->next;
	free(*head);
	*head = aux;
	return (n);
}
