#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array
 * @size: is the length allocated to array parameter
 * @c: where array is stored parameter
 * Return: Always 0 (success)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array ;
	
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (array);
}
