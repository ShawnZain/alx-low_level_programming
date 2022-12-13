#include <stdio.h>
#include <time.h>

/**
 * main - Determins if random num is +//-
 *
 * Return: Always 0 (successful)
 */

int main(void)
{

	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n = 0)
	{
		printf("%d is 0\n", n);
	}
	else
	{
		printf("%d is less than 0\n", n);
	}
	return (0);
}
