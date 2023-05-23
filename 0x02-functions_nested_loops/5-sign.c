#include "main.h"

/**
 * print_sign - checks if the integer is
 * greater than zero prints +
 * zero prints 0
 * less than zero prints -
 *
 * @n: input argument to check for
 *
 * Return: 1 if n is greater than zero 
 * 	0 if n is zero
 * 	-1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
}
