#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: pointer to head parameter
 * @index: index parameter
 *
 * Return: 1 if successful, or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	current = *head;
	for (i = 0; i < index - 1 && current->next != NULL; i++)
		current = current->next;
	if (current->next == NULL)
		return (-1);
	if (current->next->next == NULL)
	{
		temp = current->next;
		current->next = NULL;
		free(temp);
		return (1);
	}
	temp = current->next;
	current->next = current->next->next;
	current->next->prev = current;
	free(temp);
	return (1);
}
