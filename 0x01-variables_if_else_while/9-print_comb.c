#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible combos of single digis
 * each combo to be followed by a ',' then space
 *
 * Return: success (0)
 */

int main(void)
{
	int num1; /* first digit of combination */
	int num2; /* second digit of combination */

	for (num1 = 0; num1 <= 9; num1++) /* increment first digit */
	{
		for (num2 = 0; num2 <= 9; num2++) /* increment second digit */
		{
			putchar(num1 + '0'); /*num1 stays the same until num2
					       is 9, before increment by 1 */
			putchar(num2 + '0'); /* num2 runs throught the loop */

			if (num1 == 9 && num2 == 9)
				break; /* at combo 99 no comma or space after */
			else 
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
