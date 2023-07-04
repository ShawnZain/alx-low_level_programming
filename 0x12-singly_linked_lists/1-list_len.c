#include "lists.h"

/**
 * list_len - counts how many nodes there are in a list
 * h: the head of the list
 * Return: the number of elements (nodes) in the list
 */

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int counter = 0;

	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}

	return (counter);
}
