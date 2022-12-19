#include "main.h"
#include <stdio.h>

/**
 * _strlen - prints the length of a string
 * @s: string to be supplied
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
