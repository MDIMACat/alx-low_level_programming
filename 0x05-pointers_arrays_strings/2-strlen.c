#include "main.h"
/**
 * _strlen - prints length of string
 * @s: Parameter
 *
 * Return: length
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
