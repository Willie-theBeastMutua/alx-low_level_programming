#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
 * struct list - list structre
 * @str: string
 * @len: length of string
 * @next: next linked list
 */

typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);

#endif
