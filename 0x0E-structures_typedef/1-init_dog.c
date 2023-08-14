#include "dog.h"
/**
 * init_dog - initializing a poke-dog
 * @d: pointer
 * @name: pointer
 * @age: age
 * @owner: pointer
 * Return: void, nada
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
