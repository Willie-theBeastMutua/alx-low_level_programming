#include "main.h"
#include<stdlib.h>

/**
 * argstostr-function that concatenates all the arguments of your program
 * @ac: count
 * @av:strings
 *
 * Return:pointer
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j;
	char *arg1, *arg2, *pos, *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		arg1 = av[i];
		while (*arg1 != '\0')
		{
			total_length++;
			arg1++;
		}
		total_length++;
	}
	result = (char *) malloc(sizeof(char) * (total_length + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	pos = result;
	for (j = 0; j < ac; j++)
	{
		arg2 = av[j];
		while (*arg2 != '\0')
		{
			*pos = *arg2;
			pos++;
			arg2++;
		}
		*pos = '\n';
		pos++;
	}
		*pos = '\0';
		return (result);
}
