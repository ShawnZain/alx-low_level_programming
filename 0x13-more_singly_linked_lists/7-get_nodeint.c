#include "lists.h"

/**
 * get_nodeint_at_index - looks for the nth node of a list
 * @head: the pointer to the head of the linked list
 * @index: the index to search for in the list
 * Return: the pointer to the nth node
 * else if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int counter = 0;

	while (temp != NULL)
	{
		if (counter == index)
		{
			return (temp);
		}
		else
		{
			temp = temp->next;
		}
		counter++;
	}

	return (NULL);
}

