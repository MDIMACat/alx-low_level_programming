#include "main.h"
/**
 * print_sign - This prints the sign if certain conditions have been met
 * @n: this is the parameter to be determined
 *
 * Return: 1, 0, -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
