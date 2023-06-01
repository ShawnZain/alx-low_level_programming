/**
 * _strcat - concatenates two strings
 * @dest: the string to add to
 * @src: the string to add to dest
 *
 * pseudo code - 
 * find the lengths of both strings until their null byte
 * then from dest's null byte rewrite with values of src
 * thereafter add the null byte to dest to end the string
 *
 * Return: pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	int len;

	/* find length of dest until the null byte */
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	/* find the length of src until null byte */
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}

	/* from null byte of dest, replace the value of dest with src */
	len = 0;
	while (len < j) /* src[len] will go until just before '\0' of src */
	{
		dest[i] = src[len];
		len++;
		i++; /* increment i so that the strings concatenate */
	}

	/* after all values of src are concatenated in dest add '\0' */
	dest[i] = '\0';

	return (dest);
}
