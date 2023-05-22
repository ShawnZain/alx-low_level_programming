#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print combination of 2 2-digit numbers
 * the 2 numbers should be separated by a space
 * the combinations should be separated by ', '
 * the same 2-digits should not be repeated in 2 different combinations
 * 01 00 and 00 01 are the same combination of 01 and 00
 * only use putchar 8 times
 * don't use variable char
 */

int main(void)
{
	int num1, num2, num3, num4;
	int result1, result2;

	/* loop to run from 0 to 9 for 4 numbers */

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			for (num3 = 0; num3 <= 9; num3++)
			{
				for (num4 = 0; num4 <= 9; num4++)
				{
					/* two numbers should not be the same
					 * 00 10 & 10 00 is a repeat combo */

					result1 = num1 * 10 + num2;
					result2 = num3 * 10 + num4;

					if (result1 != result2)
					{
						putchar(num1 + '0');
						putchar(num2 + '0');
						putchar(' ');
						putchar(num3 + '0');
						putchar(num4 + '0');

						/* at the end of the sequence
						 * don't print ', ' */

						if ((result1 != 98) &&
						(result2 != 99))
						{
							putchar(',');
							putchar(' ');
						}
						else if ((result1 == 98) &&
							(result2 == 99))
						{
							break;
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
