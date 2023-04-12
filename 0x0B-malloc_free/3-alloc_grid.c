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
	int i, j, k, l;
	int **array = malloc(height * sizeof(int *) - 1);

	if (height < 1)
	{
		return (NULL);
	}
	if (width < 1)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int *) - 1);

		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array[j]);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			array[k][l] = 0;
		}
	}
	return (array);
}
