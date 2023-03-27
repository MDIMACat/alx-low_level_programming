#include "main.h"
/**
 * swap_int - Swaps two integers
 * @a: parameter
 * @b: parameter
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
