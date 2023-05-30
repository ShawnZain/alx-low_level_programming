#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, k;
	int str;
	char temp[(_strlen(s))];

	i = _strlen(s);
	j = 0;

	/* save the string length */
	str = i;

	/* temporary string to have the same values as s*/
	for (k = 0; k < str; k++)
	{
		temp[k] = s[k];
	}
	
	/* reverse the order of the string */
	while (j < str)
	{
		*(s + j) = *(temp + (i - 1));
		i--;
		j++;
	}
}
