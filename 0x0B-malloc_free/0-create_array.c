#include <stdlib.h>

/**
 * create_array - create an array of specific size and initialize it with c
 * @size: size of the array
 * @c: character to initialise the array with
 * Return: NULL if size is 0
 * NULL if allocating memory fails
 * pointer to the array if allocation succeeds
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
