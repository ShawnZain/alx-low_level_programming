#include "main.h"

/**
 * print_line - prints a _ n number of times
 * @n: number of times to print _
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
