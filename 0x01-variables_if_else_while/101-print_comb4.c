#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print possible combination of 3 numbers
 * separate each combo by ", "
 * all three digits must be different
 * print only the smallest combination of 3 numbers
 * only use putchar
 * don't use char variable
 * numbers should be in ascending order
 *
 * Return: success 0
 */

int main(void)
{
	int num1, num2, num3;
	int result;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			for (num3 = 0; num3 <= 9; num3++)
			{
				if ((num1 != num2) && (num2 != num3) &&
				(num1 != num3) && (num1 < num2)	&&
				(num1 < num3) && (num2 < num3))
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(num3 + '0');

					result = num1 * 100 + num2 * 10 + num3;

					if (result != 789)
					{
						putchar(',');
						putchar(' ');
					}
					else if (result == 789)
					{
						break;
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
