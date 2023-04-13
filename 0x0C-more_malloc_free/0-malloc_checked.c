#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc()
 * @b: The size parameter
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

		ptr = (unsigned int *)malloc(b * sizeof (unsigned int));

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
