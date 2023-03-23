#include "main.h"
/**
 * print_numbers - prints numbers from 0 to i
 * Return: Always 0 (success);
 */
void print_numbers(void)
{
	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
