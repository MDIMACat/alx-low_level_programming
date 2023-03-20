#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10 times
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 1; j < 11; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
