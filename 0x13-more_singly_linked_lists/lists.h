#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * listint_t - structure that defines a node
 */
typedef struct node
{
	int n;
	struct node *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
