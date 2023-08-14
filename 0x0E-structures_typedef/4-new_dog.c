#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new PokeDog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_len, owner_len, i;
	dog_t *newDog;

	if (name == NULL || owner == NULL)
		return (NULL);
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	for (name_len = 0; name[name_len]; name_len++)
		;
	name_len++;
	newDog->name = malloc(name_len * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		newDog->name[i] = name[i];
	newDog->age = age;
	for (owner_len = 0; owner[owner_len]; owner_len++)
		;
	owner_len++;
	newDog->owner = malloc(owner_len * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
		newDog->owner[i] = owner[i];
	return (newDog);
}

