#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabets each in new line
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
