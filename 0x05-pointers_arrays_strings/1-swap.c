#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: parameter of type int
 * @b: parameter of type int
 */

void swap_int(int *a, int *b)
{
	int n;
	n = *a;
	*a = *b;
	*b = n;
}
