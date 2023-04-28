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
	unsigned int length = 0;

	if (newNode == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->str = strdup(str);
	while (str[length] != NULL)
	{
		length++;
	}
	newNode->len = length;

	if (*head == NULL)
	{
		newNode = NULL;
	}
	if (*head != NULL)
	{
		newNode = *head;
	}
	*head = newNode;
	return (head
