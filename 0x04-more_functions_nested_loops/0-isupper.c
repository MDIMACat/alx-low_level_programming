#include "main.h"
/**
 * _isupper - check if a letter is uppercase
 * @c: Value to be checked
 * Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
