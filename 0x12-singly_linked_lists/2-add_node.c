#include "lists.h"

/**
 * add_node - add node at the beginning of the linked list
 * @head: first node pointer parameter
 * @str: data parameter
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_Node;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	new_Node = malloc(sizeof(list_t));
	if (new_Node == NULL)
	{
		return (NULL);
	}
	new_Node->str = strdup(str);
	if (new_Node->str == NULL)
	{
		free(new_Node);
		return (NULL);
	}
	new_Node->len = strlen(str);
	new_Node->next = *head;
	*head = new_Node;
	return (new_Node);
}
