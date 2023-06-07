/**
 * factorial - gives us the factorial of a number
 * @n: number to do factorial
 * Return: result of factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n -1));
	}
}

