#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets followed by a newline
 * ten times
 * @void - no parameters
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}

		_putchar('\n');

	}
}
