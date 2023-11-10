#include "shell.h"

/**
 * main - the loop
 * @argc: argument count
 * @argv: the arguments that will be passed,
 * the commads and their flags
 * Return: 0
 */

int main(int argc, char **argv)
{
	sh_loop();

	return EXIT_SUCCESS;
}
