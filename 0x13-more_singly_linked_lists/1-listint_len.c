#include "lists.h"

/**
 * linstint_len - tells us how many nodes there are in the list
 * h: pointer to the head of the node
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	int counter = 0;

	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}

	return (counter);
}
