#include <stdlib.h>

/**
* *_memset - fills memory with a constant byte
* @s: memory area to be filled
* @b: char to copy
* @n: number of times to copy b
*
* Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

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
	char *n;

	/* return NULL if... */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* DYNAMIC ALLOCATION */
	n = malloc(nmemb * size);

	/* check if malloc was successfull */
	if (n == NULL)
		return (NULL);

	/* initialise all values of the array to 0 */
	_memset(n, 0, nmemb * size);

	return (n);
}
