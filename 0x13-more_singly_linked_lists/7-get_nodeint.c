#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a listint_t linked list.
 * @head: the head node .
 * @index: is the index of the node, starting at 0.
 * Return: the nth  node's data .
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int position = 0;

	if (head == NULL)
		return (NULL);

	while (tmp)
	{
		if (position == index)
			return (tmp);
		tmp = tmp->next;
		position++;
	}
	return (NULL);
}
