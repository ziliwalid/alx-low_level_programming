#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - FREES THE POKE DOGGOS
 * @d: pointer
 * Return: nada void
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
