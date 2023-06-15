#include "lists.h"

/**
 * sum_dlistint - sum of all nodes
 * @head: head pointer parameter
 * Return: total sum of nodes
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
