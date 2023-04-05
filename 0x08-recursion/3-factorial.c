#include "main.h"
/**
 * factorial - prints the factorial of any given numbers
 * @n: integer pointer
 *
 * Return: 1 if successfule -1 if error
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return ((n * factorial(n - 1)));
	}
}
