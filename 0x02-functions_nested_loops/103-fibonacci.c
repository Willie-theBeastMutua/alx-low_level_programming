#include<stdio.h>

/**
 * main -Adds all even fibonacci numbers lower than 4,000,000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count, f1 = 0, f2 = 1;
	unsigned long sum = 0, sumev = 0;

	for (count = 1; count > 0; count++)
	{
		sum = f1 + f2;
		if (sum > 4000000)
			break;
		if (sum % 2 == 0)
		{
			sumev = sumev + sum;
		}
		f1 = f2;
		f2 = sum;
	}
	printf("%ld\n", sumev);
}

