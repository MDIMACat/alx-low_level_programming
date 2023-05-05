#include "main.h"

/**
 * clear_bit - sets value to 0 at given index
 * @n: pointer parameter
 * @index: range parameter
 * Return: 1 for success and -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1ul << index);
	return (1);
}
