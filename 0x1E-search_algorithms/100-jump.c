#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Jump search alogrithm function
 * @array: The sorted array to be searched
 * @size: The size of the array
 * @value: The value to be found in the array
 * Return: -1 on failure and 0 on success
*/

int jump_search(int *array, size_t size, int value)
{
	int x = 0, i = 0, m = 0;

	if (array == NULL)
		return (-1);
	m = (int)sqrt(size);
	while (array[m] <= value && m < size)
	{
		i = m;
		m += sqrt(size);
		if (m > size - 1)
			return (-1);
	}
	for (x = i; x < m ; x++)
	{
		printf("Value checked array[%d] = [%d]", x, array[x]);
		if (value == array[x])
		{
			printf("Value found between indexes [%d] and [%d]", i, x);
			return (x);
		}
	}
	return (-1);
}
