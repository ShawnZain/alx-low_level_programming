#include <stdio.h>

/**
 * main - prints 1 to 100,
 * but for multiples of 3 prints fizz,
 * multiples of 5 prints buzz,
 * multiples of both prints fizzbuzz,
 * each separated by space ending in newline
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}

	printf("Buzz\n");

	return (0);
}
