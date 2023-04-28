#include "lists.h"

/**
 * add_node_end - add node at end of linked list
 * @head: pointer to head node
 * @str: string pointer parameter
 * Return: new node at the end of linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
