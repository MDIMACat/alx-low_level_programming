#include "main.h"
/**
 * _isupper - shows the uppercase characters
 * @c: The parameters of the function
 *
 * Return: Always 1  (success) , 0  (unsuccess)
 */
int _isupper(int c)
{
	int c;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
