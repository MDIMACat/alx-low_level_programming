#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: head pointer parameter
 * Return: returns number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return(count);
}
