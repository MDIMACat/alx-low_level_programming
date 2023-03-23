#include "main.h"
/**
 * _isdigit - shows values that are from 0 to 9
 * @c: is the parameter of the function
 *
 * Return: Always 1 (success), 0 (unsuccess)
 */
int _isdigit(int c)
{
	int c;

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
