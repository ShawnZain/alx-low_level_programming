/**
 * string_toupper - converts all lowercase letters in a string to uppercase
 * @s: string to check and convert
 *
 * pseudo code -
 * STEP 1: check length of string
 * STEP 2: run a loop that will go through all elements of the array
 * STEP 3: using ASCII, change all lowercase to uppercase
 * 	eg a  to be A
 * 	97 to be 65
 * 	a[i] - 32 makes it upper
 *
 * Return: the new string with only uppercase letters
 */

char *string_toupper(char *a)
{
	int i, j;
	char up;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		if (a[j] >= 97 && a[j] <= 122)
		{
			a[j] -= 32;
		}
		else
			continue;
	}

	return (a);
}
