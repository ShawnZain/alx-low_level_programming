#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i, k;
	int str;
	char temp;

	i = 0;
	/* get the string length */
	while (s[i] != '\0')
	{
		i++;
	}

	/* Total element indexes: */
	str = i - 1;

	for (k = 0; k < str / 2; k++)
	{
		temp = s[k];
		s[k] = s[str];
		s[str] = temp;
		str--;
	}
}
