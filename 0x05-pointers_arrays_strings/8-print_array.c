#include "main.h"
#include<stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: array passed
 * @n: number of integers to be printed
 *
 * Return: always 0
 */

void print_array(int *a, int n)
{
	int count = 0;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count == n-1)
			break;
		printf(", ");
	}
	printf("\n");
}
