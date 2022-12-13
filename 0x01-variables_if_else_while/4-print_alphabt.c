#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabets expect 'q' & 'e'
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		if ((alphabet != 'e') && (alphabet != 'q'))
		{
			putchar(alphabet);
		}
		alphabet++;
	}

	putchar('\n');

	return (0);
}
