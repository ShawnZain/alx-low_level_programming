#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of 2 ints
 * @a: first int
 * @b: second int
 * int c: addressed the swapped value will be sent to
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
