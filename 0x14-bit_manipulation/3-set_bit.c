#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: pointer to value parameter
 * @index: index to bit parameter
 * Return: 1 if success or -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | (1ul << index);
	return (1);
}
