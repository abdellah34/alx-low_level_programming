#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list.
 * @head: the head node .
 * @str: the string to add.
 * Return: the address of the next node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s = strdup(str);
	list_t *last = *head;
	list_t *new = NULL;

	if (s == NULL)
		return (NULL);
	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(s);
		free(new);
		return (NULL);

	}

	new->str = s;
	new->len = strlen(s);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
