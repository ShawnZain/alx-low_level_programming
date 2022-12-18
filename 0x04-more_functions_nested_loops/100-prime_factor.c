#include <stdio.h>

/**
 * main - print primes
 * Return: 0
 */

in main(void)
{
	unsigned long int i = 3, n = 612852475143;

	for (; i < 12057; i += 2)
	{
		while ((n % i == 0) && (n != 1))
			n /= i;
	}

	printf("%lu\n", n);

	return (0);
}
