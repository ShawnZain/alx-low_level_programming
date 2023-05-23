#include <math.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: argument to calculate last digit
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;

	_putchar(i + '0');
	return (i);
}
