/**
 * _strncat - concatenates 2 strings
 * @dest: the string to cancatenate to
 * @src: the string to copy
 * @n: the number of bytes of src to concatenate to dest
 *
 * pseudo code -
 * STEP 1 - get the length of dest until the null byte
 * STEP 2 - get the length of src until the null byte
 * IMPORTANT - since the variable char has 1byte (8 bits) each value of an
 * array string contains just 1byte
 * STEP 3 - to concatenate the 2 strings until n bytes of src
 * STEP 4 - add the null byte back to dest
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int len;

	/* STEP 1 */
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	/* STEP 2 */
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}

	/* STEP 3 */
	len = 0;
	while (len < n && src[len] != '\0')
	{
		/**
		 * the 2 test above mean that we will only concatenate
		 * until n bytes of src, where src[0] is 1byte src[1] is 2bytes
		 * until s[len] is nbytes
		 * then we will need to avoid concatenating past '\0' of src
		 * so if src[] only has 8bytes (8 values), then only copy
		 * until the last value not past there :)
		 */

		dest[i] = src[len];
		len++;
		i++;
	}

	/* STEP 4 */
	dest[i] = '\0';

	return (dest);
}
