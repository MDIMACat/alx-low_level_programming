#include "main.h"
/**
 * times_table - prints out timestable
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			n = i * j;
			_putchar(',');
			_putchar(' ');
			if (n <= 9)
			{
				_putchar(' ');
				_putchar(n + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
	}
	_putchar ('\n');
}
