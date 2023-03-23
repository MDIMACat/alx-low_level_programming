#include "main.h"
/**
 * print_line - printing lines
 *@n: the Parameter
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
