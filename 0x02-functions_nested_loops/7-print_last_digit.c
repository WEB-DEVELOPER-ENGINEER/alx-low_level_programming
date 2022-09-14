#include "main.h"

/**
 * print_last_digit - a function that prints the last digit
 *
 * return the last digit
 *
 * @j: integer variable
 */

int print_last_digit(int j)
{
	int n;

	if (j < 0)
		j = -j;
	n = j % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');

	return (n);
}
