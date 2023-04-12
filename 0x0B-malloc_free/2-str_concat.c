#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * str_concat-function that concatenates two strings.
 *@s1: first string
 *@s2: Second string
 *
 *Return: Concantenated value
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	int cS1 = 0;
	int cS2 = 0;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[cS1] != '\0')
		cS1++;
	while (s2[cS2] != '\0')
		cS2++;
	ar = malloc((cS1 + cS2) * sizeof(char) + 1);
	if (ar == 0)
		return (NULL);
	for (i = 0; i < cS1; i++)
	{
		ar[i] = s1[i];
	}
	for (j = 0; j < cS2; j++)
	{
		ar[i] = s2[j];
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
