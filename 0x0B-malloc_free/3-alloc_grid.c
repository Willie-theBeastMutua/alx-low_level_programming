#include "main.h"
#include<stdlib.h>

/**
 * alloc_grid-function that returns a pointer to a 2 dimensional array
 * @width: columns
 * @height: rows
 *
 * Return: 2D pointer
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i = 0;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(height * sizeof(*ar));
	if (ar == NULL)
		return (NULL);
	while (i < height)
	{
		ar[i] = malloc(width * sizeof(**ar));
		if (ar[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ar[i]);
			free(ar);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
		i++;
	}
	return (ar);
}
