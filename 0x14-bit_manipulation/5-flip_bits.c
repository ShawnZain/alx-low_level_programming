#include "main.h"

/**
 * flip_bits - compares 2 numbers and checks how many
 * bits of a will need to be flipped to make b
 * @n: checking how many bits in n will make m
 * @m: checking how many bits of n will make m
 * Return: number of bits changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp, bits = 0;

	temp = n ^ m;

	while (temp > 0)
	{
		bits += (temp & 1);
		temp >>= 1;
	}

	return (bits);
}
