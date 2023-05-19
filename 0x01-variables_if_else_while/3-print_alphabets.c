#include <stdio.h>

/**
 * main - entry point
 * i - variable to use for the for loop to print alphabet
 * Return: success (0)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	
	putchar('\n');

	return (0);
}
