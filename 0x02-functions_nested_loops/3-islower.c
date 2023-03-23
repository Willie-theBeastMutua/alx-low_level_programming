#include "main.h"
#include<ctype.h>

/**
 * _islower - prototype for checking lower case
 *@c: the character to be checked
 *
 * Return: int value - 1 i character is lower and 0 if characer is not
 */

int _islower(int c)
{
	int retval;

	if (c >= 'a' && c <= 'z')
	{
		retval = 1;
	}
	else
	{
		retval = 0;
	}

	return (retval);
}
