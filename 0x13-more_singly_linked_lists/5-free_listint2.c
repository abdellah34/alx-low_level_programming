#include "lists.h"

/**
 * free_listint2 - free a list and set the head to NULL.
 * @head: the head node .
 * Returns: void .
 **/
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *aux; 

	while (curr)
	{
		aux =  curr;
		curr = curr->next;
		free(aux);
	}
	*head = NULL;
}
