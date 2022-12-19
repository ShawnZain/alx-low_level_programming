#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies string pointed to src & dest
 * @dest: pointer
 * @src: pointer
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + 1) != '\0'; i++)
	{
		dest[i] = *(src + 1);
	}

	dest[i] = '\0';

	return (dest);
}
