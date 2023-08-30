#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at a given position.
 * @head: the head node .
 * @idx: the index of the list where the new node should be added.
 * @n: the data to add.
 * Return: the address of new node or NULL if fails.
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *curr = *head;
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	while (curr)
	{
		len++;
		curr = curr->next;
	}
	if (idx > len)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		curr = *head;
		while (--idx)
			curr = curr->next;
		new_node->next = curr->next;
		curr->next = new_node;
	}
	return (new_node);
}
