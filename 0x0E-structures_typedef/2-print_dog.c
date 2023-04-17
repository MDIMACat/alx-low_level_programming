#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print A DOG STRUCT
 * @d: pointer for dog struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
}
