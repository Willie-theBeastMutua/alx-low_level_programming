#include <stdio.h>
#include "lists.h"

/**
 * print_list - prototype to print linked list
 * @h: pointer to list
 * Return: i
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str != NULL ? h->str : "(nil)");
		h = h->next;
	}
	return (i);
}
