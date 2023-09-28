#include "main.h"

/**
 * clear_bit - sets the bit at given index to 0
 * @n: number whose bit will be changed
 * @index: at this index of n, change it to 0
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	temp = 1 << index;

	if (temp & *n)
	{
		*n -= temp;
		return (1);
	}
	else if (!(temp | *n))
	{
		return (1);
	}
	else if (n == NULL)
		return (-1);
	else
		return (-1);
}

