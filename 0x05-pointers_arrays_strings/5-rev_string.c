#include "main.h"

/**
 * rev_string -function that reverses a string.
 * @s: string to be reversed
 *
 * Return: always 0
 */

void rev_string(char *s)
{
	int count = 0;
	int c, i = 0;
	char k;

	while (s[count] != '\0')
	{
		count++;
	}
	for (c = count - 1; c >= count / 2; c--)
	{
		k = s[i];
		s[i] = s[c];
		s[c] = k;
		i++;
	}
}
