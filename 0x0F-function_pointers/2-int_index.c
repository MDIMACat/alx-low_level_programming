#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: The array parameter
 * @size: size of the array
 * @cmp: function pointer that points to function parameter
 * Return: Always 0 (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
