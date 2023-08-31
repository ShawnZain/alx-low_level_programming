#include main.h

/**
 * binary_to_uint - converts binary to decimal
 * b: string of binary to change to decimal
 * Return: 0 if b is not '1' or '0'
 * 	   0 if b is 'NULL'
 * 	   The decimal otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int i;

	i = 0;

	if(!b)
		return 0;

	for(j = 0; b[j] != '\0'; j++)
	{
		if(b[j] != '1' && b[j] != '0')
			return 0;
	}

	for(j = 0; b[j] != '\0'; j++)
	{
		i <<= j;
		if (b[j] == '1')
			i += 1;
	}
	return (i);
}
