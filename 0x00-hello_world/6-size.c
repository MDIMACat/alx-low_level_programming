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
	printf("size of variable is:%d in bytes", sizeof(x));
	printf("size of variable is:%f in bytes", sizeof(y));
	printf("size of variable is:%c in bytes", sizeof(z));
	return (0);
}
