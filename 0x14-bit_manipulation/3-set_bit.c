#include "main.h"

/**
 * set_bit - sets the bit at given index to 1
 * @n: number whose bit we change
 * @index: change the bit of n at this index
 * Return: 1 if successful, else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	temp = 1 << index;

	if (!(*n & temp))
	{
		*n += temp;
		return (1);
	}
	else if (*n & temp)
		return (1);
	else
		return (-1);
}
