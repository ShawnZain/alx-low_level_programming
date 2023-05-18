#include <stdio.h>
#include <string.h>

/**
 * main -entry point
 * prints the quotation using putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int sizeofquote;
	int i = 0;
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	sizeofquote = strlen(quote) - 1;

	while (i <= sizeofquote)
	{
		putchar(quote[i]);
		i++;
	}

	putchar('\n');

	return (1);
}
