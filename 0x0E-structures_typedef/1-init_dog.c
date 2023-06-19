#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes variable of type struct dog
 * @d: variable name
 * @name: member 1 of structure - name of dog
 * @age: member 2 - age of dog
 * @owner: member 3 -name of the owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
