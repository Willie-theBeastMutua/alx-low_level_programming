#include "main.h"
#include<stdlib.h>

/**
 * array_range-function that creates an array of integers.
 * @min: min mnumber
 * @max: max number
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ar;
	int count = 0;
	int i;
	int j;
	
	if (min > max)
		return (NULL);
	for (j = min; j <= max; j++)
		count++;
	ar = malloc(count * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
	{
		ar[i] = min;
		min++;
	}
	return (ar);
}
