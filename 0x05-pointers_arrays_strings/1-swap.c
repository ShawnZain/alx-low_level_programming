/**
 * swap_int - swaps the values of 2 integers
 * @a: int 1 to swap
 * @b: int 2 to swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
