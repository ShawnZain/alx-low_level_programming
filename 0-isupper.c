#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: character to check
 * Return: 1 if upper, 0 if lower
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
