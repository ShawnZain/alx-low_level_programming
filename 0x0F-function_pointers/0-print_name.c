/**
 * print_name - prints the name
 * @name: name to print
 * @f(): function pointer with the print function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
