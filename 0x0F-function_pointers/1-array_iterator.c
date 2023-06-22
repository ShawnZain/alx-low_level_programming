#include <stddef.h>
#include <stdlib.h> /* exit */

/**
 * array_iterator - a function that executes a function on each
 * element of an array
 *
 * @array: array to iterate through
 * @size: size of the array
 * @action: function pointer pointing to the function that will
 * be executed on each element of the array
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		exit(1);

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
