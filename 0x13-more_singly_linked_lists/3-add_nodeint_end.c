#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list
 * and updates the pointers accordingly
 *
 * head: head pointer to the first node
 * n: data value to add to the new node
 *
 * Return pointer to the new node
 * NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	/* assigning values to the elements of the new node */
	newnode->n = n;
	newnode->next = NULL;

	/**
	 * to add a new node at the end of the list, we have to
	 * traverse the whole list until we get to the node
	 * that currently points to NULL
	 */
	while (temp != NULL && temp->next != NULL)
		temp = temp->next;

	/**
	 * after getting to the end of the list,
	 * update the last node to now point to the new
	 * node that we want to add at the end
	 */
	if (temp != NULL)
	{
		temp->next = newnode;
	}
	else
	{
		*head = newnode;
	}

	return (newnode);
}
