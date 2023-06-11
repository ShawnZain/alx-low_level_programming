#include <stdio.h>

/**
 * main - prints the name of the program followed by \n
 * @argc: argument count
 * @argv: name of array to print
 * Return: 0, success
 */

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", *argv);

	return (0);
}
