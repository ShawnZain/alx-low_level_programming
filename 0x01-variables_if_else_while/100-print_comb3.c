#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints smallest combo of 2 digits in ascending order
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num1 = '0';
	int num2 = '0';

	for (num1 = '0'; num1 <= '9'; num1++) /*Prints num1 1-9*/
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			if (!((num1 == num2) || (num1 > num2)))
			{
				putchar(num1);
				putchar(num2); /*prints num1num2 (01)*/

				if (!(num1 == '8' && num2 == '9')) /*no ", " at the end*/
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

