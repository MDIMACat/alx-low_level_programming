#include "main.h"
/**
 * rev_string - Reverses the string
 * @s: parameter
 *
 * Return: Void
 */
void rev_string(char *s)
{
	int count = 0;
	char rev = s[0];
	int i;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}
