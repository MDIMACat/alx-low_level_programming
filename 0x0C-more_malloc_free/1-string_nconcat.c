#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two string
 * @s1: frst string parameter
 * @s2: second string parameter
 * @n: length parameter
 *
 * Return: pointer address
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = ("");
		s2 = ("");
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n > len2)
		n = len2;
	ptr = (char *)malloc(len1 + n + 1);

	if (ptr == NULL)
		return (NULL);
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i < (len1 + n))
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = ('\0');
	return (ptr);
}
