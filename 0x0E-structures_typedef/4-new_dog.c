#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog of type dog_t
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
