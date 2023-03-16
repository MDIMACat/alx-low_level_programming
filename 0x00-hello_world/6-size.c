#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	printf("Size of char: %c byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n",  sizeof(int));
	printf("Size of long int: %ld byte(s)\n", sizeof(long int));
	printf("SIze of long long int: %lld byte(s)\n",  sizeof(long long int));
	printf("Size of float: %f byte(s)\n", sizeof(float));
	return (0);
}
