#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add node prototype
 * @head: first node
 * @str: string value
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int leng;
	char *name;
	int i;


	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	leng = strlen(str);
	name = malloc(sizeof(char) * (leng + 1));
	for (i = 0; str[i]; i++)
		name[i] = str[i];
	new->str = name;
	new->len = leng;
	new->next = *head;
	*head = new;

	return (new);
}
