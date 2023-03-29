#include "main.h"
/**
 * reverse_array - reverse the content of array
 * @a: Parameter array
 * @n: Parameter of elements in the array
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int j;
	int i;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
