#include "lists.h"

/**
 * free_listint2 - free the  list and set thr head to NULL.
 * @head: the head node .
 * .
 * Dose returnanything.
 **/
void free_listint2(listint_t **head)
{
	listint_t *tmp, *h = *head;
	if (head == NULL)
		return;
	while (h)
	{
		tmp = h;
		free(tmp);
		h = h->next;
	}
	*head = NULL;
}
