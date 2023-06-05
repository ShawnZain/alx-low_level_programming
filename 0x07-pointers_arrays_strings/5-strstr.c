#include <stdlib.h>

/**
 * _strstr - a needle in a haystack
 * @haystack: where we will look for the needle
 * @needle: the ssubstring to search for
 * Return: a pointer to the begnining of the substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int it;
	int len = 0;

	while (needle[len] != '\0')
		len++;

	while (*haystack)
	{
		for (it = 0; needle[it]; it++)
		{
			if (haystack[it] != needle[it])
			{
				break;
			}
		}
		if (it != len)
			haystack++;
		else
			return (haystack);
	}
	
	return (NULL);
}
