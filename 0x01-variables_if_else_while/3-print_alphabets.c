#include <stdio.h>
/**
 * main - Entry point
 *Description: 'show the Upper case and lower case alphabets'
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char i;

	i = 'a';
		while (i <= 'z')
		{
			putchar(i);
			i++;
		}
	i = 'A'i;
		while (i <= 'Z')
		{
			putchar(i);
			i++;
		}
	putchar('\n');
	return (0);
}
