#include "main.h"

/**
 * print_triangle -function that prints a triangle
 * @size: is the size of the triangle
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int count, i ,j;
	int s = size;
	
	if (size > 0)
	{
		for (count = 0; count < size; count++)
		{
			for (i = s; i > 1; i--)
			{
				_putchar(' ');
			}
			for (j = 0; j < size - (s-1); j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			s--;			
		}
		
	}
	else
		_putchar('\n');
}
