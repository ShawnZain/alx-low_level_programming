#include "main.h"

/**
 * print_sign - checks if number is +ve, 0, or -ve
 * @n: number to check
 * Return: 1 if positive, 0 if 0, -1 if negative
 */

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		resutl = 0;
		_putchar('0');
	}
	else
	{
		result = -1;
		_putchar('-');
	}

	return (result);
}
