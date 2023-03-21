#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers till 98
 * @n: the parameter of function
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int n;

	for (int i = n; i <= 98; i++)
	{
		printf("%d", i);
	}
	if (i < 98)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
