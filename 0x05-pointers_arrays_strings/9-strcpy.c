#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: to copy to
 * @src: to copy from
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;
	int c;

	while (src[count] != '\0')
		count++;
	for (c = 0; c < count; c++)
	{
		dest[c] = src[c];
	}
	return(dest);
}
