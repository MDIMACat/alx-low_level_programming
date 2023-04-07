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
	int n;
	int result = 0;
	int i;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			n = atoi(argv[i]);
			if (n > 0)
			{
				result += n;
			}
		}
		printf("%d\n", result);
	}
	printf("0");
	if (argc < 48 || argc > 57)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
