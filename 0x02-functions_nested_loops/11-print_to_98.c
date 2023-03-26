#include "main.h"
#include<stdio.h>
/**
 * print_to_98 -Prototype to print numbers to 98
 * @n: integer to start the function at
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d, ", i);
			}
	}
}
