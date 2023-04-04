#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print diagonals sum
 * @a: pointer parameter
 * @size: array size
 *
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i, j, b, sum;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum = sum + a[i * size + j];
			}
			if (j == size - 1 - i)
			{
				b = b + a[i * size + j];
			}
		}
	}
	printf("%d, %d\n", sum, b);
}
