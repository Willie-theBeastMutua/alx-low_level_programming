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

	int i;
	int num;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i][0]) == 0)
			{
				printf("error\n");
				return (1);
			}
			else
			{
				num = atoi(argv[i]);
				if (num < 0)
				{
					printf("error\n");
					return (1);
				}
				sum += num;
			}
		}
		printf("%d\n", sum);

	}
	return (0);
}
