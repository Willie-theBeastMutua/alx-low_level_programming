#include "main.h"

/**
 * _strncpy -function that copies a string.
 * @dest: first string
 * @src: second string
 * @n: bytes to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;
	int i;
	int comb;

	while (src[c] != '\0')
		c++;
	if (n > c)
		comb = c;
	else
		comb = n;
	for (i = 0; i < comb; i++)
	{
		dest[i] = src[i];
		i++;
	}
	if (n > c)
		dest[i] = '\0';
	return (dest);
}

