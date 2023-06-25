#include "variadic_functions.h"

/**
 * sum_them_all - a function that adds the sum of the arguments passed to it
 * @n: the number of arguments that will be passed
 * Return: the sum of the integers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
