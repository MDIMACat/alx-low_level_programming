#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - prints 2d array
 * @height: row parameter
 * @width: column parameter
 *
 * Return: Array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array = malloc(height * sizeof(int *));

	if (height < 1)
	{
		return (NULL);
	}
	if (width < 1)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int *));

		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	if (array == NULL)
	{
		return (NULL);
		free(array);
	}
	return (array);
}
