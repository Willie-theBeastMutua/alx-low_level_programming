#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *@a: array
 *@n: size of array
 *
 * Return: a
 */

void reverse_array(int *a, int n)
{
	int i;
	int k;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		j = a[n - 1];
		a[i] = j;
		a[n - 1] = k;
		n--;
	}
}

