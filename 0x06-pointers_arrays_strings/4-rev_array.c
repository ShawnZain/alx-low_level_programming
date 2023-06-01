/**
 * reverse_array - reverses the order of the values of an array
 * @a: the array to reverse
 * @n: number of elements to swap
 *
 * pseudo code -
 * get the lenght of the array
 * swap only n elements (elements of the array upto index n-1
 * temp = a[0]
 * a[0] = a[len]
 * a[len] = temp
 * len--
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
