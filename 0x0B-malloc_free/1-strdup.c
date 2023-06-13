#include <stdlib.h>

/**
 * _strdup - duplicates a string provided to another location in memory
 * @str: string to duplicate
 * Return: NULL if str is NULL
 * NULL if malloc fails
 * pointer to the duplicated string on success
 */

char *_strdup(char *str)
{
	char *dup;
	int a, b;

	if (str == NULL)
		return (NULL);

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	dup = malloc(sizeof(char) * a);

	if (dup == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
	{
		dup[b] = str[b];
	}

	return (dup);
}
