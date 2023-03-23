#include "main.h"

/**
 *print_alphabet_x10 - protottype in main.h
 *
 *Return void
 */

void print_alphabet_x10(void)
{
	int num;
	char character;

	for (num = 0; num < 10; num++)
	{
		for (character = 'a'; character <= 'z'; character++)
		{
			_putchar(character);
		}
		_putchar('\n');
	}
}
