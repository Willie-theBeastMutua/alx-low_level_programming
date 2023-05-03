#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates sum of arguments
 * @n: number of arguments
 *
 * Return: sum of arguments, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;
	va_list ap;

	if (n == 0)
	{
	return (0);
	}
	va_start(ap, n);
	for (x = 0; x < n; x++)
		sum += va_arg(ap, const int);
	return (sum);

}
