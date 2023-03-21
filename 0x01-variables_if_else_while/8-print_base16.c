#include<stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char character;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (character = 'a'; character < 'g'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
