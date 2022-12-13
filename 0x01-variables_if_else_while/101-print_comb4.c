#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints combo of 3 digits, ascending, non-repetitive
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num1 = '0';
	int num2 = '0';
	int num3 = '0';

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			for (num3 = '0'; num3 <= '9'; num3++)
			{
				if (!((num2 == num3) || (num1 == num2) ||
							(num2 > num3) || (num1 > num2)))
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);

					if (!(num1 == '7' && num2 == '8' &&
								num3 == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	
	putchar('\n');

	return (0);
}
