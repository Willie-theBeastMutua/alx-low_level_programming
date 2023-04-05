#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -entry point
 *
 * Rerun: always 0
 */

int main(void)
{
	int rando, count, finalpass;

	srand(time(NULL));
	for (count = 0, finalpass = 2772; finalpass > 122; count++)
	{
		rando = (rand() % 125) + 1;
		printf("%c", rando);
		finalpass -= rando;
	}
	printf("%c", finalpass);
	return (0);
}
