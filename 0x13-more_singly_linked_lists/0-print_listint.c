#include "lists.h"
#include <stddef.h>

/**
 * print_listint - print elements in list
 * @h: Head pointer parameter
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
