#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at acertain index
 * @head: head pointer parameter
 * @index: index parameter
 * Return: indexed node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
			temp = temp->next;
			count++;
		}
	}
	return (NULL);
}
