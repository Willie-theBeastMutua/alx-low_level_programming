#include "main.h"

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
			if (i < 0)
			{
				i *= -1;
			}
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			if (i == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i > 99)
			{
				_putchar(i / 100 + '0');
				_putchar((i % 100) / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
		}
			if (i == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
