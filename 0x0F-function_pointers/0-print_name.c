#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function to print out names
 * @name: is a char name parameter
 * @f: function pointer parameter
 * Return: Void
 * 
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
