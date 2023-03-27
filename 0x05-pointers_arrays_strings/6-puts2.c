#include "main.h"
/**
 * puts2 - prints every second character in string
 * @str: Parameter
 *
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str += 2);
	}
	_putchar('\n');
}
