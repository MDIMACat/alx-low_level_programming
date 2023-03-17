#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 0)
	{
		printf("%d", n);
		n++;
	}
	return (0);
}
