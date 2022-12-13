#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers in base 16: 1-9, a-f
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	/*Numbers in base 16 are 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f*/
	int num = '0';
	int ch = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
