#include <math.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int i, j;
	int res;

	i = 0;

	while (i <= 9)
	{
		j = 0;
		
		while (j <= 9)
		{
			res = i * j;

			if (j == 0)
			{
				/* No spaces before res at column 1 */
				_putchar(0 + '0');
				_putchar(',');
			}
			else if ((j > 0) && (j != 9) && (res < 10))
			{
				/**
				 * everytime that there will be 2 spaces
				 * before the res
				 */
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
				_putchar(',');
			}
			else if ((j > 0) && (j != 9) && (res > 9))
			{
				/**
				 * everytome where there will be 1 space
				 * before the res
				 */
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
				_putchar(',');
			}
			else if ((j == 9) && (res < 10))
			{
				/**
				 * last column where there will be
				 * 2 spaces before res
				 */
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
				_putchar('\n');
			}
			else if ((j == 9) && (res > 9))
			{
				/**
				 * last column where there will be
				 * 1 space before res
				 */
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
				_putchar('\n');
			}
			j++;
		}
		i++;
	}
}

