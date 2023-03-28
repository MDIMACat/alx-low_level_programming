#include "main.h"
/**
 * puts_half - prints the second half of a given string
 * @str: Parameter
 *
 * Return: Void
 */
void puts_half(char *str)
{
	char *s = str;
	int numb = 0;
	int i;

	while (*s != '\0')
	{
		s++;
		numb++;
	}
	for (i = 5; i <= numb - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
