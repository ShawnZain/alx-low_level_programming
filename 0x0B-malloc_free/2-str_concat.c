#include <stdlib.h>

/**
 * *str_concat - concatenates 2 strings
 * @s1: string to start
 * @s2: concatenate with this string
 * Return: NULL if malloc fails
 * pointer to the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int a, b;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	a = b = 0;
	while(s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	concat = malloc(sizeof(char) * (a + b + 1));

	if (concat == NULL)
		return (NULL);

	a = b = 0;
	while (s1[a] != '\0')
	{
		concat[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		concat[a] = s2[b];
		a++;
		b++;
	}

	concat[a] = '\0';

	return (concat);
}
