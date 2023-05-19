#include <stdio.h>

/**
 * main - entry point
 * Desription: prints numbers of base 16
 * 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
 * Return: success (0)
 */

int main(void)
{
	int num;
	char alph;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0'); /* printing first 10 numbers: 0 to 9 */
	}

	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph); /* printing last 6 numbers: a to f */
	}

	putchar('\n');

	return (0);
}
