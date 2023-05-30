/**
 * _strcpy - copies one string into another
 * @dest: paste the string here
 * @src: copy this string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	/* find the length of the string we will copy */
	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}

	/* add the terminating null byte */
	dest[j] = '\0';

	return(dest);
}
