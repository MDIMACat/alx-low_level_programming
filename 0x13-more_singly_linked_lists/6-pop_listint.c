#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head pointer parameter
 * Return: 0 is unsuccessful and head node data if successful
 */

int pop_listint(listint_t **head)
{
	listint_t *toDelete;
	int data;

	if (head == NULL)
	{
		return (0);
	}
	data = (*head)->n;
	toDelete = *head;
	(*head) = (*head)->next;
	free(toDelete);
	return (data);
}
