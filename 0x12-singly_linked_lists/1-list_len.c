#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * list_len - prototype for displaying linked list length
 * @h: struct for linked list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
