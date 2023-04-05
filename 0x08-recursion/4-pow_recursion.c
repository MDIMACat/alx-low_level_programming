#include "main.h"
/**
 * _pow_recursion - prints the power of a integer
 * @x: base parameter
 * @y: power parameter
 *
 * Return: 1 if successful -1 error
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return ((x * _pow_recursion(x, y - 1)));
	}
}
