#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Jump search algorithm function
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
	while (array[m] < value && m < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", m, array[m]);
		i = m;
		m += (int)sqrt(size);
		if (m >= (int)size)
		{
			printf("Value found between indexes [%d] and [%d]\n", i, m - 1);
			return (-1);
		}
	}
	printf("Value found between indexes [%d] and [%d]\n", i, m);
	for (x = i; x <= m && x < (int)size; x++)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (value == array[x])
            return (x);
	}
	return (-1);
}

