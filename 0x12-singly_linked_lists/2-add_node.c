#include "lists.h"

/**
 * add_node - add node at the beginning of the linked list
 * @head: first node pointer parameter
 * @str: data parameter
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t newNode;
	size_t length = 0;

	if (newNode == NULL)
	{
		free(newNode);
		return (0);
	}
	while (str[length])
		length++;
	newNode->str = strdup(str);
	newNode->len = Length;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
