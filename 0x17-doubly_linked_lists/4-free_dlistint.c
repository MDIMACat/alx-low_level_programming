#include "lists.h"

/**
 * free_dlistint - Free memory allocated
 * @head: head pointer parameter
 * Return: Void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	if (head == NULL)
	{
		return;
	}
	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
