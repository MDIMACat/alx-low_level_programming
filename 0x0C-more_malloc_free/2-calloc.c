#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocate memory for array
 * @nmemb: Element parameter
 * @size: memory parameter
 * Return: Void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int total_size = nmemb * size;
	int i = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
