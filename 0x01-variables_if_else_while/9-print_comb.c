#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints combinations of single-digit numbers in ascending order
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num = '0';

	while (num <= '9') /*Print all numbers from 1 to 9*/
	{
		putchar(num);

		if (num != '9') /*Making sure that ", " does not appear at the end after 9, as that is the last number*/
		{
			putchar (',');
			putchar(' ');
		}

		num++;
	}

	putchar('\n');

	return (0);
}
