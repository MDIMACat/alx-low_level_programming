#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * *new_dog - creating a new dog
 * @name: Name of new dog parameter
 * @age: age of new dog parameter
 * @owner: owner of new dog parameter
 *
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(sizeof(strlen(name)+ 1));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	new_dog->age = age;
	new_dog->owner = malloc(sizeof(strlen(owner)+ 1));

	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);
	return (new_dog);
}
