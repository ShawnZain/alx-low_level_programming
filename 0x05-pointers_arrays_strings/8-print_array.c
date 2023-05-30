#include <stdio.h>

/**
 * print_array - prints the array from the nth index
 * @a: integer to print
 * @n: print from this index
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
