#include <stdlib.h>

/**
 * _strpbrk - checks for the first instance where a character from
 * accept appears in s
 *
 * @s: string to search for any bytes from accept
 * @accept: bytes to search for
 *
 * Return: pointer to the first instance in s where a byte of accept appears
 * 	if no byte of accept appears, returns null
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while(*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}

