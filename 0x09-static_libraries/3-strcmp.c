#include "main.h"

/**
 * _strcmp -function that compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: mathematical value
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0;
	int c = 0;
	int i;
	int comp;

	while (s1[count] != '\0')
		count++;
	while (s2[c] != '\0')
		c++;
	if (count > c)
		comp = count;
	else
		comp = c;
	for (i = 0; i < comp; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
