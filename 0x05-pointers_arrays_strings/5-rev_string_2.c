#include <stdio.h>

/**
 * _strlen - gets the length of the string
 * @s: string to check for length
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * rev_string - reverses the string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
        int i, j, k;
        int str;
        char temp[(_strlen(s))];

        i = _strlen(s);
        j = 0;

        str = i;

        for (k = 0; k < str; k++)
        {
                temp[k] = s[k];
        }

        while (j < str)
        {
                *(s + j) = *(temp + (i - 1));
                i--;
                j++;
        }
}

/**
 * main - tests the functions above
 * Return: 0
 */

 int main(void)
 {
   char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);

 }

