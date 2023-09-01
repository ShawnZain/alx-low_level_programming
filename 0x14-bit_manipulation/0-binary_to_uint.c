#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 * @b: string of binary to change to decimal
 * Return: 0 if b is not '1' or '0'
 * 	   0 if b is 'NULL'
 * 	   The decimal otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	int i, exp;
	unsigned int ret;

	exp = 0;
	ret = 0;

	if(!b)
		return 0;

	for (i = 0; b[i] != '\0'; i++)
		exp += 1;

	exp -= 1;

	for(i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			ret += 0 << exp;
			exp -= 1;
		}
		else if (b[i] == '1')
		{
			ret += 1 << exp;
			exp -= 1;
		}
		else
			return 0;
	}
	return (ret);
}
