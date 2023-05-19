#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * n - random number to test if it its last digit is greater
 * than 5, is 0 or less than 6 but not 0
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater 
				than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is 0 and 0", n);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		priintf("Last digit of %d is %d and is less 
				than 6 and not 0", n, n % 10);
	}

	return (0);
}
