#include "lists.h"

/**
 * free_list - free a list.
 * @head: the head node .
 * .
 * Dose returnanything.
 **/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		free(tmp);
		head = head->next;
	}
}
