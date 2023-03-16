#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;
	float y;
	char z;
	long int a;
	long long int b;
	printf("Size of int is: %d in bytes\n", sizeof(x));
	printf("Size of float is: %f in bytes\n", sizeof(y));
	printf("Size of char is: %c in bytes\n", sizeof(z));
	printf("Size of long int: %ld in bytes\n", sizeof(a));
	printf("Size of long long int: %lld in bytes\n", sizeof(b));
	return (0);
	}
