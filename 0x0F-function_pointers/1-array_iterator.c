#include "function_pointers.h"
#include<stdlib.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: array passed
 * @size: size of array
 * @action: function passed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size > 0)
	{
	action(*array);
	array++;
	size--;
	}
}
