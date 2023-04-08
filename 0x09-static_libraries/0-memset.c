#include "main.h"
/**
 * _memset -  fills memory with a constant byte.
 * @s: pointer
 * @b: parameter
 * @n: length parameter
 *
 * Return: Value of byte
 */
char *_memset(char *s, char b, unsigned int n)
{
        int i;

        i = 0;
        while (n > 0 && n--)
        {
                s[i] = b;
                i++;
        }
        return (s);
}
