#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: Parameter destination
 * @src: Parameter source
 * @n: Number of characters to be copied
 *
 * Return: Destination pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

