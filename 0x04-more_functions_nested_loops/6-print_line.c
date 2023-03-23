#include "main.h"
/**
 * print_line - printing lines
 *@n: the Parameter
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
