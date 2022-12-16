#include "main.h"

/**
 * main - prints the alphabet in lowecase
 *
 * Return: ALways 0 (success)
 *
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');

}
