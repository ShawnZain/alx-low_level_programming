#include "main.h"

/**
 * print_square - prints square
 * @size: sqaure dimensions
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
