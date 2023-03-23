#include "main.h"
/**
 * print_triangle - printing triangles
 * @size: is the parameter
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= size; i++)
	{
		for (k = i; k <= size; k++)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
