#include "main.h"

/**
 * print_sign - a function that prints the sign of a number.
 *
 * return the last digit
 *
 * @j: integer variable
 */

int print_last_digit(int j)
{
	int n

	if (j < 0)
		j = -j;
	n = j % 10;
	if (n < 0)
		n = -n;
	_putchar(n);

	return (0);
}
