#include "lists.h"

/**
 * free_listint - free a list.
 * @head: the head node .
 * .
 * Dose returnanything.
 **/
void free_listint(listint_t *head)
{
	listint_t *curr = head;
	listint_t *aux = head;

	if (head == NULL)
		return;
	while (curr)
	{
		aux =  curr;
		curr = curr->next;
		free(aux);
	}
	head = NULL;
}
