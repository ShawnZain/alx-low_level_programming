#include <stdio.h>

/**
 * main - entry point
 *
 * i - variable to use in the for loop to print 0 to 9
 *
 * Return: Succes (0)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
