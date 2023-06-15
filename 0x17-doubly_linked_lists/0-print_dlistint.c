#include "lists.h"

/**
 * print_dlistint - Prints the list
 * @h: pointer parameter
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = NULL;
	size_t node_count = 0;

	if (h == NULL)
	{
		return (-1);
	}
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		node_count++;
	}
	return (node_count);
}
