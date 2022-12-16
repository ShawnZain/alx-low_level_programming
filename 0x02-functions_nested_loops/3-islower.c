#include "main.h"

/**
 * _islower - checks if a char is lowercase if YES return 1
 * otherwise returns 0
 * @c: is the int value to be compared with the ASCII value
 * Return: 0 if successful. _islower - Entry point
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
