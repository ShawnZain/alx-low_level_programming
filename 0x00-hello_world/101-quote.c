#include <stdio.h>
#include <unistd.h>

/**
 *main - prints exactly and that pice of art is useful' - Dora Korpar, 215-10-19
 *
 *return: Always 0 (Success)
 */

int main(void)
{

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
