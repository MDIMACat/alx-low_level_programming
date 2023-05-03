#include "lists.h"

/**
 * delete_nodeint_at_index - deletes nodes via index
 * @head: head pointer parameter
 * @index: index parameter
 * Return: 1 if successful and -1 if unsuccessful
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	prev = NULL;
	temp = *head;

	while (i < index && temp != NULL)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	prev->next = temp->next;
	free(temp);
	return (1);
}
