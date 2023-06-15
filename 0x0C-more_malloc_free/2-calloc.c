#include <stdlib.h>

/**
 * _calloc - allocates memory and initialised it to 0
 * @nmemb: nnumber of elements in the array
 * @size: bytes of each element in the rray
 *
 * Return: NULL if nmemb or size is 0
 * NULL if malloc fails
 * otherwise, return a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *n;
	int len, i;

	/* return NULL if... */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* DYNAMIC ALLOCATION */
	n = malloc(nmemb * size);

	/* check if malloc was successfull */
	if (n == NULL)
		return (NULL);

	/* find the length of the array */
	len = 0;
	while (n && n[len])
		len++;

	/* initialise all values of the array to 0 */
	for (i = 0; i < len; len++)
	{
		n[i] = 0;
	}

	return (n);
}
