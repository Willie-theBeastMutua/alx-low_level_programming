#include "main.h"

/**
 * puts2 -function that prints every other character of a string
 *@str: string to be printed
 *
 * Return: always 0
 */

void puts2(char *str)
{
	int count = 0;
	int c;
	
	while (str[count] != '\0')
	{
		count++;
	}
	for (c = 0; c <= count-1; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
