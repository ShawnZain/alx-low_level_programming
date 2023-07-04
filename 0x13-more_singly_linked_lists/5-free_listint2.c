#include "lists.h"

/**
 * free_listint2 - frees the dynamically allocated list items in memory
 * and sets the head pointer to NULL
 *
 * head: the pointer to the head node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *node;

	if (head != NULL)
	{
		while (temp != NULL)
		{
			node = temp;
			temp = temp->next;
			free(node);
		}
		*head = NULL;
	}
}
