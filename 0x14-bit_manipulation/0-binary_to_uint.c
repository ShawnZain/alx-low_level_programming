#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 * @b: binary string
 * Return: the decimal number
 * or 0 if b is null/ b contains characters that are not 1's or 0's
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int len = 0, temp = 1, ret = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		len += 1;
	}

	len -= 1;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			ret += 0;
		}
		else if (b[i] == '1')
		{
			ret += temp << len;
		}
		else
			return (0);
		len--;
		temp = 1;
	}

	return (ret);
}
