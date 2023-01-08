#include "main.h"

/**
 * comparator - compares each character of a string.
 * @s: string
 * @len: string size
 * @i: incrementor starting from 0
 * Return: 1 if string is palindrome,
 * 0 if not
 */
int comparator(char *s, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (comparator(s, len - 1, i + 1));

	if (s[i] != s[len])
		return (0);

	return (1);
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
