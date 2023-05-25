#include <stdio.h>

/**
 * main - prints 1 to 100
 * but for multiples of 3 print Fizz, multiples of 5 print Buzz
 * multiples of both 3 and 5 print FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((i % 3 == 0) && (i % 15 != 0))
		{
			printf("Fizz ");
		}
		else if ((i % 5 == 0) && (i % 15 !=0))
		{
			printf("Buzz ");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
			printf("%d ", i);
	}
	printf("100\n");

	return (0);
}
