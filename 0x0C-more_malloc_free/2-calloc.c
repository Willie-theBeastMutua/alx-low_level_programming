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

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);
	return (ar);
}
