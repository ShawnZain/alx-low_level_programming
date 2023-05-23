#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: input argument
 * Return: 1 if c is an alphabet, 0 if not
 */

int _isalpha(int c)
{
	if(
	((c > 64) && (c < 91)) ||
	((c > 96) && (c < 123))
	)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
