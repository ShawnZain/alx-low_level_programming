#include "main.h"

/**
 * _islower: checks for lowercase letters
 * @c: input parameter
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	if ((c > 96) && (c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
