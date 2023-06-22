/**
 * int_index - a function that searches for an integer in a given
 * array of integers
 *
 * @array: array to iterate through in search of the integer
 * @size: size of the integer
 * @cmp: function that compares each element of the array to the
 * integer that we are searching for and returns a bool value
 *
 * Return: -1 if
 * 		size <= 0
 * 		i >= size
 * 		!array || !cmp
 * 	else return the first index where we find the integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		/* i starts at 1 for us to test for size > 0 */
		for (i = 1; i <= size; i++)
		{
			/**
			 * when array[i] == int being searched for
			 * cmp returns !0
			 */
			if (cmp(array[i - 1]) != 0)
				return (i - 1);
		}
	}

	return (-1);
}
