#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds 2 integers
 * @a: int to add
 * @b: int to add
 * Return: result of operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: int to subtract from
 * @b: int to subtract
 * Return: result of operation
 */
int op_sub(int a, int b)
{
        return (a - b);
}

/**
 * op_mul - product of 2 integers
 * @a: int 1
 * @b: int 2
 * Return: result of operation
 */
int op_mul(int a, int b)
{
        return (a * b);
}

/**
 * op_div - divides 2 integers
 * @a: numerator
 * @b: denominator
 * Return: result of operation
 */
int op_div(int a, int b)
{
        return (a / b);
}

/**
 * op_mod - calculates the remainder after division
 * @a: numerator
 * @b: denominator
 * Return: result of operation
 */
int op_mod(int a, int b)
{
        return (a % b);
}
