#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: string to be printed
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int count = 0;
	int c;

	while (str[count] != '\0')
	{
		count++;
	}
	for (c = count / 2; c < count; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
