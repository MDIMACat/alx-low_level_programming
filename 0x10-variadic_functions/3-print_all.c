#include "variadic_functions.h"

/**
 * print_all- prints all arguments
 * @format: list of arguments parameter
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *s, c;
	float f;
	int i, index = 0;

	va_start(args, format);
	while (format[index] != '\0')
	{
		switch (format[index])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					printf("(nil)");
				printf("%s", s);
				break;
			default:
				index++;
				continue;
		}
		index++;
		if (format[index] != '\0')
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
