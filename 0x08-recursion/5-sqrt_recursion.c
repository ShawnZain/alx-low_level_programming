/**
 * power - finds the number that when multiplied
 * by itself gives us n
 *
 * @a: the number
 * @b: the number to multiply by itself
 *
 * Return: If the number has a natural sqrt
 * it will return the square root
 * else it returns -1
 */
int power(int a, int b)
{
	if (b * b > a)
		return (-1);

	else if (b * b == a)
		return (b);

	else
		return (power(a, b + 1));
	
	return (1);
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: The natural square root
 * -1 if the number does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	
	return (power(n, 1));
}
