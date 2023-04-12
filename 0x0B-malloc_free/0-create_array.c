#include "main.h"
#include<stdlib.h>

/**
 * create_array-function that creates an array of chars
 * @size: size of the array
 * @c:  character to be initialised
 *
 * Return: pointer to array, null if 0
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		ar = malloc(size * sizeof(char));
		if (ar == 0)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}
		return (ar);
	}
}
