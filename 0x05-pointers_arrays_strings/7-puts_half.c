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
	int half;

	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
		half = count / 2;
	else
		half = (count + 1) / 2;
	for (c = half; c < count; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
