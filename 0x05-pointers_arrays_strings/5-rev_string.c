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
	char temp_string(_strlen(*s));

	i = 0;
	j = 0;
	/* get string length firs */
	while (*(s + i) != '\0')
	{
		i++;
	}

	/* save the string length */
	str = i;

	/* temporary string to have the same values as s*/
	for (k = 0; k < str; k++)
	{
		temp_string[k] = s[k];
	}
	
	/* reverse the order of the string */
	while (j < str)
	{
		*(s + j) = *(temp_string + (i - 1));
		i--;
		j++;
	}
}
