#include <stdio.h>

/**
 * main -entry point
 * prints the quotation using putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int sizeofquote;
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	sizeofquote = strlen(quote) - 1;

	for (int i = 0; i <= sizeofquote; i++)
	{
		if (quote[i] >= 0 && quote[i] <= 9)
			putchar(quote[i] + '0');
		else
			putchar(quote[i]);
	}

	putchar('\n');

	return (1);
}
