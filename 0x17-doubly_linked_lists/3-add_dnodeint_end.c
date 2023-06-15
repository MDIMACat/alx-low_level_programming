#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: pointer parameter
 * @n: data parameter
 * Return: Node at end
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t  *temp, *tp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		tp = *head;
		while (tp->next != NULL)
		{
			tp = tp->next;
		}
		tp->next = temp;
		temp->prev = tp;
	}
	return (temp);
}
