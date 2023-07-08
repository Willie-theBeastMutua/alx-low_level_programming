#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/**
 * binary_to_uint - prototype for conv
 * @b: Characters passed
 * Return: Unsigned binary value
*/

unsigned int binary_to_uint(const char *b)
{
	int i, size;
	unsigned int sum1 = 0, sum2 = 0;
	unsigned int ato;

	if (b == NULL)
		return (0);
	size = strlen(b);

	for (i = 0;  size; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == 49)
				ato = 1;
			if (b[i] == 48)
				ato = 0;
			sum1 = pow(2, (size - 1)) * ato;
			sum2 = sum2 + sum1;
			size--;
		}
		else
			return (0);
	}
	return (sum2);
}
