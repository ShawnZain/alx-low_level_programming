/**
 * _isupper - check for upper case letters
 * @c: character to check for
 * Return: 1 if c is upper case or 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
