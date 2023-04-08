#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: Initia string parameter
 * @accept: substring parameter
 *
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int i = 0;
        int b;

        while (*s)
        {
                for (b = 0; accept[b]; b++)
                {
                        if (*s == accept[b])
                        {
                                i++;
                                break;
                        }
                        else if (accept[b + 1] == '\0')
                        {
                                return (i);
                        }
                }
                s++;
        }
        return (i);
}
