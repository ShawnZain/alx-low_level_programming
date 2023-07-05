#include "lists.h"

/**
 * sum_listint - adds the values of data in the nodes of the list
 * @head: pointer to the head node
 * Return: the value of the sum
 * if the list is empty return 0
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (temp != NULL)
	{
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}

		return (sum);
	}

	return (0);
}
