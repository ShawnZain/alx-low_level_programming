/**
 * _strlen_recursion - find the length of a string
 * @s: string to check for
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
