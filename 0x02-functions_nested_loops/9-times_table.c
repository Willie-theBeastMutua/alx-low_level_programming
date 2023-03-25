#include "main.h"

/**
 * times_table - Print the 9 times table
 *
 * Return: Always 0 (success)
 */

void times_table(void)
{
	int i, j;
	int mult;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mult = i * j;
			if (mult <= 9)
			{
			_putchar(mult + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			if (j == 9)
			{
				break;
			}
			}
			else
			{

				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
				if (j == 9)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	_putchar(23 + '0');
}
