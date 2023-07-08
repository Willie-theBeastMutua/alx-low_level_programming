#include "main.h"
#include <string.h>
/**
 * power - prototype for conv
 * @base: base of power
 * @exponent: exponent
 * Return: result
 */
unsigned int power(double base, int exponent)
{
	unsigned int result = 1;
	int i;

	if (exponent >= 0)
	{
		for (i = 0; i < exponent; i++)
			result *= base;
	}
	else
	{
		for (i = 0; i < -exponent; i++)
			result /= base;
	}
	return (result);
}
/**
 * binary_to_uint - prototype for conv
 * @b: Characters passed
 * Return: Unsigned binary value
 */
unsigned int binary_to_uint(const char *b)
{
	int i, size;
	unsigned int sum1 = 0, ato;

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
			sum1 += power(2, (size - 1)) * ato;
			size--;
		}
		else
			return (0);
	}
	return (sum1);
}
