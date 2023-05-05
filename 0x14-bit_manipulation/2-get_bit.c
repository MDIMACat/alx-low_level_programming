#include "main.h"

/**
 * get_bit - gets value of a bit at a given index.
 * @n: value parameter
 * @index: index parameter
 * Return: 1 for on and 0 for off
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
