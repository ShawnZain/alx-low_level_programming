#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node of a give
 * value ata specific index
 * @head: the pointer to the head node
 * @idx: the index to add the node to
 * @n: the value of that will eb stored at the new node
 * Return: pointer to the new node successfully added
 * else NULL if the new node cannot be created
 * or if the index goes beyond the list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0; /* counter to track the index of the node */
	listint_t *temp = *head; /* never want to lose the head pointer */
	listint_t *newnode;

	/* create the new node and assign its values */
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	/* Adding the new node at the given index */
	if (temp != NULL )
	{
		if (idx == 0)
		{
			/* At index 0, we add the newnode as the head node */
			*head = newnode; /* making it the head node */
			newnode->next = temp->next; /**
						      * newnode now points
						      * to the old head node
						      */
		}

		while (temp != NULL)
		{
			/**
			 * we check that the counter is less than idx -1 
			 * as at idx is where we are adding the new node
			 */
			if (counter < idx - 1)
			{
				temp = temp->next;
				counter++;
			}
			else if (counter == idx -1)
			{
				/**
				 * at the point where counter is idx - 1
				 * we make newnode point to what the node
				 * at this index pointed to
				 * then we make this node point to newnode
				 */

				newnode->next = temp->next;
				temp->next = newnode;
				return (temp->next);
			}				
		}
	}

	return (NULL);
}
