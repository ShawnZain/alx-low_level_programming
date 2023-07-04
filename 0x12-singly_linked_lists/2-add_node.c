#include "lists.h"

/**
 * add_node - adds a node to the start of a list
 * head: pointer to the head of the list
 * str: string to be added to the list
 * Return: pointer to the newly added node
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	while (len < strlen(str))
	{
		len++;
	}

	temp->str = strdup(str);
	temp->next = *head; /**
			      * head is still pointing to the old node
			      * so the new node will point to the older one
			      * and head will now point to the new node
			      */
	*head = temp;

	return (*head);
}
