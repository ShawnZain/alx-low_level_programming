#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print out
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + 1));
		i++;
	}

	_putchar('\n');
}
