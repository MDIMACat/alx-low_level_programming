#include "main.h"
/**
 * times_table - prints out timestable
 *
 * Return: Always 0
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; x++)
	{
		_putchar('0');
		{
			for (y = 0; y < 10; y++)
			{
				z = x * y;
				_putchar(',');
				_putchar(' ');
				if (z <= 9)
				{
					_putchar(' ');
					_putchar(z + '0');
				}
				else
				{
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
