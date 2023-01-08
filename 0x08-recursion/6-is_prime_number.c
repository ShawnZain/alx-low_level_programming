/**
 * test - tests if n is a prime number,
 * by finding out the divisors of n.
 *
 * @n: input number
 * @divisor: the divisor
 *
 * Return: 1 if n is prime number
 * 0 if n is nor a prime number
 */
int test(int n, int divisor)
{
	if (n % divisor == 0)
	{
		if (n == divisor)
			return (1);
		else
			return (0);
	}
	return (0 + test(n, divisor + 1));
}

/**
 * is_prime_number - tests if n is a prime number
 * @n: input number
 * Return: 1 if  is a prime number,
 * 0, if n is not a prime number
 */
int is_prime_number(int n)
{
	if (n == 0 || n < 0 || n == 1)
		return (0);
	
	return (test(n, 2));
}
