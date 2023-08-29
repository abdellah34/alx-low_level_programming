#include "lists.h"

/**
 * sum_listint - add all the deta (n).
 * @head: the head node .
 * Return: the sum .
 **/
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
