#include <stdio.h>
#include <ctype.h>
#include<stdlib.h>

/**
 * main - Entry point
 * @argc: number of parameters
 * @argv: Parameters
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{

	int sum = 0;
	int i;
	int num;

	for (i = 1; i < argc; i++)

	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		num = atoi(argv[i]);
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
