#include <stdio.h>

/**print_diagsums - print diagonal sums of a double array
 * @a: array to examine
 * @size: the size of the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int len;
	int sum1, sum2;
	
	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++;)
	{
		sum1 += a[i][i];
	}

	for (j = 0; j < size; j++)
	{
		len = size - 1;
		sum2 += a[j][len];

		len--;
	}

	printf("%d, %d\n", sum1, sum2);
}
