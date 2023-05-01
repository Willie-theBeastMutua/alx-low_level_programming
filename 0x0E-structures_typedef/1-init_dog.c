#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *init_dog - prototype initilizing dog struct
 *@d: parameter
 *@name: parameter
 *@age: parameter
 *@owner: parameter
 *Return: Always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
