#include <stdlib.h>
#include <stdio.h>

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define FILENAME TOSTRING(__FILE__)
/**
 * void - parameter
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("%s\n", FILENAME);
	return (0);
}
