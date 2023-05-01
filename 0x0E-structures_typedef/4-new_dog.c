#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *new_dog - Prototype for creating new dog
 *@name: first member
 *@age: Second memmber
 *@owner: Third member
 *Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog = {
		.name = strdup(name),
		.age = age,
		.owner = strdup(owner)
	};

	if (dog.name == NULL || dog.owner == NULL)
	{
		free(dog.name);
		free(dog.owner);
		return (NULL);
	}
	dog_t *ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
		free(dog.name);
		free(dog.owner);
		return (NULL);
	}
	*ptr = dog;

	return (ptr);
}
