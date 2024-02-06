#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - A binary search algorithm
 * @array: pointer to the array
 * @size: size of the array
 * @value: Value to be found in array
 * Return: -1 on failure and 0 on success
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}

