#include "main.h"
/**
 * string_toupper - Changes characters from lowercase to uppercase
 * @c: Parameter pointer
 *
 * Return: Always 0 (success)
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
			i++;
		}
	}
	return (0);
}
