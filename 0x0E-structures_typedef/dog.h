#ifndef DOG_H
#define DOG_H
/**
 * struct dog - this struct prints out dog name, age, owner
 * @name: name of dog (parameter)
 * @age: age of dog (parameter)
 * @owner: the pwner of dog (parameter)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
