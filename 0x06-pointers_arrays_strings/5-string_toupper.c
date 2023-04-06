#include "main.h"

/**
 * string_toupper- function lowercase letters of a string to uppercase.
 * @n: character to be changed
 *
 * Return: character
 */

char *string_toupper(char *n)
{
	int c = 0;
	int i;

	while (n[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		if (n[i] > 96 && n[i] < 123)
			n[i] -= 32;
	}
	return (n);
}

