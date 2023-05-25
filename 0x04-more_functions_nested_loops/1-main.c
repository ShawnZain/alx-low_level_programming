#include <stdio.h>
#include "main.h"

/**
 * main - tells the user whether the int provided is a digit
 * Return: 0
 */

int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));

	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));

	return (0);
}
