#include "main.h"
#include <stdlib.h>

unsigned int power(double base, int exponent) {
	unsigned int result = 1;

	if (exponent >= 0) {
		for (int i = 0; i < exponent; i++) {
			result *= base;
		}
	} else {
		for (int i = 0; i < -exponent; i++) {
			result /= base;
		}
	}
	return result;
}
