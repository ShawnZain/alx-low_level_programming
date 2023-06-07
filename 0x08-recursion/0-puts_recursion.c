#include "main.h"

/**
 * _puts_recursion - prints out a string
 * @s: string to print out
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		_putchar('\n');

	_putchar(s[0]);
	_puts_recursion(s + 1);
}
