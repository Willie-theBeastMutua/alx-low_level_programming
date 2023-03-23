#include "main.h"

/**
 *  print_alphabet -Prototype to print alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
}
