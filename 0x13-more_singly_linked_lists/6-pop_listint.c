#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the head node
 * Return: the data of the head node
 * if the list is empty return 0
 */

int pop_listint(listint_t **head)
{
	int temp_storage = *head->n;
	listint_t *temp = *head;

	if (temp == NULL)
	{
		return (0);
	}
	else
	{
		temp = tempt->next;
		free(*head);
		*head = temp;
	}

	return (temp_storage);
}
