#include "main.h"

/**
 * print_sign - prototype to be run
 *@n: Argument to be parsed
 *
 *Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero, -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	int retval;

	if (n > 0)
	{
		_putchar('+');
		retval = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		retval = 0;
	}
	else
	{
		_putchar('-');
		retval = -1;
	}
	return (retval);
}
