/**
 * _strlen - gives us the length of the string provided
 * @strin: the string to check the length for
 * Return: length of the string
 */

int _strlen(char *strin)
{
	int i;

	for (i = 0; strin[i] != '\0'; i++);

	return (i);
}

/**
 * _strspn - gets the length of the prefix substring that contains
 * the string provided.
 * @s: string t perform the search on
 * @accept: string to search for
 *
 * description:
 * 	given a string s[] & accept[], search for accept in s
 * 	and tell  us how long into the string any character from
 * 	accept is found in s, without break.
 *
 * Return: length found
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int len, len2;
	int prfsub = 0;

	len = _strlen(s);
	len2 = _strlen(accept);

	for (i = 0; i < len; i++)
	{
		if(s[i] != 32) /**
				 * to check for the first substring
				 * we will search before spaces
				 */
		{
			for (j = 0; j < len2; j++)
			{
				if (s[i] != accept[j])
				{
					prfsub++;
				}
			}
		}
		else
			return (prfsub);
	}
	return (prfsub);
}
