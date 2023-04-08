#include "main.h"
/**
 * _isalpha - shows the alphabet characters
 * @c: is the parameter to be printed
 *
 * Return: Always 1 (success) and return 0 if successful
 */
int _isalpha(int c)
{
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
