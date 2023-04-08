#include "main.h"
/**
 * _strchr -  locates a character in a string
 * @s: pointer parameter
 * @c: parameter
 *
 * Return: Null if characters dont match and characters when they do
 */
char *_strchr(char *s, char c)
{
        int i = 0;

        while (s[i] >= '\0')
        {
                if (s[i] == c)
                {
                        return (s + i);
                }
                i++;
        }
        return (0);
}
