#include "main.h"
#include <stdio.h>

/**
 * main - sum of all the multiples of 3or5 below 1024
 *
 * Return: Alwasy 0 (success)
 */

int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}

	printf("%d\n", sum);

	return (0);
}


