#include "main.h"
/**
 * _isdigit - Check if character is a digit
 * @c: The number that should be checked
 * Return: 1 for digit or 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

