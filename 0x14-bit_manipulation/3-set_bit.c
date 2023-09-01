#include "main.h"

/**
 * set_bit - changes the bit of a number to 1 at a given index
 * @n: the number to change
 * @index: the index in n where the bit will change
 * Return: 1 on success, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return 1;
}
