#include "lists.h"

/**
 * print_list - prints elements in list_t
 * @h: node pointer parameter
 * Return: the number of node;
 */

size_t print_list(const list_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		if (h -> str == NULL)
		{
			printf("[0](nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h -> len, h -> str);
			h = h -> next;
			count++;
		}
	}
	return (count);
}
