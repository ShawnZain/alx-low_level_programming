#include "main.h"

/**
 * print_square - prints a square
 * @size: length and width of the square
 * Return: void
 */

void print_square(int size)
{
	int height, width;

	height = 1;

	if (size > 0)
	{
		while (height <= size)
		{
			width = 0;
			while (width < size)
			{
				_putchar('#');
				width++;
			}
			_putchar('\n');
			height++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
