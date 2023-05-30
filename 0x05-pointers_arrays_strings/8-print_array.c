#include <stdio.h>

/**
 * print_array - prints the array from the nth index
 * @a: integer to print
 * @n: print from this index
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;
	int i;

	i = 0;
	while (*(a + i) != '\0')
	{
		i++;
	}

	if (n < i && n > 0) /* confirm that n is valid */
	{
		for (j = 0; j < (n - 2); j++) /* Not print last value & '\0' */
		{
			printf("%s, ", *(a + j));
		}
		printf("%s\n", *(a + (n - 1))); /* print last value */
	}
	else if (n < 0 && n > i) /* if not valid print newline */
	{
		printf("\n");
	}
}
