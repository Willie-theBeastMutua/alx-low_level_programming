#include "main.h"
#include<stdlib.h>

/**
 * string_nconcat-function that concatenates two strings.
 * @s1: string 1
 * @s2:string 2
 * @n: number of bytes of s2
 *
 * Return: concant
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int c1 = 0, c2 = 0;
	unsigned int i, j;

	while (s1[c1] != '\0')
		c1++;
	while (s2[c2] != '\0')
		c2++;
	if (c1 == 0)
		s1 = "";
	if (c2 == 0)
		s2 = "";
	if (n >= c2)
		n = c2;
	ar = malloc((c1 + n) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < c1; i++)
	{
		ar[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ar[i] = s2[j];
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
