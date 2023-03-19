#include <stdio.h>

/**
 * main -Start Point
 *
 * Return:Always 0 (Success
 */

int main(void)
{
	char achar;
	int aint;
	long along;
	long long aloong;
	float afloat;

	printf("Size of a char: %d byte(s)\n", sizeof(achar));
	printf("Size of an int: %d byte(s)\n", sizeof(aint));
	printf("Size of a long int: %d byte(s)\n", sizeof(along));
	printf("Size of a long long int: %d byte(s)\n", sizeof(aloong));
	printf("Size of a float: %d byte(s)\n", sizeof(afloat));
	return (0);
}
