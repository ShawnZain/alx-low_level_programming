/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	int str;
	char l[] = s; /* save the string in another array */

	i = 0;
	j = 0;
	/* get string length firs */
	while (*(s + i) != '\0')
	{
		i++;
	}

	/* save the string length */
	str = i;
	
	/* reverse the order of the string */
	while (j < str)
	{
		/**
		 * if l[str -1] = "F"
		 * then s[j] to be F
		 *
		 * we say l[str - 1] becase l counts until '\0'
		 */
		*(s + j) = *(l + (i - 1));
		i--;
		j++;
	}
}
