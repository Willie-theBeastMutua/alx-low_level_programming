#include "main.h"
#include<stdio.h>
/**
 * print_rev -function that prints a string, in reverse
 * @s: string to be reversed
 *
 * Return: always 0
 */

void print_rev(char *s)
{
	int count = 0;
	int c;

	while (s[count] != '\0')
	{
		count++;
	}
	for (c = count-1 ; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
