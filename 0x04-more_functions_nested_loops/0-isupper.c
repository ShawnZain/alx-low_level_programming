/**
 * _isupper - checks if the int provided is uppercase
 * @c: argument to check
 * Return: 1 if upper case, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
