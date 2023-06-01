/**
 * _strncpy - copies a string
 * @dest: where to copy the string to
 * @src: the string to copy
 * @n: the number of bytes of src to copy to dest
 *
 * pseudo code -
 * STEP 1: get the length of src
 * STEP 2: check to see if length of src is more than n
 * 	- if it is more than n, then n values are copied to the first n-1
 * 	index of dest, with no null byte appended to dest.
 * 	- if n is greater than the length of src then copy src to dest and
 * 	append a null byte character at the end of copying.
 * 
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	/* STEP 1 */
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	/* STEP 2 */
	if (n <= i)
	{
		for (j = 0; j < i; j++)
		{
			dest[j] = src[j];
		}
	}
	else if (n > i)
	{
		for (j = 0; j < i; j++)
		{
			dest[j] = src[j];
		}
		
		dest[j] = '\0';
	}

	return (dest);
}	
