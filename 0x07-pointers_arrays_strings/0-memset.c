/**
 * _memset - fills the first n elements of an array with b
 * @s: the array whose elements will be changed
 * @b: the first n elements will be filled with b
 * @n the number of elements to change
 *
 * pseudo code -
 * We will change the number of elements in s from 0 to (n - 1)
 * in this range of elements we will put the value of b.
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
		/* if n is 10,only  elements from index 0 to 9 will change */
	}

	return (s);
}
