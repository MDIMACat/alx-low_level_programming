#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string pointer parameter
 * Return: Binary value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int temp = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '0')
		{
			temp <<= 1;
			b++;
		}
		else if (*b == '1')
		{
			temp <<= 1;
			temp |= 1;
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (temp);
}
