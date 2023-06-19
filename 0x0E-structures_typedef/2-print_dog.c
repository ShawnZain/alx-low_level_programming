#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints the value of the members of the structure
 * @d: structure whose members to print
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	else if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->name);

		printf("Age: ");
		if (d->age < 0)
			printf("(nil)\n");
		else
			printf("%f\n", d->age);

		printf("Owner: ");
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
