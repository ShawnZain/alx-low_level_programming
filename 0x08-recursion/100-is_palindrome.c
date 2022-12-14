#include "main.h"

/**
 * comparator - compares each character of a string.
 * @str: string
 * @len: string size
 * @i: incrementor starting from 0
 * Return: 1 if string is palindrome,
 * 0 if not
 */
int comparator(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (comparator(str, len - 1, i + 1));

	if (str[i] != str[len])
		return (0);

	return (1);
}

/**
 * _strlen_recursion - finds length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * an empty string is considered a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if string is a palindrome,
 * 0 if a string is not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int str_len = _strlen_recursion(s) - 1;

	return (comparator(s, str_len, i));
}
