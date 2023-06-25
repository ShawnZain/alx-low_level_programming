#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given each followed by a
 * separator given then a new line at the end
 * @separator: the separator between each number
 * @n: number of integers to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

		if (separator == NULL)
		{
			printf("%d", x);
		}
		else
		{

			if (i < n - 1)
			{
				printf("%d%s", x, separator);
			}

			else if (i == n - 1)
			{
				printf("%d", x);
			}
		}
	}

	va_end(args);

	printf("\n");
}
