#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - prototyp to add list at the end
 * @head: start of list
 * @str: name to be added
 * Return: start of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	int leng;
	char *name;

	if (str == NULL)
		return (NULL);
	leng = strlen(str);
	name = malloc(sizeof(char) * (leng + 1));
	if (name == NULL)
		return (NULL);
	name = strdup(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	current = malloc(sizeof(list_t));
	new->str = name;
	new->len = leng;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;

	while (current->next != NULL)
		current = current->next;
	current->next = new;

	return (*head);
}
