#include "main.h"

void _div(unsigned long int n);

/**
 * print_binary - converts decimal to binary
 * @n: decimal number to convert
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_div(n);
}

/**
 * _div - converts to 1s and 0s
 * @n: number to convert
 * Return: nothing
 */
void _div(unsigned long int n)
{
	if (n < 1)
		return;

	_div(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
