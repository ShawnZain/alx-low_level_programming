/**
 * check_for_multiples - check to see if n has numbers that can divide it
 * @n: number to check
 * @t: possible divider
 * Return: 0 if t can divide n, 1 if not
 */

int check_for_multiples(int n, int t)
{
	if (n % t)
	{
		return (0);
	}
	if (t == n / 2)
	{
		return (1);
	}

	return (check_for_multiples(n, t + 1));
}

/**
 * is_prime_number - checsk to see if a number is a prime number
 * @n: number to check
 * Return: 1 if it is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	int t = 2;

	if (n <= 1)
		return (0);

	if (n == 2 || n == 3)
		return (1);

	return (check_for_multiples(n, t));
}
