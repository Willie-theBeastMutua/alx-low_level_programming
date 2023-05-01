#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - prototype
 *@d: first element
 *
 *Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
