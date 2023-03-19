#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;
	int j = i + 1;
	int z = j + 1;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (z = j + 1; z <= 9; z++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(z + '0');
				if (i == 7 && j == 8 && z == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
