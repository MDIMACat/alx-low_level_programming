#include "main.h"
/**
 * print_last_digit - This prints out the last digits
 * @i: This is the parameter
 * Return: c%10 the last digit
 */
int print_last_digit(int i)
{
	int c;

	c = i % 10;
	if (c < 0)
	{
		_putchar(-c + 48);
		return (-c);
	}
	else
	{
		_putchar(c + 48);
		return (c);
	}
}
