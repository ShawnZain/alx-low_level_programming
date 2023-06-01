#include "main.h"

/**
 * strcmp - copmares two strings
 * @s1: first string to compare with
 * @s2: string to compare to
 *
 * pseudo code -
 * compare the ascii int value of each char in s1 to s2 and get
 * 	arithemtic difference between the 2 values.
 * if s1[i] == s2[i] continue with the next itteration of loop.
 * the first instance where s1[i] != s2[i] break from the loop.
 *
 * Return: the value of the difference.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int len1, len2;
	int diff;

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}

	for (i = 0; i <= len1 || i <= len2; i++)
	{
		diff = s1[i] - s2[i];
		if (diff == 0)
		{
			continue;
		}
		else if (diff != 0)
		{			
			break;
		}

	}
	return (diff);
}
