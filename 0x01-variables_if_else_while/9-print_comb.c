#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print 0 to 9 followed by ',' and space. Apart from after 9
 *
 * Return: Success (0)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else if (num == 9)
		{
			break;
		}
	}

	putchar('\n');

	return (0);
}
