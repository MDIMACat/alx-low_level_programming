#include "main.h"
/**
 * _islower - shows the lowercase characters
 * @c: is the parameter to be printed
 *
 * Return: Always 1 (success) and return 0 if unsuccessful
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

