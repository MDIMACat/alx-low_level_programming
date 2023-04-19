#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function given as a parameter on each element of an array.
 * @array: array parameter
 * @size: size of array parameter
 * @action: function pointer parameter
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
