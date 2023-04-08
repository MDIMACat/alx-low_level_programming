#include "main.h"
/**
 *_strcat - concatenate two strings
 * @dest: Parameter destination
 * @src: parameter source
 *
 * Return: Destination pointer
 */
char *_strcat(char *dest, char *src)
{
        int i;
        int j;

        i = 0;
        while (dest[i] != '\0')
        {
                i++;
        }
        j = 0;
        while (src[j] != '\0')
        {
                dest[i] = src[j];
                j++;
                i++;
        }
        dest[i] = '\0';
        return (dest);
}
