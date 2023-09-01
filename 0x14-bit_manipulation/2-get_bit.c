#include "main.h"

/**
 * get_bit - returns the bit value of a given number at a certain index
 * @n: the number we will search
 * @index: the bit index to look for in n
 * Return: 1 if the bit is 1
 * 	   0 if the bit is 0
 * 	   -1 on erro
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return 0;

	return 1;
}
