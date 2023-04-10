#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int count = 0;
	int c = 0;
	int comb;
	int i = 0;

	while (dest[count] != '\0')
		count++;
	while (src[c] != '\0')
		c++;
	for (comb = count; comb < count + c; comb++)
	{
		dest[comb] = src[i];
		i++;
	}
	dest[comb] = '\0';
	return (dest);
}
