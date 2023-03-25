#include "main.h"

/**
 * print_last_digit - Prototype for printing last digit of a number
 *@n: return number
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int lastdig;

	lastdig = n % 10;
	if (lastdig < 0)
	{
		lastdig = lastdig * -1;
	}
	_putchar(lastdig + '0');
	return (lastdig);
}
