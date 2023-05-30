/**
 * _strlen - finds the length of a string
 * @s - string whose length to check for
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 1;
	while (s[i - 1] != '\0')
	{
		i++;
	}

	return (i);
}
