#include "lists.h"

/**
 * print_listint - prints the integers that are in the list
 * h: the head pointer of the list
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int counter = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter++;
	}

	return (counter);
}
