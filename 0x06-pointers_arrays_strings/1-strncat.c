#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: Destination Parameter
 * @src: source Parameter
 * @n: number of characters to be copied
 *
 * Return: Destination pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
