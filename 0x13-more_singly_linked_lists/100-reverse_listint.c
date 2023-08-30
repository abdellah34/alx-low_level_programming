#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: pointer to a pointer that points to a linked list
 * Return: return a pointer to a linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new = NULL, *curr = NULL;

	while (*head != NULL)
	{
		curr = *head;
		*head = (*head)->next;
		curr->next = new;
		new = curr;
	}
	*head = curr;
	return (*head);
}
