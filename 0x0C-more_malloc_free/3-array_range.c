#include "main.h"
#include <stdlib.h>
/**
 * *array_range - create an array of integers
 * @min: small value parameter
 * @max: big value parameter
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
