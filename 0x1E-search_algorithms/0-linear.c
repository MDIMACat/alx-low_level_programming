#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
* linear_search - A linear search algorithm function
* @array: A pointer to the arrray
* @size: The size of the array
* @value: Value to be found in array
* Return: -1 on failure and 0 on success
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", array[i], value);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
