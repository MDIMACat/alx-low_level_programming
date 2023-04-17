#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * init_dog - declaring struct variables
 * @d: pointer to struct parameter
 * @name: name pointer parameter
 * @age: age pointer parameter
 * @owner: owner pointer parameter
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
