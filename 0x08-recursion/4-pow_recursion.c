/**
 * _pow_recursion - returns the value of x to the power y
 * x: base number
 * y: power
 * Return: value of the x power y if y is greater than 0.
 * 	If y is 0 return 1
 * 	if y is < 0 return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y-1));
	}
}
