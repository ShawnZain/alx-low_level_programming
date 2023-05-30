#include "main.h"

/**
 * puts_half - prints the last half of a string
 * @str: the string to print
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	for (j = 0; *(str + (i / 2 + j)) != '\0'; j++)
	{
		_putchar(*(str + (i / 2 + j)));
	}

	_putchar('\n');
}
