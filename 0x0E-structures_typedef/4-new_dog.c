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
	Allocate memory for the new dog
		dog_t *dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);
	dog->owner = malloc(strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
