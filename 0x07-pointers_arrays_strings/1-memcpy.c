/**
 * _memcyp - copies n bytes from src to dest
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of bytes from src to copy to dest
 *
 * pseudo code -
 * take whats at dest[i] to be src[i] for as long as n > 0
 * this is an extension of the previous question.
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);
}
