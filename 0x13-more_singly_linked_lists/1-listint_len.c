#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - list the length of list
 * @h: list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
