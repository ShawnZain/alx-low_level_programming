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

		/* check if there is no separator */
		if (separator == NULL)
		{
			printf("%s", str);
		}
		else
		{
			/* check if argument passed is not a string */
			if (str == NULL)
			{
				str = "(nil)";
			/**
			 * if there is a separator & str != (nil)
			 * print the strings with the separator
			 * at the end print only the string followed by \n
			 */
			}
			else if (i < n - 1)
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
