/**
 * print_name - prints the name
 * @name: name to print
 * @f: function pointer with the print function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	/* DEBUGGING: making sure that valid arguments are passed to the funciton */
	if (!name || !f)
		return;
	f(name);
}
