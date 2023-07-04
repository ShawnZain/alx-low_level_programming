#include "lists.h"

/**
 * add_nodeint - adds a new node at the start of the list
 * and updates the pointers
 *
 * head: pointer to the head of the list
 * n: number to store in the node data
 *
 * Return: the pointer to the most recently added node in
 * the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	/**
	 * first store n to the data of newnode
	 * since head will still be pointing to the old memory address,
	 * let temp->next point to that. In the beginning it will point to NULL
	 * then update head to point to the new node created
	 */
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
