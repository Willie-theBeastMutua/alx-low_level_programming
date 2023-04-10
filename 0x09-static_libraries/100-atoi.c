#include "main.h"

/**
 * _atoi -function that convert a string to an integer.
 * @s: string to be converted
 *
 * Return: int
 */

int _atoi(char *s)
{
	int i;
	int k = 0, l = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			l *= -1;
		if (s[i] > 47 && s[i] < 58)
		{
			if (k < 0)
				k = (k * 10) - (s[i] - '0');
			else
				k = (s[i] - '0') * -1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (l < 0)
		k *= -1;
	return (k);
}
