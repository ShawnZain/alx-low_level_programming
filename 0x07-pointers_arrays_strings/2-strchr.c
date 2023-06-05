/**
 * _strchar - searches for a character in a string,
 * if the character is found it returns a pointer to the first occurance of
 * that character in the string we are searching.
 * If the character is not found in the string, return NULL
 *
 * @s: string to search
 * @c: character to search for
 *
 * Return: either pointer to the first occurance of c in s or NULL if it
 * doesn't exit
 */

char *_strchr(char *s, char c)
{
	int i;
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
