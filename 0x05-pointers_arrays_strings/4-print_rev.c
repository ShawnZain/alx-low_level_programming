#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int i, j;
	int str; /* var to store the strlength */

	i = 0;
	j = 0;

	/* find the length of the string first */
	while (*(s + i) != '\0')
	{
		str = i;
		i++;
	}

	/* then print starting from strlength backwards*/
	while (j < str)
	{
		_putchar(*(s + (i - 1)));
		/* since str goes until the buffer, print before it*/
		i--;
		j++;
	}

	_putchar('\n');
}

