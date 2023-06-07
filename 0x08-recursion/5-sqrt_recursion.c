/**
 * _root - finds the square root of a number
 * @num: number to find the root
 * @r: number to check if it is the root of n
 * Return: either the square root, or -1
 */

int _root(int num, int r)
{
	if ((r * r) == num)
	{
		return (r);
	}
	else if (r == (num / 2))
	{
		return (-1);
	}
	else
	{
		return (_root(num, r + 1));
	}
}

/**
 * _sqrt_recursion - finds the square root of a number
 * @num: number provided
 * Return: if num = 1, 1
 * if num < 0, -1
 * if num does not have a natural square root, -1
 * if num has a natural square root, return it
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
		return (_root(n, r));
}
