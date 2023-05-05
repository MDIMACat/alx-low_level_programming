#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer parameter
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	unsigned int i;
	const unsigned int num_bits = sizeof(unsigned int) * CHAR_BIT;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for ((i = 1u << (num_bits - 1)); i > 0; i = i >> 1)
	{
		if (n & i)
			break;
	}
	for (; i > 0; i = i >> 1)
	{
		_putchar((n & i) ? '1' : '0');
	}
}
