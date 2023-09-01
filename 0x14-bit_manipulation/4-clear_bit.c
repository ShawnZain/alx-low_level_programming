#include "main.h"

/**
 * clear_bit - changes the bit of a number to 0 at a given index
 * @n: number whose bit we will change
 * @index: which index we are changing to 0
 * Return: 1 on success
 * 	   -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < (sizeof(unsigned long int) * 8))
	{
		*n &= (~(1 << index));
		return 1;
	}

	return (-1);
}
