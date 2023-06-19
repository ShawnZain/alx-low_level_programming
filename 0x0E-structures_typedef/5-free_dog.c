#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - explicity frees all dynamically allocated memory
 * @d: structure to free
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
