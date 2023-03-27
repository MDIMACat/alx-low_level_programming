#include "main.h"
/**
 * puts2 - prints every second character in string
 * @str: Parameter
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int len = 0;
	char *y = str;

	while (*y != '\0')
	{
		len++;
		y++;
	}
	for (i = 0; i <= len - 1; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
