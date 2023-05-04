#include "lists.h"

/**
 * reverse_listint - reveres the list
 * @head: head pointer parameter
 * Return: Reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *prev;

	prev = NULL;
	temp = NULL;

	if (head == NULL)
		return (NULL);
	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}
	*head = prev;
	return (prev);
}
