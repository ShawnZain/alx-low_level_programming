#include "main.h"

/**
 * get_bit - gets the bit at a specific index
 * @n: the number to check
 * @index: index to look for in n
 * Return: bit at given index or -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int temp;

	temp = 1 << index;

	if (temp > n)
		return (0);
	else if (temp <= n)
	{
		if (temp & n)
			return (1);
		else
			return (0);
	}
	else
		return (-1);
}
