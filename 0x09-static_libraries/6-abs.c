#include "main.h"
/**
 * _abs - Shows absolute value
 * @n: The parameter
 *
 * Return: n (absolute value)
 */
int _abs(int n)
{
        if (n < 0)
        {
                (n = (-1) * n);
        }
        else if (n >= 0)
        {
                (n = 1 * n);
        }
        return (n);
}
