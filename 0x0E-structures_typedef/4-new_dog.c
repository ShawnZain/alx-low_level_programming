#include "dog.h"
#include <string.h> /* malloc */
#include <stdlib.h> /* strlen & strcpy */

/**
 * new_dog - creates a new dog of type dog_t
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	/* test if arguments passed are valid */
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	/* allocate memory to the new dog */
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);

	/* allocate memory to the members of the new dog */
	new_dog->name = malloc(sizeof(char) * strlen(name) + 1);
	if (name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = strcpy(new_dog->owner, owner);

	return (new_dog);
}
