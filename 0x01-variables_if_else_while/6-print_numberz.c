#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers from 1-9 with putchar
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
