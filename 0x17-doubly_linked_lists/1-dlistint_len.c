#include "lists.h"

/**
 * dlistint_len - gets length of linked list
 * @h: pointer parameter
 * Return: length of list
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = NULL;
	size_t node_count = 0;

	if (h == NULL)
	{
		return (0);
	}
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->next == h)
		{
			return (node_count);
		}
		ptr = ptr->next;
		node_count++;
	}
	return (node_count);
}
