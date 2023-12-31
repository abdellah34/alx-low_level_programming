#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list.
 * @head: the head node .
 * @str: the string to add.
 * Return: the address of the next node.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s = strdup(str);
	list_t *new = NULL;

	if (s == NULL)
		return (NULL);
	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);

	}

	new->str = s;
	if (new->str == NULL)
	{
		free(new->str);
		return (NULL);
	}
	new->len = strlen(s);
	new->next = *head;
	*head = new;
	return (new);
}
