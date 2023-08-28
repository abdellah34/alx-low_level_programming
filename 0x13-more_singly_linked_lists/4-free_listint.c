#include "lists.h"

/**
 * free_listint - free a list.
 * @head: the head node .
 * .
 * Dose returnanything.
 **/
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head)
	{
		free(head);
		head = head->next;
	}
}
