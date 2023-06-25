#include "variadic_functions.h"

/**
 * print_strings - prints a number of strings with a separator in between
 * each string. At the end new-line
 * @separator: separator between 2 strings
 * @n: number of strings to print
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		/* check if string is NULL */
		if (str == NULL)
		{
			str = "(nil)";
		}

		/* check if there is no separator */
		if (separator == NULL)
		{
			printf("%s", str);
		}
		else
		{
			if (i < n - 1)
			{
				printf("%s%s", str, separator);
			}
			else if (i == n - 1)
			{
				printf("%s", str);
			}
		}
	}

	printf("\n");

	va_end(args);
}
