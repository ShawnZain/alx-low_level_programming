#include "3-calc.h"

/**
 * main - prints the result of the operation to std out
 * @argc: argument counters
 * @argv: an array of the arguments that the user has to insert
 * Return: succes, 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operand;
	int (*operation)(int, int);

	/* input arguments have to be 3 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* convert input characters to integer data */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operand = argv[2];

	/* function pointer for easier typing */
	operation = get_op_func(operand);

	/**
	 * if operator inputted is not part of the list of operators
	 * or if the operator given has more that 1 character
	 */
	if (operation == NULL || operand[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* calculations that will cause our program to crash */
	if ((*operand == '/' && num2 == 0) ||
		(*operand == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/* output to the terminal window the result */
	printf("%d\n", operation(num1, num2));

	return (0);
}
