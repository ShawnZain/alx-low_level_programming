#include "main.h"

/**
 * more_numbers - prints 0 to 14, 10 times
 * Return: void
 */

void more_numbers(void)
{
	int rows, columns;

	rows = 0;

	while (rows < 10)
	{
		columns = 0;
		while (columns <= 14)
		{
			if (columns < 10)
			{
				goto print_last_digit;
			}
			else if (columns > 9)
			{
				_putchar((columns / 10) + '0');

print_last_digit:
				_putchar((columns % 10) + '0');
			}
			columns++;
		}
		_putchar('\n');
		rows++;
	}
}
