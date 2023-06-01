/**
 * _strncpy - copies a string
 * @dest: where to copy the string to
 * @src: the string to copy
 * @n: the number of bytes of src to copy to dest
 *
 * pseudo code -
 * STEP 1: get the length of src & dest
 * STEP 2: check to see if length of src is more than n
 * 	- if it is more than n, then n values are copied to the first n-1
 * 	index of dest, with no null byte appended to dest.
 * 	- if n is greater than the length of src then copy src to dest and
 * 	append a null byte character to dest at the end of copying
 * IMPORTANT CONDITIONS:
 * 1. when pasting, never go past dest's null byte, it will cause
 * 	segmentation fault. So the copied string can never be bigger
 * 	than the space allocated to the dest string
 * 2. if src has a null byte, it should never be copied to dest
 * 3. the only time where the null byte position for dest will change
 * 	is when n is greater than the length of src
 * 
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	int len;

	/* STEP 1 */
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	len = 0;
	while (dest[len] != '\0')
	{
		len ++;
	}


	/* STEP 2 */
	if (n <= i)
	{
		for (j = 0; j < n && dest[j] != '\0' && src[j] != '\0'; j++)
		{
			dest[j] = src[j];
		}
	}
	else if (n > i)
	{
		j = 0;
		while (j < n && dest[j] != '\0' && src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}

		dest[j] = '\0';
	}

	return (dest);
}	
