#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: column to print the backslash
 * Return: void
 */

void print_diagonal(int n)
{
	int height, width;

	height = 1;

	if (n > 0)
	{
		while (height <= n)
		{
			width = 1;
			while (width < height)
			{
				_putchar(' ');
				width++;
			}

			_putchar(92);
			_putchar('\n');

			height++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
