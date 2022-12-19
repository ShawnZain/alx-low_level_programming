#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array of int
 * @a: pointer
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
			printf(", ");
	}

	printf("\n");
}
