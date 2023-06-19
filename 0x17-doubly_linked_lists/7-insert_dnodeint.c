#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at index
 * @h: pointer parameter
 * @idx: index pointer parameter
 * @n: data pointer parameter
 * Return: list of nodes
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *newP = NULL;
	dlistint_t *temp;

	if (*h == NULL)
	{
		if (idx != 0)
		{
			return (NULL);
		}
		return (add_dnodeint(h, n));
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	temp = *h;
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL || count != idx - 1 || temp->next == NULL)
	{
		if (count < idx - 1)
		{
			return (NULL);
		}
		return (add_dnodeint_end(h, n));
	}
	newP = malloc(sizeof(dlistint_t));
	if (newP == NULL)
		return (NULL);
	newP->n = n;
	newP->prev = temp;
	newP->next = temp->next;
	temp->next->prev = newP;
	temp->next = newP;
	return (newP);
}
