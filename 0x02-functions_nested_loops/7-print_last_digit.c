#include <math.h>
#include <limits.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: argument to calculate last digit
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int i;

	if (n >= 0)
	{
		i = n % 10;
	}
	else if (n < 0 && n != INT_MIN)
	{
		i = (n * -1) % 10;
	}

	/**
	 * If n is INT_MIN, then abs(INT_MIN) will be beyond INT_MAX
	 * to prevent errors, just equate i to 8 which is the
	 * last digit of INT_MIN
	 */

	else if (n == INT_MIN)
	{
		i = 8;
	}

	_putchar(i + '0');
	return (i);
}
