#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: source string parameter
 * Return: Array
 */
char *_strdup(char *str)
{
	unsigned int length;
	unsigned int i;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	array = (char *)malloc(length + 1);

	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		array[i] = str[i];
		i++;
	}
	array[i] = ('\0');
	return (array);
}

