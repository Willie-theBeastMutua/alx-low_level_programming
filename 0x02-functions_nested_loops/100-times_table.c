#include "main.h"

/**
 * print_times_table -Times table for provided input
 *@n: argument passed t function
 *
 * Return: always 0 (Success)
 */

void print_times_table(int n)
{
	int i, j, added;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		added = 0;
		for (j = 0; j < n; j++)
		{
			added = added + i;
			if (added >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(added / 100 + '0');
				_putchar((added % 100) / 10 + '0');
				_putchar((added % 100) % 10 + '0');
			}
			if (added < 100 && added > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(added / 10 + '0');
				_putchar(added % 10 + '0');
			}
			if (added < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(added + '0');
			}
		}
		_putchar('\n');
	}
}
