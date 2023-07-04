#ifndef LIST_H
#define LIST_H
#include <stddef.h>

/**
 * struct listint_t- struct for list
 *
 * @n: interger
 * @next: next pointer
 */

typedef struct listint_t
{
	int n;
	struct listint_t *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif
