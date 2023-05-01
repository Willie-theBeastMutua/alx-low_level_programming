#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_dog - prints a struct dog
 *@d: pointer to struct dog
 *Return: Always 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %f\n", d->age >= 0 ? d->age : -1);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
