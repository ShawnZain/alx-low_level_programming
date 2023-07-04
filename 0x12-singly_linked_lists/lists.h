#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * list_t - creating a linked list structure
 * that stores a string, the length of the string
 * and a pointer to the next node
 */
typedef struct node
{
	char *str;
	int len;
	struct node *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
