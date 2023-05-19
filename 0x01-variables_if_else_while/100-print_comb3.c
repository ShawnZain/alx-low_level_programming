#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print possile combo of 2 digits, but only print the
 * lowest possible combo. Each combo to be followed by a ',' and space,
 * apart from the last digit 89.
 *
 * Return: Success (0)
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			if ((num1 * 10 + num2) < (num2 * 10 + num1))
			{
				putchar(num1 + '0');
				putchar(num2 + '0');

				if (num1 == 8 && num2 == 9)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
