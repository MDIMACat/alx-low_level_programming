#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: head pointer parameter
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
