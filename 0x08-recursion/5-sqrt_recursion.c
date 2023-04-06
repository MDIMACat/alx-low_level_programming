#include "main.h"
/**
 * help - helps determing the square root
 * @num: number
 * @guess: numbers that could be square root
 *
 * Return: square root or -1 for error
 */
int help(int num, int guess)
{
	if ((guess * guess) == num)
	{
		return (guess);
	}
	else if (guess >= num / 2)
	{
		return (-1);
	}
	else
	{
		return (help(num, guess + 1));
	}
}
#include "main.h"
/**
 * _sqrt_recursion - return the square root
 * @n: number parameter
 *
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (help(n, 1));
	}
}
