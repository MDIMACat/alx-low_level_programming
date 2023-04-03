#include "main.h"
/**
 * _memcpy - copies memory area for src to dest
 * @dest: destination parameter
 * @src: Source parameter
 * @n: parameter for length
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	if (dest[i] != '\0' && src[i] != '\0')
	{
		while (i < j)
		{
			dest[i] = src[i];
			i++;
			j--;
		}
	}
	return (dest);
}
