#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int i = 0;
	int comb;
	int c = 0;
	int comp;

	while (dest[count] != '\0')
		count++;
	while (src[c] != '\0')
		c++;
	if (n > c)
		comp = c;
	else
		comp = n;
	for (comb = count; comb < count + comp; comb++)
	{
		dest[comb] = src[i];
		i++;
	}
	dest[comb] = '\0';
	return (dest);
}
