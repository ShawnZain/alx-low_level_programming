#include "main.h"

/**
 * print_binary - converts decimal to binary and prints it to STDOUT
 * @n: decimal number to convert
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int temp;

	if (n == 0)
	{
		write(1, "0", 1);
		return;
	}
	else if (n == 1)
	{
		write(1, "1", 1);
		return;
	}

	print_binary(n >> 1);
	temp = n & 1;
	if (temp == 1)
	{
		write(1, "1", 1);
		return;
	}
	else
	{
		write(1, "0", 1);
		return;
	}
}
