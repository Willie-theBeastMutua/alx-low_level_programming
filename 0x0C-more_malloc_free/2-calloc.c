#include "main.h"
#include<stdlib.h>

/**
 * _calloc- function that allocates memory for an array, using malloc.
 * @nmemb: array elements
 * @size: bytes size
 *
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar = malloc(nmemb * size);
	ptr = ar;
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ar);
}
