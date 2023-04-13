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
	int *ptr;

		ptr = (int *)malloc(b * sizeof(int));

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
