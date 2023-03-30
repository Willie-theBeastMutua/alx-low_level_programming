#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: character passed as ASCII integer value
 *
 * Return: 1 when c is a digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
