#include "function_pointers.h"
#include<stdlib.h>

/**
 *int_index - function that searches for an integer.
 *@array: arrays
 *@size: size of the array
 *@cmp: function pointer
 *
 * Return: index function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	while (index < size)
	{
		if (cmp(array[index]) != 0)
			return (index);
		index++;
	}
	return (-1);
}

