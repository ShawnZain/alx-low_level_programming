#include "lists.h"

/**
 * print_list - prints the elements of the linked list
 * h: the head of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int counter = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		counter++;
	}

	return (counter);
}
