#include "main.h"

/**
 * _isupper - prototype to check whether character is upper or lower case
 * @c: integer passed as ASCII value
 *
 * Return: 1 if c uis upper case 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
