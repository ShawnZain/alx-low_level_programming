#include "main.h"

/**
 * flip_bits - function that checks homw many bits
 * 	       are to be flipped for one number to be
 * 	       another
 * @n: number 1, checking how many of this needs to flip
 * @m: number 2, number 1 will flip to be this
 * Return: the number of flips required
 */

int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m, bits = 0;

	while (i > 0)
	{
		bits += (i & 1);
		i >>= 1;
	}

	return (bits);
}
