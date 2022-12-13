#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabets in lower then in upper
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int alphabet = 'a';
	int upperAlphabet = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (upperAlphabet <= 'Z')
	{
		putchar(upperAlphabet);
		upperAlphabet++;
	}
	putchar('\n');

	return (0);
}
