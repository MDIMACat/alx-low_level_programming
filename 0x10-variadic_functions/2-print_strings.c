#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: separator parameter
 * @n: number of arguements parameter
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int j;
	const char *str;

	va_start(arg_list, n);
	for (j = 0; j < n; j++)
	{
		str = va_arg(arg_list, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (j < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(arg_list);
	printf("\n");
}
