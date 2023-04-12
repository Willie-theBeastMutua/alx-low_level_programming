#include "main.h"
#include<stdlib.h>

/**
 * _strdup-function that returns a pointer to a newly allocated space in memory
 * @str: string passed
 *
 * Return: pointer to duplicate, null if 0
 */

char *_strdup(char *str)
{
	char *ar;
	int count = 0;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[count] != '\0')
		{
			count++;
		}
		ar = malloc(count * sizeof(char) + 1);
		if (ar == 0)
			return (NULL);
		while (i < count)
		{
			ar[i] = str[i];
			i++;
		}
		return (ar);
	}
}
