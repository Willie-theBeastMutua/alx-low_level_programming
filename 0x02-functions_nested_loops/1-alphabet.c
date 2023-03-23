#include "main.h"

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
	return (0);
}
