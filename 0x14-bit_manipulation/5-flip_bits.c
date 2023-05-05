#include "main.h"

/**
 * countBits - counts the set bits
 * @num: number parameter
 * Return: Count of set bits
 */

unsigned int countBits(unsigned long int num)
{
	unsigned long int count = 0;

	while (num > 0)
	{
		count++;
		num &= (num - 1);
	}
	return (count);
}

/**
 * flip_bits - bits you would need to flip to get from one number to another
 * @n: input value parameter
 * @m: input value parameter
 * Return: flipped number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countBits(n ^ m));
}
