#include "lists.h"
/**
 * delete_nodeint_at_index - insert a new node at a given position.
 * @head: the head node .
 * @index: the index of the node should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head, *p = *head;
	unsigned int len = 0;

	if (head == NULL)
		return (-1);
	while (curr)
	{
		len++;
		curr = curr->next;
	}
	if (index > len)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
	}
	else
	{
		curr = *head;
		while (--index)
		{
			curr = curr->next;
			p = p->next;
		}
		p = p->next;
		curr->next = p->next;
		free(p);
	}
	return (1);
}
