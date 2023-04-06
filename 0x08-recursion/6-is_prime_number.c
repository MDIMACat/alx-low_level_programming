#include "main.h"
/**
 * check_prime - checking the prime number
 * @n: user input parameter
 * @i: iterator
 *
 * Return: 1 if prime and 0 if not
 */
int check_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, i - 1));
	}
}
#include "main.h"
/**
 * is_prime_number - shows prime numbers
 * @n: user input pararmeter
 *
 * Return: 1 for prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, n - 1));
	}
}
