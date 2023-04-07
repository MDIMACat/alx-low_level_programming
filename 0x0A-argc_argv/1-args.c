#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument count parameter
 * @argv: argument vector parameter
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
