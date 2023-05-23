#include <math.h>

/**
 * _abs - gives the absolute value of integers
 * @n: argument to test
 * Return: the absolute integer
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else if (n < 0)
	{
		int absolute;

		absolute = n * -1;
		return (absolute);
	}
	return (0);
}

