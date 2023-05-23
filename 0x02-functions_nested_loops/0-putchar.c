#include "main.h"

/**
 * main - entry point
 * Description: the program will print '_putchar' to the terminal
 * Return: success (0)
 */

int main(void)
{
	char str[] = "_putchar";
	int str_length;
	int i;

	str_length = (sizeof(str) - 1);

	for (i = 0; i <= str_length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

	return (0);
}
