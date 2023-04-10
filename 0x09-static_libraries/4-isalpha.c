#include "main.h"

/**
 *_isalpha - Prototype to be run
 *@c: the value to be argued
 *
 *Return: - 1 if c is a letter, lowercase or uppercase; returns 0 otherwise
 */

int _isalpha(int c)
{
	int retval;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		retval = 1;
	}
	else
	{
		retval = 0;
	}
	return (retval);
}
