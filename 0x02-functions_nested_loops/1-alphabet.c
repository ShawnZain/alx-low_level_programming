#include "main.h"

/**
 * print_alphabet - used to print lower case alphabets
 * followed by a new line
 * @void: no parameters to pass
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
