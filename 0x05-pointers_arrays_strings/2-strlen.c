/**
 * _strlen - finds the length of a string
 * @s: string whose length to check for
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
