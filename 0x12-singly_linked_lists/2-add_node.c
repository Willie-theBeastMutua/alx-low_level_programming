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

	leng = strlen(str);
	name = malloc(sizeof(char) * (leng + 1));
	if (name == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		name[i] = str[i];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(name);
		return (NULL);
	}
	new->str = name;
	new->len = leng;
	new->next = *head;
	*head = new;

	return (new);
}
