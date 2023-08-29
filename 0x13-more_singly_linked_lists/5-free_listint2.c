#include "lists.h"

/**
 * free_listint2 - free a list and set the head to NULL.
 * @head: the head node .
 * Returns: void .
 **/
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (!head)
		return;
	while (*head)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
	*head = NULL;
}
