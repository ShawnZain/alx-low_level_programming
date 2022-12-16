#include "main.h"

/**
 * _abs - computes absolute value of an itn
 * @n: Int to be operated on
 *
 * Return: the unsigned int value to calling function
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
