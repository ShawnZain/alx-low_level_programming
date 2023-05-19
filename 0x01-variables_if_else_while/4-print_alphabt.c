#include <stdio.h>

/**
 * main - entry point
 *
 * i - variable for use in the for loop to print alphabets,
 * but do not print 'q' & 'e'
 *
 * Return: success (0)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}
