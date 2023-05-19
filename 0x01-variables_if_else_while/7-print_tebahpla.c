#include <stdio.h>

/**
 * main - entry point
 *
 * i - variable to use in the for loop to print the alphabet in reverse
 *
 * Return: success (0)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
