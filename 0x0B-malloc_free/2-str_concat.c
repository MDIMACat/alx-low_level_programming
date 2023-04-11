#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string parameter
 * @s2: secnd string parameter
 * Return: Array
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *array;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
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
	array = (char *)malloc(len1 + len2  + 1);

	if (array == NULL)
		return (NULL);
	while (i < len1)
	{
		array[i] = s1[i];
		i++;
	}
	while (i < (len1 + len2))
	{
		array[i] = s2[j];
		i++;
		j++;
	}
	array[i] = ('\0');
	return (array);
}
