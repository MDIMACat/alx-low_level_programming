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
        unsigned int i;

        i = 0;
        while (i < n)
        {
                dest[i] = src[i];
                i++;
        }
        return (dest);
}
