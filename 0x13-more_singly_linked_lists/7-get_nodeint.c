#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of list
 * @head: head pointer parameter
 * @index: index parameter
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}
	return (temp);
}
