#include "dog.h"
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to brand new pokedog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *tmpN, *tmpO; /*tmpN: temporary name | tmpO: temporary owner */
	dog_t *new_PokeDog; /*poke ref to pokemon*/

	tmpN = malloc(sizeof(*name) * (strlen(name) + 1));
	tmpO = malloc(sizeof(*owner) * (strlen(owner) + 1));
	new_PokeDog = malloc(sizeof(dog_t));

	if (tmpN && tmpO && new_PokeDog)
	{
		strcpy(tmpN, name);
		strcpy(tmpO, owner);
		new_PokeDog->name = tmpN;
		new_PokeDog->age = age;
		new_PokeDog->owner = tmpO;
	}
	else
	{
		free(tmpN); /*deallocating*/
		free(tmpO);/*deallocating*/
		free(new_PokeDog);/*deallocating*/
		return (NULL);
	}
	return (new_PokeDog);
}

/*people from other cohorts are nice for explaining this :D*/
