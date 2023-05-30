#include "main.h"

/**
 * puts2 - prints every other item in the array
 * @str: string to print
 * Return: void
 */

void puts2(char *str)
{
	int i, j;

	i = _strlen(str);

	for (j = 0; j < i; j++)
	{
		_putchar(*(str + j));
		j++;
	}

	_putchar('\n');
}



