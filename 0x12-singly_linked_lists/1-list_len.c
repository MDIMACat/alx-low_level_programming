#include "lists.h"

/**
 * list_len - shows number of elements in list_t
 * @h: node poointer parameter
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
