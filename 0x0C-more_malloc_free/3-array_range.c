#include <stdlib.h>

/**
 * array_range - creates an array of a given range
 * @min: the min (array[0])
 * @max: the last value (array[n])
 *
 * Return: 
 * 	NULL if min > max
 * 	NULL if malloc fails
 * 	else a pointer to array
 */

int *array_range(int min, int max)
{
	int *range;
	int len, i, val;

	if (min > max)
		return (NULL);

	/* get the length of array */
	len = max - min + 1;

	/* dynamically allocate memory */
	range = malloc(len * sizeof(int));
	if (range == NULL)
		return (NULL);

	/* array values will start from min and end at max */
	val = min;
	for (i = 0; i < len; i++)
	{
		range[i] = val;
		val++;
	}

	return (range);
}

