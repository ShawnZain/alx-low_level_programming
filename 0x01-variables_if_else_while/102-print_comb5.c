#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints possible combos of two 2-digit numbers
 * 99 99 should not be printed
 * 01 00 and 00 01 should not be printed
 * only use putchar
 * end in a newline
 *
 * Return: Success (0)
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++) /* num1 will run from 0 to 98 */
	{
		for ((num2 = num1 + 1); num2 <= 99; num2++)
		{
			/**
			 * num2 runs from 01 to 99 
			 * num1 will never be equal to num2
			 */

			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			/**
			 * if num1 gets to the max & num2 gets to the max
			 * ignore the next bits of code
			 */

			if (num1 == 98 && num2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
