#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a give position
 * @head: head pointer parameter
 * @idx: index parameter
 * @n: data parameter
 * Return: New linked list with inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *newNode;

	if (head == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (!temp)
		{
			free(newNode);
			return (NULL);
		}
		temp = temp->next;
	}
	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
