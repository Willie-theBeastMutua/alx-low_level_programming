#include "main.h"
#include<stdlib.h>

/**
 * malloc_checked-function that allocates memory using malloc.
 * @b: passed value
 *
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);
	if (ar == NULL)
	{
		exit(98);
	}
	return (ar);
}
