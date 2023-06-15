#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates string s1 & s2 using n bytes from s2
 * if bytes provided for s2 are more than length of s2 then use whole
 * string
 * if NULL bytes from s2 is passed as argument treat as an empty string
 *
 * @s1: string to concatenate. Return pointer to this on success
 * @s2: string to concatenate to s1.
 * @n: first n bytes of s2 concat to s1.
 *
 * Return: pointer to concatenated string (s1)
 * If the function fails return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int j, i, len1, len2;

	/* get the length of the 2 argument strings*/
	len1 = 0;
	while (s1 && s1[len1])
		len1++;

	len2 = 0;
	while (s2 && s2[len2])
		len2++;

	/* allocate the right amount of memory */
	if (n > len2)
	{
		s = malloc(len1 + len2 + 1);
	}
	else
	{
		s = malloc(len1 + n + 1);
	}

	/* confirm that memory has been assigned correctly */
	if (s == NULL)
	{
		return (NULL);
	}

	/* when null bytes is the argument for s2 */
	if (s2 == NULL || n == 0)
		return (s1);

	/* CONCATENATE */
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}

	/* Add the null terminating byte */
	s[i] = '\0';

	return (s);
}
