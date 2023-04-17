#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - this frees the dogs
 * @d: the dog pointer parameter
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
