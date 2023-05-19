#include <stdio.h>

/**
 * main - entry point
 * i - variable to print the alphabet
 * Return: success (0)
 */

int main(void)
{
	char i; /*declared for use in the for loop*/

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
