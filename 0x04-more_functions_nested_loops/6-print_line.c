#include "main.h"

/**
 * print_line - prints _
 * @n: number of times to print _,
 * if n is 0, print only newline
 */

void print_line(int n);
{
	int i = 1;

	while (i <= n)
	{
		_putchar(95);
		i++;
	}

	_putchar('\n');
}
